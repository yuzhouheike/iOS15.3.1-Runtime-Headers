/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIButtonLegacyVisualProvider : NSObject <UIButtonArchivingVisualProvider, UIButtonDeprecatedAPISupportingVisualProvider, UIButtonDeprecatedSPISupportingVisualProvider, UIButtonVisualEffectSupportingVisualProvider, UIButtonVisualProvider, _UIButtonMaskAnimationViewDelegate, _UIFloatingContentViewDelegate> {
    UIImageView * _backgroundView;
    UIButton * _button;
    UIVisualEffectView * _contentBackdropView;
    NSArray * _contentConstraints;
    UIView * _effectiveContentView;
    _UIFloatingContentView * _floatingContentView;
    CALayer * _highlightLayer;
    UIImageView * _imageView;
    _UIButtonMaskAnimationView * _maskAnimationView;
    UIView * _selectionView;
    UILabel * _titleView;
}

@property (setter=_setContentConstraints:, nonatomic, copy) NSArray *_contentConstraints;
@property (nonatomic) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_selectedIndicatorImage;
+ (bool)requiresNewVisualProviderForChanges;
+ (bool)shouldUpdateContextMenuEnabledOnMenuChanges;
+ (id)visualProviderForButton:(id)arg1;

- (void).cxx_destruct;
- (void)_applyAppropriateTouchInsetsForButton;
- (void)_beginTitleAnimation;
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_contentConstraints;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_createPreparedImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_deriveTitleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 fromContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 calculatePositionForEmptyTitle:(bool)arg4;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_floatingContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBoundsForDrawingStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_highlightsBackgroundImage;
- (bool)_imageNeedsCompositingModeWhenSelected;
- (struct CGSize { double x1; double x2; })_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5;
- (double)_intrinsicWidthForAttributedTitle:(id)arg1;
- (void)_invalidateContentConstraints;
- (bool)_isExternalRoundedRectButtonWithPressednessState;
- (void)_layoutBackgroundImageView;
- (void)_layoutContentBackdropView;
- (void)_layoutHighlightLayer;
- (void)_layoutImageAndTitleViews;
- (id)_newImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_newLabelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareMaskAnimationViewIfNecessary;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (void)_setContentConstraints:(id)arg1;
- (id)_setupBackgroundView;
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;
- (void)_setupImageView;
- (void)_setupPressednessForState:(unsigned long long)arg1;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(bool)arg1;
- (bool)_shouldDefaultToTemplatesForImageViewBackground:(bool)arg1;
- (bool)_shouldUpdatePressedness;
- (bool)_textNeedsCompositingModeWhenSelected;
- (id)_titleOrImageViewForBaselineLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calculatePositionForEmptyTitle:(bool)arg2;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_updateBackgroundImageView;
- (void)_updateContentBackdropView;
- (void)_updateEffectsForImageView:(id)arg1 background:(bool)arg2;
- (void)_updateImageView;
- (void)_updateMaskState;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (void)_updateTitleView;
- (void)_updateTitleViewStyleEffectConfiguration;
- (id)_viewForBaselineLayout;
- (bool)_wantsContentBackdropView;
- (bool)adjustsFontForContentSizeCategory;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)backgroundViewCreateIfNeeded:(bool)arg1;
- (struct { double x1; double x2; })baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)button;
- (bool)canBecomeFocused;
- (void)cleanupForVisualProvider:(id)arg1;
- (id)contentBackdropView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 updateStyleForMenuWithConfiguration:(id)arg2 style:(id)arg3;
- (id)currentImageWithResolvedConfiguration;
- (void)dealloc;
- (id)defaultFocusEffect;
- (bool)deferToLazyTitleFont;
- (void)didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)effectiveContentView;
- (id)encodableSubviews;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)font;
- (bool)fontIsDefaultForIdiom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageViewCreateIfNeeded:(bool)arg1;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isOn;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (id)pointerEffectPreviewParameters;
- (id)pointerEffectWithPreview:(id)arg1;
- (id)pointerShapeInContainer:(id)arg1 proposal:(id /* block */)arg2;
- (void)pointerWillEnter:(id)arg1;
- (void)pointerWillExit:(id)arg1;
- (void)populateArchivedSubviews:(id)arg1;
- (id)preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)selectionIndicatorView;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBlurEnabled:(bool)arg1;
- (void)setButton:(id)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContextMenuIsPrimary:(bool)arg1;
- (void)setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setExternalFlatEdge:(unsigned long long)arg1;
- (void)setFont:(id)arg1 isDefaultForIdiom:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImageContentMode:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMenu:(id)arg1;
- (void)setMenuProvider:(id /* block */)arg1;
- (void)setOn:(bool)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2;
- (void)setReversesTitleShadowWhenHighlighted:(bool)arg1;
- (void)setRole:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisualEffectViewEnabled:(bool)arg1 backgroundColor:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })titleShadowOffset;
- (id)titleViewCreateIfNeeded:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (bool)useTitleForSelectedIndicatorBounds;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)willMoveToWindow:(id)arg1;

@end
