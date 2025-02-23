/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider> {
    NSLayoutConstraint * _backgroundHeightConstraint;
    NSLayoutConstraint * _centerHeightConstraint;
    _UIStatusBarRegionAxisCenteringLayout * _centerHorizontalLayout;
    NSLayoutConstraint * _centerTopConstraint;
    _UIStatusBarCellularItem * _condensedCellularItem;
    NSLayoutConstraint * _expandedLeadingBottomConstraint;
    NSLayoutConstraint * _expandedTrailingBottomConstraint;
    NSLayoutConstraint * _leadingHeightConstraint;
    _UIStatusBarRegionAxisStackingLayout * _leadingHorizontalLayout;
    NSLayoutConstraint * _leadingTopConstraint;
    _UIStatusBarDisplayItemPlacementGroup * _lowerWifiGroup;
    NSDictionary * _orderedDisplayItemPlacements;
    NSLayoutConstraint * _trailingHeightConstraint;
    _UIStatusBarRegionAxisStackingLayout * _trailingHorizontalLayout;
    NSLayoutConstraint * _trailingTopConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *backgroundHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *centerHeightConstraint;
@property (nonatomic, retain) _UIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout;
@property (nonatomic, retain) NSLayoutConstraint *centerTopConstraint;
@property (nonatomic, retain) _UIStatusBarCellularItem *condensedCellularItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *expandedLeadingBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *expandedTrailingBottomConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *leadingHeightConstraint;
@property (nonatomic, retain) _UIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout;
@property (nonatomic, retain) NSLayoutConstraint *leadingTopConstraint;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *trailingHeightConstraint;
@property (nonatomic, retain) _UIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout;
@property (nonatomic, retain) NSLayoutConstraint *trailingTopConstraint;

+ (double)_heightExpanded:(bool)arg1;
+ (double)height;
+ (struct CGSize { double x1; double x2; })intrinsicLockScreenContentSizeForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)_animationForSingleLineDualCarrier;
- (id)_backgroundActivityDetailRemovalAnimation;
- (void)_updateBackgroundHeight;
- (void)_updateExpandedTrailingRegion;
- (void)_updateLockScreenSizing;
- (void)_updateLowerRegionsWithData:(id)arg1;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)backgroundHeightConstraint;
- (double)baselineOffset;
- (id)centerHeightConstraint;
- (id)centerHorizontalLayout;
- (id)centerTopConstraint;
- (id)condensedCellularItem;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3;
- (void)dataUpdated:(id)arg1;
- (double)dualLineExpandedBaselineOffset;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (double)effectiveHeight;
- (double)expandedBaselineOffset;
- (id)expandedFont;
- (id)expandedLeadingBottomConstraint;
- (id)expandedTrailingBottomConstraint;
- (void)itemCreated:(id)arg1;
- (id)leadingHeightConstraint;
- (id)leadingHorizontalLayout;
- (id)leadingTopConstraint;
- (double)lowerExpandedBaselineOffset;
- (id)lowerWifiGroup;
- (id)normalFont;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)pillFont;
- (struct CGSize { double x1; double x2; })pillSize;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (double)regionSpacing;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)setBackgroundHeightConstraint:(id)arg1;
- (void)setCenterHeightConstraint:(id)arg1;
- (void)setCenterHorizontalLayout:(id)arg1;
- (void)setCenterTopConstraint:(id)arg1;
- (void)setCondensedCellularItem:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedLeadingBottomConstraint:(id)arg1;
- (void)setExpandedTrailingBottomConstraint:(id)arg1;
- (void)setLeadingHeightConstraint:(id)arg1;
- (void)setLeadingHorizontalLayout:(id)arg1;
- (void)setLeadingTopConstraint:(id)arg1;
- (void)setLowerWifiGroup:(id)arg1;
- (void)setOnLockScreen:(bool)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setTrailingHeightConstraint:(id)arg1;
- (void)setTrailingHorizontalLayout:(id)arg1;
- (void)setTrailingTopConstraint:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (void)statusBarRegionsUpdated;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)timeFont;
- (id)trailingHeightConstraint;
- (id)trailingHorizontalLayout;
- (id)trailingTopConstraint;
- (void)updateDataForService:(id)arg1;
- (bool)wantsExpandedLeadingPlacements;
- (id)willUpdateWithData:(id)arg1;

@end
