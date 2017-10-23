import React, { Component } from 'react';
import { View, StyleSheet } from 'react-native';
import {connect} from 'react-redux';
import {NavigationActions} from 'react-navigation';
import * as Constant from '../common/constants';
import MenuBottomItem from '../component/MenuBottomItem';

class MenuBottom extends Component {
  render() {
    console.log(this.props.navigation);
    return (
      <View style={styles.container}>
        <MenuBottomItem onPress={() => this.props.goTo('Home')} />
        <MenuBottomItem onPress={() => this.props.goTo('Coupons')} />
        <MenuBottomItem />
        <MenuBottomItem />
      </View>
    )
  }
}

const mapStateToProps = state => ({
  navigation: state.navigation,
});

const mapDispatchToProps = dispatch => ({
  goTo: screen => dispatch(NavigationActions.navigate({ routeName: screen})),
});

export default connect(mapStateToProps, mapDispatchToProps)(MenuBottom);

const styles = StyleSheet.create({
  container: {
    backgroundColor: Constant.PRIMARY_BLUE,
    flexDirection: 'row',
    justifyContent: 'space-around',
    paddingTop: 14,
    paddingBottom: 9,
  },
});