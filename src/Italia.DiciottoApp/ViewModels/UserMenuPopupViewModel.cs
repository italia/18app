using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class UserMenuPopupViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "UserInfo";

        public AppArea AppArea => AppArea.None;

        #endregion

        public UserMenuPopupViewModel() : base()
        {
        }

        public async Task<ServiceResult> GetBorsellinoAsync()
        {
            var userInfoService = Service.Resolve<IUserInfoService>();
            var getBorsellinoResult = await userInfoService.GetBorsellinoAsync();
            Debug.WriteLine($"++++ UserInfoResult: {getBorsellinoResult.Success}");

            if (getBorsellinoResult.Success && getBorsellinoResult.Result != null)
            {
                Settings.SetBorsellino(getBorsellinoResult.Result);
            }

            return getBorsellinoResult;
        }
    }
}
