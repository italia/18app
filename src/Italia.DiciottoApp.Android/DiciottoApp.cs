using System;
using Android.App;
using Android.Runtime;
using Com.Instabug.Library;
using Com.Instabug.Library.Invocation;

namespace Italia.DiciottoApp.Droid
{
// Disable debugging on Release version
#if DEBUG
[Application(Debuggable=true)]
#else
[Application(Debuggable = false)]
#endif
    public class DiciottoApp : Application
    {
        protected DiciottoApp(IntPtr javaReference, JniHandleOwnership transfer)
        : base(javaReference, transfer)
        {
        }
        public override void OnCreate()
        {
            base.OnCreate();
            new Instabug.Builder(this, Italia.DiciottoApp.Keys.InstabugToken).SetInvocationEvents(InstabugInvocationEvent.FloatingButton, InstabugInvocationEvent.Shake).Build();
        }
    }
}