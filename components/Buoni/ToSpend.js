import React, { PureComponent } from 'react';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';
import { View, StyleSheet, Text, ScrollView, Animated } from 'react-native';


import CouponRow from "./CouponRow";

class ToSpend extends PureComponent {
    render() {
        const { app } = this.props;

        return (
            <View style={styles.container}>
                {
                    app.coupons.map((o, i) => {
                        if (o.spent) {
                            return false;
                        }
                        return (
                            <CouponRow
                                key={i}
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

export default connect(mapStateToProps, mapDispatchToProps)(ToSpend);
