import React, {Component} from 'react';
import {View, StyleSheet} from 'react-native';
import {connect} from 'react-redux';
import {NavigationActions} from 'react-navigation';
import PropTypes from 'prop-types';
import * as Constant from '../common/constants';
import MenuBottomItem from '../component/MenuBottomItem';

class MenuBottom extends Component {
    static propTypes = {
        goTo: PropTypes.func.isRequired,
        navigation: PropTypes.shape({
            index: PropTypes.number.isRequired,
            routes: PropTypes.array.isRequired,
        }),
    };

    _activeHelper(route) {
        const stackNavigator = this.props.navigation.routes[0].routes[0];
        const currentRoute = stackNavigator.routes[stackNavigator.index];

        return route === currentRoute.routeName;
    }

    render() {
        console.log(this.props.navigation);
        return (
            <View style={styles.container}>
                <MenuBottomItem
                    text="Nuovo"
                    icon={require('../res/icon-plus-white.png')}
                    onPress={() => this.props.goTo('coupons/new')}
                    active={this._activeHelper('coupons/new')}
                />
                <MenuBottomItem
                    text="I tuoi buoni"
                    icon={require('../res/icon-wallet-white.png')}
                    onPress={() => this.props.goTo('coupons')}
                    active={this._activeHelper('coupons')}
                />
                <MenuBottomItem
                    text="Negozi"
                    icon={require('../res/icon-marker-white.png')}
                    onPress={() => this.props.goTo('shops')}
                    active={this._activeHelper('shops')}
                />
                <MenuBottomItem
                    text="Info"
                    icon={require('../res/icon-info-white.png')}
                    onPress={() => this.props.goTo('info')}
                    active={this._activeHelper('info')}
                />
            </View>
        );
    }
}

const mapStateToProps = state => ({
    navigation: state.navigation,
});

const mapDispatchToProps = dispatch => ({
    goTo: screen => dispatch(NavigationActions.navigate({routeName: screen})),
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
