export const SELECT_CATEGORY = 'SELECT_CATEGORY';
export const SELECT_PRODUCT_TYPE = 'SELECT_PRODUCT_TYPE';

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