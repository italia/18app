import {TabNavigator} from 'react-navigation';
import NearShops from './NearShops';
import OnlineShops from './OnlineShops';
import SearchShop from './SearchShop';
import * as Constants from '../common/constants';

export default TabNavigator(
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
