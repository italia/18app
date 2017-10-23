import React from 'react';
import Home from './screen/Home';
import Coupons from './screen/Coupons';
import { StackNavigator } from 'react-navigation';

export default StackNavigator({
  Home: {
    screen: Home,
  },
  Coupons: {
    screen: Coupons,
  },
});