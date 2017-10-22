import React, { Component } from 'react';
import { Text } from 'react-native';

export default class Coupon extends Component {
  static navigationOptions = {
    title: 'I tuoi buoni',
  };

  render() {
    return <Text>Buoni</Text>;
  }
}