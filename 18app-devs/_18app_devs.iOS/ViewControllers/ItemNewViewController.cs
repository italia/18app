using System;
using _18app_devs.Helpers;
using _18app_devs.Model;
using _18app_devs.ViewModel;
using UIKit;

namespace _18app_devs.iOS
{
	public partial class ItemNewViewController : UIViewController
    {
        public Item Item { get; set; }
        public ItemsViewModel viewModel { get; set; }
        public BaseViewModel baseModel {get;set;}

		public ItemNewViewController(IntPtr handle) : base(handle)
		{

        }

		public override void ViewDidLoad()
		{
			base.ViewDidLoad();
            // Perform any additional setup after loading the view, typically from a nib.

            btnSaveItem.TouchUpInside += (sender, e) =>
			{
				var _item = new Item();
				_item.Text = txtTitle.Text;
				_item.Description = txtDesc.Text;
				MessagingCenter.Send(this, "AddItem", _item);

			};
		}

		public override void DidReceiveMemoryWarning()
		{
			base.DidReceiveMemoryWarning();
			// Release any cached data, images, etc that aren't in use.
		}
	}
}

