﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public static class Categories
    {
        public static string[] Titles { get; } = new string[]
        {
            "Cinema",
            "Concerti",
            "Eventi culturali",
            "Libri",
            "Musei, monumenti, parchi naturali",
            "Teatro e danza"
        };

        public static string[] ImageSources { get; } = new string[]
        {
            "cat_movie",
            "cat_concert",
            "cat_event",
            "cat_book",
            "cat_museum",
            "cat_theatre"
        };

        public static Dictionary<TipoCategoria, Prodotto[]> CategoryTypeProducts { get; } = new Dictionary<TipoCategoria, Prodotto[]>
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

        public static IEnumerable<Categoria> List { get; } = new List<Categoria>
        {
            new Categoria(TipoCategoria.Cinema),
            new Categoria(TipoCategoria.Concerti),
            new Categoria(TipoCategoria.EventiCulturali),
            new Categoria(TipoCategoria.Libri),
            new Categoria(TipoCategoria.MuseiMonumentiParchiNaturali),
            new Categoria(TipoCategoria.TeatroDanza),
        };

        
    }
}
