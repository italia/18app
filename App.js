import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
// import { Provider } from 'react-redux';
// import createStore from './createStore'

// import { Navigation } from 'react-native-navigation';

export default class App extends React.Component {
  render() {
    return (
      <View style={styles.container}>
        <Text>asdfasdf</Text>
      </View>
    );
  }
}

const colors = {
  main: '#0066cc'
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: colors.main,
    alignItems: 'center',
    justifyContent: 'center',
  },
});
