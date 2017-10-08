package com.djekic.davor.a18appandroid;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.widget.ImageSwitcher;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.ViewSwitcher;


public class PreLoginActivity extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_pre_login);


        RelativeLayout layout = (RelativeLayout) findViewById(R.id.relative_down);
        layout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(PreLoginActivity.this, MainActivity.class);
                startActivity(i);
            }
        });

        //inizializza una imageView all'interno dell'imageSwitcher
        final ImageSwitcher img = (ImageSwitcher) findViewById(R.id.imgSwitch);
        img.setFactory(new ViewSwitcher.ViewFactory() {
            public View makeView() {
                ImageView imageView = new ImageView(getApplicationContext());
                imageView.setLayoutParams(new ImageSwitcher.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));
                return imageView;
            }
        });

        //effettua animazione durante la transizione dell'immagine
        Animation in = AnimationUtils.loadAnimation(this, android.R.anim.slide_in_left);
        Animation out = AnimationUtils.loadAnimation(this, android.R.anim.slide_out_right);
        img.setInAnimation(in);
        img.setOutAnimation(out);

        //cambia immagine dell'imageSwitcher ogni 3 secondi
        img.postDelayed(new Runnable() {
            int i = 0;
            ImageSwitcher image = (ImageSwitcher) findViewById(R.id.imgSwitch);
            TextView txt = (TextView) findViewById(R.id.textEventi);
            public void run() {
                switch (i) {
                    case 0:
                        txt.setText("cinema");
                        image.setImageResource(R.drawable.bg_cinema);
                        i++;
                        break;
                    case 1:
                        txt.setText("libri");
                        image.setImageResource(R.drawable.bg_libri);
                        i++;
                        break;
                    case 2:
                        txt.setText("concerti");
                        image.setImageResource(R.drawable.bg_concerti);
                        i = 0;
                }
                img.postDelayed(this, 3000);
            }
        }, 0);
    }


















    /*private void autoChange() {
        RelativeLayout layout = (RelativeLayout) findViewById(R.id.relative_center);
        Drawable drawable = res.getDrawable(R.drawable.bg_libri);
        layout.setBackground(drawable);
    }*/
}
