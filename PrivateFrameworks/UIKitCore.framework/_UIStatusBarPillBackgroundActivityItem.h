/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem {
    _UIStatusBarPillView * _combinedView;
    _UIStatusBarDisplayableContainerView * _iconsView;
    struct CGSize { 
        double width; 
        double height; 
    }  _pillSize;
    long long  _previousType;
}

@property (nonatomic, retain) _UIStatusBarPillView *combinedView;
@property (nonatomic, retain) _UIStatusBarDisplayableContainerView *iconsView;
@property (nonatomic) struct CGSize { double x1; double x2; } pillSize;
@property (nonatomic) long long previousType;

+ (bool)_identifierContainsItemImage:(id)arg1;
+ (bool)_identifierContainsSecondaryItemImage:(id)arg1;
+ (id)pillCombinedDisplayIdentifier;
+ (bool)shouldKeepIconVisibleForActivityType:(long long)arg1;

- (void).cxx_destruct;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (void)_create_combinedView;
- (void)_create_iconsView;
- (bool)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2;
- (id)_textLabelForActivityType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)combinedView;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)iconsView;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (struct CGSize { double x1; double x2; })pillSize;
- (long long)previousType;
- (void)setCombinedView:(id)arg1;
- (void)setIconsView:(id)arg1;
- (void)setPillSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviousType:(long long)arg1;
- (bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
