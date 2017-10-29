import {createStore, combineReducers, applyMiddleware} from 'redux';
import promiseMiddleware from 'redux-promise-middleware';
import thunk from 'redux-thunk';

import coupons from './coupons';
import navigation from './navigation';

const reducers = combineReducers({
    coupons,
    navigation,
});

const middlewares = [promiseMiddleware(), thunk];

const composedMiddlewares = applyMiddleware(...middlewares);

const store = createStore(reducers, composedMiddlewares);

export default store;
