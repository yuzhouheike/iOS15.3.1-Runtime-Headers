/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackgroundViewConfiguration : NSObject <NSCopying, NSSecureCoding, _UIBackgroundConfigurationInternal> {
    UIColor * _backgroundColor;
    long long  _backgroundColorMode;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _backgroundInsets;
    struct { 
        unsigned int hasCustomizedCustomView : 1; 
        unsigned int hasCustomizedCornerRadius : 1; 
        unsigned int hasCustomizedBackgroundInsets : 1; 
        unsigned int hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets : 1; 
        unsigned int hasCustomizedBackgroundColorOrMode : 1; 
        unsigned int hasCustomizedVisualEffect : 1; 
        unsigned int hasCustomizedStrokeColorOrMode : 1; 
        unsigned int hasCustomizedStrokeWidth : 1; 
        unsigned int hasCustomizedStrokeOutset : 1; 
    }  _configurationFlags;
    double  _cornerRadius;
    UIView * _customView;
    long long  _defaultStyle;
    unsigned long long  _edgesAddingLayoutMarginsToBackgroundInsets;
    unsigned long long  _maskedCorners;
    long long  _shadowType;
    UIColor * _strokeColor;
    long long  _strokeColorMode;
    double  _strokeOutset;
    double  _strokeWidth;
    UIVisualEffect * _visualEffect;
}

@property (setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (setter=_setShadowType:, nonatomic) long long _shadowType;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) long long backgroundColorMode;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInsets;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets;
@property (getter=_hasBackgroundColor, nonatomic, readonly) bool hasBackgroundColor;
@property (getter=_hasBackgroundFill, nonatomic, readonly) bool hasBackgroundFill;
@property (getter=_hasStroke, nonatomic, readonly) bool hasStroke;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, readonly) bool isTintBackgroundColor;
@property (getter=_maskedCorners, setter=_setMaskedCorners:, nonatomic) unsigned long long maskedCorners;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) long long strokeColorMode;
@property (nonatomic) double strokeOutset;
@property (nonatomic) double strokeWidth;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIVisualEffect *visualEffect;

+ (id)defaultGroupedListCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultGroupedListHeaderFooterConfigurationForState:(unsigned long long)arg1;
+ (id)defaultInsetGroupedListCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultInsetGroupedListHeaderFooterConfigurationForState:(unsigned long long)arg1;
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultOutlineParentCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultPlainListCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultPlainListHeaderFooterConfigurationForState:(unsigned long long)arg1;
+ (id)groupedListCellConfiguration;
+ (id)groupedListHeaderFooterConfiguration;
+ (id)insetGroupedListCellConfiguration;
+ (id)insetGroupedListHeaderFooterConfiguration;
+ (id)outlineCellConfiguration;
+ (id)outlineRootParentCellConfiguration;
+ (id)plainListCellConfiguration;
+ (id)plainListHeaderFooterConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_backgroundFillIsEqual:(id)arg1 withTintColor:(id)arg2;
- (double)_cornerRadius;
- (bool)_hasBackgroundColor;
- (bool)_hasBackgroundFill;
- (bool)_hasStroke;
- (bool)_isEqualToInternalConfigurationQuick:(id)arg1;
- (unsigned long long)_maskedCorners;
- (void)_setCornerRadius:(double)arg1;
- (void)_setMaskedCorners:(unsigned long long)arg1;
- (void)_setShadowType:(long long)arg1;
- (long long)_shadowType;
- (id)_updatedConfigurationForState:(id)arg1;
- (id)backgroundColor;
- (long long)backgroundColorMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)customView;
- (id)description;
- (unsigned long long)edgesAddingLayoutMarginsToBackgroundInsets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (long long)imageContentMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTintBackgroundColor;
- (id)resolvedBackgroundColorForTintColor:(id)arg1;
- (id)resolvedStrokeColorForTintColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundColorMode:(long long)arg1;
- (void)setBackgroundInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCustomView:(id)arg1;
- (void)setEdgesAddingLayoutMarginsToBackgroundInsets:(unsigned long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeColorMode:(long long)arg1;
- (void)setStrokeOutset:(double)arg1;
- (void)setStrokeWidth:(double)arg1;
- (void)setVisualEffect:(id)arg1;
- (id)strokeColor;
- (long long)strokeColorMode;
- (double)strokeOutset;
- (double)strokeWidth;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2;
- (id)visualEffect;

@end
