using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.ViewModels
{
    public class SpidLoginViewModel : BaseViewModel
    {
        #region Properties

#if TEST
        public bool TestIdpIsVisible => true;
#else
        public bool TestIdpIsVisible => false;
#endif

        public string PageTitle => "SPID Login";

        #endregion

        public SpidLoginViewModel(): base()
        {
        }

    }
}
