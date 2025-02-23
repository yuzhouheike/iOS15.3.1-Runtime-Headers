/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITabBarButton : UIControl <UISpringLoadedInteractionSupporting> {
    Class  _appearanceGuideClass;
    _UIBadgeView * _badge;
    UIColor * _badgeColor;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _badgeOffset;
    NSMutableDictionary * _badgeTextAttributesForState;
    NSMutableDictionary * _buttonTintColorsForState;
    NSArray * _carplayConstraints;
    NSMutableDictionary * _contentTintColorsForState;
    UIImage * _customSelectedIndicatorImage;
    UIColor * _defaultUnselectedLabelTintColor;
    UIView * _focusView;
    UIView * _highContrastFocusIndicator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageLandscapeInsets;
    UITabBarSwappableImageView * _imageView;
    _UITabBarItemData * _itemAppearanceData;
    UIVibrancyEffect * _itemVibrantEffect;
    UITabBarButtonLabel * _label;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _labelOffset;
    long long  _layoutStyle;
    bool  _selected;
    UIImageView * _selectedIndicator;
    bool  _showsHighlightedState;
    UITabBar * _tabBar;
    UIVisualEffectView * _vibrancyEffectView;
}

@property (setter=_setAppearanceGuideClass:, nonatomic, retain) Class _appearanceGuideClass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _contentRect;
@property (getter=isDefaultTVLayout, nonatomic, readonly) bool _defaultTVLayout;
@property (nonatomic, readonly) UIColor *_defaultUnselectedLabelTintColor;
@property (getter=_isSelected, setter=_setSelected:, nonatomic) bool _selected;
@property (setter=_setShowsHighlightedState:, nonatomic) bool _showsHighlightedState;
@property (nonatomic, retain) NSArray *carplayConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *focusView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UITabBarItemData *itemAppearanceData;
@property (nonatomic, retain) UIVibrancyEffect *itemVibrantEffect;
@property (nonatomic) long long layoutStyle;
@property (getter=isSpringLoaded, nonatomic) bool springLoaded;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITabBar *tabBar;
@property (getter=_unselectedTintColor, setter=_setUnselectedTintColor:, nonatomic, retain) UIColor *unselectedTintColor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_defaultLabelColor;

- (void).cxx_destruct;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (Class)_appearanceGuideClass;
- (void)_appleTV_layoutSubviews;
- (struct CGSize { double x1; double x2; })_appleTV_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_buttonTintColorForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRect;
- (id)_contentTintColorForState:(unsigned long long)arg1;
- (long long)_currentItemState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFocusRegionFrame;
- (id)_defaultUnselectedLabelTintColor;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (long long)_focusTouchSensitivityStyle;
- (struct CGSize { double x1; double x2; })_horizontalLayout_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)_info;
- (void)_ios_layoutSubviews;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isSelected;
- (void)_positionBadge;
- (void)_positionBadgeAfterChangesIfNecessary:(id /* block */)arg1;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (void)_removeCarplayConstraints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_selectedIndicatorImage;
- (id)_selectedIndicatorView;
- (void)_sendFocusAction;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBadgeColor:(id)arg1;
- (void)_setBadgeOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBadgeValue:(id)arg1;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setSelected:(bool)arg1;
- (void)_setShowsHighlightedState:(bool)arg1;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUnselectedTintColor:(id)arg1;
- (void)_setupCarplayConstraints;
- (void)_setupSymbolConfigurationsForIdiom:(long long)arg1;
- (void)_showBoundsViewAt:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alignmentViewAt:(double)arg2 forSymbolImage:(bool)arg3;
- (void)_showSelectedIndicator:(bool)arg1 changeSelection:(bool)arg2;
- (bool)_showsHighlightedState;
- (id)_systemDefaultFocusGroupIdentifier;
- (id)_tabBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tabBarHitRect;
- (struct UIOffset { double x1; double x2; })_titlePositionAdjustment;
- (id)_unselectedTintColor;
- (void)_updateAfterTraitCollectionOrAccessibilityDidChangeTV;
- (void)_updateBadgeAppearanceAndLayoutNow:(bool)arg1;
- (void)_updateSelectedIndicatorFrame;
- (void)_updateSelectedIndicatorView;
- (void)_updateToMatchCurrentState;
- (void)_updateVibrancyEffectView;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)badgeBackgroundColorForState:(long long)arg1;
- (struct UIOffset { double x1; double x2; })badgePositionAdjustmentForState:(long long)arg1;
- (id)badgeTextAttributesForState:(long long)arg1;
- (struct UIOffset { double x1; double x2; })badgeTitlePositionAdjustmentForState:(long long)arg1;
- (bool)canBecomeFocused;
- (id)carplayConstraints;
- (double)defaultAlphaForState:(long long)arg1;
- (id)defaultColorForState:(long long)arg1;
- (long long)defaultCompositingModeForState:(long long)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusView;
- (id)iconColorForState:(long long)arg1;
- (bool)iconShouldUseVibrancyForState:(long long)arg1;
- (id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6 landscapeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 tabBar:(id)arg8;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 tabBar:(id)arg5;
- (bool)isDefaultColor:(id)arg1 forState:(long long)arg2;
- (bool)isDefaultTVLayout;
- (bool)isSpringLoaded;
- (id)itemAppearanceData;
- (id)itemVibrantEffect;
- (bool)labelShouldUseVibrancyForState:(long long)arg1;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setCarplayConstraints:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setItemAppearanceData:(id)arg1;
- (void)setItemVibrantEffect:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)set_info:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tabBar;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForState:(long long)arg1;
- (id)titleTextAttributesForState:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
