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

        public NewCouponValuePage(Shop shop, Categoria categoria, Prodotto prodotto)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewCouponValueViewModel;
            vm.Shop = shop;
            vm.Categoria = categoria;
            vm.Prodotto = prodotto;
        }

        protected override void OnAppearing()
        {
            base.OnAppearing();
            CouponValueEntry.Focus();
        }

        private void OnEntryTextChanged(object sender, TextChangedEventArgs e)
        {
            vm.ValidateEntry(e.NewTextValue);
        }

        private async void OnCreaButtonClicked(object sender, EventArgs e)
        {
            Voucher coupon = await vm.CreateCouponAsync();
            if (coupon != null)
            {
                Page newCouponCategoryPage = Navigation.NavigationStack.LastOrDefault(p => p is NewCouponCategoryPage);
                if (newCouponCategoryPage != null)
                {
                    Navigation.RemovePage(newCouponCategoryPage);
                }

                Page newCouponProductPage = Navigation.NavigationStack.LastOrDefault(p => p is NewCouponProductPage);
                if (newCouponProductPage != null)
                {
                    Navigation.RemovePage(newCouponProductPage);
                }

                await Navigation.PushAsync(new CouponPage(coupon, justCreated: true));
                // remove all coupon creation pages from the stack but the first one
                Navigation.RemovePage(this);
            }
        }

        //private async Task CleanNavigationStackAndNavigateAsync(ContentPage targetPage)
        //{
        //    await Navigation.PushAsync(targetPage);
        //    // Remove previos pages
        //    Page newCouponCategoryPage = Navigation.NavigationStack.LastOrDefault(p => p is NewCouponCategoryPage);
        //    Page newCouponProductPage = Navigation.NavigationStack.LastOrDefault(p => p is NewCouponCategoryPage);
        //    Page 
        //    if (newCouponCategoryPage != null)
        //    var currentPage = Navigation.NavigationStack.Last();

        //    // remove Coupon creation pages from the stack
        //    var pages = Navigation.NavigationStack.Where(page => page != currentPage && (page is NewCouponCategoryPage || page is NewCouponProductPage || page is NewCouponValuePage)).ToList();
        //    if (pages != null)
        //    {
        //        foreach (var page in pages)
        //        {
        //            if (page != currentPage && (page is NewCouponCategoryPage || page is NewCouponProductPage || page is NewCouponValuePage))
        //            {
        //                Navigation.RemovePage(page);
        //            }
        //        }
        //    }

        //    if (currentPage is NewCouponCategoryPage || currentPage is NewCouponProductPage || currentPage is NewCouponValuePage)
        //    {
        //        // Insert target page before actual page
        //        Navigation.InsertPageBefore(targetPage, currentPage);

        //        // Navigate to target
        //        await Navigation.PopAsync(false);
        //    }
        //    else
        //    {
        //        await Navigation.PushAsync(targetPage);
        //    }
        //}

    }
}