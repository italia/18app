import React, { PureComponent } from 'react';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';
import { View, StyleSheet, Text, ScrollView, Animated } from 'react-native';

import CouponRow from "./CouponRow";

class All extends PureComponent {
    render() {
        const { app } = this.props;

        console.log(app.coupons);

        return (
            <View style={styles.container}>
                {
                    app.coupons.map((o, i) => {
                        return (
                            <CouponRow
                                key={i}
                                arrayIndex={i}
                                selectedCategory={o.selectedCategory}
                                selectedProductType={o.selectedProductType}
                                couponValue={o.couponValue}
                            />
                        )
                    })
                }
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

export default connect(mapStateToProps, mapDispatchToProps)(All);
