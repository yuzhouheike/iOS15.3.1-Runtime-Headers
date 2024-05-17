/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarSensorActivityView : UIView <_UIStatusBarDisplayable> {
    _UIPortalView * _portalView;
    UIView * _sensorActivityView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, retain) UIView *sensorActivityView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)configurePortalViewIfNeeded;
- (void)configureSensorViewWithoutPortalIfNeeded;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)portalView;
- (id)sensorActivityView;
- (void)setPortalView:(id)arg1;
- (void)setSensorActivityView:(id)arg1;

@end
