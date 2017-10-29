import MainNavigation from '../MainNavigation';

const initialState = MainNavigation.router.getStateForAction(
    MainNavigation.router.getActionForPathAndParams('Home'),
);

const navReducer = (state = initialState, action) => {
    const nextState = MainNavigation.router.getStateForAction(action, state);

    return nextState || state;
};

export default navReducer;
