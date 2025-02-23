/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBHeaderView : UIView {
    OBHeaderAccessoryButton * _accessoryButton;
    bool  _allowFullWidthIcon;
    OBAnimationView * _animationView;
    UIView * _customIconContainerView;
    OBTemplateHeaderDetailLabel * _detailLabel;
    NSArray * _detailLabelConstraints;
    OBTemplateLabel * _headerLabel;
    bool  _iconInheritsTint;
    OBImageView * _imageView;
    NSArray * _imageViewConstraints;
    UIImage * _originalIconImage;
    OBTemplateLabel * _subtitleLabel;
    NSArray * _subtitleLabelConstraints;
    unsigned long long  _templateType;
    UIView * _topAssetContainer;
    NSArray * _topAssetContainerConstraints;
    bool  _underlineLinks;
    bool  _usingSymbolImage;
}

@property (nonatomic, retain) OBHeaderAccessoryButton *accessoryButton;
@property (nonatomic) bool allowFullWidthIcon;
@property (nonatomic, retain) OBAnimationView *animationView;
@property (nonatomic, retain) UIView *customIconContainerView;
@property (nonatomic, retain) OBTemplateHeaderDetailLabel *detailLabel;
@property (nonatomic, retain) NSArray *detailLabelConstraints;
@property (nonatomic, retain) OBTemplateLabel *headerLabel;
@property (nonatomic) bool iconInheritsTint;
@property (nonatomic, retain) OBImageView *imageView;
@property (nonatomic, retain) NSArray *imageViewConstraints;
@property (nonatomic, retain) UIImage *originalIconImage;
@property (nonatomic, retain) OBTemplateLabel *subtitleLabel;
@property (nonatomic, retain) NSArray *subtitleLabelConstraints;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic, retain) UIView *topAssetContainer;
@property (nonatomic, retain) NSArray *topAssetContainerConstraints;
@property (nonatomic) bool underlineLinks;

- (void).cxx_destruct;
- (void)_animateDetailLabelAlpha:(double)arg1 duration:(double)arg2;
- (id)_createDetailLabelIfNeeded;
- (id)_createImageView:(id)arg1;
- (id)_detailFont;
- (void)_insertAndLayoutImageViewIfNeeded;
- (void)_layoutTopAssetContainer;
- (double)_setupAssistantIconHeight;
- (id)_subtitleFont;
- (id)_symbolIconForHeaderStyle:(id)arg1 configuration:(id)arg2;
- (void)_updateConstraintsForDetailLabel;
- (void)_updateConstraintsForSubtitle;
- (id)accessoryButton;
- (void)addAccessoryButton:(id)arg1;
- (bool)allowFullWidthIcon;
- (id)animationView;
- (double)bottomPadding;
- (id)customIconContainerView;
- (id)detailLabel;
- (id)detailLabelConstraints;
- (double)detailLabelToAccessoryButtonPadding;
- (void)extendedInitWithTitle:(id)arg1 detailText:(id)arg2;
- (id)headerFont;
- (id)headerLabel;
- (double)headerLabelToDetailAndSubtitleLabelPadding;
- (double)iconHeight;
- (bool)iconInheritsTint;
- (double)iconToHeaderLabelPadding;
- (id)imageView;
- (id)imageViewConstraints;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2;
- (id)originalIconImage;
- (void)removeAccessoryButton;
- (void)removeDetailLabel;
- (void)setAccessoryButton:(id)arg1;
- (void)setAllowFullWidthIcon:(bool)arg1;
- (void)setAnimationView:(id)arg1;
- (void)setCustomIconContainerView:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailLabelConstraints:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2;
- (void)setHeaderLabel:(id)arg1;
- (void)setIcon:(id)arg1 accessibilityLabel:(id)arg2;
- (void)setIconInheritsTint:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageViewConstraints:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOriginalIconImage:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleLabelConstraints:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setSymbol:(id)arg1 accessibilityLabel:(id)arg2;
- (void)setTemplateType:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleHyphenationFactor:(float)arg1;
- (void)setTitleTrailingSymbol:(id)arg1;
- (void)setTopAssetContainer:(id)arg1;
- (void)setTopAssetContainerConstraints:(id)arg1;
- (void)setUnderlineLinks:(bool)arg1;
- (id)subtitleLabel;
- (id)subtitleLabelConstraints;
- (id)symbolConfiguration;
- (unsigned long long)templateType;
- (void)tintColorDidChange;
- (id)title;
- (id)topAssetContainer;
- (id)topAssetContainerConstraints;
- (double)topPadding;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)underlineLinks;

@end
