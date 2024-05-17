/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISliderDataModel : NSObject {
    struct __CFDictionary { } * _contentLookup;
    bool  _continuous;
    _UIEdgeFeedbackGenerator * _edgeFeedbackGenerator;
    bool  _enabled;
    bool  _highlighted;
    UIColor * _maxTintColor;
    float  _maxValue;
    UIImage * _maximumValueImage;
    UIColor * _minTintColor;
    float  _minValue;
    bool  _minimumTrackVisible;
    UIImage * _minimumValueImage;
    _UIModulationFeedbackGenerator * _modulationFeedbackGenerator;
    bool  _selected;
    bool  _showValue;
    bool  _thumbEnabled;
    UIColor * _thumbTintColor;
    bool  _trackEnabled;
    bool  _tracking;
    float  _value;
}

@property (getter=isContinuous, nonatomic) bool continuous;
@property (nonatomic, retain) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *maximumTrackTintColor;
@property (nonatomic, readonly) float maximumValue;
@property (nonatomic, retain) UIImage *maximumValueImage;
@property (nonatomic, retain) UIColor *minimumTrackTintColor;
@property (getter=isMinimumTrackVisible, nonatomic) bool minimumTrackVisible;
@property (nonatomic, readonly) float minimumValue;
@property (nonatomic, retain) UIImage *minimumValueImage;
@property (nonatomic, retain) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool showValue;
@property (getter=isThumbEnabled, nonatomic) bool thumbEnabled;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (getter=isTrackEnabled, nonatomic) bool trackEnabled;
@property (getter=isTracking, nonatomic) bool tracking;
@property (nonatomic, readonly) float value;

- (void).cxx_destruct;
- (id)_contentForState:(unsigned long long)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (bool)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (void)dealloc;
- (id)edgeFeedbackGenerator;
- (id)init;
- (bool)isContinuous;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isMinimumTrackVisible;
- (bool)isSelected;
- (bool)isThumbEnabled;
- (bool)isTrackEnabled;
- (bool)isTracking;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (id)maximumTrackTintColor;
- (float)maximumValue;
- (id)maximumValueImage;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (id)minimumTrackTintColor;
- (float)minimumValue;
- (id)minimumValueImage;
- (id)modulationFeedbackGenerator;
- (void)setContinuous:(bool)arg1;
- (void)setEdgeFeedbackGenerator:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMaximumTrackTintColor:(id)arg1;
- (bool)setMaximumValue:(float)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)setMinimumTrackVisible:(bool)arg1;
- (bool)setMinimumValue:(float)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setModulationFeedbackGenerator:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setThumbEnabled:(bool)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setThumbTintColor:(id)arg1;
- (void)setTrackEnabled:(bool)arg1;
- (void)setTracking:(bool)arg1;
- (bool)setValue:(float)arg1;
- (bool)showValue;
- (id)thumbImageForState:(unsigned long long)arg1;
- (id)thumbTintColor;
- (float)value;

@end
