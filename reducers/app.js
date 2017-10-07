import initialState from './initialStates/initApp';
import { SELECT_CATEGORY } from '../actions/nuovo';

const app = (state = initialState, action) => {
    switch (action.type) {
        case 'SELECT_CATEGORY':
            return {
                ...state,
                selectedCategory: action.payload
            }
        default:
            return state
    }
}

export default app;