import React, { PureComponent } from 'react';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';
import { View, StyleSheet, Text, ScrollView, Animated } from 'react-native';

import CouponRow from "./CouponRow";

class CouponDetails extends PureComponent {
    render() {
        const { app, couponId } = this.props;

        return (
            <View style={styles.container}>
                <Text>
                    {couponId}
                </Text>
            </View>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
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
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(CouponDetails);
