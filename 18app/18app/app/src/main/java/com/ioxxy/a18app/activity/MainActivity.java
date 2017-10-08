package com.ioxxy.a18app.activity;

import android.Manifest;
import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Typeface;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Build;
import android.os.Bundle;
import android.provider.Settings;
import android.support.design.widget.FloatingActionButton;
import android.support.v4.app.ActivityCompat;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentStatePagerAdapter;
import android.support.v4.content.ContextCompat;
import android.support.v4.view.ViewPager;
import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.CardView;
import android.support.v7.widget.Toolbar;
import android.util.Log;
import android.view.View;
import android.widget.ImageButton;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;

import com.ioxxy.a18app.PlacesData;
import com.ioxxy.a18app.R;
import com.ioxxy.a18app.fragment.Account;
import com.ioxxy.a18app.fragment.Buoni;
import com.ioxxy.a18app.fragment.Credito;
import com.ioxxy.a18app.fragment.Info;
import com.ioxxy.a18app.fragment.Negozi;
import com.ioxxy.a18app.request.RequestDati;
import com.ioxxy.a18app.request.RequestListener;

public class MainActivity extends AppCompatActivity {

    //Attributi per gestire i fragment
    private ScreenSlidePagerAdapter pagerAdapter;
    private ViewPager viewPager;

    //Attributi grafici
    private ImageButton btn_buoni, btn_info, btn_negozi, btn_account;
    private FloatingActionButton btn_credito;
    private RelativeLayout rl_credito;
    private TextView tv_fabtv;
    private TextView tv_credito;

    //Attributi per i font
    private Typeface bold;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //Set dei font
        bold = Typeface.createFromAsset(getAssets(), "fonts/TitilliumWeb-Bold.ttf");


        //Set della toolbar
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        viewPager = (ViewPager) findViewById(R.id.viewPager);

        //Assegnazione degli attributi grafici
        tv_fabtv = (TextView) findViewById(R.id.tv_fabtv);
        btn_buoni = (ImageButton) findViewById(R.id.btn_buoni);
        btn_info = (ImageButton) findViewById(R.id.btn_info);
        btn_negozi = (ImageButton) findViewById(R.id.btn_negozi);
        rl_credito = (RelativeLayout) findViewById(R.id.rl_credito);
        btn_credito = (FloatingActionButton) findViewById(R.id.btn_credito);
        btn_account = (ImageButton) findViewById(R.id.btn_account);
        pagerAdapter = new ScreenSlidePagerAdapter(getSupportFragmentManager());


        viewPager.setAdapter(pagerAdapter);

        //Metodo per inizare l'ascolto dei bottoni
        initListener();

        viewPager.setCurrentItem(2, true);
    }


    public void initListener() {
        //Metodo per scrollare nella bottom navigation
        viewPager.addOnPageChangeListener(new ViewPager.OnPageChangeListener() {
            @Override
            public void onPageScrolled(int position, float positionOffset, int positionOffsetPixels) {

            }

            @Override
            public void onPageSelected(int position) {
                switch (position) {
                    case 0: {
                        //Schermata buoni accumulati
                        tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                        btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        setTitle("");
                        break;
                    }
                    case 1: {
                        //Schermata negozi gps e ricerca
                        btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                        btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        setTitle("");
                        break;
                    }
                    case 2: {
                        //Schermata home
                        btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                        btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        setTitle("");
                        break;
                    }
                    case 3: {
                        //Schermata informazioni
                        btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
                        tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                        btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        setTitle("");
                        break;
                    }
                    case 4: {
                        //Schermata account
                        btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                        btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                        btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
                        setTitle("");
                        break;
                    }
                }
            }

            @Override
            public void onPageScrollStateChanged(int state) {

            }
        });

        //Listener sui bottoni
        btn_credito.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                viewPager.setCurrentItem(2, true);
                tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
            }
        });
        btn_buoni.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                viewPager.setCurrentItem(0, true);
                btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
                tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
            }
        });
        btn_negozi.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                viewPager.setCurrentItem(1, true);
                btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
                tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
            }
        });
        btn_info.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                viewPager.setCurrentItem(3, true);
                btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
                tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);

            }
        });
        btn_account.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                viewPager.setCurrentItem(4, true);
                btn_info.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                tv_fabtv.setTextColor(ContextCompat.getColor(getApplicationContext(), R.color.white));
                btn_buoni.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_negozi.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorGray), android.graphics.PorterDuff.Mode.MULTIPLY);
                btn_account.setColorFilter(ContextCompat.getColor(getApplicationContext(), R.color.colorPrimary), android.graphics.PorterDuff.Mode.MULTIPLY);
            }
        });
    }

    private void checkPermission() {
        //Metodo per i permessi del GPS
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (ActivityCompat.checkSelfPermission(getApplicationContext(), android.Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(getApplicationContext(), android.Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
                requestPermissions(new String[]{Manifest.permission.ACCESS_COARSE_LOCATION, Manifest.permission.ACCESS_FINE_LOCATION}, 1);
            }
        }
    }

    private class ScreenSlidePagerAdapter extends FragmentStatePagerAdapter {
        //Classe per eseguire lo scrool del viewpager
        public ScreenSlidePagerAdapter(FragmentManager fm) {
            super(fm);
        }

        @Override
        public Fragment getItem(int position) {

            switch (position) {
                case 0:
                    return new Buoni();

                case 1:
                    return new Negozi();

                case 2:
                    return new Credito();

                case 3:
                    return new Info();

                case 4:
                    return new Account();
            }
            return null;
        }

        @Override
        public int getCount() {
            return 5;
        }
    }

    @Override
    public void onBackPressed() {
        /*if (viewPager.getCurrentItem() == 2) {
            Toast.makeText(getApplicationContext(), "Effettuare il logout!", Toast.LENGTH_SHORT).show();
        } else {
            viewPager.setCurrentItem(2, true);
        }*/
        super.onBackPressed();
    }
}
