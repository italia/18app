import React, {Component} from 'react';
import PropTypes from 'prop-types';
import {FlatList} from 'react-native';
import {connect} from 'react-redux';
import CouponRow from '../component/CouponRow';
import CouponHeader from '../component/CouponHeader';

class CouponList extends Component {
    static propTypes = {
        coupons: PropTypes.array,
        filter: PropTypes.func,
    };

    render() {
        return (
            <FlatList
                ListHeaderComponent={() =>
                    !this.props.filter && (
                        <CouponHeader coupons={this.props.coupons} />
                    )}
                data={this.props.coupons}
                keyExtractor={item => item.code}
                renderItem={({item}) => (
                    <CouponRow
                        code={item.code}
                        used={item.used}
                        category={item.category}
                        description={item.description}
                        merchant={item.merchant}
                        price={item.price}
                    />
                )}
            />
        );
    }
}

const mapStateToProps = (state, props) => ({
    coupons: state.coupons.items
        .filter(props.filter || (a => a))
        .sort((a, b) => (a.used && !b.used ? 1 : -1)),
});

export default connect(mapStateToProps)(CouponList);
