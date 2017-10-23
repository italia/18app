import {defineAsyncActions} from '../utils/define-action'
import api from '../utils/api'

// Actions
const LOAD = defineAsyncActions('LOAD')

// Default State
const DEFAULT_STATE = {
  isLoading: false,
  items: []
}

// Reducer
export default function links (state = DEFAULT_STATE, action) {
  switch (action.type) {
    case LOAD.PENDING:
      return {
        ...state,
        isLoading: true
      }

    case LOAD.FULFILLED:
      return {
        ...state,
        isLoading: false,
        items: state.items.concat(action.payload)
      }

    case LOAD.REJECTED:
      return {
        ...state,
        isLoading: false,
        items: []
      }

    default:
      return state
  }
}

// Action creators
export function loadCoupons () {
  return {
    type: LOAD,
    payload: new Promise((resolve, reject) => {
      setTimeout(() => resolve([{
        title: 'Cinema',
        subtitle: 'Biglietto di ingresso',
        price: 8.00
      }]))
    })
  }
}
