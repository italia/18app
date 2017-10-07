export const SELECT_CATEGORY = 'SELECT_CATEGORY';

export function selectCategory(category) {
    return {
        type: SELECT_CATEGORY,
        payload: category,
    };
}