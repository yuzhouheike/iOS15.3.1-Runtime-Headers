/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackdropViewSettings : NSObject {
    bool  _appliesTintAndBlurSettings;
    _UIBackdropView * _backdrop;
    bool  _backdropVisible;
    long long  _blurHardEdges;
    NSString * _blurQuality;
    double  _blurRadius;
    double  _colorBurnTintAlpha;
    double  _colorBurnTintLevel;
    UIImage * _colorBurnTintMaskImage;
    double  _colorOffsetAlpha;
    NSValue * _colorOffsetMatrix;
    _UIBackdropColorSettings * _colorSettings;
    UIColor * _colorTint;
    double  _colorTintAlpha;
    double  _colorTintMaskAlpha;
    UIImage * _colorTintMaskImage;
    UIColor * _combinedTintColor;
    bool  _darkenWithSourceOver;
    double  _darkeningTintAlpha;
    double  _darkeningTintBrightness;
    double  _darkeningTintHue;
    UIImage * _darkeningTintMaskImage;
    double  _darkeningTintSaturation;
    bool  _designMode;
    bool  _enabled;
    bool  _explicitlySetGraphicsQuality;
    double  _filterMaskAlpha;
    UIImage * _filterMaskImage;
    long long  _graphicsQuality;
    double  _grayscaleTintAlpha;
    double  _grayscaleTintLevel;
    double  _grayscaleTintMaskAlpha;
    UIImage * _grayscaleTintMaskImage;
    bool  _highlighted;
    UIColor * _legibleColor;
    bool  _lightenGrayscaleWithSourceOver;
    long long  _renderingHint;
    bool  _requiresColorStatistics;
    struct __CFRunLoopObserver { } * _runLoopObserver;
    double  _saturationDeltaFactor;
    double  _scale;
    bool  _selected;
    bool  _shouldDoRasterizationAndAlphaHack;
    long long  _stackingLevel;
    double  _statisticsInterval;
    long long  _style;
    long long  _suppressSettingsDidChange;
    bool  _usesBackdropEffectView;
    bool  _usesColorBurnTintView;
    bool  _usesColorOffset;
    bool  _usesColorTintView;
    bool  _usesContentView;
    bool  _usesDarkeningTintView;
    bool  _usesGrayscaleTintView;
    unsigned long long  _version;
    double  _zoom;
}

@property (nonatomic) bool appliesTintAndBlurSettings;
@property (nonatomic) _UIBackdropView *backdrop;
@property (getter=isBackdropVisible, nonatomic) bool backdropVisible;
@property (nonatomic) long long blurHardEdges;
@property (nonatomic, copy) NSString *blurQuality;
@property (nonatomic) double blurRadius;
@property (nonatomic) bool blursWithHardEdges;
@property (nonatomic) double colorBurnTintAlpha;
@property (nonatomic) double colorBurnTintLevel;
@property (nonatomic, retain) UIImage *colorBurnTintMaskImage;
@property (nonatomic) double colorOffsetAlpha;
@property (nonatomic, retain) NSValue *colorOffsetMatrix;
@property (nonatomic, retain) _UIBackdropColorSettings *colorSettings;
@property (nonatomic, retain) UIColor *colorTint;
@property (nonatomic) double colorTintAlpha;
@property (nonatomic) double colorTintMaskAlpha;
@property (nonatomic, retain) UIImage *colorTintMaskImage;
@property (nonatomic, readonly) UIColor *combinedTintColor;
@property (nonatomic) bool darkenWithSourceOver;
@property (nonatomic) double darkeningTintAlpha;
@property (nonatomic) double darkeningTintBrightness;
@property (nonatomic) double darkeningTintHue;
@property (nonatomic, retain) UIImage *darkeningTintMaskImage;
@property (nonatomic) double darkeningTintSaturation;
@property (setter=setDesignMode:, nonatomic) bool designMode;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool explicitlySetGraphicsQuality;
@property (nonatomic) double filterMaskAlpha;
@property (nonatomic, retain) UIImage *filterMaskImage;
@property (nonatomic) long long graphicsQuality;
@property (nonatomic) double grayscaleTintAlpha;
@property (nonatomic) double grayscaleTintLevel;
@property (nonatomic) double grayscaleTintMaskAlpha;
@property (nonatomic, retain) UIImage *grayscaleTintMaskImage;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *legibleColor;
@property (nonatomic) bool lightenGrayscaleWithSourceOver;
@property (nonatomic) long long renderingHint;
@property (nonatomic) bool requiresColorStatistics;
@property (nonatomic) double saturationDeltaFactor;
@property (nonatomic) double scale;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) long long stackingLevel;
@property (nonatomic) double statisticsInterval;
@property (nonatomic, readonly) long long style;
@property (nonatomic) long long suppressSettingsDidChange;
@property (nonatomic) bool usesBackdropEffectView;
@property (nonatomic) bool usesColorBurnTintView;
@property (nonatomic) bool usesColorOffset;
@property (nonatomic) bool usesColorTintView;
@property (nonatomic) bool usesContentView;
@property (nonatomic) bool usesDarkeningTintView;
@property (nonatomic) bool usesGrayscaleTintView;
@property (nonatomic) unsigned long long version;
@property (nonatomic) double zoom;
@property (nonatomic) bool zoomsBack;

