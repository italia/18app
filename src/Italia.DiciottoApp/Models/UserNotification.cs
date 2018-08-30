using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class UserNotification
    {
        public string Id { get; set; }

        public bool IsNewMsg { get; set; }

        public string MsgDateTime { get; set; }

        public string MsgText { get; set; }

        public string MsgImage => IsNewMsg ? "unread_msg" : "selected_black";
    }
}
