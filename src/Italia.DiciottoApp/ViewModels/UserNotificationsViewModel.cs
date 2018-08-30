using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class UserNotificationsViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Notifiche";

        public AppArea AppArea => AppArea.None;

        public bool NotificationListIsVisible => (UserNotifications != null && UserNotifications.Count > 0 && !IsBusy);

        private string contentHeader;
        public string ContentHeader
        {
            get => contentHeader;
            set => SetProperty(ref contentHeader, value);
        }

        public ObservableCollection<UserNotification> UserNotifications { get; set; } = new ObservableCollection<UserNotification>();

        #endregion

        public UserNotificationsViewModel() : base()
        {
            ContentHeader = "Lettura notifiche in corso...";
            IsBusy = false;
        }

        public async Task GetUserNotificationsListAsync()
        {
            if (IsBusy)
                return;

            IsBusy = true;
            OnPropertyChanged("NotificationListIsVisible");
            ContentHeader = "Lettura notifiche in corso...";

            var notificationsService = Service.Resolve<INotificationsService>();
            var userNotifications = await notificationsService.GetUserNotificationsAsync(Settings.UserId);

            if (userNotifications != null)
            {
                UserNotifications.Clear();
                foreach (var notification in userNotifications)
                {
                    UserNotifications.Add(notification);
                }
            }

            if (UserNotifications.Count == 0)
            {
                ContentHeader = $"La ricerca non ha restituito alcuna notifica.";
            }
            else
            {
                int unreadNotificationsCount = UserNotifications.Where(n => n.IsNewMsg).Count();
                switch (unreadNotificationsCount)
                {
                    case 0:
                        ContentHeader = "Non vi sono nuove notifiche.";
                        break;
                    case 1:
                        ContentHeader = "Hai una notifica non letta.";
                        break;
                    default:
                        ContentHeader = $"Hai {unreadNotificationsCount} notifiche non lette.";
                        break;
                }
            }
            IsBusy = false;
            OnPropertyChanged("NotificationListIsVisible");
        }
    }
}
