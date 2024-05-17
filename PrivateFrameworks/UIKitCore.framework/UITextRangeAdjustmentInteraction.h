/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextRangeAdjustmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    UITouch * _activeTouch;
    UITextRangeAdjustmentGestureRecognizer * _adjustmentGestureRecognizer;
    bool  _baseIsStart;
    struct CGPoint { 
        double x; 
        double y; 
    }  _basePoint;
    <UITextRangeAdjustmentInteractionDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _extentPoint;
    double  _firstMovedTime;
    UITextGestureTuning * _gestureTuning;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialBasePoint;
    double  _initialDistance;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialExtentPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPoint;
    UITextModernLoupeSession * _loupeSession;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchOffset;
    UIView * _view;
}

@property (nonatomic, retain) UITouch *activeTouch;
@property (nonatomic, readonly) UITextRangeAdjustmentGestureRecognizer *adjustmentGestureRecognizer;
@property (nonatomic) bool baseIsStart;
@property (nonatomic) struct CGPoint { double x1; double x2; } basePoint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextRangeAdjustmentInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } extentPoint;
@property (nonatomic) double firstMovedTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialBasePoint;
@property (nonatomic) double initialDistance;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } initialExtentPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPoint;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchOffset;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_activeAdjustmentEdgeRect;
- (struct CGPoint { double x1; double x2; })_activeTouchPoint;
- (void)_adjustmentInteractionBeganWithLocation:(struct CGPoint { double x1; double x2; })arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 forTouchType:(long long)arg3;
- (void)_adjustmentInteractionCancelled;
- (void)_adjustmentInteractionChangedWithLocation:(struct CGPoint { double x1; double x2; })arg1 forTouchType:(long long)arg2;
- (void)_adjustmentInteractionEndedAtLocation:(struct CGPoint { double x1; double x2; })arg1 forTouchType:(long long)arg2;
- (struct CGPoint { double x1; double x2; })_convertPointToViewCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)_createGestureTuningIfNecessary;
- (void)_didRecognizeAdjustmentGesture:(id)arg1;
- (bool)_gestureTuningEnabledForTouches:(id)arg1;
- (bool)_pointCloserToEnd:(struct CGPoint { double x1; double x2; })arg1 startEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 endEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_setTouchOffset:(struct CGPoint { double x1; double x2; })arg1 touchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_shouldApplyOffsetForTouchType:(long long)arg1;
- (void)_updateAdjustmentInteractionWithState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg3 forTouchType:(long long)arg4;
- (id)activeTouch;
- (id)adjustmentGestureRecognizer;
- (struct CGPoint { double x1; double x2; })applyTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)baseIsStart;
- (struct CGPoint { double x1; double x2; })basePoint;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (struct CGPoint { double x1; double x2; })extentPoint;
- (double)firstMovedTime;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (struct CGPoint { double x1; double x2; })initialBasePoint;
- (double)initialDistance;
- (struct CGPoint { double x1; double x2; })initialExtentPoint;
- (struct CGPoint { double x1; double x2; })initialPoint;
- (void)manuallyUpdateInteractionWithGestureState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg3 forTouchType:(long long)arg4;
- (void)setActiveTouch:(id)arg1;
- (void)setBaseIsStart:(bool)arg1;
- (void)setBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFirstMovedTime:(double)arg1;
- (void)setInitialBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialDistance:(double)arg1;
- (void)setInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })touchOffset;
- (void)updateBaseAndExtentPointsFromEdges;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
