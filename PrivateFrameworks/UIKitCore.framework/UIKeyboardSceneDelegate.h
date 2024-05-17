/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardSceneDelegate : NSObject <UITextInputSessionActionAnalyticsDelegateSource, _UISceneComponentProviding, _UIWindowLevelObserver> {
    bool  _allowNilResponderReload;
    NSMutableArray * _animationStyleStack;
    bool  _automaticAppearanceEnabled;
    bool  _automaticAppearanceEnabledInternal;
    bool  _blockedReloadInputViewsForDictation;
    UITextEffectsWindow * _containerWindow;
    UITextEffectsWindow * _containerWindowForViewService;
    long long  _currentState;
    unsigned long long  _deactivationCount;
    int  _disableAnimationsCount;
    bool  _dontNeedAssistantBar;
    bool  _hasCustomAnimationProperties;
    bool  _hideSystemInputAssistantView;
    unsigned long long  _hostedUseCount;
    int  _ignoredReloads;
    bool  _ignoresPinning;
    int  _ignoringReloadInputViews;
    UIInputViewSet * _inputViewSet;
    bool  _interfaceAutorotationDisabled;
    UIWindow * _keyWindowCandidate;
    int  _nextAutomaticOrderInDirection;
    double  _nextAutomaticOrderInDuration;
    NSMutableArray * _persistentInputAccessoryResponderOrder;
    NSMutableDictionary * _persistentInputAccessoryResponders;
    NSMutableSet * _pinningResponders;
    UIInputViewPostPinningReloadState * _postPinningReloadState;
    NSMutableDictionary * _preservedViewSets;
    bool  _preservingInputViews;
    bool  _reloadInputViewsForcedIsAllowed;
    UIResponder * _responder;
    UIResponder * _responderWithoutAutomaticAppearanceEnabled;
    UIKBRenderConfig * _restorableRenderConfig;
    bool  _restoringInputViews;
    UIScene * _scene;
    UIResponder * _selfHostingTrigger;
    UITextInputSessionActionAnalytics * _sessionAnalytics;
    bool  _shouldSuppressInputAssistantUpdates;
    UISystemInputAssistantViewController * _systemInputAssistantViewController;
    bool  _takingSnapshot;
    UITextFormattingCoordinator * _textFormattingCoordinator;
    UIInputViewSet * _transientInputViewSet;
    NSDate * _transitionStartTime;
    NSHashTable * _visibilityObservers;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) NSDate *_transitionStartTime;
@property (nonatomic) bool automaticAppearanceEnabled;
@property (nonatomic) bool automaticAppearanceInternalEnabled;
@property (nonatomic, readonly) bool automaticAppearanceReallyEnabled;
@property (nonatomic, readonly) UIInputWindowController *containerRootController;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UITextEffectsWindow *containerWindow;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) bool deactivated;
@property (nonatomic) unsigned long long deactivationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIInputWindowController *existingContainerRootController;
@property (nonatomic, readonly) UITextEffectsWindow *existingContainerWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSystemInputAssistantView;
@property (nonatomic) bool ignoresPinning;
@property (getter=_isIgnoringReloadInputViews, nonatomic, readonly) bool ignoringReloadInputViews;
@property (nonatomic, readonly) UIInputViewSet *inputViews;
@property (nonatomic, readonly) bool isOnScreen;
@property (nonatomic) UIWindow *keyWindowCandidate;
@property (nonatomic) bool preservingInputViews;
@property (nonatomic, readonly) UIResponder *responder;
@property (nonatomic, retain) UIKBRenderConfig *restorableRenderConfig;
@property (nonatomic) bool restoringInputViews;
@property (nonatomic, readonly) UIWindowScene *scene;
@property (nonatomic) bool shouldSuppressInputAssistantUpdates;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UISystemInputAssistantViewController *systemInputAssistantViewController;
@property (nonatomic) bool takingSnapshot;
@property (nonatomic, readonly) UITextFormattingCoordinator *textFormattingCoordinator;
@property (nonatomic, readonly) UIInputViewSet *transientInputViews;
@property (nonatomic) bool useHostedInstance;

