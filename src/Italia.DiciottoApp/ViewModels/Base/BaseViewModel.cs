using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.ViewModels
{
    public class BaseViewModel: ObservableObject
    {
        bool isBusy;
        public bool IsBusy
        {
            get => isBusy;
            set => SetProperty(ref isBusy, value, onChanged: () => OnPropertyChanged(nameof(IsNotBusy)));
        }

        public bool IsNotBusy => !IsBusy;

        public virtual void OnAppearing()
        {
        }

        public virtual void OnDisappearing()
        {
        }

        internal event Func<string, Task> DoDisplayAlert;

        public Task DisplayAlertAsync(string message)
        {
            return DoDisplayAlert?.Invoke(message) ?? Task.CompletedTask;
        }

        #region Display properties

        // Orientation (Landscape, Portrait, Square, Unknown)
        public DisplayOrientation DisplayOrientation => DeviceDisplay.MainDisplayInfo.Orientation;

        // Rotation (0, 90, 180, 270)
        public DisplayRotation DisplayRotation => DeviceDisplay.MainDisplayInfo.Rotation;

        // Width (in pixels)
        public double DisplayWidth => DeviceDisplay.MainDisplayInfo.Width;

        // Height (in pixels)
        public double DisplayHeight => DeviceDisplay.MainDisplayInfo.Height;

        // Screen density
        public double DisplayDensity => DeviceDisplay.MainDisplayInfo.Density;

        #endregion

        #region 18App Properties

        public string UserFullname => Settings.UserName + " " + Settings.UserSurname;

        // public double InitialCredit => Settings.BorsellinoImportoTot;

        // public double ActualCredit => Settings.BorsellinoImportoResiduo;

        public string UserCredit => $"{Settings.BorsellinoImportoResiduo.ToString("###.00")}€";

        //private string unreadMessages;
        //public string UnreadMessages
        //{
        //    get => unreadMessages;
        //    set => SetProperty(ref unreadMessages, value, onChanged: () => { OnPropertyChanged(nameof(HasUnreadMessages)); });
        //}

        //public bool HasUnreadMessages => UnreadMessages != "0";

        #endregion

        public BaseViewModel()
        {
            // GetUserStatus()
        }

        //private void GetUserStatus()
        //{
        //    // TBD: get data from service
        //    Random rnd = new Random(DateTime.Now.Millisecond);
        //    ActualCredit = 50.00 + rnd.Next(0, 450);
        //    UnreadMessages = rnd.Next(0, 5).ToString();
        //}

    }
}
