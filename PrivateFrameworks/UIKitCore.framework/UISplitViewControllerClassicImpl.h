/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISplitViewControllerClassicImpl : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl> {
    id /* block */  __clearPreventRotationHook;
    UIViewController * __preservedDetailController;
    UIBarButtonItem * _barButtonItem;
    NSString * _buttonTitle;
    UISnapshotView * _collapsingDetailSnapshotView;
    UISnapshotView * _collapsingMasterSnapshotView;
    id  _delegate;
    UIFocusContainerGuide * _detailFocusContainerGuide;
    UISplitViewControllerDisplayModeBarButtonItem * _displayModeButtonItem;
    NSString * _displayModeButtonItemTitle;
    long long  _effectiveTargetDisplayMode;
    float  _gutterWidth;
    UIPopoverController * _hiddenPopoverController;
    unsigned long long  _lastFocusedChildViewControllerIndex;
    long long  _lastNotifiedDisplayMode;
    long long  _lastPresentedOrientation;
    UIFocusContainerGuide * _masterFocusContainerGuide;
    double  _maximumPrimaryColumnWidth;
    UITapGestureRecognizer * _menuGestureRecognizer;
    double  _minimumPrimaryColumnWidth;
    long long  _pendingDisplayModeChangeCount;
    UIGestureRecognizer * _popoverPresentationGestureRecognizer;
    UIResponder * _postTransitionResponder;
    long long  _preferredDisplayMode;
    double  _preferredPrimaryColumnWidthFraction;
    bool  _presentsWithGesture;
    long long  _primaryEdge;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rotatingFromMasterViewFrame;
    long long  _rotatingFromOrientation;
    long long  _rotatingMasterChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rotatingToMasterViewFrame;
    UIView * _rotationSnapshotView;
    struct { 
        unsigned int invalidDelegateHiddenMasterAspectRatios : 2; 
        unsigned int delegateHiddenMasterAspectRatios : 2; 
        unsigned int delegateImplementsShouldHide : 1; 
        unsigned int hidden : 3; 
        unsigned int masterOnSlide : 1; 
        unsigned int delegateWantsWillShowCallback : 1; 
        unsigned int delegateWantsWillHideCallback : 1; 
        unsigned int delegateWantsWillPresentCallback : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int delegateWantsShowViewController : 1; 
        unsigned int delegateWantsShowDetailViewController : 1; 
        unsigned int delegateWantsCollapseSecondaryViewController : 1; 
        unsigned int delegateWantsSeparateSecondaryViewController : 1; 
        unsigned int delegateWantsPrimaryViewControllerForCollapse : 1; 
        unsigned int delegateWantsPrimaryViewControllerForExpanding : 1; 
        unsigned int collapsedState : 2; 
        unsigned int primaryHidingState : 2; 
        unsigned int primaryHidingStateForCurrentOrientation : 2; 
        unsigned int delegateWantsWillChangeToDisplayMode : 1; 
        unsigned int delegateWantsTargetDisplayModeForAction : 1; 
        unsigned int delegateCanModifyFirstResponderOnTraitCollectionTransition : 1; 
        unsigned int pendingPresentMasterViewController : 1; 
        unsigned int pendingUpdateTargetDisplayMode : 1; 
        unsigned int collapsingClockwise : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponder : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponderToNil : 1; 
        unsigned int inWillTransitionToSize : 1; 
        unsigned int hasTransitioningToInternalMode : 1; 
        unsigned int delegateImplementsPrivateIsPrimaryVisible : 1; 
        unsigned int delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended : 1; 
        unsigned int usesExtraWidePrimaryColumn : 1; 
        unsigned int usesDeviceOverlayPreferences : 1; 
        unsigned int prefersOverlayInRegularWidthPhone : 1; 
    }  _splitViewControllerFlags;
    long long  _suspendedState;
    UISplitViewController * _svc;
    UITraitCollection * _traitCollectionWhenRemovedFromWindow;
    long long  _transitioningMasterChange;
    long long  _transitioningToInternalMode;
    UITraitCollection * _transitioningToTraitCollection;
    UIView * _underBarSeparatorView;
    bool  _useChangingBoundsLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewBoundsBeforeCollapse;
}

@property (setter=_setClearPreventRotationHook:, nonatomic, copy) id /* block */ _clearPreventRotationHook;
@property (setter=_setDisplayModeButtonItemTitle:, nonatomic, copy) NSString *_displayModeButtonItemTitle;
@property (setter=_setPreservedDetailController:, nonatomic, retain) UIViewController *_preservedDetailController;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_detailFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *detailFocusContainerGuide;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesMasterViewInPortrait;
@property (nonatomic, readonly) bool inCollapsingToProposedTopColumnCallback;
@property (getter=_lastFocusedChildViewControllerIndex, nonatomic, readonly) unsigned long long lastFocusedChildViewControllerIndex;
@property (nonatomic, readonly) bool lockedForDelegateCallback;
@property (getter=_masterFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *masterFocusContainerGuide;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) bool prefersOverlayInRegularWidthPhone;
@property (nonatomic) bool presentsWithGesture;
@property (nonatomic) long long primaryBackgroundStyle;
@property (nonatomic) long long primaryEdge;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic) bool usesDeviceOverlayPreferences;
@property (getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:, nonatomic) bool usesExtraWidePrimaryColumn;
@property (nonatomic, copy) NSArray *viewControllers;

