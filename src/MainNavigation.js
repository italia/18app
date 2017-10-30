import React from 'react';
import Expo from 'expo';
import {StackNavigator} from 'react-navigation';
import {Platform, StyleSheet} from 'react-native';
import * as Constants from './common/constants';
import Home from './screen/Home';
import Coupons from './screen/Coupons';
import Coupon from './screen/Coupon';
import HeaderProfileButton from './component/HeaderProfileButton';
import Shops from './screen/Shops';

export default StackNavigator(
    {
        Home: {
            screen: Home,
        },
        coupons: {
            screen: Coupons,
        },
        shops: {
            screen: Shops,
        },
        'coupons/details': {
            screen: Coupon,
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
