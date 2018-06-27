using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Coupon
    {
        public string Id { get; set; }

        public string UserId { get; set; }

        public bool Spent { get; set; }

        public DateTime SpentDateTime { get; set; }

        public string ShopId { get; set; }

        public Shop Shop { get; set; }

        public Categoria Category { get; set; }

        public Prodotto Product { get; set; }

        public double Value { get; set; }

        public string QrCodeValue { get; set; }

        public string BarCodeValue { get; set; }

        public bool HasShop => !string.IsNullOrWhiteSpace(ShopId) && Shop != null;
    }
}
