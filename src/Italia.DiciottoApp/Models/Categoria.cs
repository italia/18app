using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Categoria
    {
        private static readonly string[] categorie = new string[]
        {
            "Cinema",
            "Concerti",
            "Eventi culturali",
            "Libri",
            "Musei, monumenti, parchi naturali",
            "Teatro e danza"
        };

        private static readonly Dictionary<TipoCategoria, Prodotto[]> prodotti = new Dictionary<TipoCategoria, Prodotto[]>
        {
            {
                TipoCategoria.Cinema,
                new Prodotto[]
                {
                    new Prodotto {Tipo = TipoProdotto.AbbonamentoCard },
                    new Prodotto {Tipo = TipoProdotto.BigliettoIngresso }
                }
            },
            {
                TipoCategoria.Concerti,
                new Prodotto[]
                {
                    new Prodotto {Tipo = TipoProdotto.AbbonamentoCard },
                    new Prodotto {Tipo = TipoProdotto.BigliettoIngresso }
                }
            },
            {
                TipoCategoria.EventiCulturali,
                new Prodotto[]
                {
                    new Prodotto {Tipo = TipoProdotto.AbbonamentoCard },
                    new Prodotto {Tipo = TipoProdotto.BigliettoIngresso }
                }
            },
            {
                TipoCategoria.Libri,
                new Prodotto[]
                {
                    new Prodotto {Tipo = TipoProdotto.AudioLibri },
                    new Prodotto {Tipo = TipoProdotto.LibriCartacei }
                }
            },
            {
                TipoCategoria.MuseiMonumentiParchiNaturali,
                new Prodotto[]
                {
                    new Prodotto {Tipo = TipoProdotto.AbbonamentoCard },
                    new Prodotto {Tipo = TipoProdotto.BigliettoIngresso }
                }
            },
            {
                TipoCategoria.TeatroDanza,
                new Prodotto[]
                {
                    new Prodotto {Tipo = TipoProdotto.AbbonamentoCard },
                    new Prodotto {Tipo = TipoProdotto.BigliettoIngresso }
                }
            },
        };
        public TipoCategoria Tipo { get; }

        public string Titolo => categorie[(int)Tipo];

        public string ElencoProdotti { get; }

        public Categoria(TipoCategoria tipo)
        {
            this.Tipo = tipo;
            ElencoProdotti = CreaListaProdotti();
        }

        public string CreaListaProdotti()
        {
            if (prodotti[Tipo].Length == 0)
            {
                return String.Empty;
            }
            else
            {
                StringBuilder sb = new StringBuilder();
                bool firstTime = true;
                foreach (var prod in prodotti[Tipo])
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
