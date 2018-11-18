// The MIT License (MIT)
// Copyright(c) 2016, John Wilson
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

using System.Collections.Generic;
using System.Net;

namespace Italia.DiciottoApp.CookieStore
{
    public interface IPlatformCookieStore
    {
        /// <summary>
        /// List of cookies pulled from the cookie storage manager
        /// on the device/platform you're on. Can be quite an expensive call,
        /// so use it sparingly.
        /// </summary>
        IEnumerable<Cookie> GetCookiesForSite(string url = null);

        /// <summary>
        /// Debug method, just lists all cookies in the <see cref="CurrentCookies"/> list
        /// </summary>
        void DumpAllCookiesForSite(string url = null);

        /// <summary>
        /// Clear cookies for site/url (otherwise auth tokens for your provider 
        /// will hang around after a logout, which causes problems when you want 
        /// to log in as someone else)
        /// </summary>
        void DeleteAllCookiesForSite(string url);
    }
}
