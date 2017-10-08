import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, ScrollView, Animated } from 'react-native';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';
import { TabViewAnimated, TabBar, SceneMap } from 'react-native-tab-view';
import generalStyles from '../../style/generalStyles';

import colors from '../../style/colors';

import { resetTemporaryState } from "../../actions/app";

import All from "./All";
import ToSpend from "./ToSpend";
import AlreadySpend from "./AlreadySpend";
import CouponDetails from "./CouponDetails";

class Buoni extends PureComponent {
    state = {
        index: 0,
        routes: [
            { key: '1', title: 'TUTTI' },
            { key: '2', title: 'DA SPENDERE' },
            { key: '3', title: 'GIÁ SPESI' },
        ],
    };

    componentWillUnmount() {
        const { selectedCategory,
            selectedProductType,
            couponValue,
            nuovoComplete } = this.props.app;

        if (selectedCategory ||
            selectedProductType ||
            couponValue ||
            nuovoComplete) {
                this.props.resetTemporaryState()
        }
    }


    _handleIndexChange = index => this.setState({ index });

    _renderLabel = props => ({ route, index }) => {
        const inputRange = props.navigationState.routes.map((x, i) => i);
        const outputRange = inputRange.map(
            inputIndex => (inputIndex === index ? '#fff' : '#fff')
        );
        const color = props.position.interpolate({
            inputRange,
            outputRange,
        });

        return (
            <Animated.Text style={[styles.label, { color }]}>
                {route.title}
            </Animated.Text>
        );
    };

    _renderHeader = props => <TabBar {...props}
        pressColor="rgba(255, 64, 129, .5)"
        renderLabel={this._renderLabel(props)}
        style={styles.tabbar}
    />;

    _renderScene = SceneMap({
        '1': All,
        '2': ToSpend,
        '3': AlreadySpend,
    });

    render() {
        const { app } = this.props;
        if (typeof app.selectedCoupon === 'number' || app.nuovoComplete === true) {
            return (
                <CouponDetails couponId={app.selectedCoupon} />
            )
        } else {
            return (
                <TabViewAnimated
                    navigationState={this.state}
                    renderScene={this._renderScene}
                    renderHeader={this._renderHeader}
                    onIndexChange={this._handleIndexChange}
                />
            );
        }
    }
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
    },
    tabBar: {
        backgroundColor: colors.mainDark,
    },
    indicator: {
        backgroundColor: '#ff4081',
    },
    label: {
        fontSize: 12,
        fontWeight: 'bold',
        margin: 8,
    },
    tabbar: {
        backgroundColor: colors.mainDark,
    },
    tab: {
        opacity: 1,
        width: 90,
    },
    page: {
        backgroundColor: '#f9f9f9',
    },
});

const mapStateToProps = (state) => {
    const { app } = state;
    return {
        app
    };
};

function mapDispatchToProps(dispatch) {
    return bindActionCreators({
        resetTemporaryState
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(Buoni);