/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarIndicatorLocationItem : _UIStatusBarIndicatorItem {
    long long  _previousType;
    _UIStatusBarImageView * _prominentImageView;
}

@property (nonatomic) long long previousType;
@property (nonatomic, retain) _UIStatusBarImageView *prominentImageView;

+ (id)groupWithPriority:(long long)arg1;
+ (id)prominentDisplayIdentifier;

- (void).cxx_destruct;
- (void)_create_prominentImageView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)indicatorEntryKey;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2;
- (long long)previousType;
- (id)prominentImageView;
- (void)setPreviousType:(long long)arg1;
- (void)setProminentImageView:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
