package com.zrickydev.italy18app.models;

/**
 * Created by edoardo on 08/10/17.
 */

public class CouponItem {
    private int id;
    private String title;
    private String desc;
    private String spentIn;
    private int icon;
    private int iconDisabled;
    private double value;
    private boolean isActive;

    public CouponItem() {}

    public CouponItem(int id, String title, String desc, String spentIn, int icon, int iconDisabled, double value, boolean isActive) {
        this.id = id;
        this.title = title;
        this.desc = desc;
        this.spentIn = spentIn;
        this.icon = icon;
        this.iconDisabled = iconDisabled;
        this.value = value;
        this.isActive = isActive;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getDesc() {
        return desc;
    }

    public void setDesc(String desc) {
        this.desc = desc;
    }

    public String getSpentIn() {
        return spentIn;
    }

    public void setSpentIn(String spentIn) {
        this.spentIn = spentIn;
    }

    public int getIcon() {
        return icon;
    }

    public void setIcon(int icon) {
        this.icon = icon;
    }

    public int getIconDisabled() {
        return iconDisabled;
    }

    public void setIconDisabled(int iconDisabled) {
        this.iconDisabled = iconDisabled;
    }

    public double getValue() {
        return value;
    }

    public void setValue(double value) {
        this.value = value;
    }

    public boolean isActive() {
        return isActive;
    }

    public void setActive(boolean active) {
        isActive = active;
    }
}
