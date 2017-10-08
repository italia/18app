import { Navigation } from 'react-native-navigation';

import Nuovo from '../components/Nuovo';
// import SecondTabScreen from './SecondTabScreen';
// import PushedScreen from './PushedScreen';

// register all screens of the app (including internal ones)
export function registerScreens() {
  Navigation.registerComponent('example.FirstTabScreen', () => Nuovo);
//   Navigation.registerComponent('example.SecondTabScreen', () => SecondTabScreen);
//   Navigation.registerComponent('example.PushedScreen', () => PushedScreen);
}