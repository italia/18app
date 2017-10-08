package com.zrickydev.italy18app;

import android.app.Application;
import android.content.ContextWrapper;

import com.pixplicity.easyprefs.library.Prefs;

/**
 * Created by edoardo on 08/10/17.
 */

public class Config extends Application {

    public static final String PREFS_ITEM_ID = "prefs_item_id";
    public static final String PREFS_ITEM_TITLE = "prefs_item_title";
    public static final String PREFS_ITEM_ICON = "prefs_item_icon";
    public static final String PREFS_ITEM_VALUE = "prefs_item_value";

    public static final String PREFS_ITEM_CATEGORY_ID = "prefs_item_category_id";
    public static final String PREFS_ITEM_CATEGORY_TITLE = "prefs_item_category_title";
    public static final String PREFS_ITEM_CATEGORY_ICON = "prefs_item_category_icon";

    @Override
    public void onCreate() {
        super.onCreate();
        new Prefs.Builder()
                .setContext(this)
                .setMode(ContextWrapper.MODE_PRIVATE)
                .setPrefsName(getPackageName())
                .setUseDefaultSharedPreference(true)
                .build();
    }

}
