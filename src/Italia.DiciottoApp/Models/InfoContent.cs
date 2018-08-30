using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class InfoContent: ObservableObject
    {
        private bool isOpen;
        public bool IsOpen
        {
            get => isOpen;
            set => SetProperty(ref isOpen, value);
        }

        public bool IsHeaderVisible { get; set; }

        public int HeaderOrderIndex { get; set; }

        public string Header { get; set; }

        public int TitleOrderIndex { get; set; }

        public string Title { get; set; }

        public string Text { get; set; }
    }
}
