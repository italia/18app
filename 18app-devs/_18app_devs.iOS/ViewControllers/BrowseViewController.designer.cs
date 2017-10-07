// WARNING
//
// This file has been generated automatically by Xamarin Studio from the outlets and
// actions declared in your storyboard file.
// Manual changes to this file will not be maintained.
//
using Foundation;
using System;
using System.CodeDom.Compiler;
using UIKit;

namespace _18app_devs.iOS
{
    [Register ("ItemsViewController")]
    partial class BrowseViewController
    {
        [Outlet]
        [GeneratedCode ("iOS Designer", "1.0")]
        UIKit.UIButton btnAddItem { get; set; }

        void ReleaseDesignerOutlets ()
        {
            if (btnAddItem != null) {
                btnAddItem.Dispose ();
                btnAddItem = null;
            }
        }
    }
}