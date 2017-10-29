import reducer from './coupons';

it('should return default state on init', () => {
    const nextState = reducer(undefined, {});

    expect(nextState).toMatchObject({
        items: [],
        isLoading: false,
    });
});
