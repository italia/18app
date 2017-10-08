import {
    resetTemporaryState, changeCurrentRoute,
    CHANGE_CURRENT_ROUTE, RESET_TEMPORARY_STATE
} from '../actions/app';

import {
    SELECT_COUPON, selectCoupon
} from '../actions/buoni';

it('should return the right type', () => {
    const action = changeCurrentRoute('/buoni');
    expect(action.type).toBe(CHANGE_CURRENT_ROUTE);
});

it('should return the right payload', () => {
    const action = changeCurrentRoute('/buoni');
    expect(action.payload).toBe('/buoni');
});

it('should return the right type', () => {
    const action = resetTemporaryState();
    expect(action.type).toBe(RESET_TEMPORARY_STATE);
});

it('should return the right payload', () => {
    const action = resetTemporaryState();
    expect(action.payload).toBe(undefined);
});

it('should return the right type', () => {
    const action = selectCoupon(1);
    expect(action.type).toBe(SELECT_COUPON);
});

it('should return the right payload', () => {
    const action = selectCoupon(1);
    expect(action.payload).toBe(1);
});