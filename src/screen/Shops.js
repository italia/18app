import {TabNavigator, TabBarTop} from 'react-navigation';
import NearShops from './NearShops';
import OnlineShops from './OnlineShops';
import SearchShop from './SearchShop';
import * as Constants from '../common/constants';

export default TabNavigator(
    {
        'shops/near': {
            screen: NearShops,
            navigationOptions: {
                title: 'Negozi',
                tabBarLabel: 'VICINO A TE',
            },
        },
        'shops/online': {
            screen: OnlineShops,
            navigationOptions: {
                title: 'Negozi',
                tabBarLabel: 'SU INTERNET',
            },
        },
        'shops/search': {
            screen: SearchShop,
            navigationOptions: {
                title: 'Negozi',
                tabBarLabel: 'RICERCA',
            },
        },
    },
    {
        tabBarComponent: TabBarTop,
        tabBarPosition: 'top',
        animationEnabled: true,
        tabBarOptions: {
            labelStyle: {
                fontSize: 12,
                fontFamily: Constants.TITILLIUM_BOLD,
            },
            tabStyle: {
                height: 48,
            },
            indicatorStyle: {
                backgroundColor: Constants.WHITE,
            },
            style: {
                backgroundColor: Constants.SECONDARY_BLUE,
            },
        },
    },
);
