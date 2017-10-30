package a18app.a18appcustomer;

/**
 * Created by Mario Robert D'Ambrosio on 08/10/2017.
 */

public class Buono {
    private String title, immagine;

    public Buono(String title, String immagine) {
        this.title = title;
        this.immagine = immagine;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String name) {
        this.title = name;
    }


    public String getimmagine() {  return immagine;    }

    public void setimmagine(String immagine) {
        this.immagine = immagine;
    }

}