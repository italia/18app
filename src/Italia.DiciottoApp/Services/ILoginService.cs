using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    interface ILoginService
    {
        Task<LoginResult> LoginAsync(Cookie fedSecureToken, Cookie usernameToken);
    }
}
