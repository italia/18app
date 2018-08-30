using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    public class FakeNotificationsService: INotificationsService
    {
        private static readonly int simulatedDelay = 1000;

        public async Task<IEnumerable<UserNotification>> GetUserNotificationsAsync(string userId, int page = 0, int pageItems = 30)
        {
            if (string.IsNullOrWhiteSpace(userId))
            {
                throw new ArgumentNullException(nameof(userId));
            }

            // simulate delay
            await Task.Delay(simulatedDelay);

            var fakeUserNotificationsList = FakeUserNotifications.GetList();
            fakeUserNotificationsList = fakeUserNotificationsList.OrderByDescending(n => n.IsNewMsg).ThenByDescending(n => n.Id);

            if (page > 0 && pageItems > 0)
            {
                fakeUserNotificationsList = fakeUserNotificationsList.Skip((page - 1) * pageItems).Take(pageItems);
            }

            return fakeUserNotificationsList;
        }
    }

    public static class FakeUserNotifications
    {
        public static IEnumerable<UserNotification> GetList()
        {
            return new List<UserNotification>
            {
                new UserNotification
                {
                    Id = "1",
                    IsNewMsg = false,
                    MsgDateTime = "01 Gennaio 2017 - 15:18",
                    MsgText = "Buono di 56,00 € utilizzato presso Madison Square Garden"
                },
                new UserNotification
                {
                    Id = "2",
                    IsNewMsg = false,
                    MsgDateTime = "08 Gennaio 2017 - 15:18",
                    MsgText = "Il buono di 128,00 € per Teatro / Danza è stato annullato"
                },
                new UserNotification
                {
                    Id = "3",
                    IsNewMsg = true,
                    MsgDateTime = "20 Gennaio 2017 - 11:13",
                    MsgText = "Buono di 5,00 € utilizzato presso Libreria Citylights"
                },
                new UserNotification
                {
                    Id = "4",
                    IsNewMsg = true,
                    MsgDateTime = "22 Gennaio 2017 - 20:45",
                    MsgText = "Buono di 99,00 € utilizzato presso Electric Cinema"
                }
            };
        }
    }
}
