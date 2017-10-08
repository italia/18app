package com.ioxxy.a18app.activity;

import android.content.Context;
import android.content.Intent;
import android.support.design.widget.FloatingActionButton;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.support.v7.widget.Toolbar;
import android.view.MenuItem;
import android.view.View;
import android.view.inputmethod.InputMethodManager;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.Toast;

import com.ioxxy.a18app.R;

public class NuovoBuonoActivity extends AppCompatActivity {

    //Attributi grafici
    private RelativeLayout rel1;
    private RelativeLayout optcin2;
    private LinearLayout frag1;
    private LinearLayout frag2;
    private LinearLayout frag3;
    private FloatingActionButton fab_valore;
    private EditText txt_valore;
    private boolean finishOnBack = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_nuovo_buono);

        //Dichiarazione attributi grafici
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        getSupportActionBar().setDisplayHomeAsUpEnabled(true);

        rel1 = (RelativeLayout) findViewById(R.id.opt1);
        optcin2 = (RelativeLayout) findViewById(R.id.optcin2);
        fab_valore = (FloatingActionButton) findViewById(R.id.btn_confermaImporto);
        txt_valore = (EditText) findViewById(R.id.et_importo);
        frag1 = (LinearLayout) findViewById(R.id.frag1);
        frag2 = (LinearLayout) findViewById(R.id.frag2);
        frag3 = (LinearLayout) findViewById(R.id.frag3);

        /*if(getIntent().getExtras() != null){
            if (getIntent().getExtras().get("from").equals("negozi")){
                setTitle(getIntent().getExtras().getString("title"));
                frag1.setVisibility(View.GONE);
                frag2.setVisibility(View.GONE);
                finishOnBack = true;
            }else{
                setTitle("Nuovo buono");
                frag2.setVisibility(View.GONE);
                frag3.setVisibility(View.GONE);
                finishOnBack = false;
            }
        }*/

        //Controllo se sono arrivati gli Extras dalle altre classi
        Bundle extras = getIntent().getExtras();
        if (extras != null) {
            if (getIntent().getExtras().getString("index").equals("valore")) {
                frag3.setVisibility(View.VISIBLE);
                frag2.setVisibility(View.GONE);
                frag1.setVisibility(View.GONE);
            } else {
                frag2.setVisibility(View.GONE);
                frag3.setVisibility(View.GONE);
                finishOnBack = false;
                setTitle("Nuovo buono");
            }
        } else {
            frag2.setVisibility(View.GONE);
            frag3.setVisibility(View.GONE);
            finishOnBack = false;
            setTitle("Nuovo buono");
        }

        //Metodo per i listeners dei bottoni
        initListener();
    }

    @Override
    public boolean onSupportNavigateUp() {
        finish();
        return true;
    }

    private void initListener() {
        rel1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                frag1.setVisibility(View.GONE);
                frag2.setVisibility(View.VISIBLE);
                setTitle("Cinema");
            }
        });
        optcin2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                frag2.setVisibility(View.GONE);
                frag3.setVisibility(View.VISIBLE);
                setTitle("Cinema - Biglietto");
                InputMethodManager inputMethodManager =
                        (InputMethodManager)getSystemService(Context.INPUT_METHOD_SERVICE);
                inputMethodManager.toggleSoftInputFromWindow(
                        optcin2.getApplicationWindowToken(),
                        InputMethodManager.SHOW_FORCED, 0);
            }
        });
        fab_valore.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (txt_valore.getText().toString().equals("")) {
                    Toast.makeText(getApplicationContext(), "Manca l'importo da inserire", Toast.LENGTH_SHORT).show();
                } else if (Integer.parseInt(txt_valore.getText().toString()) > 500) {
                    Toast.makeText(getApplicationContext(), "Importo maggiore di 500 euro!", Toast.LENGTH_SHORT).show();
                } else {
                    Bundle extras = getIntent().getExtras();
                    if (extras != null) {
                        if (getIntent().getExtras().getString("index").equals("valore")) {
                            Intent i = new Intent(getApplicationContext(), VoucherActivity.class);
                            i.putExtra("valore", txt_valore.getText().toString());
                            i.putExtra("type", getIntent().getExtras().getString("type"));
                            i.putExtra("nome", getIntent().getExtras().getString("nome"));
                            startActivity(i);
                        }
                    } else {
                        startActivity(new Intent(getApplicationContext(), VoucherActivity.class));
                    }

                }
            }
        });
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        //Metodo per la selezione delle voci nella bottom bar
        switch (item.getItemId()) {
            case android.R.id.home:
                if (finishOnBack) {
                    super.onBackPressed();
                } else if (frag3.isShown()) {
                    frag3.setVisibility(View.GONE);
                    frag2.setVisibility(View.VISIBLE);
                    setTitle("Cinema");
                } else if (frag2.isShown()) {
                    frag2.setVisibility(View.GONE);
                    frag1.setVisibility(View.VISIBLE);
                    setTitle("Nuovo buono");
                } else {
                    finish();
                }

                return true;

            default:
                return super.onOptionsItemSelected(item);
        }
    }


    @Override
    public void onBackPressed() {
        //Gestione del pulsante 'INDIETRO': se non è sulla home torna prima là e poi esce
        if (finishOnBack) {
            super.onBackPressed();
        } else if (frag3.isShown()) {
            frag3.setVisibility(View.GONE);
            frag2.setVisibility(View.VISIBLE);
            setTitle("Cinema");
        } else if (frag2.isShown()) {
            frag2.setVisibility(View.GONE);
            frag1.setVisibility(View.VISIBLE);
            setTitle("Nuovo buono");
        } else {
            super.onBackPressed();
        }
    }
}
