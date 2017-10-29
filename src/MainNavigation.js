import React from 'react';
import Expo from 'expo';
import {StackNavigator, TabNavigator} from 'react-navigation';
import {Platform, StyleSheet} from 'react-native';
import * as Constants from './common/constants';
import Home from './screen/Home';
import Coupons from './screen/Coupons';
import HeaderProfileButton from './component/HeaderProfileButton';
import NearShops from './screen/NearShops';
import OnlineShops from './screen/OnlineShops';
import SearchShop from './screen/SearchShop';

const Shops = TabNavigator(
    {
        NearToYou: {
            screen: NearShops,
        },
        Online: {
            screen: OnlineShops,
        },
        Search: {
            screen: SearchShop,
        },
    },
    {
        tabBarPosition: 'top',
        animationEnabled: true,
        tabBarOptions: {
            tabBarComponent: 'TabBarTop',
            activeTintColor: Constants.WHITE,
            indicatorStyle: {backgroundColor: Constants.WHITE},
            labelStyle: {
                fontFamily: Constants.TITILLIUM_BOLD,
                fontSize: 14,
            },
        },
    },
);

export default StackNavigator(
    {
        Home: {
            screen: Home,
        },
        coupons: {
            screen: Coupons,
        },
        Shops: {
            screen: Shops,
        },
    },
    {
        navigationOptions: ({navigation, screenProps}) => ({
            headerRight: <HeaderProfileButton />,
            headerStyle: [
                {
                    backgroundColor: Constants.PRIMARY_BLUE,
                },
                styles.navigationPadding,
            ],
            headerTitleStyle: {
                color: '#fff',
            },
        }),
    },
);

const styles = StyleSheet.create({
    navigationPadding: {
        ...Platform.select({
            ios: {
                // pass
            },
            android: {
                paddingTop: Expo.Constants.statusBarHeight,
                height: Expo.Constants.statusBarHeight + 56,
            },
        }),
    },
});
