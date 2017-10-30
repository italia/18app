import {defineAction as defineActionVendor} from 'redux-define';

const NS = '18app';

export const defineAsyncActions = key =>
    defineActionVendor(key, ['PENDING', 'FULFILLED', 'REJECTED'], NS);

export const defineAction = key => defineActionVendor(key, NS);
