using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Prodotto
    {
        private static readonly string[] prodotti = new string[]
        {
            "Biglietto d'ingresso",
            "Abbonamento/Card",
            "Libri cartacei",
            "Audiolibri"
        };

        private static readonly string[] imageSources = new string[]
        {
            "prod_ticket",
            "prod_subscription",
            "prod_paperbook",
            "prod_audiobook"
        };

        public int Id { get; set; }
        
        public TipoProdotto Tipo { get; set; }

        public string Titolo { get; set; }

        public string ImageSource { get; set; }

        public string BlackImageSource { get; set; }

        public static List<Prodotto> ProdottiPerCategoria(int ambitoId)
        {
            switch (ambitoId)
            {
                case 1: // Cinema
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 1,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 2,
                            Tipo = TipoProdotto.AbbonamentoCard,
                            Titolo = "Abbonamento/Card",
                            ImageSource = "prod_subscription",
                            BlackImageSource = "prod_subscription_black"
                        },
                    };

                case 2: // CONCERTI
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 1,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 2,
                            Tipo = TipoProdotto.AbbonamentoCard,
                            Titolo = "Abbonamento/Card",
                            ImageSource = "prod_subscription",
                            BlackImageSource = "prod_subscription_black"
                        },
                    };

                case 3: // EVENTI CULTURALI
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 1,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 2,
                            Tipo = TipoProdotto.AbbonamentoCard,
                            Titolo = "Abbonamento/Card",
                            ImageSource = "prod_subscription",
                            BlackImageSource = "prod_subscription_black"
                        },
                    };

                case 14: // FORMAZIONE
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 28,
                            Tipo = TipoProdotto.CorsiTeatro,
                            Titolo = "Corsi di Teatro",
                            ImageSource = "prod_course_theatre",
                            BlackImageSource = "prod_course_theatre_black"
                        },
                        new Prodotto
                        {
                            Id = 29,
                            Tipo = TipoProdotto.CorsiLinguaStraniera,
                            Titolo = "Corsi di Lingua straniera",
                            ImageSource = "prod_course_lng",
                            BlackImageSource = "prod_course_lng_black"
                        },
                    };

                case 4: // LIBRI
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 7,
                            Tipo = TipoProdotto.LibriCartacei,
                            Titolo = "Libri cartacei",
                            ImageSource = "prod_paperbook",
                            BlackImageSource = "prod_paperbook_black"
                        },
                        new Prodotto
                        {
                            Id = 9,
                            Tipo = TipoProdotto.AudioLibri,
                            Titolo = "Audiolibri",
                            ImageSource = "prod_audiobook",
                            BlackImageSource = "prod_audiobook_black"
                        },
                    };

                case 5: // MUSEI, MONUMENTI E PARCHI NATURALI ED AREE ARCHEOLOGICHE
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 1,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 2,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "Abbonamento/Card",
                            ImageSource = "prod_subscription",
                            BlackImageSource = "prod_subscription_black"
                        },
                    };

                case 15: // MUSICA REGISTRATA (CD – DVD musicali – dischi in vinile – musica online)
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 30,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "CD/DVD/vinile/online",
                            ImageSource = "prod_music",
                            BlackImageSource = "prod_music_black"
                        }
                    };

                case 6: // TEATRO E DANZA
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 1,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 2,
                            Tipo = TipoProdotto.BigliettoIngresso,
                            Titolo = "Abbonamento/Card",
                            ImageSource = "prod_subscription",
                            BlackImageSource = "prod_subscription_black"
                        },
                    };

                default:
                    throw new ArgumentException($"L'ambito con id={ambitoId} non ha beni codificati.");
            }
        }

        public static string ElencoProdottiPerCategoria(int ambitoId)
        {
            var prodotti = ProdottiPerCategoria(ambitoId);
            if ((prodotti?.Count ?? 0) == 0)
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
