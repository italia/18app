using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.CustomRenderers
{
    public class ExpandingViewCell : ViewCell
    {
        protected override void OnTapped()
        {
            base.OnTapped();
            ForceUpdateSize();
        }
    }
}
