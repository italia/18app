import React, { PureComponent } from 'react';
import { View, StyleSheet, Text, ScrollView } from 'react-native';
import generalStyles from '../../style/generalStyles';

import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import SearchBar from "./SearchBar";
import QuestionRow from "./QuestionRow";

class Info extends PureComponent {
    render() {
        const { app } = this.props;
        return (
            <ScrollView style={generalStyles.pageContent}>
                <SearchBar />
                {app.faq['free'].map((o, i) => {
                    return (<QuestionRow
                        key={i}
                        question={o.q}
                        answer={o.a}
                    />
                    );
                })}
                
                <Text style={styles.smallTitle}>
                    18app e il Bonus Cultura
                    </Text>
                {app.faq['18app e il Bonus Cultura'].map((o, i) => {
                    return (<QuestionRow
                        key={i}
                        question={o.q}
                        answer={o.a}
                    />
                    );
                })}

                <Text style={styles.smallTitle}>
                    SPID
                    </Text>
                {app.faq['SPID'].map((o, i) => {
                    return (<QuestionRow
                        key={i}
                        question={o.q}
                        answer={o.a}
                    />
                    );
                })}

                <Text style={styles.smallTitle}>
                    Cosa acquistare
                </Text>
                {app.faq['Cosa acquistare'].map((o, i) => {
                    return (<QuestionRow
                        key={i}
                        question={o.q}
                        answer={o.a}
                    />
                    );
                })}
            </ScrollView>
        );
    }
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
    },
    smallTitle: {
        padding: 20,
        fontStyle: 'italic',
        color: '#A9B1B8',
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
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(Info);