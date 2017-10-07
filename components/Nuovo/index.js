import React, { PureComponent } from 'react';
import { View, Text, ScrollView, TouchableWithoutFeedback } from 'react-native';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import { selectCategory, selectProductType } from '../../actions/nuovo';


import generalStyles from '../../style/generalStyles';

import CategoryRow from './categoryRow'

class Nuovo extends PureComponent {
    render() {
        const { app, selectCategory, selectProductType } = this.props;
        return (
            <ScrollView style={generalStyles.pageContent}>
                {!app.selectedCategory ? (app.new_categories.map((o, i) => <CategoryRow
                    select={selectCategory} key={i} label={o.label}
                />)) : <CategoryRow selected
                    select={selectCategory}
                    label={app.selectedCategory}
                    />
                }
                {app.selectedCategory && !app.selectedProductType ?
                    (app.new_product_type.map((o, i) => <CategoryRow
                        select={selectProductType} key={i} label={o.label}
                    />)) : <CategoryRow selected
                        select={selectProductType}
                        label={app.selectedProductType}
                    />
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
        selectCategory,
        selectProductType
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(Nuovo);