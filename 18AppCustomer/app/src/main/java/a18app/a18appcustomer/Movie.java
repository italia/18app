package a18app.a18appcustomer;

/**
 * Created by Andrea on 08/10/2017.
 */

public class Movie {
    private String title, prezzo, subtitle, immagine;
    private int stato;

    public Movie(String cinema, String s, String s1) {
    }

    public Movie(String title, String subtitle, String prezzo, String immagine, int stato) {
        this.title = title;
        this.subtitle = subtitle;
        this.prezzo = prezzo;
        this.immagine = immagine;
        this.stato=stato;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String name) {
        this.title = name;
    }

    public String getprezzo() {
        return prezzo;
    }

    public void setprezzo(String year) {
        this.prezzo = prezzo;
    }

    public String getsubtitle() {
        return subtitle;
    }

    public void setGenre(String subtitle) {
        this.subtitle = subtitle;
    }

    public String getimmagine() {  return immagine;    }

    public void setimmagine(String immagine) {
        this.immagine = immagine;
    }

    public int getstato() {  return stato;    }

    public void setstato(int stato) {
        this.stato = stato;
    }

}