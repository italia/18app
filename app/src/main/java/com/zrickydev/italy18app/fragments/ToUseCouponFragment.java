package com.zrickydev.italy18app.fragments;


import android.os.Bundle;
import android.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import com.zrickydev.italy18app.R;


/**
 * A simple {@link Fragment} subclass.
 */
public class ToUseCouponFragment extends Fragment {


    public ToUseCouponFragment() {
        // Required empty public constructor
    }


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_to_use_coupon, container, false);
    }

}
