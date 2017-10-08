package com.zrickydev.italy18app;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.support.v7.widget.Toolbar;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import java.util.ArrayList;
import java.util.List;

import ss.com.bannerslider.banners.Banner;
import ss.com.bannerslider.banners.DrawableBanner;
import ss.com.bannerslider.views.BannerSlider;

public class LoginActivity extends AppCompatActivity {

    private Toolbar toolbar;
    private TextView tvTitle;
    private Button btnSpidAuth;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);

        setupViews();
        setupToolbar();
        setupSlider();
        setupAuthClick();
    }

    private void setupViews() {
        toolbar = findViewById(R.id.toolbar);
        tvTitle = findViewById(R.id.tv_title);
        btnSpidAuth = findViewById(R.id.btn_spid_auth);
    }

    private void setupToolbar() {
        setSupportActionBar(toolbar);
    }

    private void setupSlider() {
        BannerSlider bannerSlider = findViewById(R.id.banner_slider);
        List<Banner> banners = new ArrayList<>();
        banners.add(new DrawableBanner(R.drawable.bg_concerti));
        banners.add(new DrawableBanner(R.drawable.bg_libri));
        banners.add(new DrawableBanner(R.drawable.bg_cinema));
        bannerSlider.setTextView(tvTitle);
        bannerSlider.setBanners(banners);
        bannerSlider.setHideIndicators(true);
    }

    private void setupAuthClick() {
        btnSpidAuth.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                //TODO: Replace this intent with real auth process

                Intent i = new Intent(LoginActivity.this, MainActivity.class);
                startActivity(i);
            }
        });
    }
}
