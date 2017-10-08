package com.ioxxy.a18app.activity;

import android.content.Intent;
import android.graphics.Typeface;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.widget.Button;
import android.widget.RelativeLayout;
import android.widget.TextView;

import com.ioxxy.a18app.R;


public class LogInActivity extends AppCompatActivity {
    //Dichiarazione degli attributi
    private Button btn_spid;
    private Button btn_info;
    private Button spid;
    private RelativeLayout slideLogin;
    private TextView textLogin;

    //Attributi per l'animazione
    private Thread slide;
    private Animation fadeIn;
    private boolean startThread = true;

    //Attributi per i font
    private Typeface bold;
    private Typeface italic;
    private Typeface regular;
    private TextView tv_5;
    private TextView tv_6;
    private TextView tv_7;
    private TextView tv_8;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);

        //Assegnazione dei font
        bold = Typeface.createFromAsset(getAssets(), "fonts/TitilliumWeb-Bold.ttf");
        italic = Typeface.createFromAsset(getAssets(), "fonts/TitilliumWeb-Italic.ttf");
        regular = Typeface.createFromAsset(getAssets(), "fonts/TitilliumWeb-Regular.ttf");

        //Assegnazione degli elementi grafici con gli attributi
        btn_spid = (Button) findViewById(R.id.btn_spid);
        btn_info = (Button) findViewById(R.id.btn_info);
        spid = (Button) findViewById(R.id.spid);
        slideLogin = (RelativeLayout) findViewById(R.id.slideLogin);
        textLogin = (TextView) findViewById(R.id.textLogin);
        tv_5 = (TextView) findViewById(R.id.textView5);
        tv_6 = (TextView) findViewById(R.id.textView6);
        tv_7 = (TextView) findViewById(R.id.textView7);
        tv_8 = (TextView) findViewById(R.id.TextView8);

        //Set dei font
        tv_5.setTypeface(bold);
        tv_6.setTypeface(regular);
        tv_7.setTypeface(bold);
        tv_8.setTypeface(regular);
        textLogin.setTypeface(italic);

        //Inizializza l'animazione
        fadeIn = AnimationUtils.loadAnimation(LogInActivity.this, R.anim.fade_in);
        slide();

        //Metodo per settare i listener dei bottoni
        initListeners();
    }

    private void initListeners(){
        btn_spid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startThread = false;
                slide.interrupt();
                startActivityForResult(new Intent(getApplicationContext(), InfoSpid.class), 1);
            }
        });
        btn_info.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startThread = false;
                slide.interrupt();
                startActivityForResult(new Intent(getApplicationContext(), Information.class), 1);
            }
        });

        spid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(getApplicationContext(), MainActivity.class));
            }
        });
    }

    private void slide() {
        //Metodo per fare l'animazione
        textLogin.setText("concerti");
        slideLogin.setBackgroundResource(R.drawable.concerti);
        slide = new Thread(new Runnable() {
            @Override
            public void run() {
                while (startThread) {
                    try {
                        Thread.sleep(3000);
                        runOnUiThread(new Runnable() {
                            @Override
                            public void run() {
                                textLogin.setText("libri");
                                slideLogin.startAnimation(fadeIn);

                                fadeIn.setAnimationListener(new Animation.AnimationListener() {
                                    @Override
                                    public void onAnimationStart(Animation animation) {
                                    }

                                    @Override
                                    public void onAnimationEnd(Animation animation) {
                                        Animation fadeOut = AnimationUtils.loadAnimation(LogInActivity.this, R.anim.fade_out);
                                        slideLogin.setBackgroundResource(R.drawable.libriback);
                                        slideLogin.startAnimation(fadeOut);
                                    }


                                    @Override
                                    public void onAnimationRepeat(Animation animation) {
                                    }
                                });
                            }
                        });
                        Thread.sleep(3000);
                        runOnUiThread(new Runnable() {
                            @Override
                            public void run() {
                                textLogin.setText("cinema");
                                slideLogin.startAnimation(fadeIn);

                                fadeIn.setAnimationListener(new Animation.AnimationListener() {
                                    @Override
                                    public void onAnimationStart(Animation animation) {
                                    }

                                    @Override
                                    public void onAnimationEnd(Animation animation) {
                                        Animation fadeOut = AnimationUtils.loadAnimation(LogInActivity.this, R.anim.fade_out);
                                        slideLogin.setBackgroundResource(R.drawable.cinema);
                                        slideLogin.startAnimation(fadeOut);
                                    }

                                    @Override
                                    public void onAnimationRepeat(Animation animation) {
                                    }
                                });
                            }
                        });
                        Thread.sleep(3000);
                        runOnUiThread(new Runnable() {
                            @Override
                            public void run() {
                                textLogin.setText("concerti");
                                slideLogin.startAnimation(fadeIn);

                                fadeIn.setAnimationListener(new Animation.AnimationListener() {
                                    @Override
                                    public void onAnimationStart(Animation animation) {
                                    }

                                    @Override
                                    public void onAnimationEnd(Animation animation) {
                                        Animation fadeOut = AnimationUtils.loadAnimation(LogInActivity.this, R.anim.fade_out);
                                        slideLogin.setBackgroundResource(R.drawable.concerti);
                                        slideLogin.startAnimation(fadeOut);
                                    }

                                    @Override
                                    public void onAnimationRepeat(Animation animation) {
                                    }
                                });
                            }
                        });
                    } catch (InterruptedException ex) {
                        ex.printStackTrace();
                    }
                }
            }
        });
        slide.start();
    }

    @Override
    public void onBackPressed() {
        super.finish();
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        //Metodo per riattivare l'animazione quando si ritorna su questa activity
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == 1) {
            startThread = true;
            slide();
        }
    }
}

