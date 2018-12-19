using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewVoucherCategoryViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Nuovo buono: categoria";

        public AppArea AppArea => AppArea.NewVoucher;

        public string ListHeader => "Scegli la categoria";

        public bool HasShop => (Shop != null);

        public string ShopBkgndImageSource => (Shop?.Categorie?.Count() > 0) ? Shop.Categorie[0].BkgndImageSource : null;

        public string ShopKindImageSource => (Shop?.IsOnline ?? false) ? "location_online_white" : "location_white";

        public string ShopAddress => (Shop == null) ? string.Empty
                                     : Shop.IsOnline ? Shop.Url
                                     : $"{Shop.Address?.Comune} ({Shop.Address?.SiglaProvincia})";

        public bool IsNotOnline => !(Shop?.IsOnline ?? false);

        private Shop shop;
        public Shop Shop
        {
            get => shop;
            set => SetProperty(ref shop, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(HasShop));
                OnPropertyChanged(nameof(ShopBkgndImageSource));
                OnPropertyChanged(nameof(ShopKindImageSource));
                OnPropertyChanged(nameof(ShopAddress));
                OnPropertyChanged(nameof(IsNotOnline));
            });
        }

        public string ListtHeader => "Scegli la categoria";

        public IEnumerable<Categoria> Categories => Categoria.List;

        #endregion

        public NewVoucherCategoryViewModel() : base()
        {
        }

        public async Task<ServiceResult> GetBorsellinoAsync()
        {
            var userInfoService = Service.Resolve<IUserInfoService>();
            var getBorsellinoResult = await userInfoService.GetBorsellinoAsync();
            Debug.WriteLine($"++++ NewVoucherCategoryPage - GetBorsellinoAsync: {getBorsellinoResult.Success}");

            if (getBorsellinoResult.Success && getBorsellinoResult.Result != null)
            {
                Settings.SetBorsellino(getBorsellinoResult.Result);
                OnPropertyChanged(nameof(UserCredit));
            }

            return getBorsellinoResult;
        }

    }
}