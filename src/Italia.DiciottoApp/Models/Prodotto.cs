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
        
        public string Titolo { get; set; }

        public string ImageSource { get; set; }

        public string BlackImageSource { get; set; }

        public static List<Prodotto> ProdottiPerCategoria(int ambitoId)
        {
            switch (ambitoId)
            {
                case 1: // CINEMA
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 1,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 2,
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
                            Id = 3,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 4,
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
                            Id = 5,
                            Titolo = "Biglietto d'ingresso ai circhi",
                            // TODO assets: prod_ticket_circus, prod_ticket_circus_black
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto // prod_ticket_fair, prod_ticket_fair_black
                        {
                            Id = 6,
                            Titolo = "Biglietto d'ingresso a festival e fiere culturali",
                            // TODO assets: prod_ticket_fair, prod_ticket_fair_black
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                    };

                case 14: // FORMAZIONE
                    return new List<Prodotto>
                    {
                        new Prodotto 
                        {
                            Id = 27,
                            Titolo = "Corsi di Musica",
                            // TODO assets: prod_course_music, prod_course_music_black
                            ImageSource = "prod_course_theatre",
                            BlackImageSource = "prod_course_theatre_black"
                        },
                        new Prodotto
                        {
                            Id = 28,
                            Titolo = "Corsi di Teatro",
                            ImageSource = "prod_course_theatre",
                            BlackImageSource = "prod_course_theatre_black"
                        },
                        new Prodotto
                        {
                            Id = 29,
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
                            Titolo = "Libro",
                            ImageSource = "prod_paperbook",
                            BlackImageSource = "prod_paperbook_black"
                        },
                        new Prodotto
                        {
                            Id = 8,
                            Titolo = "Ebook",
                            // TODO assets: prod_ebook, prod_ebook_black
                            ImageSource = "prod_paperbook",
                            BlackImageSource = "prod_paperbook_black"
                        },
                        new Prodotto
                        {
                            Id = 9,
                            Titolo = "Audiolibro",
                            ImageSource = "prod_audiobook",
                            BlackImageSource = "prod_audiobook_black"
                        },
                    };

                case 5: // MUSEI, MONUMENTI E PARCHI NATURALI ED AREE ARCHEOLOGICHE
                    return new List<Prodotto>
                    {
                        new Prodotto
                        {
                            Id = 10,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 11,
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
                            Id = 12,
                            Titolo = "Biglietto d'ingresso",
                            ImageSource = "prod_ticket",
                            BlackImageSource = "prod_ticket_black"
                        },
                        new Prodotto
                        {
                            Id = 13,
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
