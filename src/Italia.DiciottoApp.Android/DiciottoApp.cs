using Android.App;
using Android.Runtime;
using Com.Instabug.Library;
using Com.Instabug.Library.Invocation;
using System;

namespace Italia.DiciottoApp.Droid
{
    [Application]
    public class DiciottoApp : Application
    {
        protected DiciottoApp(IntPtr javaReference, JniHandleOwnership transfer)
        : base(javaReference, transfer)
        {
        }
        public override void OnCreate()
        {
            base.OnCreate();
            if (Keys.IsInstabugEnabled)
            {
                new Instabug.Builder(this, Keys.InstabugToken).SetInvocationEvents(InstabugInvocationEvent.FloatingButton, InstabugInvocationEvent.Shake).Build();
            }
        }
    }
}