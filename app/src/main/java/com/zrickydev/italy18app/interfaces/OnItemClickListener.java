package com.zrickydev.italy18app.interfaces;

import com.zrickydev.italy18app.models.CouponItem;
import com.zrickydev.italy18app.models.Item;

public interface OnItemClickListener {
    void onItemClick(Item item);
    void onCouponItemClick(CouponItem item);
}
