using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class DeleteVoucherResult
    {
        public bool Success { get; set; }

        public bool StillUnableToDeleteMuseumVoucher { get; set; }

        public string DeleteMuseumVoucherStartDate { get; set; }
    }
}
