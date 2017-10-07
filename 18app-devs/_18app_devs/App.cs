#if __ANDROID__
using _18app_devs.Droid;
#elif __IOS__
using _18app_devs.iOS.Helpers;
#elif WINDOWS_UWP
using _18app_devs.UWP.Helpers;
#endif
using _18app_devs.Helpers;
using _18app_devs.Interfaces;
using _18app_devs.Services;
using _18app_devs.Model;

namespace _18app_devs
{
    public partial class App 
    {
        public App()
        {
        }

        public static void Initialize()
        {
            ServiceLocator.Instance.Register<IDataStore<Item>, MockDataStore>();
            ServiceLocator.Instance.Register<IMessageDialog, MessageDialog>();
            ServiceLocator.Instance.Register<IDataStore<Item>, MockDataStore>();
        }
    }
}