package com.zrickydev.italy18app;

import android.app.Fragment;
import android.app.FragmentManager;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.design.widget.BottomNavigationView;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.view.MenuItem;

import com.zrickydev.italy18app.fragments.NewCouponFragment;
import com.zrickydev.italy18app.fragments.YourCouponFragment;

public class MainActivity extends AppCompatActivity {

    private BottomNavigationView.OnNavigationItemSelectedListener mOnNavigationItemSelectedListener
            = new BottomNavigationView.OnNavigationItemSelectedListener() {

        @Override
        public boolean onNavigationItemSelected(@NonNull MenuItem item) {
            switch (item.getItemId()) {
                case R.id.navigation_new_coupon:
                    changeFragment(0);
                    break;
                case R.id.navigation_your_coupon:
                    changeFragment(1);
                    break;
                case R.id.navigation_shops:
                    //TODO: Add navigation shops fragment
                    break;
                case R.id.navigation_info:
                    //TODO: Add navigation info fragment
                    break;
            }
            return true;
        }

    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Toolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        changeFragment(0);

        BottomNavigationView navigation = findViewById(R.id.navigation);
        BottomNavigationViewHelper.disableShiftMode(navigation);
        navigation.setOnNavigationItemSelectedListener(mOnNavigationItemSelectedListener);

        getFragmentManager().addOnBackStackChangedListener(new FragmentManager.OnBackStackChangedListener() {
            @Override
            public void onBackStackChanged() {
                if (getFragmentManager().getBackStackEntryCount() == 0) finish();
            }
        });
    }

    private void changeFragment(int position) {
        Fragment fragment = null;
        Fragment currentFragment = getFragmentManager().findFragmentById(R.id.content);
        switch (position) {
            case 0:
                if (!(currentFragment instanceof NewCouponFragment)) {
                    fragment = new NewCouponFragment();
                    getFragmentManager().beginTransaction().addToBackStack(null).replace(R.id.content, fragment).commit();
                }
                break;
            case 1:
                if (!(currentFragment instanceof YourCouponFragment)) {
                    fragment = new YourCouponFragment();
                    getFragmentManager().beginTransaction().addToBackStack(null).replace(R.id.content, fragment).commit();
                }
                break;
            case 2:
                break;
        }

    }

}
