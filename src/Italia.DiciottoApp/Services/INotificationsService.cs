using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    interface INotificationsService
    {
        Task<IEnumerable<UserNotification>> GetUserNotificationsAsync(string userId, int page = 0, int pageItems = 20);
    }
}
