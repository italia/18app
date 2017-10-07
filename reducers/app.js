import initialState from './initialStates/initApp';
import { SELECT_CATEGORY, SELECT_PRODUCT_TYPE, INSERT_COUPON_VALUE } from '../actions/nuovo';

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
            return {
                ...state,
                couponValue: action.payload,
                nuovoComplete: true
            }
        default:
            return state
    }
}

export default app;