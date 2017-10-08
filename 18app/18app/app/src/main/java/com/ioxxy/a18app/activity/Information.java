package com.ioxxy.a18app.activity;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.content.Intent;
import android.net.Uri;
import android.view.View;

import com.ioxxy.a18app.R;

public class Information extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_information);
    }

    public void goToSpid (View view) {
        //Naviga sul web
        goToUrl ( "http://www.18app.italia.it/");
    }

    private void goToUrl (String url) {
        //Metodo per uscire dall'app e andare su internet
        Uri uriUrl = Uri.parse(url);
        Intent launchBrowser = new Intent(Intent.ACTION_VIEW, uriUrl);
        startActivity(launchBrowser);
    }

    @Override
    public void onBackPressed() {
        super.onBackPressed();
    }
}