+ (id)darkeningTintColor;
+ (id)settingsForPrivateStyle:(long long)arg1;
+ (id)settingsForPrivateStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForStyle:(long long)arg1;
+ (id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsPreservingHintsFromSettings:(id)arg1 graphicsQuality:(long long)arg2;

- (void).cxx_destruct;
- (void)addKeyPathObserver:(id)arg1;
- (bool)appliesTintAndBlurSettings;
- (id)backdrop;
- (long long)blurHardEdges;
- (id)blurQuality;
- (double)blurRadius;
- (bool)blursWithHardEdges;
- (void)clearRunLoopObserver;
- (double)colorBurnTintAlpha;
- (double)colorBurnTintLevel;
- (id)colorBurnTintMaskImage;
- (double)colorOffsetAlpha;
- (id)colorOffsetMatrix;
- (id)colorSettings;
- (id)colorTint;
- (double)colorTintAlpha;
- (double)colorTintMaskAlpha;
- (id)colorTintMaskImage;
- (id)combinedTintColor;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (void)copyAdditionalSettingsFromSettings:(id)arg1;
- (bool)darkenWithSourceOver;
- (double)darkeningTintAlpha;
- (double)darkeningTintBrightness;
- (double)darkeningTintHue;
- (id)darkeningTintMaskImage;
- (double)darkeningTintSaturation;
- (void)dealloc;
- (id)description;
- (bool)designMode;
- (bool)explicitlySetGraphicsQuality;
- (double)filterMaskAlpha;
- (id)filterMaskImage;
- (long long)graphicsQuality;
- (double)grayscaleTintAlpha;
- (double)grayscaleTintLevel;
- (double)grayscaleTintMaskAlpha;
- (id)grayscaleTintMaskImage;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithDefaultValuesForGraphicsQuality:(long long)arg1;
- (bool)isBackdropVisible;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (id)legibleColor;
- (bool)lightenGrayscaleWithSourceOver;
- (void)removeKeyPathObserver:(id)arg1;
- (long long)renderingHint;
- (bool)requiresBackdropLayer;
- (bool)requiresColorStatistics;
- (void)restoreDefaultValues;
- (double)saturationDeltaFactor;
- (double)scale;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)setAppliesTintAndBlurSettings:(bool)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (void)setBlurHardEdges:(long long)arg1;
- (void)setBlurQuality:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBlursWithHardEdges:(bool)arg1;
- (void)setColorBurnTintAlpha:(double)arg1;
- (void)setColorBurnTintLevel:(double)arg1;
- (void)setColorBurnTintMaskImage:(id)arg1;
- (void)setColorOffsetAlpha:(double)arg1;
- (void)setColorOffsetMatrix:(id)arg1;
- (void)setColorSettings:(id)arg1;
- (void)setColorTint:(id)arg1;
- (void)setColorTintAlpha:(double)arg1;
- (void)setColorTintMaskAlpha:(double)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setDarkenWithSourceOver:(bool)arg1;
- (void)setDarkeningTintAlpha:(double)arg1;
- (void)setDarkeningTintBrightness:(double)arg1;
- (void)setDarkeningTintHue:(double)arg1;
- (void)setDarkeningTintMaskImage:(id)arg1;
- (void)setDarkeningTintSaturation:(double)arg1;
- (void)setDefaultValues;
- (void)setDesignMode:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExplicitlySetGraphicsQuality:(bool)arg1;
- (void)setFilterMaskAlpha:(double)arg1;
- (void)setFilterMaskImage:(id)arg1;
- (void)setGraphicsQuality:(long long)arg1;
- (void)setGrayscaleTintAlpha:(double)arg1;
- (void)setGrayscaleTintLevel:(double)arg1;
- (void)setGrayscaleTintMaskAlpha:(double)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLegibleColor:(id)arg1;
- (void)setLightenGrayscaleWithSourceOver:(bool)arg1;
- (void)setRenderingHint:(long long)arg1;
- (void)setRequiresColorStatistics:(bool)arg1;
- (void)setSaturationDeltaFactor:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStackingLevel:(long long)arg1;
- (void)setStackinglevel:(long long)arg1;
- (void)setStatisticsInterval:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSuppressSettingsDidChange:(long long)arg1;
- (void)setUsesBackdropEffectView:(bool)arg1;
- (void)setUsesColorBurnTintView:(bool)arg1;
- (void)setUsesColorOffset:(bool)arg1;
- (void)setUsesColorTintView:(bool)arg1;
- (void)setUsesContentView:(bool)arg1;
- (void)setUsesDarkeningTintView:(bool)arg1;
- (void)setUsesGrayscaleTintView:(bool)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (void)setZoom:(double)arg1;
- (void)setZoomsBack:(bool)arg1;
- (long long)stackingLevel;
- (double)statisticsInterval;
- (long long)style;
- (long long)suppressSettingsDidChange;
- (bool)usesBackdropEffectView;
- (bool)usesColorBurnTintView;
- (bool)usesColorOffset;
- (bool)usesColorTintView;
- (bool)usesContentView;
- (bool)usesDarkeningTintView;
- (bool)usesGrayscaleTintView;
- (unsigned long long)version;
- (double)zoom;
- (bool)zoomsBack;

@end
