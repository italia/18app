import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, ScrollView, ListView, TouchableWithoutFeedback } from 'react-native';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import colors from '../../style/colors';
import Icon from 'react-native-vector-icons/MaterialIcons';

import { selectCoupon } from '../../actions/buoni';

class CouponRow extends PureComponent {
    render() {
        const { selectedCategory,
            selectedProductType,
            couponValue, selected, arrayIndex } = this.props;

        const IconArrow = (
            <Icon name="keyboard-arrow-right" size={30} color={!selected ? colors.main : '#333'} />
        );
        const IconCategory = (
            <Icon name="local-movies" size={30} color={!selected ? colors.main : '#333'} />
        );

        return (
            <TouchableWithoutFeedback onPress={() => this.props.selectCoupon(arrayIndex)}>
                <View style={styles.row}>
                    <View style={{ alignSelf: 'flex-start', flex: 0.5, flexDirection: 'row', }}>
                        {IconCategory}
                    </View>
                    <View style={{
                        flex: 2,
                    }}>
                        <Text style={[styles.text,
                        { color: !selected ? colors.main : '#333' }]}>
                            {selectedCategory}
                        </Text>
                        <Text style={[styles.text,
                        { color: !selected ? colors.main : '#333' }]}>
                            {selectedProductType}
                        </Text>
                    </View>
                    <View style={{ alignSelf: 'flex-end', flex: 0.5, flexDirection: 'row' }}>
                        <Text style={[styles.text,
                        { color: !selected ? colors.main : '#333', fontSize: 20, fontWeight: 'bold' }]}>
                            {couponValue} €
                        </Text>{IconArrow}
                    </View>
                </View >
            </TouchableWithoutFeedback>
        );
    }
}

const styles = StyleSheet.create({
    row: {
        padding: 20,
        borderBottomWidth: 1,
        borderColor: '#d6d7da',
        flexDirection: 'row',
        justifyContent: 'space-between',
        alignItems: 'center',
    },
    text: {
        fontSize: 18
    }
});


const mapStateToProps = (state) => {
    const { app } = state;
    return {
        app
    };
};

function mapDispatchToProps(dispatch) {
    return bindActionCreators({
        selectCoupon
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(CouponRow);
