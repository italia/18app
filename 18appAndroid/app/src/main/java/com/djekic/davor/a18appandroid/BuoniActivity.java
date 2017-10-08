package com.djekic.davor.a18appandroid;

import android.content.Intent;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.design.widget.BottomNavigationView;
import android.support.v7.app.AppCompatActivity;
import android.view.MenuItem;

public class BuoniActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_buoni);

        BottomNavigationView bottomNavigationView = (BottomNavigationView) findViewById(R.id.bottom_navigation);
        bottomNavigationView.setSelectedItemId(R.id.action_buoni);
        bottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId()) {
                    case R.id.action_new:
                        Intent intent0 = new Intent(BuoniActivity.this, NewOrderActivity.class);
                        startActivity(intent0);
                        overridePendingTransition(R.animator.slide_from_left, R.animator.slide_to_right);
                        break;
                    case R.id.action_buoni:
                        Intent intent1 = new Intent(BuoniActivity.this, BuoniActivity.class);
                        startActivity(intent1);
                        break;
                    case R.id.action_shops:
                        Intent intent2 = new Intent(BuoniActivity.this, Negozioactivity.class);
                        startActivity(intent2);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                    case R.id.action_info:
                        Intent intent3 = new Intent(BuoniActivity.this, InfoActivity.class);
                        startActivity(intent3);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                }
                return true;
            }
        });
    }
}
