import React from 'react';
import {View} from 'react-native';
import {Provider} from 'react-redux'
import MainApp from './src/Main';
import store from './src/stores';

export default class App extends React.Component {
  render() {
    return (
      <Provider store={store}>
        <MainApp />
      </Provider>
    );
  }
}