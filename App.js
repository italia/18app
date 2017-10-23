import React from 'react';
import Home from './src/screen/Home';
import Coupons from './src/screen/Coupons';
import { StackNavigator } from 'react-navigation';
import MenuBottom from './src/container/MenuBottom';
import {View} from 'react-native';

const Navigator = StackNavigator({
  Home: {
    screen: Home,
  },
  Coupons: {
    screen: Coupons,
  },
});

export default class App extends React.Component {
  render() {
    return (
      <View style={{flex: 1}}>
        <View style={{flex: 1}}>
          <Navigator />
        </View>
        <MenuBottom />
      </View>
    );
  }
}