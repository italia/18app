using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using Android.App;
using Android.Content;
using Android.Webkit;
using Object = Java.Lang.Object;

namespace Italia.DiciottoApp.Droid.Renderers
{
    public class ExtFormsWebChromeClient : WebChromeClient
    {
        Activity _activity;
        List<int> _requestCodes;

        public override bool OnShowFileChooser(global::Android.Webkit.WebView webView, IValueCallback filePathCallback, FileChooserParams fileChooserParams)
        {
            base.OnShowFileChooser(webView, filePathCallback, fileChooserParams);
            return ChooseFile(filePathCallback, fileChooserParams.CreateIntent(), fileChooserParams.Title);
        }

        public void UnregisterCallbacks()
        {
            if (_requestCodes == null || _requestCodes.Count == 0 || _activity == null)
                return;

            foreach (int requestCode in _requestCodes)
            {
                ActivityResultCallbackRegistry.UnregisterActivityResultCallback(requestCode);
            }

            _requestCodes = null;
        }

        protected bool ChooseFile(IValueCallback filePathCallback, Intent intent, string title)
        {
            void callback(Result resultCode, Intent intentData)
            {
                if (filePathCallback == null)
                    return;

                Object result = ParseResult(resultCode, intentData);
                filePathCallback.OnReceiveValue(result);
            }

            _requestCodes = _requestCodes ?? new List<int>();

            int newRequestCode = ActivityResultCallbackRegistry.RegisterActivityResultCallback(callback);

            _requestCodes.Add(newRequestCode);

            _activity.StartActivityForResult(Intent.CreateChooser(intent, title), newRequestCode);

            return true;
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
                UnregisterCallbacks();
            base.Dispose(disposing);
        }

        protected virtual Object ParseResult(Result resultCode, Intent data)
        {
            return FileChooserParams.ParseResult((int)resultCode, data);
        }

        internal void SetContext(Activity thisActivity)
        {
            _activity = thisActivity ?? throw new ArgumentNullException(nameof(thisActivity));
        }

        public static class ActivityResultCallbackRegistry
        {
            static readonly ConcurrentDictionary<int, Action<Result, Intent>> s_activityResultCallbacks =
                new ConcurrentDictionary<int, Action<Result, Intent>>();

            static int s_nextActivityResultCallbackKey;

            public static void InvokeCallback(int requestCode, Result resultCode, Intent data)
            {
                if (s_activityResultCallbacks.TryGetValue(requestCode, out Action<Result, Intent> callback))
                {
                    callback(resultCode, data);
                }
            }

            internal static int RegisterActivityResultCallback(Action<Result, Intent> callback)
            {
                int requestCode = s_nextActivityResultCallbackKey;

                while (!s_activityResultCallbacks.TryAdd(requestCode, callback))
                {
                    s_nextActivityResultCallbackKey += 1;
                    requestCode = s_nextActivityResultCallbackKey;
                }

                s_nextActivityResultCallbackKey += 1;

                return requestCode;
            }

            internal static void UnregisterActivityResultCallback(int requestCode)
            {
                s_activityResultCallbacks.TryRemove(requestCode, out Action<Result, Intent> callback);
            }
        }
    }
}
