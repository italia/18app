import React, { Component } from 'react'
import { Platform, StyleSheet, Text, View } from 'react-native'

import { TabNavigator, StackNavigator } from 'react-navigation'

const Home = () => <View style={{ flex: 1, backgroundColor: 'white' }} />
const Test = () => <View style={{ flex: 1, backgroundColor: 'yellow' }} />

import Login from './components/pages/login'

export default StackNavigator({
  Login: {
    screen: Login
  },
  Main: {
    screen: TabNavigator({
      Home: { screen: Home },
      Test: { screen: Test }
    })
  }
}, {
    navigationOptions: {
      header: null
    }
  })
