/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarSignalView : _UIStatusBarPersistentAnimationView <_UIStatusBarDisplayable> {
    UIColor * _activeColor;
    long long  _iconSize;
    UIColor * _inactiveColor;
    long long  _numberOfActiveBars;
    long long  _numberOfBars;
    long long  _signalMode;
    bool  _smallSize;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, copy) UIColor *activeColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iconSize;
@property (nonatomic, copy) UIColor *inactiveColor;
@property (nonatomic) long long numberOfActiveBars;
@property (nonatomic) long long numberOfBars;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic) long long signalMode;
@property (nonatomic) bool smallSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

+ (struct CGSize { double x1; double x2; })_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;

- (void).cxx_destruct;
- (void)_colorsDidChange;
- (void)_iconSizeDidChange;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateFromMode:(long long)arg1;
- (id)activeColor;
- (void)applyStyleAttributes:(id)arg1;
- (long long)iconSize;
- (id)inactiveColor;
- (long long)numberOfActiveBars;
- (long long)numberOfBars;
- (void)setActiveColor:(id)arg1;
- (void)setIconSize:(long long)arg1;
- (void)setInactiveColor:(id)arg1;
- (void)setNumberOfActiveBars:(long long)arg1;
- (void)setNumberOfBars:(long long)arg1;
- (void)setSignalMode:(long long)arg1;
- (void)setSmallSize:(bool)arg1;
- (long long)signalMode;
- (bool)smallSize;

@end
