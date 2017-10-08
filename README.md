# Install

* Clone the repo

````
$ cd my-app/
$ npm start
````

Install the Expo app on your iOS or Android phone, and use the QR code in the terminal to open your app. Find the QR scanner on the Projects tab of the app.

# Commands

#### `npm start`

Runs your app in development mode with an interactive prompt. To run it without a prompt, use the `--no-interactive` flag.

Open it in the [Expo app](https://expo.io) on your phone to view it. It will reload if you save edits to your files, and you will see build errors and logs in the terminal.

#### `npm test`

Runs the [jest](https://github.com/facebook/jest) test runner on your tests.

#### `npm run ios`

Like `npm start`, but also attempts to open your app in the iOS Simulator if you're on a Mac and have it installed.

#### `npm run android`

Like `npm start`, but also attempts to open your app on a connected Android device or emulator. Requires an installation of Android build tools (see [React Native docs](https://facebook.github.io/react-native/docs/getting-started.html) for detailed setup).

#### `npm run eject`

This will start the process of "ejecting" from Create React Native App's build scripts. You'll be asked a couple of questions about how you'd like to build your project.

# Components structure

* Buoni : user can see his 'buoni'
* Info : display informations about the app and SPID
* Menu : the bottom navigation bar
* Negozi : `TODO` display all shops related to the ap
* Nuovo : the flow that enable you to add a new 'buono' to the list
* UpperMenu : it display navigation and user informations

# Styles

Most used *Colors* are defined in an object in `styles/color`
Most of the components have the their internal style managed with React Native `StyleSheet`.
Attempts have been made to use a unic source of style with a generalized object but...

`TODO` use [styled-components](https://www.styled-components.com/)

# Assets

They are all in the `assets` folder.
Inside there is already the `icons` folder.

# TODO

* Page Negozi
* The login and sections for the user
* The introduction part of the app