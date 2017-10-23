import React from 'react';
import {View} from 'react-native';
import {connect} from 'react-redux';
import { addNavigationHelpers } from 'react-navigation';
import MainNavigation from './MainNavigation';
import MenuBottom from './container/MenuBottom';

class Main extends React.Component {
  render() {
    return (
      <View style={{flex: 1}}>
        <View style={{flex: 1}}>
          <MainNavigation navigation={addNavigationHelpers({
            dispatch: this.props.dispatch,
            state: this.props.nav,
          })} />
        </View>
        <MenuBottom />
      </View>
    );
  }
}

const mapStateToProps = (state) => ({
  nav: state.navigation
});

export default connect(mapStateToProps)(Main);
