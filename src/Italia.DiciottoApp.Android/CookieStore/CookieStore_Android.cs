// The MIT License (MIT)
// Copyright(c) 2016, John Wilson
// Copyright(c) 2019, Nicolò Carandini
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net;
using System.Text.RegularExpressions;
using Android.Webkit;
using Italia.DiciottoApp.CookieStore;
using Italia.DiciottoApp.Droid.CookieStore;
using Xamarin.Forms;

[assembly: Dependency(typeof(CookieStore_Android))]
namespace Italia.DiciottoApp.Droid.CookieStore
{
    public class CookieStore_Android : IPlatformCookieStore
    {
        private readonly object refreshLock = new object();

        public IEnumerable<Cookie> GetCookiesForSite(string url = null)
        {
            if (string.IsNullOrWhiteSpace(url))
            {
                throw new ArgumentNullException("url", "On Android, 'url' cannot be empty, please provide a base URL for it to use when loading related cookies");
            }

            lock (refreshLock)
            {
                // .GetCookie returns ALL cookies related to the URL as a single, long string which we have to split and parse
                var allCookiesForUrl = CookieManager.Instance.GetCookie(url);

                if (!string.IsNullOrWhiteSpace(allCookiesForUrl))
                {
                    Debug.WriteLine(string.Format("\r\n===== CookieHeader : '{0}'\r\n", allCookiesForUrl));

                    var cookiePairs = allCookiesForUrl.Split(' ');
                    foreach (var cookiePair in cookiePairs.Where(cp => cp.Contains("=")))
                    {
                        // Refactored by Nicolò Carandini because the old code remove trailing equal sign characters
                        // that can be part of a Base64 encoded cookie value

                        #region Old code by John Wilson

                        //  // yeah, I know, but this is a quick-and-dirty, remember? ;)
                        //  var cookiePieces = cookiePair.Split(new[] { '=' }, StringSplitOptions.RemoveEmptyEntries);
                        //  if (cookiePieces.Length >= 2)
                        //  {
                        //      cookiePieces[0] = cookiePieces[0].Contains(":")
                        //          ? cookiePieces[0].Substring(0, cookiePieces[0].IndexOf(":"))
                        //          : cookiePieces[0];

                        //      // strip off trailing ';' if it's there (some implementations on droid have it, some do not)
                        //      cookiePieces[1] = cookiePieces[1].EndsWith(";")
                        //          ? cookiePieces[1].Substring(0, cookiePieces[1].Length - 1)
                        //          : cookiePieces[1];

                        //      yield return new Cookie()
                        //      {
                        //          Name = cookiePieces[0],
                        //          Value = cookiePieces[1],
                        //          Path = "/",
                        //          Domain = new Uri(url).DnsSafeHost,
                        //      };
                        //  }

                        #endregion Old code by John Wilson

                        var matches = Regex.Matches(cookiePair, @"([^=]+)=([^\;]+);?\s?");

                        if (matches.Count == 1)
                        {
                            string cookieName = matches[0].Groups[1].Value;
                            string cookieValue = matches[0].Groups[2].Value;

                            //Clean coockieName
                            if (cookieName.Contains(":"))
                            {
                                cookieName = cookieName.Substring(0, cookieName.IndexOf(":"));
                            }

                            // Strip off trailing ';' from the cookieValue
                            if (cookieValue.EndsWith(";"))
                            {
                                cookieValue = cookieValue.Substring(0, cookieValue.Length - 1);
                            }

                            string coockieDomain;

                            try
                            {
                                coockieDomain = new Uri(url).DnsSafeHost;
                            }
                            catch (Exception)
                            {
                                // Ignore error and set domain to empty string
                                coockieDomain = String.Empty;
                            }

                            Debug.WriteLine(string.Format("\r\n>>>>> Parsed cookieName: '{0}'\r\n", cookieName));
                            Debug.WriteLine(string.Format("\r\n>>>>> Parsed cookieValue: '{0}'\r\n", cookieValue));
                            Debug.WriteLine(string.Format("\r\n>>>>> Domain: '{0}'\r\n", coockieDomain));

                            yield return new Cookie()
                            {
                                Name = cookieName,
                                Value = cookieValue,
                                Path = "/",
                                Domain = new Uri(url).DnsSafeHost,
                            };
                        }
                    }
                }
            }
        }

        public void DumpAllCookiesForSite(string url = null)
        {
            var cookies = GetCookiesForSite(url);
            if (!cookies.Any())
            {
                Debug.WriteLine($"No cookies for {url}");
            }
            foreach (var cookie in cookies)
            {
                Debug.WriteLine($"Cookie dump: {cookie.Name} = {cookie.Value}");
            }
        }

        public void DeleteAllCookiesForSite(string url)
        {
            // TODO remove cookies only for a specific site, coz this is a bit scorched-earth...
            CookieManager.Instance.RemoveAllCookie();
        }

    }
}