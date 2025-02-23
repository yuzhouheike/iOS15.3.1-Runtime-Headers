/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIRemoteKeyboards : NSObject <_UIAssertionControllerSubject, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardDistributedViewSource, _UIRemoteKeyboardsEventObserverDelegate> {
    NSMutableArray * _activePIDs;
    _UIAssertionController * _assertionController;
    _UIKeyboardChangedInformation * _backupState;
    NSXPCConnection * _connection;
    bool  _currentKeyboard;
    _UIKeyboardChangedInformation * _currentState;
    bool  _deactivatedByControlCenter;
    bool  _deactivatedBySystemAnimation;
    bool  _didSignalKeyboardChangedForCurrentKeyboard;
    bool  _disablingKeyboard;
    bool  _enableMultiscreenHack;
    bool  _enqueuedWillEnterForegroundActions;
    _UIRemoteKeyboardsEventObserver * _eventObserver;
    bool  _expectedSuppression;
    bool  _expectingInitialState;
    int  _externalSuppression;
    NSString * _focusedSceneIdentityStringOrIdentifier;
    bool  _hadFocusBeforeOverlay;
    bool  _handlingRemoteEvent;
    int  _hostedCount;
    double  _iavHeight;
    int  _ignoreLayoutSubviews;
    UIView * _keyboardSnapshot;
    long long  _keyboardSource;
    long long  _lastEventSource;
    UIScreen * _lastScreen;
    NSMapTable * _minimumKeyboardHeights;
    NSMutableSet * _pendingKeyboardGrabs;
    int  _recursionCheck;
    double  _requiredLevel;
    FBSScene * _requiredScene;
    bool  _resignActiveByControlCenter;
    bool  _resigningByOtherApp;
    bool  _shouldFence;
    UIWindowScene * _suppressedScene;
    bool  _takingSnapshot;
    bool  _updatingHeight;
    bool  _updatingKeyWindow;
    NSHashTable * _windowControllers;
    bool  _windowEnabled;
}

@property (retain) _UIKeyboardChangedInformation *backupState;
@property (retain) NSXPCConnection *connection;
@property (readonly, retain) NSArray *currentHostedPIDs;
@property bool currentKeyboard;
@property (retain) _UIKeyboardChangedInformation *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didSignalKeyboardChangedForCurrentKeyboard;
@property bool disableBecomeFirstResponder;
@property (nonatomic) bool enableMultiscreenHack;
@property (nonatomic, copy) NSString *focusedSceneIdentityStringOrIdentifier;
@property (readonly) bool handlingRemoteEvent;
@property (readonly) unsigned long long hash;
@property (readonly) double iavHeight;
@property (nonatomic) bool isSnapshotting;
@property (readonly) bool keyboardActive;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrameIncludingRemoteIAV;
@property (readonly) bool keyboardVisible;
@property (readonly) UIRemoteKeyboardWindow *keyboardWindow;
@property (nonatomic, readonly) long long lastEventSource;
@property (readonly) bool oldPathForSnapshot;
@property (readonly) <_UIKeyboardArbitration> *proxy;
@property (readonly) bool remoteKeyboardUndocked;
@property (readonly, retain) FBSScene *requiredScene;
@property (nonatomic) bool shouldFence;
@property (readonly) Class superclass;
@property (readonly) bool updatingHeight;
@property (getter=isUpdatingKeyWindow) bool updatingKeyWindow;

+ (id)createArbiterConnection;
+ (bool)enabled;
+ (id)keyboardWindowSceneForScreen:(id)arg1 create:(bool)arg2;
+ (id)serviceName;
+ (id)sharedRemoteKeyboards;
+ (bool)useSystemService;
+ (bool)wantsUnassociatedWindowSceneForKeyboardWindow;

