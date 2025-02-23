/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPopoverController : NSObject <UIAppearanceContainer, UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate> {
    bool  _allowsPopoverPresentationToAdapt;
    UIColor * _backgroundColor;
    UIViewController * _contentViewController;
    unsigned long long  _currentArrowDirection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentPresentationRectInView;
    UIView * _currentPresentationView;
    id  _delegate;
    SEL  _didEndSelector;
    bool  _didPresentInActiveSequence;
    UIDimmingView * _dimmingView;
    UIPanGestureRecognizer * _dimmingViewGestureRecognizer;
    bool  _dismissesOnRotation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _embeddedTargetRect;
    bool  _ignoresKeyboardNotifications;
    UIView * _layoutConstraintView;
    UIViewController * _modalPresentationFromViewController;
    UIViewController * _modalPresentationToViewController;
    unsigned long long  _originalArrowDirections;
    NSArray * _passthroughViews;
    unsigned long long  _popoverArrowDirection;
    long long  _popoverBackgroundStyle;
    Class  _popoverBackgroundViewClass;
    struct CGSize { 
        double width; 
        double height; 
    }  _popoverContentSize;
    struct { 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling : 1; 
        unsigned int isInTextEffectsWindow : 1; 
        unsigned int isEmbeddingInView : 1; 
        unsigned int embeddedPresentationBounces : 1; 
        unsigned int isWaitingToPresentShimmedPopover : 1; 
    }  _popoverControllerFlags;
    long long  _popoverControllerStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _popoverLayoutMargins;
    _UIPopoverView * _popoverView;
    _UIPopoverLayoutInfo * _preferredLayoutInfo;
    UIPopoverPresentationController * _presentationController;
    long long  _presentationDirection;
    unsigned long long  _presentationEdge;
    int  _presentationState;
    UIView * _presentingView;
    unsigned long long  _requestedArrowDirections;
    UIPopoverController * _retainedSelf;
    bool  _retainsSelfWhilePresented;
    bool  _showsOrientationMarker;
    bool  _showsPresentationArea;
    bool  _showsTargetRect;
    unsigned long long  _slideTransitionCount;
    UIViewController * _slidingViewController;
    UIViewController * _splitParentController;
    id  _target;
    UIBarButtonItem * _targetBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRectInDimmingView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRectInEmbeddingView;
    unsigned long long  _toViewAutoResizingMask;
    UIPanGestureRecognizer * _vendedGestureRecognizer;
    unsigned int  draggingChildScrollViewCount;
}

@property (setter=_setIgnoresKeyboardNotifications:, nonatomic) bool _ignoresKeyboardNotifications;
@property (getter=_allowsPopoverPresentationToAdapt, setter=_setAllowsPopoverPresentationToAdapt:, nonatomic) bool allowsPopoverPresentationToAdapt;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPopoverControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDimmingView *dimmingView;
@property (nonatomic) bool dismissesOnRotation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic) unsigned long long popoverArrowDirection;
@property (nonatomic, retain) Class popoverBackgroundViewClass;
@property (nonatomic) struct CGSize { double x1; double x2; } popoverContentSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } popoverLayoutMargins;
@property (getter=isPopoverVisible, nonatomic, readonly) bool popoverVisible;
@property (nonatomic, retain) _UIPopoverLayoutInfo *preferredLayoutInfo;
@property (getter=_presentationController, setter=_setPresentationController:, nonatomic, retain) UIPopoverPresentationController *presentationController;
@property (getter=_presentationEdge, setter=_setPresentationEdge:, nonatomic) unsigned long long presentationEdge;
@property (getter=_presentingView, setter=_setPresentingView:, nonatomic) UIView *presentingView;
@property (getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:, nonatomic) bool retainsSelfWhilePresented;
@property (nonatomic) bool showsOrientationMarker;
@property (nonatomic) bool showsPresentationArea;
@property (nonatomic) bool showsTargetRect;
@property (readonly) Class superclass;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (bool)_forceAttemptsToAvoidKeyboard;
+ (Class)_popoverViewClass;
+ (bool)_popoversDisabled;
+ (void)_setForceModernPopoverUse:(bool)arg1;
+ (bool)_showTargetRectPref;
+ (bool)_useLegacyPopoverControllers;

