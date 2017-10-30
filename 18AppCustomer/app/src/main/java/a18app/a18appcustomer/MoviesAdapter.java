package a18app.a18appcustomer;

import android.os.Build;
import android.support.annotation.RequiresApi;
import android.support.v7.widget.RecyclerView;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class MoviesAdapter extends RecyclerView.Adapter<MoviesAdapter.MyViewHolder> {

    private final List<Movie> moviesList;




    public class MyViewHolder extends RecyclerView.ViewHolder {
        public TextView title, subtitle, prezzo;
        public ImageView immagine;
        public int stato;

        public MyViewHolder(View view) {
            super(view);
            immagine =(ImageView) view.findViewById(R.id.icona);
            title = (TextView) view.findViewById(R.id.title);
            subtitle = (TextView) view.findViewById(R.id.subtitle);
            prezzo = (TextView) view.findViewById(R.id.prezzo);
        }
    }


    public MoviesAdapter(List<Movie> moviesList) {
        this.moviesList = new ArrayList<>(Collections.unmodifiableList(moviesList));
    }


    public void prepareMovieData() {
        Movie movie = new Movie("Cinema", "Biglietto d'ingresso", "8.00", "cinema", 1);
        moviesList.add(movie);

        movie = new Movie("Concerti", "Biglietto d'ingresso", "15.00", "eventi", 1);
        moviesList.add(movie);

        movie = new Movie("Teatro danza", "Abbonamento/cards", "128.0", "teatro", 1);
        moviesList.add(movie);

        movie = new Movie("Libri", "Ebook", "32.0", "libri", 0);
        moviesList.add(movie);

        movie = new Movie("Concerti", "Biglietto d'ingresso", "15.00", "concerti", 0);
        moviesList.add(movie);

        movie = new Movie("Teatro danza", "Abbonamento/cards", "128.0", "teatro", 0);
        moviesList.add(movie);

        movie = new Movie("Libri", "Ebook", "32.0", "libri", 0);
        moviesList.add(movie);

        movie = new Movie("Museo", "Biglietto d'ingresso", "2.0", "musei", 0);
        moviesList.add(movie);

        movie = new Movie("Extra", "Biglietto d'ingresso", "2.0", "musei", 0);
        moviesList.add(movie);

        movie = new Movie("Extra2", "Biglietto d'ingresso", "2.0", "musei", 0);
        moviesList.add(movie);

        movie = new Movie("Extra3", "Biglietto d'ingresso", "2.0", "musei", 0);
        moviesList.add(movie);

        // mAdapter.notifyDataSetChanged();
    }


    public List<Movie> getMovies(){
        return new ArrayList<>(Collections.unmodifiableList(moviesList));}

    /**
     * Method for filtering the movies in the tab Layout
     * @param state
     * @return
     */
    public void removeAll(int state) {
        for(Movie m: new ArrayList<>(Collections.unmodifiableList(moviesList))){
            if(m.getstato()==state) moviesList.remove(m);
        }
        this.notifyDataSetChanged();
    }

    @Override
    public MyViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        View itemView = LayoutInflater.from(parent.getContext())
                .inflate(R.layout.movie_list_row, parent, false);

        return new MyViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(MyViewHolder holder, int p) {
        Movie movie = moviesList.get(p);

        switch(movie.getimmagine()) {
            case "eventi":
                holder.immagine.setImageResource(R.drawable.icon_eventi_06c);
                break;
            case "concerti":
                holder.immagine.setImageResource(R.drawable.icon_concerti_06c);
                break;
            case "libri":
                holder.immagine.setImageResource(R.drawable.icon_libri_06c);
                break;
            case "musei":
                holder.immagine.setImageResource(R.drawable.icon_musei_06c);
                break;
            case "teatro":
                holder.immagine.setImageResource(R.drawable.icon_teatro_06c);
        }

        holder.title.setText(movie.getTitle());
        holder.subtitle.setText(movie.getsubtitle());
        holder.prezzo.setText(movie.getprezzo());
        holder.stato=movie.getstato();
    }

    @Override
    public int getItemCount() {
        return moviesList.size();
    }
}