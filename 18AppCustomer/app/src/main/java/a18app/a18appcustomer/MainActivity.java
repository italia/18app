package a18app.a18appcustomer;

import android.support.annotation.NonNull;
import android.support.design.widget.TabLayout;
import android.support.v4.app.Fragment;

import android.support.v4.app.FragmentManager;
import android.support.v4.view.ViewPager;
import android.support.v7.app.ActionBar;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.support.v7.widget.Toolbar;
import android.view.Gravity;
import android.view.MenuItem;
import android.view.View;

import com.ittianyu.bottomnavigationviewex.BottomNavigationViewEx;
import com.mikepenz.materialdrawer.AccountHeader;
import com.mikepenz.materialdrawer.AccountHeaderBuilder;
import com.mikepenz.materialdrawer.Drawer;
import com.mikepenz.materialdrawer.DrawerBuilder;
import com.mikepenz.materialdrawer.model.PrimaryDrawerItem;
import com.mikepenz.materialdrawer.model.ProfileDrawerItem;
import com.mikepenz.materialdrawer.model.SecondaryDrawerItem;
import com.mikepenz.materialdrawer.model.interfaces.IDrawerItem;


public class MainActivity extends AppCompatActivity {


    //fortoolbar
    private TabLayout tabLayout;
    private ViewPager viewPager;
    private BottomNavigationViewEx bnve;
    private int mSelectedItem;
    private FragmentManager fm;
    private static final String SELECTED_ITEM = "arg_selected_item";

    /**
     * @param savedInstanceState
     */

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        //Toolbar
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        toolbar.setSubtitle("Credito: xxx.xx €");
        updateToolbarText("Credito");
        setSupportActionBar(toolbar);

        //NavigationBar covers view
        bnve = (BottomNavigationViewEx) findViewById(R.id.bnve);
        bnve.enableAnimation(true);
        bnve.enableItemShiftingMode(false);
        bnve.enableShiftingMode(false);
        bnve.setIconSize(34, 34);
        bnve.setTextSize(14);
        bnve.setIconsMarginTop(1);

        //Setup Fragment Manager
        fm = getSupportFragmentManager();
        getSupportActionBar().setDisplayHomeAsUpEnabled(true);


        // Create the AccountHeader
        AccountHeader headerResult = new AccountHeaderBuilder()
                .withActivity(this)
                .addProfiles(
                        //Implementare qui la chimata API
                        new ProfileDrawerItem().withName("Mario Rossi").withEmail("youremail@provider.domain").withIcon(getResources().getDrawable(
                                R.drawable.icon_profilo)).withSubItems(new PrimaryDrawerItem().withIdentifier(1).
                                withName(R.string.app_name).withDescription("Credito").withSelectedTextColorRes(R.color.colorBgSecondary))).
                        withHeaderBackground(R.color.md_grey_500).build();

        PrimaryDrawerItem item1 = new PrimaryDrawerItem().withIdentifier(1).withName("Profilo").withIcon(R.drawable.icon_profilo);
        SecondaryDrawerItem item2 = new SecondaryDrawerItem().withIdentifier(2).withName("Notifiche").withIcon(R.drawable.icon_notifiche);
        SecondaryDrawerItem item3 = new SecondaryDrawerItem().withIdentifier(3).withName("Logout").withIcon(R.drawable.icon_logout);


        Drawer drawerResult = new DrawerBuilder()
                .withActivity(this)
                .withToolbar(toolbar).withSliderBackgroundDrawableRes(R.color.colorPrimaryDark)
                .withActionBarDrawerToggle(true)
                .withAccountHeader(headerResult)
                .addDrawerItems(
                        item1,
                        item2,
                        item3
                )
                .build();

        //Set Right
        drawerResult.setGravity(Gravity.RIGHT);

        //Setup Listener
        drawerResult.setOnDrawerItemClickListener(new Drawer.OnDrawerItemClickListener() {
            @Override
            public boolean onItemClick(View view, int position, IDrawerItem drawerItem) {
                switch ((int) drawerItem.getIdentifier()) {
                    case 1:
                        updateToolbarText("Profilo");
                        fm.beginTransaction()
                                //.setCustomAnimations(android.R.animator.fade_in, android.R.animator.fade_out)
                                .replace(R.id.container, new ProfiloFragment())
                                .commit();
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                }
                return true;
            }
        });

        //Navigation selection of Fragments
        bnve.setOnNavigationItemSelectedListener(new BottomNavigationViewEx.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                selectFragment(item);
                return true;
            }
        });

        MenuItem selectedItem;
        if (savedInstanceState != null) {
            mSelectedItem = savedInstanceState.getInt(SELECTED_ITEM, 0);
            selectedItem = bnve.getMenu().findItem(mSelectedItem);
        } else {
            selectedItem = bnve.getMenu().getItem(0);
        }
        selectFragment(selectedItem);
    }


    @Override
    protected void onSaveInstanceState(Bundle outState) {
        outState.putInt(SELECTED_ITEM, mSelectedItem);
        super.onSaveInstanceState(outState);
    }

    @Override
    public void onBackPressed() {
        MenuItem homeItem = bnve.getMenu().getItem(0);
        if (mSelectedItem != homeItem.getItemId()) {
            // select home item
            bnve.setCurrentItem(0);
        } else {
            super.onBackPressed();
        }
    }

    private void selectFragment(MenuItem item) {
        Fragment frag = null;
        // init corresponding fragment

        switch (item.getItemId()) {
            case R.id.action_nuovo:
                frag = (Fragment) new BuoniFragment();
                break;
            case R.id.action_portafoglio:
                frag = (Fragment) new WalletFragment();
                break;
            case R.id.action_negozi:
                break;
            case R.id.action_info:
                frag = (Fragment) new InfoFragment();
                break;
        }

        updateToolbarText(item.getTitle());

        if (frag != null) {
            fm.beginTransaction()
                    //.setCustomAnimations(android.R.animator.fade_in, android.R.animator.fade_out)
                    .replace(R.id.container, frag, frag.getTag())
                    .commit();
        }
    }

    private void updateToolbarText(CharSequence text) {
        ActionBar actionBar = getSupportActionBar();
        if (actionBar != null) {
            actionBar.setTitle(text);
        }
    }
}

