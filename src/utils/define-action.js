import {defineAction} from 'redux-define';

const NS = '18app';

export const defineAsyncActions = key =>
    defineAction(key, ['PENDING', 'FULFILLED', 'REJECTED'], NS);
