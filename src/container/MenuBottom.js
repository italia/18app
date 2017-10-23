import React, { Component } from 'react';
import { View, StyleSheet } from 'react-native';
import PropTypes from 'prop-types';
import * as Constant from '../common/constants';
import MenuBottomItem from '../component/MenuBottomItem';

export default class MenuBottom extends Component {
  render() {
    return (
      <View style={styles.container}>
        <MenuBottomItem />
        <MenuBottomItem active={true} />
        <MenuBottomItem />
        <MenuBottomItem />
      </View>
    )
  }
}

const styles = StyleSheet.create({
  container: {
    backgroundColor: Constant.PRIMARY_BLUE,
    flexDirection: 'row',
    justifyContent: 'space-around',
    paddingTop: 14,
    paddingBottom: 9,
  },
});