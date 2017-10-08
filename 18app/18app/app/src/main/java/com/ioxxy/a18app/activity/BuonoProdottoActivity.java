package com.ioxxy.a18app.activity;


import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;

import com.ioxxy.a18app.R;

public class BuonoProdottoActivity extends AppCompatActivity {

    //Dichiarazione attributi grafici
    private TextView tv1;
    private TextView tv2;
    private TextView tv3;
    private TextView tv4;
    private TextView tv5;
    private TextView titolo;
    private ImageView immagineOp1;
    private ImageView immagineOp2;
    private RelativeLayout btn1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_buono_prodotto_negozio);

        //Assegnazione degli attributi grafici
        tv1 = (TextView) findViewById(R.id.nomeNegozio);
        tv2 = (TextView) findViewById(R.id.indirizzoNegozio);
        tv3 = (TextView) findViewById(R.id.testoOpzione1);
        tv4 = (TextView) findViewById(R.id.testoOpzione2);
        tv5 = (TextView) findViewById(R.id.categoria);
        titolo = (TextView) findViewById(R.id.titolo);
        btn1 = (RelativeLayout) findViewById(R.id.optcin2);
        immagineOp1 = (ImageView) findViewById(R.id.iconaOpzione1);
        immagineOp2 = (ImageView) findViewById(R.id.iconaOpzione2);

        //Setto i valori di default ad alcuni oggetti grafici
        titolo.setText("Nuovo buono: " + getIntent().getExtras().getString("nome"));
        tv1.setText(getIntent().getExtras().getString("nome"));
        tv2.setText(getIntent().getExtras().getString("indirizzo"));

        //Controllo degli Extras che ci sono
        if (getIntent().getExtras().getString("type").equals("book_store")) {
            tv5.setText("Libri");
        } else if (getIntent().getExtras().getString("type").equals("movie_theater")) {
            tv5.setText("Cinema");
            tv3.setText("Abbonamento/Card");
            tv4.setText("Biglietto");
            immagineOp1.setBackgroundResource(R.drawable.ic_card);
            immagineOp2.setBackgroundResource(R.drawable.icon_biglietti);
        }

        initListeners();
    }

    private void initListeners() {
        btn1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(getApplicationContext(), NuovoBuonoActivity.class);
                i.putExtra("index", "valore");
                i.putExtra("type", getIntent().getExtras().getString("type"));
                startActivity(i);
                finish();
            }
        });
    }
}
