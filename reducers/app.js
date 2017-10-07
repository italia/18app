import initialState from './initialStates/initApp';
import { SELECT_CATEGORY, SELECT_PRODUCT_TYPE } from '../actions/nuovo';

const app = (state = initialState, action) => {
    switch (action.type) {
        case SELECT_CATEGORY:
            return {
                ...state,
                selectedCategory: action.payload
            }
        case SELECT_PRODUCT_TYPE:
            return {
                ...state,
                selectedProductType: action.payload
            }
        default:
            return state
    }
}

export default app;