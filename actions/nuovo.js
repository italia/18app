export const SELECT_CATEGORY = 'SELECT_CATEGORY';
export const SELECT_PRODUCT_TYPE = 'SELECT_PRODUCT_TYPE';
export const INSERT_COUPON_VALUE = 'INSERT_COUPON_VALUE';

export function selectCategory(category) {
    return {
        type: SELECT_CATEGORY,
        payload: category,
    };
}
export function selectProductType(type) {
    return {
        type: SELECT_PRODUCT_TYPE,
        payload: type,
    };
}

export function insertCouponValue(value) {
    return {
        type: INSERT_COUPON_VALUE,
        payload: value,
    };
}