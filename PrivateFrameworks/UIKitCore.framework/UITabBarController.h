/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITabBarController : UIViewController <DebugHierarchyObject_Fallback, NSCoding, UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UITabBarDelegate, _UIScrollViewScrollObserver, _UIScrollViewScrollObserver_Internal, _UITVScrollViewManagerDelegate, _UITabBarDelegateInternal> {
    bool  __allowLateralFocusMovementOutOfTabBar;
    <UIViewControllerAnimatedTransitioning> * __animator;
    NSString * __backdropGroupName;
    <UIViewControllerInteractiveTransitioning> * __interactor;
    bool  __shouldFocusViewControllerAfterTransition;
    UILongPressGestureRecognizer * _accessibilityLongPressGestureRecognizer;
    UIView * _accessoryView;
    UITapGestureRecognizer * _backGestureRecognizer;
    UILayoutContainerView * _containerView;
    UIFocusContainerGuide * _contentFocusContainerGuide;
    unsigned long long  _customMaxItems;
    NSArray * _customizableViewControllers;
    unsigned long long  _defaultMaxItems;
    <UITabBarControllerDelegate> * _delegate;
    UITabBarAppearance * _lastUsedScrollEdgeAppearance;
    NSMutableArray * _moreChildViewControllers;
    UIMoreNavigationController * _moreNavigationController;
    UITapGestureRecognizer * _nudgeLeftGestureRecognizer;
    UITapGestureRecognizer * _nudgeRightGestureRecognizer;
    UIScrollView * _observingScrollView;
    NSMapTable * _rememberedFocusedItemsByViewController;
    _UITVScrollViewManager * _scrollViewManager;
    UITapGestureRecognizer * _selectGestureRecognizer;
    UIViewController * _selectedViewController;
    UIViewController * _selectedViewControllerDuringWillAppear;
    UITabBar * _tabBar;
    UIView * _tabBarContainerView;
    struct { 
        unsigned int isShowingMoreItem : 1; 
        unsigned int needsToRebuildItems : 1; 
        unsigned int isBarHidden : 1; 
        unsigned int editButtonOnLeft : 1; 
        unsigned int barLayoutIsValid : 1; 
        unsigned int reselectTab : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int preferTabBarFocused : 1; 
        unsigned int notifySplitViewControllerForSelectionChange : 1; 
        unsigned int suspendBarBackgroundUpdating : 1; 
        unsigned int isAwaitingLayoutAfterTransitioningSelected : 1; 
        unsigned int offscreen : 1; 
        unsigned int hidNavBar : 1; 
    }  _tabBarControllerFlags;
    id  _tabBarItemsToViewControllers;
    UIFocusGuide * _tabBarOffscreenFocusGuide;
    long long  _tabBarPosition;
    UIGestureRecognizer * _touchDetectionGestureRecognizer;
    UIViewController * _transientViewController;
    UIView * _viewControllerTransitionView;
}

