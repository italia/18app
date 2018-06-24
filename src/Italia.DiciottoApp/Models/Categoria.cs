using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Categoria
    {
        public TipoCategoria Tipo { get; }

        public string Titolo => Categories.Titles[(int)Tipo];

        public string ImageSource => Categories.ImageSources[(int)Tipo];

        public string BlackImageSource => $"{Categories.ImageSources[(int)Tipo]}_black";

        public string ElencoProdotti { get; }

        public Categoria(TipoCategoria tipo)
        {
            Tipo = tipo;
            ElencoProdotti = CreaListaProdotti();
        }

        public string CreaListaProdotti()
        {
            var prodotti = Categories.CategoryTypeProducts[Tipo];
            if (prodotti.Length == 0)
            {
                return String.Empty;
            }
            else
            {
                StringBuilder sb = new StringBuilder();
                bool firstTime = true;
                foreach (var prod in prodotti)
                {
                    if (firstTime)
                    {
                        firstTime = false;
                    }
                    else
                    {
                        sb.Append(", ");
                    }
                    sb.Append(prod.Titolo);
                }
                return sb.ToString();
            }
        }

    }
}
