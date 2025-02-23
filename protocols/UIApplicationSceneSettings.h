/* Generated by RuntimeBrowser.
 */

@protocol UIApplicationSceneSettings <NSObject>

@required

- (bool)_debugValidationOrientationMaskEnabled;
- (long long)accessibilityContrast;
- (unsigned long long)artworkSubtype;
- (bool)canShowAlerts;
- (BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
- (unsigned long long)deactivationReasons;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (NSNumber *)forcedStatusBarStyle;
- (double)homeAffordanceOverlayAllowance;
- (unsigned int)hostContextIdentifierForSnapshotting;
- (bool)idleModeEnabled;
- (long long)interfaceOrientationMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (NSString *)persistenceIdentifier;
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
- (NSSet *)targetOfEventDeferringEnvironments;
- (bool)underLock;
- (long long)userInterfaceStyle;

@end
