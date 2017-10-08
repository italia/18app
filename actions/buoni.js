
export const SELECT_COUPON = 'SELECT_COUPON';

import { history } from '../App';

export function selectCoupon(id) {
    return {
        type: SELECT_COUPON,
        payload: id,
    };
}
