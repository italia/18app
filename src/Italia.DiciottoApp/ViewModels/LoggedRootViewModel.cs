using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace Italia.DiciottoApp.ViewModels
{
    class LoggedRootViewModel: BaseViewModel
    {
        #region Properties

        public AppArea AppArea => AppArea.None;

        public string Greetings => $"Benvenuto {Settings.UserName}, ti restano";

        public double InitialAmmount => Settings.BorsellinoImportoTot;

        public double SpentAmmount => Settings.BorsellinoImportoValidato;

        public double CreatedAmmount => Settings.BorsellinoImportoRichNonValidFisico + Settings.BorsellinoImportoRichNonValidOnline;

        public double AvailableAmmount => Settings.BorsellinoImportoResiduo;

        public double RadialGaugeSize => Math.Min(DisplayWidth / DisplayDensity, DisplayHeight / DisplayDensity) * 2.0 / 3.0;

        public double GaugePlusSize => RadialGaugeSize / 3.0;

        #endregion

        public LoggedRootViewModel() : base()
        {
        }

        public async Task<ServiceResult> GetBorsellinoAsync()
        {
            var userInfoService = Service.Resolve<IUserInfoService>();
            var getBorsellinoResult = await userInfoService.GetBorsellinoAsync();
            Debug.WriteLine($"++++ LoggedRootPage - GetBorsellinoAsync: {getBorsellinoResult.Success}");

            if (getBorsellinoResult.Success && getBorsellinoResult.Result != null)
            {
                Settings.SetBorsellino(getBorsellinoResult.Result);
                OnPropertyChanged(nameof(InitialAmmount));
                OnPropertyChanged(nameof(SpentAmmount));
                OnPropertyChanged(nameof(CreatedAmmount));
                OnPropertyChanged(nameof(AvailableAmmount));
                OnPropertyChanged(nameof(UserCredit));
            }

            return getBorsellinoResult;
        }
    }
}
