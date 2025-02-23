/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISplitViewControllerPanelImpl : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegate, UIPanelControllerDelegate, UISplitViewControllerImpl> {
    UIDimmingView * __dimmingView;
    UIScreenEdgePanGestureRecognizer * __fluidOpenSidebarPresentationGestureRecognizer;
    UIImage * __fullScreenButtonImage;
    long long  _animatingToDisplayMode;
    <UISplitViewControllerDelegate> * _delegate;
    UIFocusContainerGuide * _detailFocusContainerGuide;
    NSString * _displayModeButtonItemTitle;
    _UIHyperConstantExtender * _extender;
    struct { 
        unsigned int usedNewSPI : 1; 
        unsigned int primaryHidingState : 2; 
        unsigned int userGeneratedDisplayMode : 3; 
        unsigned int isStrictUserGeneratedDisplayMode : 1; 
        unsigned int didSetLastShouldAllowChangeDuringUpdate : 1; 
        unsigned int hasTransitioningSizeAndOrientation : 1; 
        unsigned int hasPendingPreferredDisplayModeChange : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponder : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponderToNil : 1; 
        unsigned int usesExtraWidePrimaryColumn : 1; 
        unsigned int usesDeviceOverlayPreferences : 1; 
        unsigned int prefersOverlayInRegularWidthPhone : 1; 
        unsigned int isGestureShowingSupplementaryColumn : 1; 
        unsigned int isGestureHidingPrimaryWithSupplementaryVisible : 1; 
        unsigned int isForcingOverlayForGesture : 1; 
        unsigned int allowToggleSidebarButtonWithoutGesture : 1; 
        unsigned int alwaysHideToggleSidebarButton : 1; 
        unsigned int allowsTriggeringSidebarKeyCommandAction : 1; 
        unsigned int wantsHideSidebarDisplayNameForKeyCommand : 1; 
        unsigned int allowsDimmedSecondaryAsDeepestUnambiguousResponder : 1; 
        unsigned int allowSecondaryOnlyButton : 1; 
        unsigned int lockedForDelegateCallback : 1; 
        unsigned int inCollapsingToProposedTopColumnCallback; 
        unsigned int sendDelegateWillShowColumn : 1; 
        unsigned int sendDelegateWillHideColumn : 1; 
        unsigned int skipDelegateWillShowHideColumn : 1; 
        unsigned int useUnderscoredWillShowHideColumn : 1; 
        unsigned int sendDelegateInteractiveGestureWillBegin : 1; 
        unsigned int sendDelegateInteractiveGestureWillBeginSPI : 1; 
        unsigned int sendDelegateInteractiveGestureDidEnd : 1; 
        unsigned int sendDelegateInteractiveGestureDidEndSPI : 1; 
        unsigned int sendDelegateAllowGestureForColumnSPI : 1; 
    }  _flags;
    UIView * _floatableButtonContainer;
    NSMutableArray * _hyperpoints;
    _UIHyperrectangle * _hyperrectangle;
    _UIHyperInteractor * _interactor;
    unsigned long long  _lastFocusedChildViewControllerIndex;
    bool  _lastNotifiedIsCollapsed;
    long long  _lastNotifiedMode;
    long long  _lastNotifiedTopColumnForCollapse;
    bool  _lastShouldAllowChange;
    double  _lastUserInitiatedPrimaryWidth;
    UIFocusContainerGuide * _masterFocusContainerGuide;
    double  _maximumPrimaryColumnWidth;
    double  _maximumSupplementaryColumnWidth;
    UITapGestureRecognizer * _menuGestureRecognizer;
    double  _minimumPrimaryColumnWidth;
    double  _minimumSupplementaryColumnWidth;
    UINavigationBar * _navBarForShortcutButton;
    UINavigationBar * _navBarForToggleButton;
    NSMutableArray * _overrideReportedDisplayModeStack;
    UIPanelController * _panelController;
    NSMutableDictionary * _perColumnViewControllers;
    UIResponder * _postTransitionResponder;
    long long  _preferredDisplayMode;
    double  _preferredPrimaryColumnWidth;
    double  _preferredPrimaryColumnWidthFraction;
    long long  _preferredSplitBehavior;
    double  _preferredSupplementaryColumnWidth;
    double  _preferredSupplementaryColumnWidthFraction;
    double  _presentationGestureDirection;
    bool  _presentsWithGesture;
    long long  _primaryBackgroundStyle;
    long long  _primaryEdge;
    _UIHyperregionUnion * _regionUnion;
    UIBarButtonItem * _secondaryOnlyShortcutButtonItem;
    UIPanGestureRecognizer * _sidebarPanGestureRecognizer;
    _UIFloatableBarButtonItem * _sidebarToggleButtonItem;
    UIResponder * _suspendedFirstResponder;
    struct CGSize { 
        double width; 
        double height; 
    }  _suspendedSize;
    long long  _suspendedState;
    UISlidingBarStateRequest * _suspendedStateRequest;
    UITraitCollection * _suspendedTraitCollection;
    UISplitViewController * _svc;
    struct { 
        unsigned int determinedPrimaryWasVisibleBeforeExpansion : 1; 
        unsigned int primaryWasVisibleBeforeExpansion : 1; 
    }  _transitioningFlags;
    long long  _transitioningToOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _transitioningToSize;
    UITraitCollection * _transitioningToTraitCollection;
    UISplitViewControllerDisplayModeBarButtonItem * _unspecifiedStyleDisplayModeButtonItem;
}

