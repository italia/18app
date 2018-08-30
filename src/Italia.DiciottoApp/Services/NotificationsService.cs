using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.Services
{
    public class NotificationsService : INotificationsService
    {
        public async Task<IEnumerable<UserNotification>> GetUserNotificationsAsync(string userId, int page = 0, int pageItems = 20)
        {
            if (string.IsNullOrWhiteSpace(userId))
            {
                throw new ArgumentNullException("userId");
            }

            IEnumerable<UserNotification> userNotifications;

            // TODO: Get shops from 18App SOAP Service
            var fakeNotificationsService = new FakeNotificationsService();
            userNotifications = await fakeNotificationsService.GetUserNotificationsAsync(userId, page, pageItems);

            return userNotifications;
        }
    }
}
