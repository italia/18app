package com.zrickydev.italy18app.adapters;

import android.annotation.SuppressLint;
import android.content.Context;
import android.graphics.Paint;
import android.support.v4.content.ContextCompat;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import com.zrickydev.italy18app.R;
import com.zrickydev.italy18app.interfaces.OnItemClickListener;
import com.zrickydev.italy18app.models.CouponItem;
import com.zrickydev.italy18app.models.Item;

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.ArrayList;

public class ViewCouponItemAdapter extends RecyclerView.Adapter<ViewCouponItemAdapter.MyViewHolder> {

    private Context context;

    private ArrayList<CouponItem> items = new ArrayList<>();
    private final OnItemClickListener listener;

    public class MyViewHolder extends RecyclerView.ViewHolder {
        ImageView ivIcon;
        TextView tvTitle;
        TextView tvDesc;
        TextView tvSpentIn;
        TextView tvValue;
        ImageView ivDetails;

        public MyViewHolder(View itemView) {
            super(itemView);
            ivIcon = itemView.findViewById(R.id.iv_icon);
            tvTitle = itemView.findViewById(R.id.tv_title);
            tvDesc = itemView.findViewById(R.id.tv_desc);
            tvSpentIn = itemView.findViewById(R.id.tv_spent_in);
            tvValue = itemView.findViewById(R.id.tv_value);
            ivDetails = itemView.findViewById(R.id.iv_details);
        }

        @SuppressLint({"SetTextI18n", "DefaultLocale"})
        public void bind(final CouponItem item, final OnItemClickListener listener) {
            ivIcon.setImageResource(item.getIcon());
            tvTitle.setText(item.getTitle());
            tvDesc.setText(item.getDesc());
            tvValue.setText(String.format("%,.2f", item.getValue()));
            ivDetails.setImageResource(R.drawable.ic_keyboard_arrow_right_black_24dp);

            if (!item.isActive()) {
                ivIcon.setImageResource(item.getIconDisabled());
                tvTitle.setTextColor(ContextCompat.getColor(context, R.color.colorDarkGray));
                tvDesc.setTextColor(ContextCompat.getColor(context, R.color.colorDarkGray));
                tvSpentIn.setText(item.getSpentIn());
                tvValue.setTextColor(ContextCompat.getColor(context, R.color.colorDarkGray));
                tvValue.setPaintFlags(tvValue.getPaintFlags() | Paint.STRIKE_THRU_TEXT_FLAG);
            } else {
                tvSpentIn.setVisibility(View.GONE);
            }

            itemView.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    listener.onCouponItemClick(item);
                }
            });
        }
    }

    public ViewCouponItemAdapter(ArrayList<CouponItem> items, OnItemClickListener listener) {
        this.items = items;
        this.listener = listener;
    }

    @Override
    public ViewCouponItemAdapter.MyViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        View itemView = LayoutInflater.from(parent.getContext()).inflate(R.layout.view_coupon_item, parent, false);

        context = parent.getContext();

        return new MyViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(ViewCouponItemAdapter.MyViewHolder holder, int position) {
        holder.bind(items.get(position), listener);
    }

    @Override
    public int getItemCount() {
        return items.size();
    }
}
