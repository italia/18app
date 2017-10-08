import initialState from './initialStates/initApp';
import { SELECT_CATEGORY, SELECT_PRODUCT_TYPE, INSERT_COUPON_VALUE } from '../actions/nuovo';
import { SELECT_COUPON } from '../actions/buoni';
import { RESET_TEMPORARY_STATE } from '../actions/app';


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
                coupons: [
                    ...state.coupons,
                    {
                        selectedCategory: state.selectedCategory,
                        selectedProductType: state.selectedProductType,
                        couponValue: action.payload,
                    },
                ],
                couponValue: action.payload,
                temporaryNewCoupon: {
                    selectedCategory: state.selectedCategory,
                    selectedProductType: state.selectedProductType,
                    couponValue: action.payload,
                },
                nuovoComplete: true
            }
        case SELECT_COUPON:
            return {
                ...state,
                selectedCoupon: action.payload
            }
        case RESET_TEMPORARY_STATE:
            return {
                ...state,
                selectedCoupon: 'No coupon selected',
                temporaryNewCoupon: {
                    selectedCategory: '',
                    selectedProductType: '',
                    couponValue: '',
                },
                selectedCategory: '',
                selectedProductType: '',
                couponValue: '',
                nuovoComplete: false,
            }
        default:
            return state
    }
}

export default app;