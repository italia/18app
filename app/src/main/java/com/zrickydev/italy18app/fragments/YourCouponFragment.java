package com.zrickydev.italy18app.fragments;

import android.os.Bundle;
import android.app.Fragment;
import android.support.v4.view.ViewPager;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.support.design.widget.TabLayout;
import android.widget.ImageView;

import com.zrickydev.italy18app.R;
import com.zrickydev.italy18app.adapters.ViewPagerAdapter;


public class YourCouponFragment extends Fragment {

    private TabLayout tabs;
    private ViewPager viewPager;

    private ImageView ivBackButton;

    public YourCouponFragment() {}

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.fragment_your_coupon, container, false);

        viewPager = v.findViewById(R.id.viewpager);
        tabs = v.findViewById(R.id.tabs);
        ivBackButton = v.findViewById(R.id.iv_back_button);

        setupBackButton();

        setupViewPager(viewPager);
        tabs.setupWithViewPager(viewPager);

        return v;
    }

    private void setupBackButton() {
        ivBackButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                getActivity().onBackPressed();
            }
        });
    }

    private void setupViewPager(ViewPager viewPager) {
        ViewPagerAdapter adapter = new ViewPagerAdapter(getChildFragmentManager());
        adapter.addFragment(new AllCouponFragment(), "TUTTI");
        adapter.addFragment(new ToUseCouponFragment(), "DA SPENDERE");
        adapter.addFragment(new UsedCouponFragment(), "GIÀ SPESI");
        viewPager.setAdapter(adapter);
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
    }

}