- (void).cxx_destruct;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(bool)arg2;
- (bool)_allowsFocusBehindDimmingView;
- (bool)_allowsPopoverPresentationToAdapt;
- (bool)_attemptsToAvoidKeyboard;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned long long)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3 arrowDirections:(unsigned long long)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6;
- (bool)_canRepresentAutomatically;
- (struct CGPoint { double x1; double x2; })_centerPointForScale:(double)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (void)_commonPresentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4;
- (id /* block */)_completionBlockForDismissalWhenNotifyingDelegate:(bool)arg1;
- (void)_containedViewControllerModalStateChanged;
- (struct CGSize { double x1; double x2; })_currentPopoverContentSize;
- (Class)_defaultChromeViewClass;
- (id)_dimmingView;
- (void)_dismissPopoverAnimated:(bool)arg1 stateOnly:(bool)arg2 notifyDelegate:(bool)arg3;
- (double)_dismissalAnimationDuration;
- (bool)_embedsInView;
- (bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)_gestureRecognizerForPresentationFromEdge:(unsigned long long)arg1;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_hostingWindowWillRotate:(id)arg1;
- (bool)_ignoresKeyboardNotifications;
- (void)_incrementSlideTransitionCount:(bool)arg1;
- (id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(long long)arg2;
- (void)_invalidateLayoutInfo;
- (bool)_isDismissing;
- (bool)_isPresenting;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (id)_managingSplitViewController;
- (bool)_manuallyHandlesContentViewControllerAppearanceCalls;
- (void)_modalAnimationFinishedEndIgnoringInteractiveEvents:(bool)arg1;
- (void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (long long)_popoverBackgroundStyle;
- (long long)_popoverControllerStyle;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)_postludeForDismissal;
- (void)_presentPopoverBySlidingIn:(bool)arg1 fromEdge:(unsigned long long)arg2 ofView:(id)arg3 animated:(bool)arg4 stateOnly:(bool)arg5 notifyDelegate:(bool)arg6;
- (void)_presentPopoverFromEdge:(unsigned long long)arg1 ofView:(id)arg2 animated:(bool)arg3;
- (void)_presentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4;
- (void)_presentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animate:(bool)arg5;
- (void)_presentShimmedPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4;
- (double)_presentationAnimationDuration;
- (id)_presentationController;
- (unsigned long long)_presentationEdge;
- (int)_presentationState;
- (id)_presentingView;
- (void)_resetSlideTransitionCount;
- (bool)_retainsSelfWhilePresented;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_setAllowsPopoverPresentationToAdapt:(bool)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(bool)arg3;
- (void)_setGesturesEnabled:(bool)arg1;
- (void)_setIgnoresKeyboardNotifications:(bool)arg1;
- (void)_setManagingSplitViewController:(id)arg1;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (void)_setPopoverView:(id)arg1;
- (void)_setPresentationController:(id)arg1;
- (void)_setPresentationEdge:(unsigned long long)arg1;
- (void)_setPresentationState:(int)arg1;
- (void)_setPresentingView:(id)arg1;
- (void)_setRetainsSelfWhilePresented:(bool)arg1;
- (void)_setSplitParentController:(id)arg1;
- (void)_setupPresentationController;
- (bool)_shimPopoverPresentationController;
- (bool)_shimPresentSlidingPopoverAnimated:(bool)arg1;
- (unsigned long long)_slideTransitionCount;
- (id)_splitParentController;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForScrollViewNotifications;
- (void)_startWatchingForWindowRotations;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_stopWatchingForNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_stopWatchingForWindowRotations;
- (void)_swipe:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(bool)arg3;
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)backgroundColor;
- (id)contentViewController;
- (void)dealloc;
- (id)delegate;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissPopoverAnimated:(bool)arg1;
- (bool)dismissesOnRotation;
- (id)init;
- (id)initWithContentViewController:(id)arg1;
- (bool)isPopoverVisible;
- (bool)isPresentingOrDismissing;
- (id)passthroughViews;
- (unsigned long long)popoverArrowDirection;
- (Class)popoverBackgroundViewClass;
- (struct CGSize { double x1; double x2; })popoverContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })popoverLayoutMargins;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popoverView;
- (id)preferredLayoutInfo;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(bool)arg3;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setContentViewController:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDismissesOnRotation:(bool)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPopoverArrowDirection:(unsigned long long)arg1;
- (void)setPopoverBackgroundViewClass:(Class)arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setPopoverLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredLayoutInfo:(id)arg1;
- (void)setShowsOrientationMarker:(bool)arg1;
- (void)setShowsPresentationArea:(bool)arg1;
- (void)setShowsTargetRect:(bool)arg1;
- (bool)showsOrientationMarker;
- (bool)showsPresentationArea;
- (bool)showsTargetRect;

@end
