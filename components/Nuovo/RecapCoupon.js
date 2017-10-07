import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, TextInput, Form, TouchableWithoutFeedback, Button } from 'react-native';

import colors from '../../style/colors';
import Icon from 'react-native-vector-icons/MaterialIcons';

import CategoryRow from './CategoryRow';


export default class RecapCoupon extends PureComponent {
    constructor(props) {
        super(props);
        this.state = {};
    }
    render() {
        const { selectedCategory, selectedProductType, couponValue } = this.props;
        return (
            <View>
                <View style={styles.container}>
                    <Text style={styles.messageSuccess}>
                        Il nuovo buono è stato creato correttamente
                    </Text>
                </View>
                <CategoryRow selected
                    label={selectedCategory}
                />
                <CategoryRow selected
                    label={selectedProductType}
                />
            </View>
        );
    }
}

const styles = {
    container: {
        flex: 1,
        flexDirection: 'column',
        justifyContent: 'center',
        alignItems: 'center',
        borderBottomWidth: 1,
        borderColor: '#ddd'
    },
    messageSuccess: {
        color: colors.success,
        flex: 1,
        flexDirection: 'row',
        justifyContent: 'center',
        alignItems: 'center',
        padding: 20
    }
}