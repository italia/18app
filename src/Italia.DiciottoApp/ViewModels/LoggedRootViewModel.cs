using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
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

        public double RadialGaugeSize => Math.Min(DisplayWidth / DisplayDensity, DisplayHeight / DisplayDensity) * 2.0 / 3.0;

        #endregion

        public LoggedRootViewModel() : base()
        {
        }
    }
}
