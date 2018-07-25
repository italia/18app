using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Municipality
    {
        public string Id { get; set; }

        public string RegionId { get; set; }

        public string Province => Id.Substring(0, 3);

        public string Name { get; set; }
    }
}
