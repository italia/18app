using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

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

        #region 18App Properties

        public string UserFullname => Settings.UserName + " " + Settings.UserSurname;

        public double InitialCredit => 500.00;

        private double actualCredit;
        public double ActualCredit
        {
            get => actualCredit;
            set => SetProperty(ref actualCredit, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(UsedPercentage));
                OnPropertyChanged(nameof(UserCredit));
            });
        }

        public double UsedPercentage => (InitialCredit - ActualCredit) / InitialCredit;

        public string UserCredit => $"{ActualCredit.ToString("###.00")}€";

        private string unreadMessages;
        public string UnreadMessages
        {
            get => unreadMessages;
            set => SetProperty(ref unreadMessages, value, onChanged: () => { OnPropertyChanged(nameof(HasUnreadMessages)); });
        }

        public bool HasUnreadMessages => UnreadMessages != "0";

        #endregion

        public BaseViewModel()
        {
            GetUserStatus();
        }

        private void GetUserStatus()
        {
            // TODO: get data from service
            Random rnd = new Random(DateTime.Now.Millisecond);
            ActualCredit = 50.00 + rnd.Next(0, 450);
            UnreadMessages = rnd.Next(0, 5).ToString();
        }

    }
}
