package com.ioxxy.a18app.activity;


import android.os.Bundle;
import android.support.v4.view.ViewPager;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;

import com.ioxxy.a18app.R;

public class VoucherActivity extends AppCompatActivity {

    //Dichiarazione degli attributi
    private String nome;
    private String indirizzo;
    private double lat;
    private double lon;
    private String tipo;

    //Dichiarazione attributi grafici
    private Button btn_trovaNegozio;
    private ImageView img1;
    private ImageView img2;
    private TextView tv_valore;
    private TextView tv_prodotto;
    private TextView tv_categoria;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_voucher);

        //Assegnazione attributi grafici
        btn_trovaNegozio = (Button) findViewById(R.id.btn_trovaNegozio);

        tv_valore = (TextView) findViewById(R.id.tv_valore);
        tv_prodotto = (TextView) findViewById(R.id.tv_prodotto);
        tv_categoria = (TextView) findViewById(R.id.tv_categoria);

        img1 = (ImageView) findViewById(R.id.img1);
        img2 = (ImageView) findViewById(R.id.img2);

        //Controllo se ci sono gli Extras passati dalle altre activity
        Bundle i = getIntent().getExtras();
        if (i != null) {
            if (i.getString("type").equals("book_store")) {
                img1.setBackgroundResource(R.drawable.icon_libri);
                img2.setBackgroundResource(R.drawable.ic_book);
                tv_categoria.setText("Libri");
                tv_prodotto.setText("Libri cartacei");
            }
            tv_valore.setText(i.getString("valore") + ",00");
        }

        //Metodo per il listener dei bottoni
        initListener();
    }

    private void initListener() {
        btn_trovaNegozio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                finish();

            }
        });
    }
}
