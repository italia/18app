using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Categoria
    {
        public int Id { get; set; }

        public TipoCategoria Tipo { get; set; }

        public string Titolo { get; set; }  // => Categories.Titles[(int)Tipo];

        public string ImageSource { get; set; }  // => Categories.ImageSources[(int)Tipo];

        public string BlackImageSource { get; set; }  // => $"{Categories.ImageSources[(int)Tipo]}_black";

        public string BkgndImageSource { get; set; }  // => Categories.BkgndImageSources[(int)Tipo];

        public List<Prodotto> Prodotti { get; set; }  // => Categories.CategoryTypeProducts[Tipo];

        public string ElencoProdotti { get; set; }  // { get; }

        public static List<Categoria> List = new List<Categoria>
        {
            new Categoria
            {
                Id = 1,
                Tipo = TipoCategoria.Cinema,
                Titolo = "Cinema",
                ImageSource = "cat_movie",
                BlackImageSource = "cat_movie_black",
                BkgndImageSource = "bkgnd_cinema",
                Prodotti = Prodotto.ProdottiPerCategoria(1),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(1)
            },
            new Categoria
            {
                Id = 2,
                Tipo = TipoCategoria.Concerti,
                Titolo = "Concerti",
                ImageSource = "cat_concert",
                BlackImageSource = "cat_concert_black",
                BkgndImageSource = "bkgnd_concerti",
                Prodotti = Prodotto.ProdottiPerCategoria(2),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(2)
            },
            new Categoria
            {
                Id = 3,
                Tipo = TipoCategoria.EventiCulturali,
                Titolo = "Eventi culturali",
                ImageSource = "cat_event",
                BlackImageSource = "cat_event_black",
                BkgndImageSource = "bkgnd_libri",
                Prodotti = Prodotto.ProdottiPerCategoria(3),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(3)
            },
            new Categoria
            {
                Id = 14,
                Tipo = TipoCategoria.Formazione,
                Titolo = "Formazione",
                ImageSource = "cat_training",
                BlackImageSource = "cat_training_black",
                BkgndImageSource = "bkgnd_libri",
                Prodotti = Prodotto.ProdottiPerCategoria(14),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(14)
            },
            new Categoria
            {
                Id = 4,
                Tipo = TipoCategoria.Libri,
                Titolo = "Libri",
                ImageSource = "cat_book",
                BlackImageSource = "cat_book_black",
                BkgndImageSource = "bkgnd_libri",
                Prodotti = Prodotto.ProdottiPerCategoria(4),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(4)
            },
            new Categoria
            {
                Id = 5,
                Tipo = TipoCategoria.MuseiMonumentiParchiNaturali,
                Titolo = "Musei, monumenti parchi naturali ed aree archeologiche",
                ImageSource = "cat_museum",
                BlackImageSource = "cat_museum_black",
                BkgndImageSource = "bkgnd_libri",
                Prodotti = Prodotto.ProdottiPerCategoria(5),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(5)
            },
            new Categoria
            {
                Id = 15,
                Tipo = TipoCategoria.MusicaRegistrata,
                Titolo = "Musica registrata",
                ImageSource = "cat_music",
                BlackImageSource = "cat_music_black",
                BkgndImageSource = "bkgnd_concerti",
                Prodotti = Prodotto.ProdottiPerCategoria(15),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(15)
            },
            new Categoria
            {
                Id = 6,
                Tipo = TipoCategoria.TeatroDanza,
                Titolo = "Teatro e danza",
                ImageSource = "cat_theatre",
                BlackImageSource = "cat_theatre_black",
                BkgndImageSource = "bkgnd_cinema",
                Prodotti = Prodotto.ProdottiPerCategoria(6),
                ElencoProdotti = Prodotto.ElencoProdottiPerCategoria(6)
            }
        };

    }
}
