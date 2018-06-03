using Android.App;
using Android.OS;

namespace Italia.DiciottoApp.Droid
{
    [Activity(Label = "18App", Theme = "@style/SplashTheme.Splash", MainLauncher = true, NoHistory = true)]
    public class SplashActivity : Activity
    {
        protected override void OnCreate(Bundle savedInstanceState)
        {
            base.OnCreate(savedInstanceState);
            StartActivity(typeof(MainActivity));
        }
    }
}