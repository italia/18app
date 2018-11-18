// The MIT License (MIT)
// Copyright(c) 2016, John Wilson
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net;
using Foundation;
using Italia.DiciottoApp.CookieStore;
using Italia.DiciottoApp.iOS.CookieStore;
using Xamarin.Forms;

[assembly: Dependency(typeof(CookieStore_IOS))]
namespace Italia.DiciottoApp.iOS.CookieStore
{
    public class CookieStore_IOS : IPlatformCookieStore
    {
        private readonly object _refreshLock = new object();

        public void DeleteAllCookiesForSite(string url)
        {
            var cookieStorage = NSHttpCookieStorage.SharedStorage;
            foreach (var cookie in cookieStorage.CookiesForUrl(new NSUrl(url)).ToList())
            {
                cookieStorage.DeleteCookie(cookie);
            }
            // you MUST call the .Sync method or those cookies may hang around for a bit
            NSUserDefaults.StandardUserDefaults.Synchronize();
        }

        public IEnumerable<Cookie> GetCookiesForSite(string url = null)
        {
            lock (_refreshLock)
            {
                var cookies = String.IsNullOrWhiteSpace(url) ? NSHttpCookieStorage.SharedStorage.Cookies.ToList()
                                                             : NSHttpCookieStorage.SharedStorage.CookiesForUrl(new NSUrl(url)).ToList();
                foreach (var cookie in cookies)
                {
                    yield return new Cookie
                    {
                        Comment = cookie.Comment,
                        Domain = cookie.Domain,
                        HttpOnly = cookie.IsHttpOnly,
                        Name = cookie.Name,
                        Path = cookie.Path,
                        Secure = cookie.IsSecure,
                        Value = cookie.Value,
                        // TODO expires? / expired?
                        Version = Convert.ToInt32(cookie.Version)
                    };
                }
            }
        }

        public void DumpAllCookiesForSite(string url = null)
        {
            var cookies = GetCookiesForSite(url);
            if (!cookies.Any())
            {
                string msg = String.IsNullOrWhiteSpace(url) ? "No cookies in your iOS cookie store." : $"No cookies for {url}";
                Debug.WriteLine(msg);
            }
            foreach (var cookie in cookies)
            {
                Debug.WriteLine($"Cookie dump: {cookie.Name} = {cookie.Value}");
            }
        }
    }
}