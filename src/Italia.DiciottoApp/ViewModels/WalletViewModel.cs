using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class WalletViewModel : BaseViewModel
    {
        ICouponsService couponService;
        IEnumerable<Coupon> availableCoupons = null;
        IEnumerable<Coupon> spentCoupons = null;

        #region Properties

        public string PageTitle => "I tuoi buoni";

        public AppArea AppArea => AppArea.Wallet;

        public bool IsAllTabSelected => WalletKind == WalletKind.All;

        public bool IsAvailableTabSelected => WalletKind == WalletKind.All;

        public bool IsSpentTabSelected => WalletKind == WalletKind.All;

        public int WalletTabIndex => (int)WalletKind;

        private WalletKind walletKind;
        public WalletKind WalletKind
        {
            get => walletKind;
            set => SetProperty(ref walletKind, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(IsAllTabSelected));
                OnPropertyChanged(nameof(IsAvailableTabSelected));
                OnPropertyChanged(nameof(IsSpentTabSelected));
                OnPropertyChanged(nameof(WalletTabIndex));
            });
        }

        public bool CouponListIsVisible => (Coupons != null && Coupons.Count > 0 && !IsBusy);

        public ObservableCollection<Coupon> Coupons { get; set; } = new ObservableCollection<Coupon>();

        private string contentHeader;
        public string ContentHeader
        {
            get => contentHeader;
            set => SetProperty(ref contentHeader, value);
        }

        #endregion

        public WalletViewModel() : base()
        {
            ContentHeader = "Richiesta buoni in corso...";
            couponService = Service.Resolve<ICouponsService>();
        }

        public async Task SetTab(WalletKind walletKind)
        {
            if (IsBusy)
            {
                return;
            }

            IsBusy = true;
            OnPropertyChanged(nameof(CouponListIsVisible));
            ContentHeader = "Richiesta buoni in corso...";

            WalletKind = walletKind;
            if(WalletKind == WalletKind.All || availableCoupons == null || spentCoupons == null)
            { 
            
                availableCoupons = await couponService.GetUserCouponsAsync(Settings.UserId, WalletKind.Available);
                spentCoupons = await couponService.GetUserCouponsAsync(Settings.UserId, WalletKind.Spent);
            }

            Coupons.Clear();

            if (availableCoupons != null && (WalletKind == WalletKind.All || WalletKind == WalletKind.Available))
            {
                foreach (var coupon in availableCoupons)
                {
                    Coupons.Add(coupon);
                }
            }

            if (spentCoupons != null && (WalletKind == WalletKind.All || WalletKind == WalletKind.Spent))
            {
                foreach (var coupon in spentCoupons)
                {
                    Coupons.Add(coupon);
                }
            }

            if (WalletKind == WalletKind.All && Coupons.Count == 0)
            {
                ContentHeader = $"La ricerca non ha restituito alcun buono";
            }
            else
            {
                switch (WalletKind)
                {
                    case WalletKind.All:
                        switch (availableCoupons.Count())
                        {
                            case 0:
                                ContentHeader = $"Non ci sono buoni ancora da spendere.";
                                break;
                            case 1:
                                ContentHeader = $"C'è un buono ancora da spendere.";
                                break;
                            default:
                                ContentHeader = $"Ci sono {availableCoupons.Count()} buoni ancora da spendere.";
                                break;
                        }
                        break;
                    case WalletKind.Available:
                        switch (availableCoupons.Count())
                        {
                            case 0:
                                ContentHeader = $"La ricerca non ha restituito alcun buono da spendere.";
                                break;
                            case 1:
                                ContentHeader = $"C'è un buono ancora da spendere";
                                break;
                            default:
                                ContentHeader = $"Ci sono {availableCoupons.Count()} buoni ancora da spendere";
                                break;
                        }
                        break;
                    case WalletKind.Spent:
                        switch (spentCoupons.Count())
                        {
                            case 0:
                                ContentHeader = $"La ricerca non ha restituito alcun buono già speso.";
                                break;
                            case 1:
                                ContentHeader = $"Hai un buono già speso";
                                break;
                            default:
                                ContentHeader = $"Hai {spentCoupons.Count()} buoni già spesi";
                                break;
                        }
                        break;
                    default:
                        break;
                }
                
            }

            IsBusy = false;
            OnPropertyChanged(nameof(CouponListIsVisible));
        }

        //public override void OnDisappearing()
        //{
        //    if (IsBusy)
        //    {
        //        if (cts != null && !cts.IsCancellationRequested)
        //            cts.Cancel();
        //    }
        //    base.OnDisappearing();
        //}

    }
}