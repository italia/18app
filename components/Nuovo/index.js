import React, { PureComponent } from 'react';
import { View, Text, ScrollView, TouchableWithoutFeedback } from 'react-native';
import { connect } from 'react-redux';
import { bindActionCreators } from 'redux';

import { selectCategory, selectProductType, insertCouponValue } from '../../actions/nuovo';
import { resetTemporaryState } from "../../actions/app";


import generalStyles from '../../style/generalStyles';

import CategoryRow from './CategoryRow';
import InsertValue from './InsertValue';
import RecapCoupon from './RecapCoupon';

class Nuovo extends PureComponent {
    componentDidMount() {
        const { selectedCategory,
            selectedProductType,
            couponValue,
            nuovoComplete } = this.props.app;

        if (selectedCategory ||
            selectedProductType ||
            couponValue ||
            nuovoComplete) {
                this.props.resetTemporaryState()
        }
    }

    render() {
        const { app, selectCategory, selectProductType, insertCouponValue } = this.props;
        return (
            <ScrollView style={generalStyles.pageContent}>

                {!app.selectedCategory ? <Text style={
                    { color: '#A9B1B8', padding: 20 }}>
                    Scegli la categoria
                        </Text> : false}
                {!app.selectedCategory ? (app.new_categories.map((o, i) => <CategoryRow
                    select={selectCategory} key={i} label={o.label}
                />)) : <CategoryRow selected
                    select={selectCategory}
                    label={app.selectedCategory}
                    />
                }
                {app.selectedCategory && !app.selectedProductType ? <Text style={
                    { color: '#A9B1B8', padding: 20 }}>
                    Scegli il tipo di prodotto
                        </Text> : false}
                {app.selectedCategory && !app.selectedProductType ?
                    (app.new_product_type.map((o, i) => <CategoryRow
                        select={selectProductType} key={i} label={o.label}
                    />)) : false
                }
                {app.selectedProductType ?
                    <CategoryRow selected
                        select={selectProductType}
                        label={app.selectedProductType}
                    /> : false
                }
                {app.selectedCategory && app.selectedProductType ? <Text style={
                    { color: '#A9B1B8', padding: 20 }}>
                    Inserisci il valore del buono
                        </Text> : false}

                {app.selectedCategory && app.selectedProductType ?
                    <InsertValue insertCouponValue={insertCouponValue} />
                    : false}

                {/*
                    app.nuovoComplete ?
                        <RecapCoupon
                            selectedCategory={app.selectedCategory}
                            selectedProductType={app.selectedProductType}
                            couponValue={app.couponValue}
                        /> : false
                */}

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
        selectProductType,
        insertCouponValue,
        resetTemporaryState
    }, dispatch);
}

export default connect(mapStateToProps, mapDispatchToProps)(Nuovo);