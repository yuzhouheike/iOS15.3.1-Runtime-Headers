/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings, _UIDisplayInfoProviding>

@property (nonatomic, readonly) bool _debugValidationOrientationMaskEnabled;
@property (nonatomic, readonly) long long accessibilityContrast;
@property (nonatomic, readonly) unsigned long long artworkSubtype;
@property (nonatomic, readonly) bool canShowAlerts;
@property (nonatomic, readonly) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic, readonly) unsigned long long deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) bool deviceOrientationEventsEnabled;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) <_UIDisplayInfoShape> *exclusionArea;
@property (nonatomic, readonly) bool forcedStatusBarForegroundTransparent;
@property (nonatomic, readonly) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) unsigned int hostContextIdentifierForSnapshotting;
@property (nonatomic, readonly) bool idleModeEnabled;
@property (nonatomic, readonly) long long interfaceOrientationMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, readonly) NSString *persistenceIdentifier;
@property (nonatomic, readonly) long long pointerLockStatus;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeRight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortraitUpsideDown;
@property (nonatomic, readonly) unsigned long long scenePresenterRenderIdentifierForSnapshotting;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarAvoidanceFrame;
@property (nonatomic, readonly) bool statusBarDisabled;
@property (nonatomic, readonly) double statusBarHeight;
@property (nonatomic, readonly) long long statusBarParts;
@property (nonatomic, readonly) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double systemMinimumMargin;
@property (nonatomic, readonly) NSSet *targetOfEventDeferringEnvironments;
@property (nonatomic, readonly) bool underLock;
@property (nonatomic, readonly) long long userInterfaceStyle;

- (bool)_debugValidationOrientationMaskEnabled;
- (long long)accessibilityContrast;
- (unsigned long long)artworkSubtype;
- (bool)canShowAlerts;
- (id)cornerRadiusConfiguration;
- (unsigned long long)deactivationReasons;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (id)forcedStatusBarStyle;
- (double)homeAffordanceOverlayAllowance;
- (unsigned int)hostContextIdentifierForSnapshotting;
- (bool)idleModeEnabled;
- (long long)interfaceOrientationMode;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (id)persistenceIdentifier;
- (long long)pointerLockStatus;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (bool)statusBarDisabled;
- (double)statusBarHeight;
- (long long)statusBarParts;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (double)systemMinimumMargin;
- (id)targetOfEventDeferringEnvironments;
- (bool)underLock;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