+ (double)_defaultGutterWidthInView:(id)arg1;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3;
- (void)_cacheEffectiveTargetDisplayMode;
- (bool)_canDisplayHostedMaster;
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(bool)arg2;
- (id)_childContainingSender:(id)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (id /* block */)_clearPreventRotationHook;
- (void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;
- (void)_commonInit;
- (void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2;
- (double)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (long long)_currentInterfaceIdiom;
- (id)_deepestActionResponder;
- (id)_deepestUnambiguousResponder;
- (id)_defaultDisplayModes;
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)_defaultTargetDisplayMode;
- (bool)_defersUpdateDelegateHiddenMasterAspectRatios;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(bool)arg4;
- (id)_detailFocusContainerGuide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didEndSnapshotSession;
- (void)_didTransitionTraitCollection;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_dismissMasterViewController:(bool)arg1;
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;
- (id)_displayModeButtonItemTitle;
- (void)_displayModeDidChange;
- (void)_displayModeWillChangeTo:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (bool)_effectivePresentsWithGesture;
- (long long)_effectivePrimaryHidingState;
- (long long)_effectiveTargetDisplayMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_handlesCounterRotationForPresentation;
- (bool)_hasMasterViewController;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (bool)_hidesMasterViewInCurrentOrientation;
- (bool)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2;
- (bool)_iPhoneShouldUseOverlayIfRegularWidth;
- (bool)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (void)_initWithCoder:(id)arg1;
- (long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 medusaState:(long long)arg4;
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1;
- (bool)_isAnimating;
- (bool)_isBasicallyHorizontallyCompact;
- (bool)_isCollapsed;
- (bool)_isHidesMasterInLandscapeInvalid;
- (bool)_isHidesMasterInPortraitInvalid;
- (bool)_isMasterPopoverVisible;
- (bool)_isMasterViewShown;
- (bool)_isRotating;
- (bool)_isTransitioningFromCollapsedToSeparated;
- (unsigned long long)_lastFocusedChildViewControllerIndex;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (bool)_layoutPrimaryOnRight;
- (void)_loadNewSubviews:(id)arg1;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (id)_masterFocusContainerGuide;
- (double)_masterPresentationAnimationDuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_masterViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_masterViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_medusaState;
- (long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2;
- (id)_multitaskingDragExclusionRects;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;
- (bool)_optsOutOfPopoverControllerHierarchyCheck;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(bool)arg2;
- (void)_prepareForCompactLayout;
- (long long)_prepareToTransitionToViewSize:(struct CGSize { double x1; double x2; })arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4;
- (void)_presentMasterViewController:(bool)arg1;
- (id)_preservedDetailController;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1 isCompact:(bool)arg2;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (double)_primaryDividerPosition;
- (long long)_primaryHidingState;
- (long long)_primaryHidingStateForCurrentOrientation;
- (id)_primaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (void)_removeCollapsingSnapshotViews;
- (struct CGSize { double x1; double x2; })_screenSizeInMainScene:(bool)arg1;
- (id)_secondaryViewControllerForCollapsing;
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;
- (void)_setClearPreventRotationHook:(id /* block */)arg1;
- (void)_setCollapsedState:(long long)arg1;
- (void)_setDelegateHidesMaster:(bool)arg1 inAspectRatio:(long long)arg2;
- (void)_setDetailViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setDisplayModeButtonItemTitle:(id)arg1;
- (void)_setMasterOverrideTraitCollectionActive:(bool)arg1;
- (void)_setPreservedDetailController:(id)arg1;
- (void)_setPrimaryHidingState:(long long)arg1;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;
- (void)_setUpFocusContainerGuides;
- (void)_setUsesExtraWidePrimaryColumn:(bool)arg1;
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;
- (void)_setupUnderBarSeparatorView;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldPreventAutorotation;
- (bool)_shouldUseRelativeInsets;
- (void)_showMasterViewAnimated:(bool)arg1;
- (double)_supplementaryDividerPosition;
- (unsigned long long)_targetEdgeForPopover;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_updateDelegateHiddenMasterAspectRatios;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateMasterViewControllerFrame;
- (void)_updateTargetDisplayMode;
- (bool)_usesExtraWidePrimaryColumn;
- (void)_viewControllerHiding:(id)arg1;
- (void)_willBeginSnapshotSession;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (long long)displayMode;
- (id)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (float)gutterWidth;
- (bool)hidesMasterViewInLandscape;
- (bool)hidesMasterViewInPortrait;
- (bool)inCollapsingToProposedTopColumnCallback;
- (id)initWithSplitViewController:(id)arg1;
- (bool)isCollapsed;
- (void)loadView;
- (bool)lockedForDelegateCallback;
- (id)masterViewController;
- (double)maximumPrimaryColumnWidth;
- (double)minimumPrimaryColumnWidth;
- (void)popoverWillAppear:(id)arg1;
- (long long)preferredCenterStatusBarStyle;
- (long long)preferredDisplayMode;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredLeadingStatusBarStyle;
- (double)preferredPrimaryColumnWidthFraction;
- (long long)preferredTrailingStatusBarStyle;
- (bool)prefersOverlayInRegularWidthPhone;
- (bool)presentsWithGesture;
- (long long)primaryBackgroundStyle;
- (double)primaryColumnWidth;
- (long long)primaryEdge;
- (void)setDelegate:(id)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(bool)arg1;
- (void)setMaximumPrimaryColumnWidth:(double)arg1;
- (void)setMinimumPrimaryColumnWidth:(double)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
- (void)setPrefersOverlayInRegularWidthPhone:(bool)arg1;
- (void)setPresentsWithGesture:(bool)arg1;
- (void)setPrimaryBackgroundStyle:(long long)arg1;
- (void)setPrimaryEdge:(long long)arg1;
- (void)setUsesDeviceOverlayPreferences:(bool)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)snapshotAllViews;
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3;
- (void)snapshotMasterView;
- (long long)style;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadViewForced:(bool)arg1;
- (bool)usesDeviceOverlayPreferences;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
