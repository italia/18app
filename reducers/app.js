import initialState from './initialStates/initApp';
import { SELECT_CATEGORY, SELECT_PRODUCT_TYPE, INSERT_COUPON_VALUE } from '../actions/nuovo';
import { SELECT_COUPON } from '../actions/buoni';

const app = (state = initialState, action) => {
    switch (action.type) {
        case SELECT_CATEGORY:
            return {
                ...state,
                selectedCategory: action.payload,
                selectedProductType: ''
            }
        case SELECT_PRODUCT_TYPE:
            return {
                ...state,
                selectedProductType: action.payload
            }
        case INSERT_COUPON_VALUE:
            if (!action.payload) {
                return {
                    ...state
                }
            }
            return {
                ...state,
                couponValue: action.payload,
                nuovoComplete: true
            }
        case SELECT_COUPON:
            return {
                ...state,
                selectedCoupon: action.payload
            }
        default:
            return state
    }
}

export default app;