@property (setter=_setAccessoryView:, nonatomic, retain) UIView *_accessoryView;
@property (setter=_setAllowLateralFocusMovementOutOfTabBar:, nonatomic) bool _allowLateralFocusMovementOutOfTabBar;
@property (setter=_setAnimator:, nonatomic, retain) <UIViewControllerAnimatedTransitioning> *_animator;
@property (getter=_backdropGroupName, setter=_setBackdropGroupName:, nonatomic, retain) NSString *_backdropGroupName;
@property (setter=_setInteractor:, nonatomic, retain) <UIViewControllerInteractiveTransitioning> *_interactor;
@property (nonatomic) bool _shouldFocusViewControllerAfterTransition;
@property (nonatomic, copy) NSArray *customizableViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITabBarControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *moreChildViewControllers;
@property (nonatomic, readonly) UINavigationController *moreNavigationController;
@property (getter=_rememberedFocusedItemsByViewController, nonatomic, readonly) NSMapTable *rememberedFocusedItemsByViewController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) UIViewController *selectedViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITabBar *tabBar;
@property (nonatomic, copy) NSArray *viewControllers;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_directlySetsContentOverlayInsetsForChildren;
+ (Class)_moreNavigationControllerClass;
+ (bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (id)_accessibilityHUDLongPressRecognizer;
- (void)_accessibilityLongPressChanged:(id)arg1;
- (id)_accessoryView;
- (id)_additionalViewControllersToCheckForUserActivity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustContentViewFrameForOffscreenFocus:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewController:(id)arg2;
- (void)_adjustTVTabBarForContentScrollView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustTabBarFrameForOffscreenFocus:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 barPosition:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustTabBarFrameForSafeAreas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_allContainedViewControllers;
- (bool)_allowLateralFocusMovementOutOfTabBar;
- (bool)_allowsAutorotation;
- (bool)_allowsCustomizing;
- (id)_animator;
- (id)_backdropBarGroupName;
- (id)_backdropGroupName;
- (bool)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg1 inViewController:(id)arg2;
- (void)_childViewController:(id)arg1 updatedObservedScrollView:(id)arg2;
- (id)_childViewControllerForMultitaskingDragExclusionRects;
- (double)_childViewControllerModernTVTabBarTopInset;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_customInteractionControllerForAnimator:(id)arg1;
- (id)_deepestActionResponder;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_doAllViewControllersSupportInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (unsigned long long)_effectiveMaxItems;
- (long long)_effectiveTabBarPosition;
- (id)_existingMoreNavigationController;
- (void)_forgetFocusedItemForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForWrapperViewForViewController:(id)arg1;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_handleObservingForScrollView:(id)arg1 sharedWithNavigationController:(id)arg2;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(bool)arg2;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(bool)arg2 duration:(double)arg3;
- (bool)_ignoreUnselectedTabsForStateRestoration;
- (id)_interactor;
- (void)_invalidateBarLayoutIfNecessary;
- (bool)_isBarEffectivelyHidden;
- (bool)_isBarHidden;
- (bool)_isFocusedTabVisible;
- (bool)_isLegacyTabBar;
- (bool)_isModernTVTabBar;
- (bool)_isPresentationContextByDefault;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (bool)_isTabBarFocused;
- (bool)_isViewControllerContainedInSelected:(id)arg1;
- (void)_largeContentViewerEnabledStatusDidChange:(id)arg1;
- (void)_layoutContainerView;
- (void)_layoutViewController:(id)arg1;
- (void)_navigationController:(id)arg1 didUpdateAndObserveScrollView:(id)arg2 forEdges:(unsigned long long)arg3;
- (void)_navigationControllerDidUpdateStack:(id)arg1;
- (bool)_notifySplitViewControllerForSelectionChange;
- (void)_observableScrollViewDidChangeFrom:(id)arg1 forViewController:(id)arg2 edges:(unsigned long long)arg3;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_observeScrollViewGeometryAffectingContentBottomDidChange:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_overlayInsetsAdjustment;
- (id)_overrideTraitCollectionToPassDuringTraitChangeToChildViewController:(id)arg1;
- (id)_overridingPreferredFocusEnvironment;
- (void)_performBackGesture:(id)arg1;
- (void)_performFocusGesture:(unsigned long long)arg1;
- (void)_performLeftGesture:(id)arg1;
- (void)_performRightGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performTouchDetectionGesture:(id)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)_prepareTabBar;
- (bool)_reallyWantsFullScreenLayout;
- (void)_rebuildTabBarItemsAnimated:(bool)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
- (id)_recallRememberedFocusedItemForViewController:(id)arg1;
- (void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2;
- (void)_rememberPresentingFocusedItem:(id)arg1;
- (id)_rememberedFocusedItemsByViewController;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_safeAreaInsetsDidChangeForView;
- (void)_scrollViewManagerDidFinishScrolling:(id)arg1;
- (id)_scrollViewObservedBeforeHidingBar;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(bool)arg1;
- (id)_selectedViewControllerInTabBar;
- (void)_setAccessoryView:(id)arg1;
- (void)_setAllowLateralFocusMovementOutOfTabBar:(bool)arg1;
- (void)_setAnimator:(id)arg1;
- (void)_setBackdropGroupName:(id)arg1;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (void)_setInteractor:(id)arg1;
- (void)_setMaximumNumberOfItems:(unsigned long long)arg1;
- (void)_setMoreNavigationControllerRestorationIdentifier;
- (void)_setNotifySplitViewControllerForSelectionChange:(bool)arg1;
- (void)_setScrollViewObservedBeforeHidingBar:(id)arg1;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (void)_setSelectedViewControllerAndNotify:(id)arg1;
- (void)_setSelectedViewControllerNeedsLayout;
- (void)_setSuspendBarBackgroundUpdating:(bool)arg1;
- (void)_setTabBarPosition:(long long)arg1;
- (void)_setUpFocusContainerGuides;
- (void)_setViewControllers:(id)arg1 animated:(bool)arg2;
- (bool)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_shouldFocusViewControllerAfterTransition;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldUseOnePartRotation;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(bool)arg2;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(bool)arg2 duration:(double)arg3;
- (void)_stopObservingScrollView:(id)arg1;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (bool)_suspendBarBackgroundUpdating;
- (void)_tabBarItemClicked:(id)arg1;
- (long long)_tabBarPosition;
- (void)_tabBarVisibilityDidChange;
- (id)_tabBarWindowForInterfaceOrientation:(id)arg1;
- (void)_toggleAccessibilityHUDLongPressRecognizerIfNecessary;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (id)_transitionView;
- (bool)_transitionsChildViewControllers;
- (bool)_tvTabBarShouldTrackScrollView:(id)arg1;
- (void)_updateAndObserveScrollView:(id)arg1 viewController:(id)arg2;
- (void)_updateAndObserveScrollView:(id)arg1 viewController:(id)arg2 updateBackgroundTransitionProgressForNilScrollView:(bool)arg3;
- (void)_updateBackgroundTransitionProgressForScrollView:(id)arg1 tabBar:(id)arg2;
- (void)_updateBackgroundTransitionProgressForScrollView:(id)arg1 tabBar:(id)arg2 isNavigationTransitionUpdate:(bool)arg3;
- (void)_updateGestureRecognizersForTraitCollection:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateLayoutForTraitCollection:(id)arg1;
- (void)_updateObservingScrollViewWithScrollView:(id)arg1 viewController:(id)arg2 getTabBarRequiresStandardBackground:(bool*)arg3;
- (void)_updateOffscreenStatus:(bool)arg1 withFocusAnimationCoordinator:(id)arg2;
- (void)_updateTabBarLayout;
- (void)_updateViewController:(id)arg1 forTabbarObservedScrollView:(id)arg2;
- (void)_viewControllerDidBeginDismissal:(id)arg1;
- (id)_viewControllerForObservableScrollView;
- (id)_viewControllerForSelectAtIndex:(unsigned long long)arg1;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (void)_viewControllerObservableScrollViewAmbiguityStatusDidChange:(id)arg1;
- (id)_viewControllersInTabBar;
- (void)_viewDidPerformLayout;
- (id)_viewForViewController:(id)arg1;
- (void)_viewSubtreeDidGainScrollView:(id)arg1 enclosingViewController:(id)arg2;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)_wrapperViewForViewController:(id)arg1;
- (bool)_wrapsNavigationController:(id*)arg1;
- (void)dealloc;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)allViewControllers;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (bool)becomeFirstResponder;
- (void)beginCustomizingTabBar:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForPointerLock;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForUserInterfaceStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)concealTabBarSelection;
- (id)customizableViewControllers;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)hideBarWithTransition:(int)arg1;
- (void)hideBarWithTransition:(int)arg1 duration:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)moreChildViewControllers;
- (id)moreNavigationController;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)revealTabBarSelection;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (unsigned long long)selectedIndex;
- (id)selectedViewController;
- (void)setCustomizableViewControllers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMoreChildViewControllers:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setShowsEditButtonOnLeft:(bool)arg1;
- (void)setTabBar:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(bool)arg2;
- (void)setView:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)set_shouldFocusViewControllerAfterTransition:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showBarWithTransition:(int)arg1;
- (void)showBarWithTransition:(int)arg1 duration:(double)arg2;
- (bool)showsEditButtonOnLeft;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tabBar;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(bool)arg3;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(bool)arg3;
- (void)tabBarSizingDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transientViewController;
- (id)transitionCoordinator;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(bool)arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionViewDidStart:(id)arg1;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
