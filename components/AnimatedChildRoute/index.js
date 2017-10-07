import React, { Component, PropTypes } from 'react';
import {
    StyleSheet,
    Text,
    View,
    ScrollView,
    AppRegistry,
    Animated
} from 'react-native';

import { TransitionMotion, spring } from 'react-motion';

const willEnter = children => ({ children, opacity: spring(0), translate: spring(999) });
const willLeave = (key, { children }) => ({ children, opacity: spring(0), translate: spring(-999) });
const getStyles = (children, pathname) => ({ [pathname]: { children, opacity: spring(1), translate: spring(0) } });

// export default class AnimatedChildRoute extends Component {
export default function AnimatedChildRoute({children, pathname}) {
    // constructor(props) {
    //     super(props);
    //     this.state = {
    //         fadeAnim: new Animated.Value(0), // init opacity 0
    //     };
    // }
    // componentDidMount() {
    //     Animated.timing(          // Uses easing functions
    //         this.state.fadeAnim,    // The value to drive
    //         { toValue: 1 }            // Configuration
    //     ).start();                // Don't forget start!
    // }
    // render() {
        return (
            <TransitionMotion
                styles={getStyles(children, pathname)}
                willEnter={willEnter}
                willLeave={willLeave}
            >
                {this.props.children}
            </TransitionMotion>
        );
    // }
}

// export default class AnimatedChildRoute extends Component {

//     static propTypes = {
//         children: PropTypes.node,
//         anim: PropTypes.object,
//         atParent: PropTypes.bool,
//         animating: PropTypes.bool
//     }

//     state = {
//         // we're going to save the old children so we can render
//         // it when it doesnt' actually match the location anymore
//         previousChildren: null
//     }

//     componentWillReceiveProps(nextProps) {
//         // figure out what to do with the children
//         const navigatingToParent = nextProps.atParent && !this.props.atParent
//         const animationEnded = this.props.animating && !nextProps.animating

//         if (navigatingToParent) {
//             // we were rendering, but now we're heading back up to the parent,
//             // so we need to save the children (har har) so we can render them
//             // while the animation is playing
//             this.setState({
//                 previousChildren: this.props.children
//             })
//         } else if (animationEnded) {
//             // When we're done animating, we can get rid of the old children.
//             this.setState({
//                 previousChildren: null
//             })
//         }
//     }

//     render() {
//         const { anim, children } = this.props
//         const { previousChildren } = this.state
//         return (
//             <Animated.View style={{
//                 position: 'absolute',
//                 left: 0,
//                 right: 0,
//                 top: anim.interpolate({
//                     inputRange: [0, 1],
//                     outputRange: [20, 0]
//                 }),
//                 opacity: anim.interpolate({
//                     inputRange: [0, 0.75],
//                     outputRange: [0, 1]
//                 })
//             }}>
//                 {/* render the old ones if we have them */}
//                 {previousChildren || children}
//             </Animated.View>
//         )
//     }
// }