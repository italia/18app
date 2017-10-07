package com.djekic.davor.a18appandroid;

import android.app.ProgressDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.ProgressBar;
import android.widget.TextView;


public class PreLoginActivity extends AppCompatActivity {


    TextView txtMoney = (TextView)findViewById(R.id.txtMoney);

    int num;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
<<<<<<< HEAD:18appAndroid/app/src/main/java/com/djekic/davor/a18appandroid/MainActivity.java
        setContentView(R.layout.activity_main);
        String a = txtMoney.getText().toString();
        num = Integer.parseInt(a);

=======
        setContentView(R.layout.activity_pre_login);
>>>>>>> master:18appAndroid/app/src/main/java/com/djekic/davor/a18appandroid/PreLoginActivity.java
    }


    ProgressBar pb = (ProgressBar)findViewById(R.id.progressBar);

}
