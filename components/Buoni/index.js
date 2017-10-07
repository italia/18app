import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, ScrollView } from 'react-native';
// import { TabViewAnimated, TabBar, SceneMap } from 'react-native-tab-view';
import generalStyles from '../../style/generalStyles';

export default class Buoni extends PureComponent {

    render() {
        return (
            <ScrollView style={generalStyles.pageContent}>
                <Text>
                    Buoni
                </Text>
            </ScrollView>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
    },
});