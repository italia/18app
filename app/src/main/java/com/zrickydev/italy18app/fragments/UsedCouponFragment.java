package com.zrickydev.italy18app.fragments;


import android.os.Bundle;
import android.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import com.zrickydev.italy18app.R;

public class UsedCouponFragment extends Fragment {


    public UsedCouponFragment() {

    }


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        View v = inflater.inflate(R.layout.fragment_used_coupon, container, false);
        return v;

    }

}
