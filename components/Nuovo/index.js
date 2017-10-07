import React, { PureComponent } from 'react';
import { View, Text, ScrollView, TouchableWithoutFeedback } from 'react-native';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import { selectCategory } from '../../actions/nuovo';


import generalStyles from '../../style/generalStyles';

import CategoryRow from './categoryRow'

class Nuovo extends PureComponent {
    render() {
        const { app, selectCategory } = this.props;
        return (
            <ScrollView style={generalStyles.pageContent}>
                {!app.selectedCategory ? (app.new_categories.map((o, i) => <CategoryRow
                    selectCategory={selectCategory} key={i} label={o.label}
                />)) :
                    <TouchableWithoutFeedback onPress={() => selectCategory("")}>
                        <View>
                            <Text>{app.selectedCategory}</Text>
                        </View>
                    </TouchableWithoutFeedback>
                }
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


function mapDispatchToProps(dispatch) {
    return bindActionCreators({
        selectCategory
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(Nuovo);