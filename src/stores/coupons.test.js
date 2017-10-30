import reducer, {LOAD, ADD, CANCEL} from './coupons';

describe('Coupon Reducer', () => {
    it('should return default state on init', () => {
        const nextState = reducer(undefined, {});

        expect(nextState).toMatchObject({
            items: [],
            isLoading: false,
        });
    });

    it('should contains N coupons when LOAD_FULFILLED action is called with N items', () => {
        const action = {
            type: LOAD.FULFILLED,
            payload: [
                {
                    code: 'ABC',
                },
                {
                    code: 'CDE',
                },
            ],
        };

        const initState = reducer(undefined, {});
        const nextState = reducer(initState, action);

        expect(nextState.items).toHaveLength(2);
    });

    it('should contains add 1 coupon when ADD action is called', () => {
        const action = {
            type: ADD,
            coupon: {
                code: 'ABC',
            },
        };

        const initState = reducer(undefined, {});
        const nextState = reducer(initState, action);

        expect(nextState.items).toHaveLength(1);
    });

    it('should remove the coupon when CANCEL action is called', () => {
        const action = {
            type: ADD,
            coupon: {
                code: 'ABC',
            },
        };
        const action2 = {
            type: CANCEL,
            coupon: {
                code: 'ABC',
            },
        };

        const initState = reducer(undefined, {});
        let nextState = reducer(initState, action);
        nextState = reducer(initState, action2);

        expect(nextState.items).toHaveLength(0);
    });
});
