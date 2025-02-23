/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UIFont : NSObject <DebugHierarchyValue_Fallback, NSCopying, NSSecureCoding>

@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double capHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double descender;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) UIFontDescriptor *fontDescriptor;
@property (nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double leading;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) double maximumPointSizeAfterScaling;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double pointSizeForScaling;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textStyleForScaling;
@property (nonatomic, readonly) double xHeight;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_fontWithDescriptor:(id)arg1 size:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 forIB:(bool)arg6 legibilityWeight:(long long)arg7;
+ (id)_fontWithName:(id)arg1 size:(double)arg2;
+ (bool)_isSupportedDynamicFontTextStyle:(id)arg1;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4;
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4 roundSize:(bool)arg5;
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 design:(id)arg3 weight:(double)arg4;
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 weight:(double)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5 pointSize:(double)arg6 pointSizeForScaling:(double)arg7;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(id)arg3 symbolicTraits:(unsigned int)arg4 maximumContentSizeCategory:(id)arg5 compatibleWithTraitCollection:(id)arg6 pointSize:(double)arg7 pointSizeForScaling:(double)arg8;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2 maximumContentSizeCategory:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 weight:(double)arg2;
+ (double)_readableWidth;
+ (void)_setButtonFontSize:(double)arg1;
+ (void)_setLabelFontSize:(double)arg1;
+ (void)_setSmallSystemFontSize:(double)arg1;
+ (void)_setSystemFontSize:(double)arg1;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (id)_supportedDynamicFontStyles;
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (double)buttonFontSize;
+ (id)classFallbacksForKeyedArchiver;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)familyNames;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (double)labelFontSize;
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)monospacedSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (double)smallSystemFontSize;
+ (bool)supportsSecureCoding;
+ (id)systemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;
+ (double)systemFontSize;
+ (id)userFontOfSize:(double)arg1;

- (struct __CTFont { }*)CTFont;
- (bool)__isSystemFont;
- (id)_alternateSystemFonts;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (struct CGFont { }*)_backingCGSFont;
- (double)_baseLineHeightForFont:(bool)arg1;
- (double)_bodyLeading;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (double)_defaultLineHeightForUILayout;
- (id)_familyName;
- (id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg1;
- (id)_fontAdjustedForCurrentContentSizeCategory;
- (id)_fontScaledByScaleFactor:(double)arg1;
- (id)_fontScaledLikeTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3 forIB:(bool)arg4;
- (bool)_getLatin1Glyphs:(const unsigned short**)arg1 advanceWidths:(const double**)arg2;
- (bool)_hasColorGlyphs;
- (bool)_isDefaultFace;
- (bool)_isHiraginoFont;
- (bool)_isTextStyleFont;
- (bool)_isUIFont;
- (id)_kernOverride;
- (double)_leading;
- (double)_scaledValueForValue:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_textMatrixTransformForContext:(id)arg1;
- (id)_textStyle;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long long)arg2;
- (struct CGSize { double x1; double x2; })advancementForGlyph:(unsigned short)arg1;
- (void)applyToGraphicsContext:(id)arg1;
- (double)ascender;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForFont;
- (double)capHeight;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coveredCharacterSet;
- (double)descender;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)familyNameForCSSFontFamilyValueForWebKit:(bool)arg1;
- (id)fontDescriptor;
- (id)fontName;
- (id)fontWithSize:(double)arg1;
- (void)getAdvancements:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)getCaretPositions:(double*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;
- (void)getVerticalOriginTranslations:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned short)glyphWithName:(id)arg1;
- (id)htmlMarkupDescription;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2;
- (bool)isFixedPitch;
- (bool)isIBFontMetricsScaledFont;
- (bool)isIBTextStyleFont;
- (bool)isSystemFont;
- (bool)isVertical;
- (id)lastResortFont;
- (double)leading;
- (double)lineHeight;
- (id)markupDescription;
- (id)markupDescriptionForWebKit:(bool)arg1 pointSize:(float)arg2 sizeUnit:(id)arg3;
- (double)maximumPointSizeAfterScaling;
- (unsigned long long)mostCompatibleStringEncoding;
- (unsigned long long)numberOfGlyphs;
- (double)pointSize;
- (double)pointSizeForScaling;
- (double)readableWidth;
- (unsigned long long)renderingMode;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (void)setInContext:(struct CGContext { }*)arg1;
- (id)textStyleForScaling;
- (int)traits;
- (double)underlinePosition;
- (double)underlineThickness;
- (id)verticalFont;
- (double)xHeight;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (id)fallback_debugHierarchyValueWithOutOptions:(id*)arg1 outError:(id*)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (bool)_shouldUseDefaultFont;
+ (bool)ab_preferredContentSizeCategoryIsAccessibilityCategory;
+ (id)ab_preferredContentSizeCategoryName;
+ (id)ab_preferredFontForTextStyle:(id)arg1;
+ (id)ab_preferredRowFontForTextStyle:(id)arg1;
+ (void)ab_setIgnoreUserFontSize:(bool)arg1;
+ (id)cnui_bodyFont;
+ (id)cnui_footnoteFont;

- (id)ab_boldFont;
- (id)ab_italicFont;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_contentSizeCategoryInTableViewCellWithContentSizeCategory:(id)arg1;
+ (bool)_mapkit_accessibilityTextEnabled;
+ (bool)_mapkit_ax3TextEnabled;
+ (id)_mapkit_preferredFontForTextStyle:(id)arg1 weight:(double)arg2 grade:(unsigned long long)arg3 contentSizeCategory:(id)arg4 symbolicTraits:(unsigned int)arg5;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 contentSizeCategory:(id)arg3 symbolicTraits:(unsigned int)arg4;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 grade:(unsigned long long)arg3;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 grade:(unsigned long long)arg3 contentSizeCategory:(id)arg4 symbolicTraits:(unsigned int)arg5;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 useMonospace:(bool)arg3;

- (id)_mapkit_fontByAddingFeaturesForTabularFigures;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplayUseMonospace:(bool)arg1;
- (id)_mapkit_fontWithSymbolicTraits:(unsigned int)arg1;
- (id)_mapkit_fontWithWeight:(double)arg1;
- (double)_mapkit_lineHeight;
- (double)_mapkit_scaledValueForValue:(double)arg1;
- (double)_mapkit_scaledValueForValue:(double)arg1 scalingForMacIdiom:(bool)arg2 respectingTraitEnvironment:(id)arg3;
- (id)traitCollectionFromTraitEnvironment:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

+ (bool)_nui_isAccessibilityEnabled;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_normalizedContentSizeCategory:(id)arg1 default:(bool)arg2;
+ (id)_preferredContentSizeCategory:(unsigned long long)arg1;
+ (void)_setDefaultFontSizesForUserInterfaceIdiom:(long long)arg1;
+ (double)defaultFontSize;
+ (id)preferredContentSizeCategory;
+ (double)systemMinimumFontSize;

- (unsigned short)_bulletGlyph;
- (unsigned short)_bulletGlyphWithOriginalFont:(id)arg1 fontForBulletRendering:(id*)arg2;
- (id)_ui_bulletStringWithFont:(id*)arg1;

@end
