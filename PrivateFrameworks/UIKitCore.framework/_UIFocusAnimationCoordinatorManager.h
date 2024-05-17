/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusAnimationCoordinatorManager : NSObject {
    UIFocusAnimationCoordinator * _activeFocusAnimationCoordinator;
    NSNumber * _inheritedAnimationCoordinatorActiveAnimation;
    double  _lastFocusUpdateTime;
    UIFocusAnimationCoordinator * _lastFocusingItemAnimationCoordinator;
    NSHashTable * _unfocusingItems;
}

@property (nonatomic, retain) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator;
@property (nonatomic, retain) NSNumber *inheritedAnimationCoordinatorActiveAnimation;
@property (nonatomic) double lastFocusUpdateTime;
@property (nonatomic, retain) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator;
@property (nonatomic, readonly) NSHashTable *unfocusingItems;

- (void).cxx_destruct;
- (void)_performDelayedFocusingAnimationIfNecessary;
- (id)activeFocusAnimationCoordinator;
- (void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2;
- (id)inheritedAnimationCoordinatorActiveAnimation;
- (id)init;
- (double)lastFocusUpdateTime;
- (id)lastFocusingItemAnimationCoordinator;
- (void)setActiveFocusAnimationCoordinator:(id)arg1;
- (void)setInheritedAnimationCoordinatorActiveAnimation:(id)arg1;
- (void)setLastFocusUpdateTime:(double)arg1;
- (void)setLastFocusingItemAnimationCoordinator:(id)arg1;
- (id)unfocusingItems;
- (id)willUpdateFocusInContext:(id)arg1;

@end
