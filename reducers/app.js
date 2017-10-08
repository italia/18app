import initialState from './initialStates/initApp';
import { SELECT_CATEGORY, SELECT_PRODUCT_TYPE, INSERT_COUPON_VALUE } from '../actions/nuovo';
import { SELECT_COUPON } from '../actions/buoni';
import { RESET_TEMPORARY_STATE, CHANGE_CURRENT_ROUTE } from '../actions/app';

const app = (state = initialState, action) => {
    switch (action.type) {
        case CHANGE_CURRENT_ROUTE:
            return {
                ...state,
                currentRoute: action.payload,
            }
            break;

        case SELECT_CATEGORY:
            return {
                ...state,
                selectedCategory: action.payload,
                selectedProductType: ''
            }
            break;

        case SELECT_PRODUCT_TYPE:
            return {
                ...state,
                selectedProductType: action.payload
            }
            break;

        case INSERT_COUPON_VALUE:
            console.log({
                coupons: [
                    ...state.coupons,
                    action.payload
                ],
            });

            return {
                ...state,
                coupons: [
                    ...state.coupons,
                    action.payload
                ],
                // couponValue: action.payload.couponValue,
                nuovoComplete: true,
                selectedCategory: '',
                selectedProductType: '',
                couponValue: 0,
                nuovoComplete: false,
            }
            break;

        case SELECT_COUPON:
            return {
                ...state,
                selectedCoupon: action.payload
            }
            break;

        case RESET_TEMPORARY_STATE:
            return {
                ...state,
                selectedCategory: '',
                selectedProductType: '',
                couponValue: 0,
                nuovoComplete: false,
            }
            break;

        default:
            return state
    }
}

export default app;