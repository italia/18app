using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class WalletViewModel : BaseViewModel
    {
        private IVouchersService VoucherService;
        private IEnumerable<Voucher> availableVouchers = null;
        private IEnumerable<Voucher> spentVouchers = null;
        private DateTime lastRequest = DateTime.Now;
        private CancellationTokenSource cts;

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

        public bool VoucherListIsVisible => (Vouchers != null && Vouchers.Count > 0 && !IsBusy);

        public ObservableCollection<Voucher> Vouchers { get; set; } = new ObservableCollection<Voucher>();

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
            VoucherService = Service.Resolve<IVouchersService>();
        }

        public async Task SetTab(WalletKind walletKind, bool refresh = false)
        {
            Debug.WriteLine($"°°°°°°°°°°°°°°°°° [Wallet SetTab({walletKind})] started");

            if (IsBusy)
            {
                await DisplayAlertAsync("Sto già cercando i tuoi buoni...");
                return;
            }

            IsBusy = true;
            OnPropertyChanged(nameof(VoucherListIsVisible));
            ContentHeader = "Richiesta buoni in corso...";

            WalletKind = walletKind;
            if((WalletKind == WalletKind.All && (DateTime.Now - lastRequest).TotalSeconds > Constants.NEW_REQUEST_MINIMUM_SECONDS)
                || availableVouchers == null || spentVouchers == null || refresh)
            {
                try
                {
                    lastRequest = DateTime.Now;
                    var fedSecureToken = new Cookie
                    {
                        Name = Constants.COOKIES_SECURE_TOKEN,
                        Value = Settings.FEDSecureTokenValue
                    };
                    cts = new CancellationTokenSource();
                    availableVouchers = await VoucherService.GetUserVouchersAsync(fedSecureToken, spent: false, page: 0, pageItems: Constants.VOUCHER_ITEMS_PER_PAGE, ct: cts.Token);
                    spentVouchers = await VoucherService.GetUserVouchersAsync(fedSecureToken, spent: true, page: 0, pageItems: Constants.VOUCHER_ITEMS_PER_PAGE, ct: cts.Token);
                }
                catch (AggregateException e)
                {
                    foreach (var ie in e.InnerExceptions)
                        Debug.WriteLine($"[Wallet SetTab({walletKind})] (Aggregate) TaskCanceledException: " + ie.Message);
                }
                catch (Exception ex)
                {
                    Debug.WriteLine($"[Wallet SetTab({walletKind})] TaskCanceledException: " + ex.Message);
                }
                finally
                {
                    if (cts != null)
                    {
                        cts.Dispose();
                        cts = null;
                    }
                    else
                    {
                        Debug.WriteLine($"+++++++ [Wallet SetTab({walletKind})] cts == null !!!");
                    }
                }
            }

            Vouchers.Clear();

            if (availableVouchers != null && (WalletKind == WalletKind.All || WalletKind == WalletKind.Available))
            {
                foreach (var Voucher in availableVouchers)
                {
                    Vouchers.Add(Voucher);
                }
            }

            if (spentVouchers != null && (WalletKind == WalletKind.All || WalletKind == WalletKind.Spent))
            {
                foreach (var Voucher in spentVouchers)
                {
                    Vouchers.Add(Voucher);
                }
            }

            if (WalletKind == WalletKind.All && Vouchers.Count == 0)
            {
                ContentHeader = $"La ricerca non ha restituito alcun buono";
            }
            else
            {
                switch (WalletKind)
                {
                    case WalletKind.All:
                        switch (availableVouchers.Count())
                        {
                            case 0:
                                ContentHeader = $"Non ci sono buoni ancora da spendere.";
                                break;
                            case 1:
                                ContentHeader = $"C'è un buono ancora da spendere.";
                                break;
                            default:
                                ContentHeader = $"Ci sono {availableVouchers.Count()} buoni ancora da spendere.";
                                break;
                        }
                        break;

                    case WalletKind.Available:
                        switch (availableVouchers.Count())
                        {
                            case 0:
                                ContentHeader = $"La ricerca non ha restituito alcun buono da spendere.";
                                break;
                            case 1:
                                ContentHeader = $"C'è un buono ancora da spendere";
                                break;
                            default:
                                ContentHeader = $"Ci sono {availableVouchers.Count()} buoni ancora da spendere";
                                break;
                        }
                        break;

                    case WalletKind.Spent:
                        switch (spentVouchers.Count())
                        {
                            case 0:
                                ContentHeader = $"La ricerca non ha restituito alcun buono già speso.";
                                break;
                            case 1:
                                ContentHeader = $"Hai un buono già speso";
                                break;
                            default:
                                ContentHeader = $"Hai {spentVouchers.Count()} buoni già spesi";
                                break;
                        }
                        break;

                    default:
                        break;
                }
                
            }

            IsBusy = false;
            OnPropertyChanged(nameof(VoucherListIsVisible));
        }

        public async Task<ServiceResult> GetBorsellinoAsync()
        {
            var userInfoService = Service.Resolve<IUserInfoService>();
            var getBorsellinoResult = await userInfoService.GetBorsellinoAsync();
            Debug.WriteLine($"++++ WalletViewModel - GetBorsellinoAsync: {getBorsellinoResult.Success}");

            if (getBorsellinoResult.Success && getBorsellinoResult.Result != null)
            {
                Settings.SetBorsellino(getBorsellinoResult.Result);
                OnPropertyChanged(nameof(UserCredit));
            }

            return getBorsellinoResult;
        }
    }
}