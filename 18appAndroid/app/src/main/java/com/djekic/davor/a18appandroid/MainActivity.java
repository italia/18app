package com.djekic.davor.a18appandroid;

import android.os.Bundle;
import android.support.design.widget.BottomNavigationView;
import android.support.v7.app.AppCompatActivity;


public class MainActivity extends AppCompatActivity {



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        BottomNavigationView bottomNavigationView = (BottomNavigationView)findViewById(R.id.bottom_navigation);

        //Set new order as selected
        bottomNavigationView.setSelectedItemId(R.id.action_new);



        //(bottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener()
        //)){
            //@Override
            /*public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId())
                {
                    case R.id.action_home:
                        Intent i = new Intent(Orders.this, Home.class);
                        i.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                        startActivity(i);

                        break;
                    case R.id.action_new:
                        Intent intent = new Intent(Orders.this, NewOrder.class);
                        intent.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                        startActivity(intent);
                        break;
                }
                return true;
            }*/
        //});









    }


}
