using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Coupon
    {
        public string Id { get; set; }

        public bool Spent { get; set; }

        public string ShopId { get; set; }

        public Categoria Category { get; set; }

        public Prodotto Product { get; set; }

        public decimal Value { get; set; }

        public Shop Shop { get; set; }
    }
}
