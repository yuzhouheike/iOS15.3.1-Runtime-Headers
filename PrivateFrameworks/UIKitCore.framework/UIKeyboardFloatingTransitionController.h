/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardFloatingTransitionController : NSObject <UIGestureRecognizerDelegate> {
    UIViewSpringAnimationBehavior * _animationBehavior;
    NSArray * _commonVisibleKeys;
    <UIKeyboardFloatingTransitionControllerDelegate> * _delegate;
    UIKeyboardFloatingTransitionState * _endState;
    bool  _expandedForDocking;
    double  _gestureBeginTime;
    UIInputWindowController * _inputWindowController;
    bool  _isTransitioning;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastGestureCenter;
    UIPanGestureRecognizer * _panGestureRecognizer;
    UIView * _pillView;
    UIKeyboardFloatingPinchGestureRecognizer * _pinchGestureRecognizer;
    UIView * _platterCornerRadiusView;
    _UIPopoverStandardChromeView * _platterPopoverBackgroundView;
    UIView * _platterView;
    UIKBVisualEffectView * _platterVisualEffectView;
    double  _progress;
    UIKeyboardFloatingTransitionState * _startState;
    bool  _startedFromFloating;
    bool  _withinDockingRegion;
}

@property (retain) UIViewSpringAnimationBehavior *animationBehavior;
@property (nonatomic, retain) NSArray *commonVisibleKeys;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardFloatingTransitionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIKeyboardFloatingTransitionState *endState;
@property (nonatomic) bool expandedForDocking;
@property (nonatomic) double gestureBeginTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIInputWindowController *inputWindowController;
@property (nonatomic) bool isTransitioning;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastGestureCenter;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) UIView *pillView;
@property (nonatomic, retain) UIKeyboardFloatingPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, retain) UIView *platterCornerRadiusView;
@property (nonatomic, retain) _UIPopoverStandardChromeView *platterPopoverBackgroundView;
@property (nonatomic, retain) UIView *platterView;
@property (nonatomic, retain) UIKBVisualEffectView *platterVisualEffectView;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIKeyboardFloatingTransitionState *startState;
@property (nonatomic) bool startedFromFloating;
@property (readonly) Class superclass;
@property (nonatomic) bool withinDockingRegion;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dockingRegion;
+ (bool)isPointWithinDockingRegion:(struct CGPoint { double x1; double x2; })arg1;
+ (double)magneticEdgeMargin;
+ (id)snapshotOfKeyplaneView:(id)arg1;

- (void).cxx_destruct;
- (void)addGestureRecognizersToView:(id)arg1;
- (id)animationBehavior;
- (void)beginPanGesture:(id)arg1;
- (void)beginPinchGesture:(id)arg1;
- (void)beginTransitionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withScale:(double)arg2;
- (void)beginTransitionFromPanGestureRecognizer:(id)arg1;
- (void)captureStateForStart:(bool)arg1;
- (id)commonVisibleKeys;
- (void)constrainAccessoryViewToBottom;
- (id)delegate;
- (void)endPanGesture:(id)arg1;
- (void)endPinchGesture:(id)arg1;
- (id)endState;
- (void)endTransitionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withScale:(double)arg2;
- (bool)expandedForDocking;
- (void)finalizeTransition;
- (double)gestureBeginTime;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGestureRecognizerAction:(id)arg1;
- (void)handlePinchGestureRecognizerAction:(id)arg1;
- (void)initializeContextAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)inputViewSnapshot:(id*)arg1 withPlatterInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)inputWindowController;
- (bool)isTransitioning;
- (struct CGPoint { double x1; double x2; })lastGestureCenter;
- (id)panGestureRecognizer;
- (id)pillView;
- (id)pinchGestureRecognizer;
- (id)platterCornerRadiusView;
- (id)platterPopoverBackgroundView;
- (id)platterView;
- (id)platterVisualEffectView;
- (double)progress;
- (void)removeGestureRecognizers;
- (void)restoreAccessoryViewConstraints;
- (void)setAnimationBehavior:(id)arg1;
- (void)setCommonVisibleKeys:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndState:(id)arg1;
- (void)setExpandedForDocking:(bool)arg1;
- (void)setGestureBeginTime:(double)arg1;
- (void)setInputWindowController:(id)arg1;
- (void)setIsTransitioning:(bool)arg1;
- (void)setLastGestureCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPillView:(id)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setPlatterCornerRadiusView:(id)arg1;
- (void)setPlatterPopoverBackgroundView:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPlatterVisualEffectView:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setStartState:(id)arg1;
- (void)setStartedFromFloating:(bool)arg1;
- (void)setWithinDockingRegion:(bool)arg1;
- (id)startState;
- (bool)startedFromFloating;
- (void)updateAnimationAtScale:(double)arg1;
- (void)updateHysteresisForCurrentFloatingState;
- (void)updateLayoutGuideForTransitionStart:(bool)arg1;
- (void)updateLayoutGuideFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updatePanGesture:(id)arg1;
- (void)updatePinchGesture:(id)arg1;
- (void)updateTransitionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withScale:(double)arg2 interactive:(bool)arg3;
- (bool)withinDockingRegion;

@end
