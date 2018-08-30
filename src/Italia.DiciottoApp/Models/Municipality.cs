using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Municipality
    {
        public string Id { get; set; }

        public string RegionId { get; set; }

        public string Province { get; set; }

        public string Name { get; set; }

        public string FullName => $"{Name} ({Province})";
    }
}