@property (getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder, setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:, nonatomic) bool _allowsDimmedSecondaryAsDeepestUnambiguousResponder;
@property (setter=_setDimmingView:, nonatomic, retain) UIDimmingView *_dimmingView;
@property (setter=_setDisplayModeButtonItemTitle:, nonatomic, copy) NSString *_displayModeButtonItemTitle;
@property (setter=_setFluidOpenSidebarPresentationGestureRecognizer:, nonatomic, retain) UIScreenEdgePanGestureRecognizer *_fluidOpenSidebarPresentationGestureRecognizer;
@property (setter=_setFluidSidebarPresentationGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *_fluidSidebarPresentationGestureRecognizer;
@property (setter=_setForceDisplayModeBarButtonHidden:, nonatomic) bool _forceDisplayModeBarButtonHidden;
@property (setter=_setFullScreenButtonImage:, nonatomic, retain) UIImage *_fullScreenButtonImage;
@property (setter=_setPresentationGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *_presentationGestureRecognizer;
@property (setter=_setVisibleToggleButtonRequiresPresentsWithGesture:, nonatomic) bool _visibleToggleButtonRequiresPresentsWithGesture;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, copy) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_detailFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *detailFocusContainerGuide;
@property (nonatomic) long long displayModeButtonVisibility;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesMasterViewInPortrait;
@property (nonatomic, readonly) bool inCollapsingToProposedTopColumnCallback;
@property (getter=_lastFocusedChildViewControllerIndex, nonatomic, readonly) unsigned long long lastFocusedChildViewControllerIndex;
@property (nonatomic, readonly) bool lockedForDelegateCallback;
@property (getter=_masterFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *masterFocusContainerGuide;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) double maximumSupplementaryColumnWidth;
@property (getter=_menuGestureRecognizer, nonatomic, readonly) UITapGestureRecognizer *menuGestureRecognizer;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) double minimumSupplementaryColumnWidth;
@property (nonatomic, retain) UIPanelController *panelController;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidth;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) long long preferredSplitBehavior;
@property (nonatomic) double preferredSupplementaryColumnWidth;
@property (nonatomic) double preferredSupplementaryColumnWidthFraction;
@property (nonatomic) bool prefersOverlayInRegularWidthPhone;
@property (nonatomic) bool presentsWithGesture;
@property (nonatomic) long long primaryBackgroundStyle;
@property (nonatomic) long long primaryEdge;
@property (nonatomic) bool showsSecondaryOnlyButton;
@property (nonatomic, readonly) long long splitBehavior;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double supplementaryColumnWidth;
@property (nonatomic) bool usesDeviceOverlayPreferences;
@property (getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:, nonatomic) bool usesExtraWidePrimaryColumn;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_addFocusPromiseRegionInContext:(id)arg1;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (bool)_allowClientAnimationCoordination;
- (bool)_allowMoveToSecondaryOnlyGetIsInForcedOverlayFromGesture:(bool*)arg1;
- (void)_allowingMutationsInDelegateCallback:(id /* block */)arg1;
- (bool)_allowsDimmedSecondaryAsDeepestUnambiguousResponder;
- (bool)_allowsFocusBehindDimmingView;
- (bool)_allowsTriggeringSidebarKeyCommandAction;
- (bool)_alwaysHideSidebarToggleButton;
- (void)_changeToDisplayMode:(long long)arg1 fromPreferredDisplayMode:(long long)arg2;
- (id)_childContainingSender:(id)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (long long)_columnForMonitoredNavigationController:(id)arg1;
- (long long)_columnForView:(id)arg1 getIsContent:(bool*)arg2;
- (long long)_columnForViewController:(id)arg1;
- (id)_columnStyleDelegate;
- (void)_commonInit;
- (long long)_concreteDisplayModeForCurrentEnvironment;
- (bool)_configurationPermitsFluidCloseGestureWithPrimaryShown:(bool)arg1 supplementaryShown:(bool)arg2;
- (bool)_configurationPermitsFluidOpenGestureWithPrimaryShown:(bool)arg1 supplementaryShown:(bool)arg2;
- (double)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (long long)_currentInterfaceIdiom;
- (id)_currentPrimaryChildViewController;
- (id)_currentSupplementaryChildViewController;
- (id)_deepestActionResponder;
- (double)_defaultMaximumIPadWidthForColumn:(long long)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_defaultMaximumSupplementaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_defaultMaximumTVWidthForColumn:(long long)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_defaultViewSizeForResolvingDisplayModeOrSplitBehavior;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(bool)arg4;
- (id)_detailFocusContainerGuide;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didEndSnapshotSession;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_dimmingView;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;
- (id)_displayModeButtonItem;
- (id)_displayModeButtonItemTitle;
- (long long)_displayModeForState:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (unsigned long long)_effectivePrimaryRectEdge;
- (long long)_effectiveTargetDisplayMode;
- (long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1;
- (id)_enterFullScreenSymbolImage;
- (bool)_fluidGestureRecognizerShouldBegin:(id)arg1;
- (id)_fluidOpenSidebarPresentationGestureRecognizer;
- (void)_fluidPresentationGestureRecognizerChanged:(id)arg1;
- (id)_fluidSidebarPresentationGestureRecognizer;
- (void)_fluidUpdatePresentationGestureRecognizers;
- (bool)_forceDisplayModeBarButtonHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (id)_fullScreenButtonImage;
- (long long)_fullScreenStateForOrientation:(long long)arg1 viewWidth:(double)arg2;
- (id)_fullScreenSymbolImageForDisplayMode:(long long)arg1;
- (bool)_gestureIsForcingOverlay;
- (bool)_gestureIsForcingOverlayForDisplayMode:(long long)arg1;
- (void)_getPrimaryShown:(bool*)arg1 shouldUseOverlay:(bool*)arg2;
- (void)_getPrimaryShown:(bool*)arg1 supplementaryShown:(bool*)arg2 shouldUseOverlay:(bool*)arg3 dimMainIfNecessary:(bool*)arg4;
- (void)_getPrimaryShown:(bool*)arg1 supplementaryShown:(bool*)arg2 shouldUseOverlay:(bool*)arg3 dimMainIfNecessary:(bool*)arg4 forDisplayMode:(long long)arg5;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_handlesCounterRotationForPresentation;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (id)_hiddenColumnsInCurrentEnvironmentWithConcreteDisplayMode:(long long)arg1;
- (bool)_iPadShouldUseOverlayInCurrentEnvironment;
- (bool)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (void)_initWithCoder:(id)arg1;
- (bool)_isAnimating;
- (bool)_isCollapsed;
- (bool)_isCollapsedOrCollapsing;
- (bool)_isDisplayModeBarButtonVisible;
- (bool)_isPrimaryLeading;
- (bool)_isPrimaryShown;
- (bool)_isRotating;
- (bool)_isViewControllerForObservableScrollViewAmbiguous;
- (unsigned long long)_lastFocusedChildViewControllerIndex;
- (bool)_layoutPrimaryOnRight;
- (id)_leaveFullScreenSymbolImage;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (id)_masterFocusContainerGuide;
- (id)_menuGestureRecognizer;
- (id)_multitaskingDragExclusionRects;
- (id)_navigationBarForSidebarButtonForColumn:(long long)arg1;
- (id)_navigationBarForSidebarButtonForDisplayMode:(long long)arg1;
- (void)_navigationController:(id)arg1 navigationBar:(id)arg2 itemBackButtonUpdated:(id)arg3;
- (void)_navigationController:(id)arg1 navigationBar:(id)arg2 topItemUpdatedContentLayout:(id)arg3;
- (id)_navigationController:(id)arg1 navigationBarAdditionalActionsForBackButtonMenu:(id)arg2;
- (void)_navigationControllerDidChangeNavigationBarHidden:(id)arg1;
- (void)_navigationControllerDidUpdateStack:(id)arg1;
- (bool)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg1;
- (id)_newBarContentAnimationClippingView;
- (long long)_nextTargetDisplayModeForDisplayMode:(long long)arg1 showMoreIfPossible:(bool)arg2;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;
- (void)_notifyFluidPresentationGestureDidEnd;
- (void)_notifyFluidPresentationGestureWillBegin;
- (bool)_optsOutOfPopoverControllerHierarchyCheck;
- (void)_popOverrideOfReportedDisplayMode;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(bool)arg2;
- (struct CGSize { double x1; double x2; })_predictedDetailSizeForPredictedEndState:(id)arg1;
- (id)_presentationGestureRecognizer;
- (void)_presentationGestureRecognizerChanged:(id)arg1;
- (void)_primaryColumnWidthAffectingPropertyDidChange;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1 isCompact:(bool)arg2 shouldUseOverlay:(bool)arg3;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1 shouldUseOverlay:(bool)arg2;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (double)_primaryDividerPosition;
- (long long)_primaryHidingState;
- (void)_pushOverrideOfReportedDisplayMode:(long long)arg1;
- (void)_revealSecondaryColumnIfNecessary;
- (struct CGSize { double x1; double x2; })_screenSize;
- (bool)_scrollViewPreventsGestureForHitView:(id)arg1;
- (void)_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:(bool)arg1;
- (void)_setDimmingView:(id)arg1;
- (void)_setDisplayModeButtonItemTitle:(id)arg1;
- (void)_setFluidOpenSidebarPresentationGestureRecognizer:(id)arg1;
- (void)_setFluidSidebarPresentationGestureRecognizer:(id)arg1;
- (void)_setForceDisplayModeBarButtonHidden:(bool)arg1;
- (void)_setFullScreenButtonImage:(id)arg1;
- (void)_setInteractiveSidebarWidth:(double)arg1;
- (void)_setNumberOfSidebarColumnsVisibleFromGesture:(unsigned long long)arg1 withVelocity:(double)arg2;
- (bool)_setPanelConfigurationWithIsPrimaryShown:(bool)arg1 isSupplementaryShown:(bool)arg2 shouldUseOverlay:(bool)arg3 dimMainIfNecessary:(bool)arg4;
- (bool)_setPanelConfigurationWithIsPrimaryShown:(bool)arg1 shouldUseOverlay:(bool)arg2;
- (void)_setPresentationGestureRecognizer:(id)arg1;
- (void)_setPrimaryHidingState:(long long)arg1;
- (void)_setPrimaryShownFromGesture:(bool)arg1 hideAll:(bool)arg2;
- (void)_setUpFocusContainerGuides;
- (void)_setUsesExtraWidePrimaryColumn:(bool)arg1;
- (void)_setVisibleToggleButtonRequiresPresentsWithGesture:(bool)arg1;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldReturnBoundsWidthForColumnWidth;
- (bool)_shouldUseFluidSidebarGestures;
- (id)_sidebarChevronSymbolImage;
- (id)_sidebarToggleSymbolImage;
- (void)_stopTransitionsInViewController:(id)arg1;
- (double)_supplementaryDividerPosition;
- (void)_supplementaryOrPrimaryColumnWidthAffectingPropertyDidChange;
- (long long)_svcOrientation;
- (long long)_svcViewWindowOrientation;
- (void)_tabBarControllerDidChangeSelection:(id)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_transitionFromDisplayMode:(long long)arg1 toDisplayMode:(long long)arg2;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_triggerSecondaryOnlyShortcutAction:(id)arg1;
- (void)_triggerSidebarKeyCommandAction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tvOSColumnStyleExtraInsetsForChildViewController:(id)arg1;
- (id)_unspecifiedCompositionDisplayModeButtonItem;
- (void)_unspecifiedShowDetailViewController:(id)arg1 onTargetVC:(id)arg2 sender:(id)arg3;
- (void)_unspecifiedStyleChangeToDisplayMode:(long long)arg1 fromPreferredDisplayMode:(long long)arg2;
- (id)_unspecifiedStyleChildViewControllersToSendViewWillTransitionToSize;
- (long long)_unspecifiedStyleDisplayModeForState:(id)arg1;
- (bool)_unspecifiedStyleGestureRecognizerShouldBegin:(id)arg1;
- (void)_unspecifiedStylePanelController:(id)arg1 didChangeToState:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_unspecifiedStylePresentationGestureRecognizerChanged:(id)arg1;
- (void)_unspecifiedStyleSetPrimaryShownFromGesture:(bool)arg1;
- (void)_unspecifiedStyleSetViewControllers:(id)arg1;
- (void)_unspecifiedStyleTriggerDisplayModeAction:(id)arg1;
- (void)_unspecifiedStyleUpdateDisplayModeButtonItem;
- (id)_unspecifiedStyleViewControllers;
- (void)_updateAllowsTriggeringSidebarKeyCommandAction;
- (void)_updateChildContentMargins;
- (void)_updateConfigurationBackgroundStyle;
- (void)_updateDimmingView;
- (void)_updateDisplayModeButtonItem;
- (void)_updateDisplayModeButtonItemAndResetForCanceledAnimationWithTransitionCoordinator:(id)arg1;
- (void)_updateDisplayModeButtonItemForDisplayMode:(long long)arg1;
- (void)_updateDisplayModeButtonItemIfNecessaryForChangingNavigationController:(id)arg1;
- (void)_updateFocusContainerGuideFrames;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updatePresentationGestureRecognizer;
- (void)_updateTriggerSidebarKeyCommandTitleForNewDisplayMode:(long long)arg1;
- (bool)_usePaddingForEdgeInsetsForChildViewController:(id)arg1;
- (bool)_usesExtraWidePrimaryColumn;
- (void)_validateTriggerSidebarKeyCommand:(id)arg1;
- (void)_viewControllerChildViewControllersDidChange:(id)arg1;
- (id)_viewControllerForObservableScrollView;
- (bool)_visibleToggleButtonRequiresPresentsWithGesture;
- (bool)_wantsSideBarImageForOneOverSecondary;
- (void)_willBeginSnapshotSession;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (long long)allowedDisplayModeForCurrentSplitBehaviorGivenDisplayMode:(long long)arg1;
- (bool)allowsSecondaryOnlyShortcutButton;
- (void)animateToRequest:(id)arg1;
- (void)callDeprecatedWillHideDelegateCallbackIfNecessary;
- (void)callDeprecatedWillShowDelegateCallbackIfNecessary;
- (id)childViewControllerForStatusBarStyle;
- (id)configuration;
- (id)currentState;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (long long)defaultDisplayModeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)delegate;
- (id)description;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (long long)displayMode;
- (id)displayModeButtonItem;
- (long long)displayModeButtonVisibility;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)getPrimaryColumnWidth:(double*)arg1 supplementaryColumnWidth:(double*)arg2 forSize:(struct CGSize { double x1; double x2; })arg3 displayMode:(long long)arg4 isCompact:(bool)arg5 shouldUseOverlay:(bool)arg6;
- (void)getPrimaryColumnWidth:(double*)arg1 supplementaryColumnWidth:(double*)arg2 forSize:(struct CGSize { double x1; double x2; })arg3 displayMode:(long long)arg4 shouldUseOverlay:(bool)arg5;
- (float)gutterWidth;
- (void)hideColumn:(long long)arg1;
- (bool)hidesMasterViewInPortrait;
- (bool)inCollapsingToProposedTopColumnCallback;
- (id)initWithSplitViewController:(id)arg1;
- (bool)isCollapsed;
- (void)loadView;
- (bool)lockedForDelegateCallback;
- (id)masterViewController;
- (double)maximumPrimaryColumnWidth;
- (double)maximumSupplementaryColumnWidth;
- (double)minimumPrimaryColumnWidth;
- (double)minimumSupplementaryColumnWidth;
- (id)panelController;
- (void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3;
- (void)panelController:(id)arg1 adjustTrailingViewController:(id)arg2 forKeyboardInfo:(id)arg3;
- (void)panelController:(id)arg1 animateTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
- (bool)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;
- (bool)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 onTopOfSupplementaryViewController:(id)arg4 transitionCoordinator:(id)arg5;
- (void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4;
- (void)panelController:(id)arg1 didChangeToState:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;
- (void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
- (double)panelController:(id)arg1 expectedWidthForColumnForViewController:(id)arg2;
- (id)panelController:(id)arg1 navigationBarForViewController:(id)arg2;
- (id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (id)panelController:(id)arg1 separateSupplementaryViewControllerFromPrimaryViewController:(id)arg2;
- (id)panelController:(id)arg1 unspecifiedStyleSeparateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
- (void)panelController:(id)arg1 willBeginAnimationToPrimarySize:(struct CGSize { double x1; double x2; })arg2 supplementarySize:(struct CGSize { double x1; double x2; })arg3 secondarySize:(struct CGSize { double x1; double x2; })arg4;
- (void)panelController:(id)arg1 willChangeToState:(id)arg2;
- (void)panelControllerDidCollapse:(id)arg1;
- (void)panelControllerDidExpand:(id)arg1;
- (id /* block */)panelControllerWillUpdate:(id)arg1;
- (id)possibleStates;
- (long long)preferredCenterStatusBarStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredDisplayMode;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredLeadingStatusBarStyle;
- (double)preferredPrimaryColumnWidth;
- (double)preferredPrimaryColumnWidthFraction;
- (long long)preferredSplitBehavior;
- (double)preferredSupplementaryColumnWidth;
- (double)preferredSupplementaryColumnWidthFraction;
- (long long)preferredTrailingStatusBarStyle;
- (bool)prefersOverlayInRegularWidthPhone;
- (void)preparePanelControllerForCollapse;
- (bool)presentsWithGesture;
- (long long)primaryBackgroundStyle;
- (double)primaryColumnWidth;
- (long long)primaryEdge;
- (id)primaryViewControllerForCollapsingPanelController:(id)arg1;
- (id)primaryViewControllerForExpandingPanelController:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)sendColumnShowHideNotificationsForNewState:(id)arg1 newDisplayMode:(long long)arg2 oldDisplayMode:(long long)arg3;
- (void)sendWillHideColumn:(long long)arg1;
- (void)sendWillShowColumn:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayModeButtonVisibility:(long long)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(bool)arg1;
- (void)setMaximumPrimaryColumnWidth:(double)arg1;
- (void)setMaximumSupplementaryColumnWidth:(double)arg1;
- (void)setMinimumPrimaryColumnWidth:(double)arg1;
- (void)setMinimumSupplementaryColumnWidth:(double)arg1;
- (void)setPanelController:(id)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setPreferredPrimaryColumnWidth:(double)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
- (void)setPreferredSplitBehavior:(long long)arg1;
- (void)setPreferredSupplementaryColumnWidth:(double)arg1;
- (void)setPreferredSupplementaryColumnWidthFraction:(double)arg1;
- (void)setPrefersOverlayInRegularWidthPhone:(bool)arg1;
- (void)setPresentsWithGesture:(bool)arg1;
- (void)setPrimaryBackgroundStyle:(long long)arg1;
- (void)setPrimaryEdge:(long long)arg1;
- (void)setShowsSecondaryOnlyButton:(bool)arg1;
- (void)setStateRequest:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUserGeneratedDisplayMode:(long long)arg1;
- (void)setUsesDeviceOverlayPreferences:(bool)arg1;
- (void)setViewController:(id)arg1 forColumn:(long long)arg2;
- (void)setViewControllers:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showColumn:(long long)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (bool)showsSecondaryOnlyButton;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)splitBehavior;
- (long long)splitBehaviorForSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)splitBehaviorInCurrentEnvironment;
- (id)stateRequest;
- (long long)style;
- (double)supplementaryColumnWidth;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (long long)topColumnForCollapsingPanelController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionCoordinator;
- (void)unloadViewForced:(bool)arg1;
- (void)updateDisplayModeButtonItem;
- (void)updatePanelControllerForViewControllerChangeInColumn:(long long)arg1;
- (void)updatePanelControllerForViewControllerChangeInColumn:(long long)arg1 alwaysAnimate:(bool)arg2;
- (long long)userGeneratedDisplayMode;
- (bool)usesDeviceOverlayPreferences;
- (long long)validDisplayModeWithAllColumns;
- (Class)viewClassForPanelController:(id)arg1;
- (id)viewControllerForColumn:(long long)arg1;
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
