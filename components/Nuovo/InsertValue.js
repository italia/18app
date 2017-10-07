import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, TextInput, Form, TouchableWithoutFeedback, Button } from 'react-native';

import colors from '../../style/colors';
import Icon from 'react-native-vector-icons/MaterialIcons';


export default class InsertValue extends PureComponent {
    constructor(props) {
        super(props);
        this.state = { text: '' };
    }
    render() {
        const { insertCouponValue } = this.props;
        return (
            <View style={{
                flexWrap: 'wrap',
                alignItems: 'flex-start',
                flexDirection: 'row',
                padding: 20
            }}>
                <Text style={styles.valore}>Valore</Text>
                <TextInput
                    style={styles.textInput}
                    placeholder="499,99"
                    onChangeText={(text) => this.setState({ text })}
                />
                <Text style={styles.currency}>€</Text>
                <View style={{
                    flex: 1,
                }}>
                    <Button
                        onPress={() => insertCouponValue(this.state.text)}
                        title="CREA"
                        style={styles.button}
                    />
                </View>
            </View>
        );
    }
}

const styles = {
    valore: {
        fontSize: 16,
        color: colors.main,
        flex: 1
    },
    currency: {
        fontSize: 24,
        color: colors.main,
        flex: 1
    },
    textInput: {
        lineHeight: 60,
        paddingBottom: 10,
        flex: 2,
        fontSize: 24,
    },
    button: {
        fontSize: 24,
        color: colors.main,
        height: 40,
        width: 107
    }
}