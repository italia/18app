using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
    [XamlCompilation(XamlCompilationOptions.Compile)]
    public partial class NewCouponValuePage : BasePage
    {
        private NewCouponValueViewModel vm;

        public NewCouponValuePage(Categoria categoria, Prodotto prodotto)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewCouponValueViewModel;
            vm.Categoria = categoria;
            vm.Prodotto = prodotto;
        }

    }
}