- (id)_activeScreen;
- (void)_lostWindow:(id)arg1;
- (void)_performOnDistributedControllersExceptSelf:(id /* block */)arg1;
- (void)_postInputSourceDidChangeNotification;
- (bool)_sceneFocusUpdatePermittedForWindow:(id)arg1;
- (void)_updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (void)addHostedWindowView:(id)arg1 fromPID:(int)arg2 forScene:(id)arg3;
- (bool)allowedToShowKeyboard;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidRemoveDeactivationReason:(id)arg1;
- (void)applicationDidSuspend:(id)arg1;
- (void)applicationKeyWindowDidChange:(id)arg1;
- (void)applicationKeyWindowWillChange:(id)arg1;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationWillAddDeactivationReason:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillResume:(id)arg1;
- (void)assertIgnoreLayoutNotifications;
- (void)assertionActivationStateChangedToState:(bool)arg1 forType:(unsigned long long)arg2;
- (bool)assertionActivationStateForType:(unsigned long long)arg1;
- (id)backupState;
- (void)checkConnection;
- (void)checkState;
- (void)cleanSuppression;
- (void)completeMoveKeyboardForWindow:(id)arg1;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (id)connection;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (id)currentHostedPIDs;
- (bool)currentKeyboard;
- (id)currentState;
- (bool)currentStateHasEqualRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andIAVPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (bool)didHandleKeyboardChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(bool)arg2 isLocalEvent:(bool)arg3;
- (bool)didSignalKeyboardChangedForCurrentKeyboard;
- (bool)disableBecomeFirstResponder;
- (bool)enableMultiscreenHack;
- (void)finishWithHostedWindow;
- (id)focusedSceneIdentityStringOrIdentifier;
- (void)forceKeyboardAway;
- (bool)handlingRemoteEvent;
- (bool)hasAnyHostedViews;
- (bool)hasLocalMinimumKeyboardHeightForScene:(id)arg1;
- (double)iavHeight;
- (void)ignoreLayoutNotifications:(id /* block */)arg1;
- (id)init;
- (double)intersectionHeightForWindowScene:(id)arg1;
- (double)intersectionHeightForWindowScene:(id)arg1 isLocalMinimumHeightOut:(bool*)arg2 ignoreHorizontalOffset:(bool)arg3;
- (bool)isOnScreenRotating;
- (bool)isSnapshotting;
- (bool)isUpdatingKeyWindow;
- (bool)keyboardActive;
- (void)keyboardChangedCompleted;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrameIncludingRemoteIAV;
- (bool)keyboardVisible;
- (id)keyboardWindow;
- (Class)keyboardWindowClass;
- (long long)lastEventSource;
- (unsigned long long)localSceneCount;
- (bool)needsToShowKeyboardForViewServiceHostWindow:(id)arg1;
- (bool)needsToShowKeyboardForWindow:(id)arg1;
- (bool)oldPathForSnapshot;
- (void)peekApplicationEvent:(id)arg1;
- (void)performOnControllers:(id /* block */)arg1;
- (void)performOnDistributedControllers:(id /* block */)arg1;
- (id)prepareForHostedWindowWithScene:(id)arg1;
- (void)prepareToMoveKeyboard:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withIAV:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isIAVRelevant:(bool)arg3 showing:(bool)arg4 notifyRemote:(bool)arg5 forScene:(id)arg6;
- (void)preserveKeyboardWithId:(id)arg1;
- (id)proxy;
- (void)queue_activeProcessResignWithCompletion:(id /* block */)arg1;
- (void)queue_failedConnection:(id)arg1;
- (void)queue_getDebugInfoWithCompletion:(id /* block */)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(id /* block */)arg2;
- (void)queue_keyboardChangedWithCompletion:(id /* block */)arg1;
- (void)queue_keyboardIAVChanged:(double)arg1 onComplete:(id /* block */)arg2;
- (void)queue_keyboardSuppressed:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(id /* block */)arg4;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)queue_setKeyboardDisabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)queue_setLastEventSource:(long long)arg1 withCompletion:(id /* block */)arg2;
- (bool)refreshWithLocalMinimumKeyboardHeight:(double)arg1 forScene:(id)arg2;
- (void)registerController:(id)arg1;
- (void)releaseIgnoreLayoutNotificationsAssertion;
- (void)reloadForSnapshotting;
- (bool)remoteKeyboardUndocked;
- (bool)remoteKeyboardUndocked:(bool)arg1;
- (id)requiredScene;
- (void)resetSnapshotWithWindowCheck:(bool)arg1;
- (void)restoreKeyboardWithId:(id)arg1;
- (void)restorePreservedInputViewsIfNecessary;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneUpdated;
- (void)setBackupState:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentKeyboard:(bool)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setDidSignalKeyboardChangedForCurrentKeyboard:(bool)arg1;
- (void)setDisableBecomeFirstResponder:(bool)arg1;
- (void)setEnableMultiscreenHack:(bool)arg1;
- (void)setFocusedSceneIdentityStringOrIdentifier:(id)arg1;
- (void)setIsSnapshotting:(bool)arg1;
- (void)setPlacement:(id)arg1 quietly:(bool)arg2 animated:(bool)arg3 generateSplitNotification:(bool)arg4;
- (void)setRequiredScene:(id)arg1;
- (void)setShouldFence:(bool)arg1;
- (void)setSuppressingKeyboard:(bool)arg1 forScene:(id)arg2;
- (void)setUpdatingKeyWindow:(bool)arg1;
- (void)setWindowEnabled:(bool)arg1;
- (void)setWindowEnabled:(bool)arg1 force:(bool)arg2;
- (void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forResponder:(id)arg3;
- (bool)shouldAllowInputViewsRestoredForId:(id)arg1;
- (bool)shouldFence;
- (void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)startConnection;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)stopConnection;
- (void)unregisterController:(id)arg1;
- (void)updateCurrentState:(id)arg1;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (void)updateLastScreen:(id)arg1;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (bool)updatingHeight;
- (void)userSelectedApp:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)userSelectedProcessIdentifier:(int)arg1 withSceneIdentity:(id)arg2 onCompletion:(id /* block */)arg3;
- (id)vendKeyboardSuppressionAssertionForReason:(id)arg1;
- (id)viewHostForWindow:(id)arg1;
- (bool)wantsToShowKeyboardForViewServiceHostWindow:(id)arg1;
- (bool)wantsToShowKeyboardForWindow:(id)arg1;
- (void)willLock:(id)arg1;

@end
