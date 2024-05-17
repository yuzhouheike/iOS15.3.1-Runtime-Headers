/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarPillRegionVisualProvider, _UIStatusBarVisualProvider> {
    _UIStatusBarVisualProvider_PillRegionCoordinator * _pillRegionCoordinator;
    _UIStatusBarRegion * _radarRegion;
    bool  _showingPill;
    bool  _showingSensorActivityIndicator;
    _UIStatusBar * _statusBar;
    _UIStatusBarRegion * _timeRegion;
}

@property (nonatomic, readonly) bool canFixupDisplayItemAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator;
@property (nonatomic, retain) _UIStatusBarRegion *radarRegion;
@property (nonatomic) bool showingPill;
@property (nonatomic) bool showingSensorActivityIndicator;
@property (nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIndirectPointerTouchActions;
@property (nonatomic, retain) _UIStatusBarRegion *timeRegion;

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (id)_animationForPillTime;
- (id)_animationForSensorIndicator;
- (id)_defaultScaleAnimationWithIdentifier:(id)arg1;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3;
- (bool)expanded;
- (id)init;
- (void)itemCreated:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)pillRegionCoordinator;
- (id)radarRegion;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)setExpanded:(bool)arg1;
- (void)setPillRegionCoordinator:(id)arg1;
- (void)setRadarRegion:(id)arg1;
- (void)setShowingPill:(bool)arg1;
- (void)setShowingSensorActivityIndicator:(bool)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setTimeRegion:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (bool)showSensorActivityIndicatorWithoutPortalView;
- (bool)showingPill;
- (bool)showingSensorActivityIndicator;
- (id)statusBar;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;
- (id)styleAttributesForStyle:(long long)arg1;
- (bool)supportsIndirectPointerTouchActions;
- (id)timeRegion;
- (id)willUpdateWithData:(id)arg1;

@end
