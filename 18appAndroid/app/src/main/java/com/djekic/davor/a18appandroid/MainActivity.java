package com.djekic.davor.a18appandroid;

import android.animation.ObjectAnimator;
import android.content.Intent;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.design.widget.BottomNavigationView;
import android.support.v7.app.AppCompatActivity;
import android.view.MenuItem;
import android.view.View;
import android.view.animation.Animation;
import android.view.animation.TranslateAnimation;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.RelativeLayout;


public class MainActivity extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        ImageButton btn = (ImageButton) findViewById(R.id.btnPlus);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, NewOrderActivity.class);
                intent.addFlags((Intent.FLAG_ACTIVITY_NO_ANIMATION));
                startActivity(intent);
            }
        });


        ImageView img = (ImageView) findViewById(R.id.btnVoteApp);
        img.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                //to do -- alert for voting
            }
        });

        //Initializes the relative layouts
        final RelativeLayout profileLayout;
        final RelativeLayout homeLayout;
        profileLayout = (RelativeLayout) findViewById(R.id.profileRelativeLayout);
        homeLayout = (RelativeLayout) findViewById(R.id.homeRelativeLayout);


        //On homeLayout, if the user swipes left, it opens the profile section
        homeLayout.setOnTouchListener(new OnSwipeTouchListener(MainActivity.this) {
            public void onSwipeLeft() {
                if (profileLayout.getVisibility() == View.INVISIBLE) {
                    ObjectAnimator animation = ObjectAnimator.ofFloat(homeLayout, "x", 0, -800);
                    animation.setDuration(200);
                    animation.start();
                    TranslateAnimation animate = new TranslateAnimation(600, 0, 0, 0);
                    animate.setDuration(200);
                    profileLayout.startAnimation(animate);
                    profileLayout.setVisibility(View.VISIBLE);
                } else {
                    ObjectAnimator animationReturn = ObjectAnimator.ofFloat(homeLayout, "x", -600, 0);
                    animationReturn.setDuration(200);
                    animationReturn.start();
                    TranslateAnimation animateReturn = new TranslateAnimation(0, 600, 0, 0);
                    animateReturn.setDuration(200);
                    profileLayout.startAnimation(animateReturn);
                    animateReturn.setAnimationListener(new Animation.AnimationListener() {
                        @Override
                        public void onAnimationStart(Animation animation) {
                            //some code to make it wait here?
                        }

                        @Override
                        public void onAnimationEnd(Animation animation) {
                            profileLayout.setVisibility(View.INVISIBLE);
                        }

                        @Override
                        public void onAnimationRepeat(Animation animation) {
                        }
                    });
                }
            }
        });

        //On profileLayout, if the user swipes right, it closes the profile section
        profileLayout.setOnTouchListener(new OnSwipeTouchListener(MainActivity.this) {
            public void onSwipeRight() {
                ObjectAnimator animationReturn = ObjectAnimator.ofFloat(homeLayout, "x", -600, 0);
                animationReturn.setDuration(200);
                animationReturn.start();
                TranslateAnimation animateReturn = new TranslateAnimation(0, 800, 0, 0);
                animateReturn.setDuration(200);
                profileLayout.startAnimation(animateReturn);
                animateReturn.setAnimationListener(new Animation.AnimationListener()

                {
                    @Override
                    public void onAnimationStart(Animation animation) {
                        //some code to make it wait here?

                    }

                    @Override
                    public void onAnimationEnd(Animation animation) {
                        profileLayout.setVisibility(View.INVISIBLE);
                    }

                    @Override
                    public void onAnimationRepeat(Animation animation) {
                    }
                });
            }
        });


        //Opens profile layout or closes it with the click of the user image
        ImageButton profile = (ImageButton) findViewById(R.id.btnUserProfile);
        profile.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (profileLayout.getVisibility() == View.INVISIBLE) {
                    ObjectAnimator animation = ObjectAnimator.ofFloat(homeLayout, "x", 0, -800);
                    animation.setDuration(200);
                    animation.start();
                    TranslateAnimation animate = new TranslateAnimation(600, 0, 0, 0);
                    animate.setDuration(200);
                    profileLayout.startAnimation(animate);
                    profileLayout.setVisibility(View.VISIBLE);
                } else {
                    ObjectAnimator animationReturn = ObjectAnimator.ofFloat(homeLayout, "x", -600, 0);
                    animationReturn.setDuration(200);
                    animationReturn.start();
                    TranslateAnimation animateReturn = new TranslateAnimation(0, 600, 0, 0);
                    animateReturn.setDuration(200);
                    profileLayout.startAnimation(animateReturn);
                    animateReturn.setAnimationListener(new Animation.AnimationListener() {
                        @Override
                        public void onAnimationStart(Animation animation) {
                            //some code to make it wait here?
                        }

                        @Override
                        public void onAnimationEnd(Animation animation) {
                            profileLayout.setVisibility(View.INVISIBLE);
                        }

                        @Override
                        public void onAnimationRepeat(Animation animation) {
                        }
                    });
                }
            }
        });

        //Close profile layout with the click of the X button
        Button close = (Button) findViewById(R.id.buttonClose);
        close.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (profileLayout.getVisibility() == View.VISIBLE) {
                    ObjectAnimator animationReturn = ObjectAnimator.ofFloat(homeLayout, "x", -600, 0);
                    animationReturn.setDuration(200);
                    animationReturn.start();
                    TranslateAnimation animateReturn = new TranslateAnimation(0, 800, 0, 0);
                    animateReturn.setDuration(200);
                    profileLayout.startAnimation(animateReturn);
                    animateReturn.setAnimationListener(new Animation.AnimationListener() {
                        @Override
                        public void onAnimationStart(Animation animation) {
                            //some code to make it wait here?

                        }

                        @Override
                        public void onAnimationEnd(Animation animation) {
                            profileLayout.setVisibility(View.INVISIBLE);
                        }

                        @Override
                        public void onAnimationRepeat(Animation animation) {
                        }
                    });
                } else {
                    ObjectAnimator animation = ObjectAnimator.ofFloat(homeLayout, "x", 0, -600);
                    animation.setDuration(200);
                    animation.start();
                    TranslateAnimation animate = new TranslateAnimation(600, 0, 0, 0);
                    animate.setDuration(200);
                    profileLayout.startAnimation(animate);
                    profileLayout.setVisibility(View.VISIBLE);

                }
            }
        });


        //Sets the actions for every item of the menu
        BottomNavigationView bottomNavigationView = (BottomNavigationView) findViewById(R.id.bottom_navigation);
        bottomNavigationView.setSelected(false);
        bottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId()) {
                    case R.id.action_new:
                        Intent intent0 = new Intent(MainActivity.this, NewOrderActivity.class);
                        startActivity(intent0);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                    case R.id.action_buoni:
                        Intent intent1 = new Intent(MainActivity.this, BuoniActivity.class);
                        startActivity(intent1);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                    case R.id.action_shops:
                        Intent intent2 = new Intent(MainActivity.this, MapsActivity.class);
                        startActivity(intent2);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                    case R.id.action_info:
                        Intent intent3 = new Intent(MainActivity.this, InfoActivity.class);
                        startActivity(intent3);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                }
                return true;
            }
        });
    }
}
