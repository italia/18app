
using System;
using Android.App;
using Android.OS;
using Android.Support.Design.Widget;
using Android.Widget;
using _18app_devs.Helpers;
using _18app_devs.Model;
using _18app_devs.ViewModel;
using Plugin.CurrentActivity;

namespace _18app_devs.Droid
{

    [Activity(Label = "AddItemActivity")]
    public class AddItemActivity : Activity
    {
        FloatingActionButton saveButton;
        EditText title, description;

        public Item Item { get; set; }
        public ItemsViewModel viewModel { get; set; }
        public BaseViewModel baseModel { get; set; }

        protected override void OnCreate(Bundle savedInstanceState)
        {
            base.OnCreate(savedInstanceState);

            // Create your application here
            SetContentView(Resource.Layout.activity_add_item);
            saveButton = FindViewById<FloatingActionButton>(Resource.Id.save_button);
            title = FindViewById<EditText>(Resource.Id.txtTitle);
            description = FindViewById<EditText>(Resource.Id.txtDesc);

            saveButton.Click += SaveButton_Click;
        }

        private void SaveButton_Click(object sender, EventArgs e)
        {
            var _item = new Item();
            _item.Text = title.Text;
            _item.Description = description.Text;
            MessagingCenter.Send(CrossCurrentActivity.Current.Activity, "AddItem", _item);

            Finish();
        }
    }
}
