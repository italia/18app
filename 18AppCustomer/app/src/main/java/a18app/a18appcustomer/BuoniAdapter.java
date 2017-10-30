package a18app.a18appcustomer;

import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BuoniAdapter extends RecyclerView.Adapter<BuoniAdapter.MyViewHolder> {

    private final List<Buono> buoniList;




    public class MyViewHolder extends RecyclerView.ViewHolder {
        public TextView categoria;
        public ImageView immagine;

        public MyViewHolder(View view) {
            super(view);
            immagine =(ImageView) view.findViewById(R.id.icona_buono);
            categoria = (TextView) view.findViewById(R.id.categoria);
        }
    }


    public BuoniAdapter(List<Buono> buoniList) {
        this.buoniList = new ArrayList<>(Collections.unmodifiableList(buoniList));
    }


    public void prepareBuoniData() {
        buoniList.add(new Buono("Cinema", "cinema"));
        buoniList.add(new Buono("Concerti", "concerti"));
        buoniList.add(new Buono("Eventi culturali", "eventi"));
        buoniList.add(new Buono("Libri", "libri"));
        buoniList.add(new Buono("Musei, monumenti, parchi naturali", "musei"));
        buoniList.add(new Buono("Teatro e danza", "teatro"));
    }


    public List<Buono> getBuoni(){
        return new ArrayList<>(Collections.unmodifiableList(buoniList));}


    @Override
    public MyViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        View itemView = LayoutInflater.from(parent.getContext())
                .inflate(R.layout.categorie_list_row, parent, false);

        return new MyViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(MyViewHolder holder, int p) {
        Buono buono = buoniList.get(p);

        switch(buono.getimmagine()) {
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
                break;
            case "cinema":
                holder.immagine.setImageResource(R.drawable.icon_cinema_06c);
        }

        holder.categoria.setText(buono.getTitle());
    }

    @Override
    public int getItemCount() {
        return buoniList.size();
    }
}