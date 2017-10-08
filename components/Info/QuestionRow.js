import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, ScrollView, ListView, TouchableWithoutFeedback } from 'react-native';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import colors from '../../style/colors';
import Icon from 'react-native-vector-icons/MaterialIcons';

import { selectCoupon } from '../../actions/buoni';

class QuestionRow extends PureComponent {
    constructor(props) {
        super(props);
        this.state = {
            showAnswer: false
        }
    }

    render() {
        const { question, answer } = this.props;

        const IconArrowRight = (
            <Icon name="keyboard-arrow-right" size={30} color={colors.main} />
        );
        const IconArrowDown = (
            <Icon name="keyboard-arrow-down" size={30} color={colors.main} />
        );

        return (
            <TouchableWithoutFeedback

                onPress={() => { this.setState({ showAnswer: !this.state.showAnswer }) }}>
                <View>
                    <View style={styles.row}>
                        <View style={{
                            flex: 2,
                        }}>
                            <Text style={[styles.text,
                            { color: colors.main }]}>
                                {question}
                            </Text>
                        </View>
                        <View style={{ alignSelf: 'flex-end', flex: 0.5, flexDirection: 'row'  }}>
                            {this.state.showAnswer ? IconArrowDown : IconArrowRight}
                        </View>
                    </View >
                    {this.state.showAnswer ?
                        <View style={styles.answer}>
                            <Text style={[styles.text]}>
                                {answer}
                            </Text>
                        </View>
                        : null}
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

        // justifyContent: 'space-between',
    },
    text: {
        fontSize: 18
    },
    answer: {
        padding: 20,
        flex: 1,
        flexDirection: 'row',


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

export default connect(mapStateToProps, mapDispatchToProps)(QuestionRow);
