import React, { Component } from 'react';
import { View, Button, Text } from 'react-native';

export default class Home extends Component {
  static navigationOptions = {
    title: 'Home',
  };
  render() {
    const { navigate } = this.props.navigation;
    return (
        <View>
            <Text>Home Page</Text>
            <Button
                onPress={() => navigate('Coupons')}
                title="I tuoi buoni"
            />
        </View>
    );
  }
}