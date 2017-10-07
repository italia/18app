import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, ScrollView } from 'react-native';
import { connect } from 'react-redux';

import generalStyles from '../../style/generalStyles';

class Nuovo extends PureComponent {

    render() {
        return (
            <ScrollView style={generalStyles.pageContent}>
                <Text>
                    {this.props.app.hello}
                </Text>
            </ScrollView>
        );
    }
}

const mapStateToProps = (state) => {
    const { app } = state;

    return {
        app
    };
};

export default connect(mapStateToProps, {})(Nuovo);

const styles = StyleSheet.create({
    container: {
        flex: 1,
    },
});