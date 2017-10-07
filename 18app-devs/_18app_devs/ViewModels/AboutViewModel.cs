
using System;
using System.Windows.Input;
using Plugin.Share;

namespace _18app_devs.ViewModel
{
	public class AboutViewModel : BaseViewModel
    {
        public AboutViewModel()
        {
            Title = "About";
            OpenWebCommand = new OpenWeb();
        }


        /// <summary>
        /// Command to open browser to xamarin.com
        /// </summary>
        public ICommand OpenWebCommand { get; }
    }

    class OpenWeb : ICommand
    {
        public event EventHandler CanExecuteChanged;

        public bool CanExecute(object parameter)
        {
            return true;
        }

        public void Execute(object parameter)
        {
            CrossShare.Current.OpenBrowser("https://xamarin.com/platform");
        }
    }
}
