/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem {
    _UIStatusBarCellularNetworkTypeView * _animatedNetworkTypeView;
    _UIStatusBarMultilineStringView * _dualNameView;
    _UIStatusBarDualCellularSignalView * _dualSignalView;
    _UIStatusBarStringView * _dualSingleLineNameAndTypeView;
    _UIStatusBarStringView * _dualSingleLineNameView;
    bool  _reducesFontSize;
}

@property (nonatomic, retain) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView;
@property (nonatomic, retain) _UIStatusBarMultilineStringView *dualNameView;
@property (nonatomic, retain) _UIStatusBarDualCellularSignalView *dualSignalView;
@property (nonatomic, retain) _UIStatusBarStringView *dualSingleLineNameAndTypeView;
@property (nonatomic, retain) _UIStatusBarStringView *dualSingleLineNameView;
@property (nonatomic) bool reducesFontSize;

+ (id)animatedTypeDisplayIdentifier;
+ (id)dualNameDisplayIdentifier;
+ (id)dualSignalStrengthDisplayIdentifier;
+ (id)dualSingleLineNameAndTypeDisplayIdentifier;
+ (id)dualSingleLineNameDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(bool)arg4;

- (void).cxx_destruct;
- (bool)_animateServiceType:(long long)arg1 prefixLength:(long long*)arg2 currentType:(long long)arg3;
- (void)_create_animatedNetworkTypeView;
- (void)_create_dualNameView;
- (void)_create_dualSignalView;
- (void)_create_dualSingleLineNameAndTypeView;
- (void)_create_dualSingleLineNameView;
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nonCondensedFontRangeForEntry:(id)arg1;
- (bool)_showCallFowardingForEntry:(id)arg1;
- (id)_singleCellularEntryMatching:(id /* block */)arg1;
- (id)_stringForCellularType:(long long)arg1;
- (id)animatedNetworkTypeView;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)dualNameView;
- (id)dualSignalView;
- (id)dualSingleLineNameAndTypeView;
- (id)dualSingleLineNameView;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (bool)reducesFontSize;
- (void)setAnimatedNetworkTypeView:(id)arg1;
- (void)setDualNameView:(id)arg1;
- (void)setDualSignalView:(id)arg1;
- (void)setDualSingleLineNameAndTypeView:(id)arg1;
- (void)setDualSingleLineNameView:(id)arg1;
- (void)setReducesFontSize:(bool)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
