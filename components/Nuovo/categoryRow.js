import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, ScrollView, ListView, TouchableWithoutFeedback } from 'react-native';

import colors from '../../style/colors';
import Icon from 'react-native-vector-icons/MaterialIcons';


export default class CategoryRow extends PureComponent {
    render() {
        const { label, datakey, selected } = this.props;
        const IconArrow = (
            <Icon name="keyboard-arrow-right" size={30} color={!selected ? colors.main : '#333'} />
        );
        const IconCategory = (
            <Icon name="local-movies" size={30} color={!selected ? colors.main : '#333'} />
        );

        return (
            <TouchableWithoutFeedback onPress={() => this.props.select(!selected ? label : '')}>
                <View style={styles.row}>
                    <View style={{ alignSelf: 'flex-start', flex: 1, flexDirection: 'row', }}>
                        {IconCategory}
                    </View>
                    <View style={{
                        flex: 2,
                        flexDirection: 'row',
                        justifyContent: 'flex-start',
                    }}>
                        <Text style={[styles.text,
                            { color: !selected ? colors.main : '#333' }]}>
                            {label}
                        </Text>
                    </View>
                    <View style={{ alignSelf: 'flex-end', flex: 0.5, flexDirection: 'row' }}>
                        {IconArrow}
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