+ (void)_pinInputViewsForKeyboardSceneDelegate:(id)arg1 onBehalfOfResponder:(id)arg2 duringBlock:(id /* block */)arg3;
+ (id)activeKeyboardSceneDelegate;
+ (id)applicationConnectedWindowScenes;
+ (void)initialize;
+ (long long)interfaceOrientation;
+ (void)logInterfaceOrientation:(long long)arg1 withDescription:(id)arg2;
+ (void)performOnControllers:(id /* block */)arg1;
+ (void)setInterfaceOrientation:(long long)arg1;

- (void).cxx_destruct;
- (void)_beginDisablingAnimations;
- (void)_beginIgnoringReloadInputViews;
- (void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2;
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;
- (void)_clearPinningResponders;
- (void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(bool)arg2;
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1;
- (id)_delegateAsResponder;
- (void)_endDisablingAnimations;
- (int)_endIgnoringReloadInputViews;
- (void)_endPersistingInputAccessoryViewWithId:(id)arg1;
- (bool)_hasPostPinningReloadState;
- (id)_inputViewsForResponder:(id)arg1;
- (id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(bool)arg2;
- (bool)_isIgnoringReloadInputViews;
- (bool)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (bool)_isPreservedRestorableResponder:(id)arg1;
- (bool)_isTrackingResponder:(id)arg1;
- (id)_placementForDeactivatedKeyboard:(bool)arg1 currentPlacement:(id)arg2;
- (long long)_preferredAppearanceForResponder:(id)arg1;
- (void)_preserveInputViewsWithId:(id)arg1;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(bool)arg2;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(bool)arg2 reset:(bool)arg3;
- (bool)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(bool)arg3;
- (void)_reloadInputViewsForKeyWindowSceneResponder:(id)arg1;
- (void)_reloadInputViewsForResponder:(id)arg1;
- (void)_reloadInputViewsForWindowSceneResponder:(id)arg1;
- (void)_removePreservedInputViewSetForInputView:(id)arg1;
- (id)_renderConfigForResponder:(id)arg1;
- (void)_restoreInputAccessoryViewOverrideWithId:(id)arg1;
- (bool)_restoreInputViewsWithId:(id)arg1 animated:(bool)arg2;
- (bool)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;
- (id)_scene;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_setIgnoresPinning:(bool)arg1 allowImmediateReload:(bool)arg2;
- (void)_setReloadInputViewsForcedIsAllowed:(bool)arg1;
- (void)_setScene:(id)arg1;
- (bool)_showKeyboardWindowForInputViewSet:(id)arg1 placement:(id)arg2 windowScene:(id)arg3;
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (id)_textInputSessionAnalytics;
- (id)_transitionStartTime;
- (void)_updateContainerWindowLevel;
- (void)_updateTextInputSession;
- (void)_updateVisibilityObserversWithVisibility:(bool)arg1 reset:(bool)arg2;
- (id)_windowScene;
- (void)addVisibilityObserver:(id)arg1;
- (bool)animationsEnabled;
- (bool)automaticAppearanceEnabled;
- (bool)automaticAppearanceInternalEnabled;
- (bool)automaticAppearanceReallyEnabled;
- (void)cleanDeactivation;
- (void)clearAnimationStyleForUserDrivenPresentation;
- (id)containerRootController;
- (id)containerView;
- (id)containerWindow;
- (id)containerWindowForViewService:(bool)arg1;
- (void)createAutomaticKeyboardIfNeeded;
- (long long)currentState;
- (bool)deactivated;
- (unsigned long long)deactivationCount;
- (void)dealloc;
- (void)destroyKeyboardWindowIfNecessary;
- (void)disableInterfaceAutorotation:(bool)arg1;
- (id)existingContainerRootController;
- (id)existingContainerWindow;
- (id)forceCreateKeyboardWindow;
- (void)forceOrderInAutomaticAnimated:(bool)arg1;
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderOutAutomaticAnimated:(bool)arg1;
- (void)forceOrderOutAutomaticExceptAccessoryView;
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceReloadInputViews;
- (bool)hasDictationKeyboard;
- (bool)hideSystemInputAssistantView;
- (bool)ignoresPinning;
- (id)initWithScene:(id)arg1;
- (void)inputModeChangedForRenderConfig:(id)arg1;
- (id)inputViews;
- (bool)isOnScreen;
- (bool)isUndocked;
- (id)keyWindowCandidate;
- (void)keyboardSceneDelegateWillResume:(id)arg1;
- (bool)maximize;
- (bool)maximizeWithAnimation:(bool)arg1;
- (bool)maximizeWithAnimationStyle:(id)arg1;
- (bool)maximizeWithAnimationStyle:(id)arg1 force:(bool)arg2;
- (bool)minimize;
- (bool)minimizeWithAnimationStyle:(id)arg1;
- (bool)minimizeWithAnimationStyle:(id)arg1 force:(bool)arg2;
- (id)nextAnimationStyle;
- (id)nextAnimationStyle:(bool)arg1;
- (void)orderInWithAnimationStyle:(id)arg1;
- (void)orderOutWithAnimationStyle:(id)arg1;
- (id)passthroughViews;
- (void)performMultipleOperations:(id /* block */)arg1 withAnimationStyle:(id)arg2;
- (void)performWithAllowingNilResponderReload:(id /* block */)arg1;
- (bool)pinningPreventsInputViews:(id)arg1;
- (void)popAnimationStyle;
- (void)prepareForAlongsideTransitionWithContext:(id)arg1;
- (void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2;
- (bool)preservingInputViews;
- (void)pushAnimationStyle:(id)arg1;
- (void)refreshWithLocalMinimumKeyboardHeight:(double)arg1;
- (void)reloadPlacement;
- (void)removeVisibilityObserver:(id)arg1;
- (id)responder;
- (id)restorableRenderConfig;
- (bool)restoringInputViews;
- (id)scene;
- (void)setAutomaticAppearanceEnabled:(bool)arg1;
- (void)setAutomaticAppearanceInternalEnabled:(bool)arg1;
- (void)setDeactivationCount:(unsigned long long)arg1;
- (void)setHideSystemInputAssistantView:(bool)arg1;
- (void)setIgnoresPinning:(bool)arg1;
- (void)setInputViews:(id)arg1;
- (void)setInputViews:(id)arg1 animated:(bool)arg2;
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;
- (void)setKeyWindowCandidate:(id)arg1;
- (void)setKeyWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2;
- (void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2;
- (void)setPreservingInputViews:(bool)arg1;
- (void)setRestorableRenderConfig:(id)arg1;
- (void)setRestoringInputViews:(bool)arg1;
- (void)setShouldSuppressInputAssistantUpdates:(bool)arg1;
- (void)setTakingSnapshot:(bool)arg1;
- (void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2;
- (void)setUseHostedInstance:(bool)arg1;
- (void)setWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2;
- (bool)shouldSuppressInputAssistantUpdates;
- (id)systemInputAssistantViewController;
- (id)systemInputAssistantViewControllerForResponder:(id)arg1;
- (bool)takingSnapshot;
- (id)textFormattingCoordinator;
- (void)traitCollectionDidChange;
- (id)transientInputViews;
- (void)updateRenderConfigForCurrentResponder;
- (void)updateRenderConfigForResponder:(id)arg1;
- (bool)useHostedInstance;
- (double)verticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleInputViewFrameInView:(id)arg1;
- (void)window:(id)arg1 changedFromLevel:(double)arg2 toLevel:(double)arg3;

@end
