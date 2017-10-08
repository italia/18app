package com.zrickydev.italy18app.fragments;

import android.os.Bundle;
import android.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;

import com.github.lzyzsd.circleprogress.DonutProgress;
import com.zrickydev.italy18app.R;

/**
 * A simple {@link Fragment} subclass.
 */
public class NewCouponFragment extends Fragment implements View.OnClickListener {

    private DonutProgress progress;
    private Button btnAlreadyInShop;
    private TextView tvWelcome;
    private TextView tvCash;

    public NewCouponFragment() {
        // Required empty public constructor
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        // Inflate the layout for this fragment
        View v = inflater.inflate(R.layout.fragment_new_coupon, container, false);

        progress = v.findViewById(R.id.donut_progress);
        btnAlreadyInShop = v.findViewById(R.id.btn_already_in_shop);
        tvWelcome = v.findViewById(R.id.tv_welcome);
        tvCash = v.findViewById(R.id.tv_cash);

        tvWelcome.setText("Benvenuto Mario, ti restano");
        tvCash.setText("174 €");
        progress.setOnClickListener(this);

        return v;
    }

    @Override
    public void onClick(View view) {
        switch (view.getId()) {
            case R.id.donut_progress:
                NewCouponCategoryFragment fragment = new NewCouponCategoryFragment();
                getFragmentManager().beginTransaction().addToBackStack(null).replace(R.id.content, fragment).commit();
                break;
        }
    }

}
