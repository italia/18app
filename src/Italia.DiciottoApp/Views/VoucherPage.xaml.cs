using Barcode.Generator;
using Barcode.Generator.Common;
using Barcode.Generator.Rendering;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Essentials;
using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class VoucherPage : BasePage
    {
        private VoucherViewModel vm;

        public VoucherPage(Voucher voucher, bool justCreated = false)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as VoucherViewModel;
            vm.JustCreated = justCreated;
            vm.Voucher = voucher;
            RenderBarcodes();
        }

        /// <summary>
        /// Create the images with ZXing.NET.RenderOnly
        /// </summary>
        private void RenderBarcodes()
        {
            // Barcode CODE128
            var barcodeWriter = new BarcodeWriterPixelData
            {
                Format = BarcodeFormat.CODE_128,
                Options = new EncodingOptions
                {
                    Width = 300,
                    Height = 100,
                    Margin = 0,
                    PureBarcode = true
                }
            };

            PixelData barcodeImage = barcodeWriter.Write(vm.BarcodeContent);
            byte[] barcodeImageBmpBytes = BitmapConverter.FromPixelData(barcodeImage);
            BarcodeImage1.Source = ImageSource.FromStream(() => new MemoryStream(barcodeImageBmpBytes));
            BarcodeImage2.Source = ImageSource.FromStream(() => new MemoryStream(barcodeImageBmpBytes));

            // QRcode
            var qrcodeWriter = new BarcodeWriterPixelData
            {
                Format = BarcodeFormat.QR_CODE,
                Options = new EncodingOptions
                {
                    Width = 200,
                    Height = 200,
                    Margin = 0,
                    PureBarcode = true
                }
            };

            PixelData qrcodeImage = qrcodeWriter.Write(vm.QRcodeContent);
            byte[] qrcodeImageBmpBytes = BitmapConverter.FromPixelData(qrcodeImage);
            QrCodeImage1.Source = ImageSource.FromStream(() => new MemoryStream(qrcodeImageBmpBytes));
            QrCodeImage2.Source = ImageSource.FromStream(() => new MemoryStream(qrcodeImageBmpBytes));
        }

        private async void OnVoucherCodeTapped(object sender, EventArgs e)
        {
            await Clipboard.SetTextAsync(vm.Voucher.Codice);
            await DisplayAlert("Operazione completata", "Il codice del buono è stato copiato negli appunti.", "Ok");
        }

        private async void OnUseVoucherOnShopOnlineButtonTapped(object sender, EventArgs e)
        {
            // TBD: navigare alla pagina web del sito dello shop online
            await DisplayAlert("Suggerimento", "Per spendere il buono nel negozio online cerca il simbolo di 18App e utilizza il codice secondo le modalità previste dal sito del venditore.", "Ok");
        }

        private async void OnRouteToShopButtonTapped(object sender, EventArgs e)
        {
            if (vm.ShopHasGeolocation)
            {
                var options = new MapLaunchOptions { NavigationMode = NavigationMode.Driving };
                await Map.OpenAsync(vm.Voucher.Shop.Location, options);
            }
            else
            {
                await DisplayAlert("Posizione ignota", "Purtroppo questo negozio non ha i dati di georeferenziazione quindi non è possibile mostrare il percorso nella mappa", "Ok");
            }

        }

        private async void OnFindShopButtonTapped(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new NearToYouShopsPage());
        }

        private async void OnDeleteVoucherButtonTapped(object sender, EventArgs e)
        {
            if (!IsBusy)
            {
                IsBusy = true;
                vm.DeleteVoucherButtonIsVisible = false;

                DeleteVoucherResult deleteVoucherResult = await vm.DeleteVoucherAsync();

                if (deleteVoucherResult.Success)
                {
                    if (deleteVoucherResult.StillUnableToDeleteMuseumVoucher)
                    {
                        string msg = $"L’annullamento del buono dell'ambito '{vm.Voucher.Category.Titolo}' potrà essere effettuato a partire dal {deleteVoucherResult.DeleteMuseumVoucherStartDate}";
                        await DisplayAlert("Annulla buono", msg, "OK");
                    }
                    else
                    {
                        await DisplayAlert("Annulla buono", "Il buono è stato annullato e il suo valore riassegnato alla tua disponibilità", "OK");

                        //// Find and delete from the navigation history all detail pages of this voucher
                        //var voucherPages = Navigation.NavigationStack.Where(p => p is VoucherPage).ToList();
                        //if (voucherPages != null)
                        //{
                        //    foreach (var voucherPage in voucherPages)
                        //    {
                        //        VoucherViewModel voucherViewModel = (VoucherViewModel)voucherPage.BindingContext;
                        //        if (voucherPage != this && voucherViewModel.Voucher.Id == vm.Voucher.Id)
                        //        {
                        //            Navigation.RemovePage(voucherPage);
                        //        }
                        //    }
                        //}

                        //// Go back
                        //await Navigation.PopAsync();

                        // Get the root page
                        IReadOnlyList<Page> navStack = Navigation.NavigationStack;
                        Page currentRootPage = navStack[0];

                        Navigation.InsertPageBefore(new LoggedRootPage(), currentRootPage);

                        // Clear navigation stack
                        await Navigation.PopToRootAsync();
                    }
                }
                else
                {
                    await DisplayAlert("Annulla buono", "Si è verificato un errore nell'annullamento del buono.", "OK");
                }

                IsBusy = false;
            }
        }

        private async void OnShopDetailButtonTapped(object sender, EventArgs e)
        {
            // TBD: STILL_NOT_IMPLEMENTED on 18App APIs
            await DisplayAlert("Dettagli negozio non disponibili", "Al momento la  visualizzazione dei dettagli del negozio associato al buono non è stata ancora implementata, lo sarà in una prossima versione.", "Ok");
        }

    }
}