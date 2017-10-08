export const RESET_TEMPORARY_STATE = 'RESET_TEMPORARY_STATE';

export function resetTemporaryState(id) {
    return {
        type: RESET_TEMPORARY_STATE,
    };
}