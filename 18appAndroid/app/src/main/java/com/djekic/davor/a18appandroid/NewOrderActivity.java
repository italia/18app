package com.djekic.davor.a18appandroid;

import android.content.Intent;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.design.widget.BottomNavigationView;
import android.support.v7.app.AppCompatActivity;
import android.view.MenuItem;


public class NewOrderActivity extends AppCompatActivity {



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_new_order);

        BottomNavigationView bottomNavigationView = (BottomNavigationView) findViewById(R.id.bottom_navigation);
        bottomNavigationView.setSelectedItemId(R.id.action_new);
        bottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId()) {
                    case R.id.action_new:
                        Intent intent0 = new Intent(NewOrderActivity.this, NewOrderActivity.class);
                        startActivity(intent0);
                        break;
                    case R.id.action_buoni:
                        Intent intent1 = new Intent(NewOrderActivity.this, BuoniActivity.class);
                        startActivity(intent1);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                    case R.id.action_shops:
                        Intent intent2 = new Intent(NewOrderActivity.this, Negozioactivity.class);
                        startActivity(intent2);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                    case R.id.action_info:
                        Intent intent3 = new Intent(NewOrderActivity.this, InfoActivity.class);
                        startActivity(intent3);
                        overridePendingTransition(R.animator.slide_from_right, R.animator.slide_to_left);
                        break;
                }
                return true;
            }
        });
    }

}
