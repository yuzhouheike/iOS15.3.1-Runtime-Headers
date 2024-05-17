/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwitchMVEGestureTrackingSession : NSObject {
    bool  _displayedOnValue;
    bool  _lastCommitedOnValue;
    double  _movementVectorForPanInitiatedChangeTargetOnValue;
    double  _movementVectorForPanInitiatedChangeY;
    double  _naturalLayoutDirection;
    bool  _pendingDisplayedOnValue;
    UIGestureRecognizer * _pendingDisplayedOnValueInitiatingGesture;
    UIView<UISwitchMVEGestureTrackingSessionElement> * _visualElement;
}

@property (nonatomic) bool displayedOnValue;
@property (nonatomic, readonly) bool lastCommitedOnValue;
@property (nonatomic, readonly) double movementVectorForPanInitiatedChangeTargetOnValue;
@property (nonatomic, readonly) double movementVectorForPanInitiatedChangeY;
@property (nonatomic, readonly) double naturalLayoutDirection;
@property (nonatomic, readonly) bool pendingDisplayedOnValue;
@property (nonatomic, readonly) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture;
@property (nonatomic) UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement;

+ (bool)gestureIsInEndState:(long long)arg1;

- (void).cxx_destruct;
- (void)_applyPendingChangesIfNecessary;
- (bool)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1;
- (bool)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1;
- (void)_sendStateChangeActionsIfNecessary;
- (void)_updateMovementVectorForPanInitiatedChanges;
- (void)applyPendingDisplayedOnValueAndSendActions;
- (void)applyPendingDisplayedOnValueWithoutSendingActions;
- (bool)canApplyPendingOnValueForGesture:(id)arg1;
- (bool)displayedOnValue;
- (id)initWithVisualElement:(id)arg1;
- (void)invalidatePendingOnValue;
- (bool)lastCommitedOnValue;
- (double)movementVectorForPanInitiatedChangeTargetOnValue;
- (double)movementVectorForPanInitiatedChangeY;
- (double)naturalLayoutDirection;
- (bool)pendingDisplayedOnValue;
- (id)pendingDisplayedOnValueInitiatingGesture;
- (bool)pendingDisplayedOnValueIsValid;
- (void)reset;
- (void)setDisplayedOnValue:(bool)arg1;
- (void)setPendingDisplayedOnValue:(bool)arg1 forGesture:(id)arg2;
- (void)setVisualElement:(id)arg1;
- (bool)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2;
- (id)visualElement;

@end
