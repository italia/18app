using System;
using UIKit;

using _18app_devs.ViewModel;

namespace _18app_devs.iOS
{
    public partial class BrowseItemDetailViewController : UIViewController
    {
		public ItemDetailViewModel ViewModel { get; set; }
		public BrowseItemDetailViewController(IntPtr handle) : base(handle) { }

		public override void ViewDidLoad()
		{
			base.ViewDidLoad();

			Title = ViewModel.Title;
			ItemNameLabel.Text = ViewModel.Item.Text;
			ItemDescriptionLabel.Text = ViewModel.Item.Description;

		}


    }
}