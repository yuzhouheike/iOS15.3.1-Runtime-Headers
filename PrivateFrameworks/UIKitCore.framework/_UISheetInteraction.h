/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISheetInteraction : NSObject <UIInteraction, UIPanGestureRecognizerDelegateInternal, _UIHyperInteractorDelegate, _UIHyperOutOfProcessViewAnimatorDelegate, _UIScrollViewScrollableAncestor> {
    _UIHyperOutOfProcessViewAnimator * _animator;
    UIPanGestureRecognizer * _backgroundGestureRecognizer;
    id /* block */  _currentOffsetWasInvalidated;
    <_UISheetInteractionDelegate> * _delegate;
    _UIHyperrectangle * _detentContinuum;
    NSMutableArray * _detentPoints;
    _UIHyperregionUnion * _detentUnion;
    id /* block */  _detentsGetter;
    <NSObject> * _dragSource;
    bool  _enabled;
    _UIHyperAsymmetricExtender * _extender;
    bool  _generatingAnimations;
    long long  _indexOfCurrentDetent;
    id /* block */  _indexOfCurrentDetentGetter;
    _UIHyperInteractor * _interactor;
    NSMutableArray * _registeredPanGestureRecognizers;
    id /* block */  _rubberBandExtentBeyondMaximumOffsetGetter;
    id /* block */  _rubberBandExtentBeyondMinimumOffsetGetter;
    bool  _scrollInteractionEnabled;
    bool  _scrollingExpandsToLargerDetentWhenScrolledToEdge;
    UIView * _view;
}

@property (nonatomic, readonly) _UIHyperOutOfProcessViewAnimator *animator;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } attachmentPoint;
@property (nonatomic, readonly) UIPanGestureRecognizer *backgroundGestureRecognizer;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentOffset;
@property (nonatomic, copy) id /* block */ currentOffsetWasInvalidated;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UISheetInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIHyperrectangle *detentContinuum;
@property (nonatomic, readonly) NSMutableArray *detentPoints;
@property (nonatomic, readonly) _UIHyperregionUnion *detentUnion;
@property (nonatomic, copy) id /* block */ detentsGetter;
@property (nonatomic, retain) <NSObject> *dragSource;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) _UIHyperAsymmetricExtender *extender;
@property (getter=isGeneratingAnimations, nonatomic) bool generatingAnimations;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indexOfCurrentDetent;
@property (nonatomic, copy) id /* block */ indexOfCurrentDetentGetter;
@property (nonatomic, readonly) _UIHyperInteractor *interactor;
@property (nonatomic, readonly) NSMutableArray *registeredPanGestureRecognizers;
@property (nonatomic, copy) id /* block */ rubberBandExtentBeyondMaximumOffsetGetter;
@property (nonatomic, copy) id /* block */ rubberBandExtentBeyondMinimumOffsetGetter;
@property (getter=isScrollInteractionEnabled, nonatomic) bool scrollInteractionEnabled;
@property (nonatomic) bool scrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_animateWithParameters:(id)arg1 animations:(id /* block */)arg2;
- (id)_currentDragPanGesture;
- (bool)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_descendentScrollViewDidCancelDragging:(id)arg1;
- (void)_descendentScrollViewDidEndDragging:(id)arg1;
- (bool)_descendentScrollViewShouldScrollHorizontally:(id)arg1;
- (bool)_descendentScrollViewShouldScrollVertically:(id)arg1;
- (void)_hyperInteractorApplyPresentationPoint:(id)arg1;
- (void)_hyperOutOfProcessViewAnimator:(id)arg1 getPresentationPointForInterruptedAnimation:(double*)arg2;
- (bool)_panGestureRecognizer:(id)arg1 shouldTryToBeginHorizontallyWithEvent:(id)arg2;
- (bool)_panGestureRecognizer:(id)arg1 shouldTryToBeginVerticallyWithEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint { double x1; double x2; })arg2 startOffset:(struct CGPoint { double x1; double x2; })arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6;
- (bool)_shouldInteractWithDescendentScrollView:(id)arg1 startOffset:(struct CGPoint { double x1; double x2; })arg2 maxTopOffset:(double)arg3;
- (id)animator;
- (struct CGPoint { double x1; double x2; })attachmentPoint;
- (id)backgroundGestureRecognizer;
- (void)cancelDraggingIfNeeded;
- (struct CGPoint { double x1; double x2; })currentOffset;
- (id /* block */)currentOffsetWasInvalidated;
- (id)delegate;
- (id)detentContinuum;
- (id)detentPoints;
- (id)detentUnion;
- (id /* block */)detentsGetter;
- (void)didMoveToView:(id)arg1;
- (id)dragSource;
- (void)draggingBeganFromSource:(id)arg1 withRubberBandCoefficient:(double)arg2;
- (void)draggingCancelledInSource:(id)arg1;
- (void)draggingChangedInSource:(id)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3 animateChange:(bool)arg4;
- (void)draggingEndedInSource:(id)arg1;
- (id)extender;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (long long)indexOfCurrentDetent;
- (id /* block */)indexOfCurrentDetentGetter;
- (id)init;
- (id)interactor;
- (void)invalidateDetents;
- (void)invalidateIndexOfCurrentDetent;
- (void)invalidateRubberBandExtentBeyondMaximumOffset;
- (void)invalidateRubberBandExtentBeyondMinimumOffset;
- (bool)isDragging;
- (bool)isEnabled;
- (bool)isGeneratingAnimations;
- (bool)isScrollInteractionEnabled;
- (bool)isUnconstrainedOffsetBeyondSideOrTopExtentInverted:(bool)arg1;
- (void)registerPanGestureRecognizer:(id)arg1;
- (id)registeredPanGestureRecognizers;
- (id /* block */)rubberBandExtentBeyondMaximumOffsetGetter;
- (id /* block */)rubberBandExtentBeyondMinimumOffsetGetter;
- (bool)scrollingExpandsToLargerDetentWhenScrolledToEdge;
- (void)sendCurrentOffsetDidChange;
- (void)setCurrentOffsetWasInvalidated:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetentsGetter:(id /* block */)arg1;
- (void)setDragSource:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGeneratingAnimations:(bool)arg1;
- (void)setIndexOfCurrentDetent:(long long)arg1;
- (void)setIndexOfCurrentDetentGetter:(id /* block */)arg1;
- (void)setRubberBandExtentBeyondMaximumOffsetGetter:(id /* block */)arg1;
- (void)setRubberBandExtentBeyondMinimumOffsetGetter:(id /* block */)arg1;
- (void)setScrollInteractionEnabled:(bool)arg1;
- (void)setScrollingExpandsToLargerDetentWhenScrolledToEdge:(bool)arg1;
- (void)setView:(id)arg1;
- (void)unregisterPanGestureRecognizer:(id)arg1;
- (void)updateRegisteredPanGestureRecognizerEnabled:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
