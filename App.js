import React from 'react';
import Home from './src/screen/Home';
import Coupons from './src/screen/Coupons';
import { StackNavigator } from 'react-navigation';

const App = StackNavigator({
  Home: {
    screen: Home,
  },
  Coupons: {
    screen: Coupons,
  },
});

export default App;