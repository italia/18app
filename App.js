import React from 'react';
import {View} from 'react-native';
import {Provider} from 'react-redux'
import MainApp from './src/Main';
import store from './src/stores';
import moment from 'moment';
import 'moment/locale/it';

moment.locale('it');

export default class App extends React.Component {
  render() {
    return (
      <Provider store={store}>
        <MainApp />
      </Provider>
    );
  }
}