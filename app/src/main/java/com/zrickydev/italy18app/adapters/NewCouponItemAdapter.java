package com.zrickydev.italy18app.adapters;

import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import com.zrickydev.italy18app.R;
import com.zrickydev.italy18app.interfaces.OnItemClickListener;
import com.zrickydev.italy18app.models.Item;

import org.w3c.dom.Text;

import java.util.ArrayList;

public class NewCouponItemAdapter extends RecyclerView.Adapter<NewCouponItemAdapter.MyViewHolder> {

    private ArrayList<Item> items = new ArrayList<>();
    private final OnItemClickListener listener;

    public class MyViewHolder extends RecyclerView.ViewHolder {
        ImageView ivIcon;
        TextView tvTitle;

        public MyViewHolder(View itemView) {
            super(itemView);
            ivIcon = itemView.findViewById(R.id.iv_icon);
            tvTitle = itemView.findViewById(R.id.tv_title);
        }

        public void bind(final Item item, final OnItemClickListener listener) {
            ivIcon.setImageResource(item.getIcon());
            tvTitle.setText(item.getTitle());
            itemView.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    listener.onItemClick(item);
                }
            });
        }
    }

    public NewCouponItemAdapter(ArrayList<Item> items, OnItemClickListener listener) {
        this.items = items;
        this.listener = listener;
    }

    @Override
    public NewCouponItemAdapter.MyViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        View itemView = LayoutInflater.from(parent.getContext()).inflate(R.layout.new_coupon_item, parent, false);

        return new MyViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(NewCouponItemAdapter.MyViewHolder holder, int position) {
        holder.bind(items.get(position), listener);
    }

    @Override
    public int getItemCount() {
        return items.size();
    }
}
