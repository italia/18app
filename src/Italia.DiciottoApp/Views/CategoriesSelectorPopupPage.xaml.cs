using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using Italia.DiciottoApp.ViewModels.Interfaces;
using Rg.Plugins.Popup.Pages;
using Rg.Plugins.Popup.Services;
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
	public partial class CategoriesSelectorPopupPage : PopupPage
    {
        private CategoriesSelectorPopupViewModel vm;
        private ISelectCategory caller;

        public CategoriesSelectorPopupPage(ISelectCategory caller)
		{
			InitializeComponent ();
            vm = BindingContext as CategoriesSelectorPopupViewModel;
            this.caller = caller;
        }

        protected override void OnAppearing()
        {
            base.OnAppearing();
        }

        protected override void OnDisappearing()
        {
            base.OnDisappearing();
        }

        // ### Methods for supporting animations in your popup page ###

        // Invoked before an animation appearing
        protected override void OnAppearingAnimationBegin()
        {
            base.OnAppearingAnimationBegin();
        }

        // Invoked after an animation appearing
        protected override void OnAppearingAnimationEnd()
        {
            base.OnAppearingAnimationEnd();
        }

        // Invoked before an animation disappearing
        protected override void OnDisappearingAnimationBegin()
        {
            base.OnDisappearingAnimationBegin();
        }

        // Invoked after an animation disappearing
        protected override void OnDisappearingAnimationEnd()
        {
            base.OnDisappearingAnimationEnd();
        }

        protected override Task OnAppearingAnimationBeginAsync()
        {
            return base.OnAppearingAnimationBeginAsync();
        }

        protected override Task OnAppearingAnimationEndAsync()
        {
            return base.OnAppearingAnimationEndAsync();
        }

        protected override Task OnDisappearingAnimationBeginAsync()
        {
            return base.OnDisappearingAnimationBeginAsync();
        }

        protected override Task OnDisappearingAnimationEndAsync()
        {
            return base.OnDisappearingAnimationEndAsync();
        }

        // ### Overrided methods which can prevent closing a popup page ###

        // Invoked when a hardware back button is pressed
        protected override bool OnBackButtonPressed()
        {
            // Return true if you don't want to close this popup page when a back button is pressed
            return base.OnBackButtonPressed();
        }

        // Invoked when background is clicked
        protected override bool OnBackgroundClicked()
        {
            // Return false if you don't want to close this popup page when a background of the popup page is clicked
            return base.OnBackgroundClicked();
        }

        private async void OnAllCategoriesButtonTapped(object sender, EventArgs e)
        {
            await PopupNavigation.Instance.PopAllAsync();
            await caller.GetOnlineShopsAsync(categoria: null, allSelected: true);
        }

        private async void OnCategoryListItemTapped(object sender, ItemTappedEventArgs e)
        {
            if (e.Item is Categoria categoria)
            {
                // Clear the item selection
                if (sender is ListView listView)
                {
                    listView.SelectedItem = null;
                }

                await PopupNavigation.Instance.PopAllAsync();
                await caller.GetOnlineShopsAsync(categoria, allSelected: false);
            }
        }
    }
}