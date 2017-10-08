package com.ioxxy.a18app.activity;

import android.content.Intent;
import android.net.Uri;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.support.v7.widget.CardView;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

import com.ioxxy.a18app.R;

import org.w3c.dom.Text;

public class DettagliNegozioActivity extends AppCompatActivity {

    //Dichiarazione degli attributi grafici
    private TextView nome;
    private TextView indirizzo;
    private CardView btn_buono;
    private CardView btn_mappa;
    private CardView btn_percorso;
    private ImageView sfondo;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_dettagli_negozio);

        //Assegnazione degli attributi grafici
        nome = (TextView) findViewById(R.id.nomeNegozio);
        indirizzo = (TextView) findViewById(R.id.indirizzoNegozio);
        btn_buono = (CardView) findViewById(R.id.btn_newbuono);
        btn_mappa = (CardView) findViewById(R.id.btn_mappa);
        btn_percorso = (CardView) findViewById(R.id.btn_percorso);
        sfondo = (ImageView) findViewById(R.id.sfondo);

        nome.setText(getIntent().getExtras().getString("nome"));
        indirizzo.setText(getIntent().getExtras().getString("indirizzo"));

        if (getIntent().getExtras().getString("type").equals("movie_theater")) {
            sfondo.setBackgroundResource(R.drawable.concerti);
        } else {
            sfondo.setBackgroundResource(R.drawable.libriback);
        }

        initListeners();
    }

    private void initListeners() {
        //Listeners di tutti i bottoni
        btn_buono.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (getIntent().getExtras().getString("type").equals("movie_theater") || getIntent().getExtras().getString("type").equals("book_store")) {
                    Intent i = new Intent(getApplicationContext(), BuonoProdottoActivity.class);
                    i.putExtra("type", getIntent().getExtras().getString("type"));
                    i.putExtra("nome", getIntent().getExtras().getString("nome"));
                    i.putExtra("indirizzo", getIntent().getExtras().getString("indirizzo"));
                    startActivity(i);
                    finish();
                }
            }
        });
        btn_mappa.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

            }
        });
        btn_percorso.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Uri gmmIntentUri = Uri.parse("google.streetview:cbll=" + getIntent().getExtras().getString("lat") + "," + getIntent().getExtras().getString("lon"));
                Intent mapIntent = new Intent(Intent.ACTION_VIEW, gmmIntentUri);
                mapIntent.setPackage("com.google.android.apps.maps");
                startActivity(mapIntent);
            }
        });
    }
}
