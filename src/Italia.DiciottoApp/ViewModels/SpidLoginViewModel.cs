using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.ViewModels
{
    public class SpidLoginViewModel : BaseViewModel
    {
        #region Properties

        public bool TestIdpIsVisible => Constants.IS_TEST_IDP_VISIBLE;

        public string PageTitle => "SPID Login";

        #endregion

        public SpidLoginViewModel(): base()
        {
        }

    }
}
