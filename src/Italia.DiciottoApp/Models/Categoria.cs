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

        public TipoCategoria Tipo { get; set; }

        public string Titolo
        {
            get => categorie[(int)Tipo];
        }

        public Prodotto[] Prodotti
        {
            get => prodotti[Tipo];
        }
    }
}
