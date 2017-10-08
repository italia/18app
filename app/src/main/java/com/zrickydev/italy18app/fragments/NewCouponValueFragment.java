package com.zrickydev.italy18app.fragments;

import android.os.Bundle;
import android.app.Fragment;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;

import com.pixplicity.easyprefs.library.Prefs;
import com.zrickydev.italy18app.Config;
import com.zrickydev.italy18app.R;

public class NewCouponValueFragment extends Fragment {

    private ImageView ivBackButton;
    private ImageView ivIcon;
    private TextView tvTitle;
    private ImageView ivIconPT;
    private TextView tvTitlePT;
    private EditText etValue;
    private Button btnCreateCoupon;

    public NewCouponValueFragment() {}

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.fragment_new_coupon_value, container, false);

        ivBackButton = v.findViewById(R.id.iv_back_button);
        ivIcon = v.findViewById(R.id.iv_icon);
        tvTitle = v.findViewById(R.id.tv_title);
        ivIconPT = v.findViewById(R.id.iv_icon_pt);
        tvTitlePT = v.findViewById(R.id.tv_title_pt);
        etValue = v.findViewById(R.id.et_value);
        btnCreateCoupon = v.findViewById(R.id.btn_create_coupon);

        ivIcon.setImageResource(Prefs.getInt(Config.PREFS_ITEM_ICON, 0));
        tvTitle.setText(Prefs.getString(Config.PREFS_ITEM_TITLE, null));
        ivIconPT.setImageResource(Prefs.getInt(Config.PREFS_ITEM_CATEGORY_ICON, 0));
        tvTitlePT.setText(Prefs.getString(Config.PREFS_ITEM_CATEGORY_TITLE, null));

        setupBackButton();
        setupCreateCouponButton();

        return v;
    }

    private void setupCreateCouponButton() {
        btnCreateCoupon.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String value = etValue.getText().toString();

                if (!TextUtils.isEmpty(value)) {
                    Prefs.putDouble(Config.PREFS_ITEM_VALUE, Double.parseDouble(value));

                    NewCouponDetailFragment fragment = new NewCouponDetailFragment();
                    getFragmentManager().beginTransaction().addToBackStack(null).replace(R.id.content, fragment).commit();
                } else {
                    etValue.setError("Valore del buono richiesto");
                }
            }
        });
    }

    private void setupBackButton() {
        ivBackButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                getActivity().onBackPressed();
            }
        });
    }

}
