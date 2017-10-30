import {defineAsyncActions, defineAction} from '../utils/define-action';

// Actions
const LOGIN = defineAsyncActions('LOGIN');

// Default State
const DEFAULT_STATE = {
    logged: false,
};

// Reducer
export default function user(state = DEFAULT_STATE, action) {
    switch (action.type) {
        case LOGIN.FULFILLED:
            return {
                logged: true,
                ...action.payload,
            };

        default:
            return state;
    }
}

// Action creators
export function loginAction(token) {
    return {
        type: LOGIN,
        payload: Promise.resolve({
            name: 'Mario',
            surname: 'Rossi',
            credit: 174.0,
        }),
    };
}
