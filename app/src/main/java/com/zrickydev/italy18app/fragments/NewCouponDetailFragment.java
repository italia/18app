package com.zrickydev.italy18app.fragments;

import android.os.Bundle;
import android.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import com.pixplicity.easyprefs.library.Prefs;
import com.zrickydev.italy18app.Config;
import com.zrickydev.italy18app.R;

public class NewCouponDetailFragment extends Fragment {

    private ImageView ivIcon;
    private ImageView ivIconPT;
    private TextView tvTitle;
    private TextView tvTitlePT;
    private TextView tvTitleValue;

    private ImageView ivBackButton;

    public NewCouponDetailFragment() {}

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.fragment_new_coupon_detail, container, false);

        setupViews(v);
        setupScreenDetails();
        setupBackButton();

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

    private void setupScreenDetails() {
        ivIcon.setImageResource(Prefs.getInt(Config.PREFS_ITEM_ICON, 0));
        ivIconPT.setImageResource(Prefs.getInt(Config.PREFS_ITEM_CATEGORY_ICON, 0));
        tvTitle.setText(Prefs.getString(Config.PREFS_ITEM_TITLE, null));
        tvTitlePT.setText(Prefs.getString(Config.PREFS_ITEM_CATEGORY_TITLE, null));
        tvTitleValue.setText(Double.toString(Prefs.getDouble(Config.PREFS_ITEM_VALUE, 0)));
    }

    private void setupViews(View v) {
        ivIcon = v.findViewById(R.id.iv_icon);
        ivIconPT = v.findViewById(R.id.iv_icon_pt);
        tvTitle = v.findViewById(R.id.tv_title);
        tvTitlePT = v.findViewById(R.id.tv_title_pt);
        tvTitleValue = v.findViewById(R.id.tv_title_value);
        ivBackButton = v.findViewById(R.id.iv_back_button);
    }

}
