const initialState = {
    hello: 'world',
}
const app = (state = initialState, action) => {
    switch (action.type) {
        case 'GET_MENU':
            return state + action.by
        default:
            return state
    }
}

export default app;