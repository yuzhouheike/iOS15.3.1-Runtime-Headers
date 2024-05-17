/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerIOSCompactView : UIControl <_UIDatePickerCompactDateLabelDelegate, _UIDatePickerCompactTimeLabelDelegate, _UIDatePickerOverlayPresentationDelegate, _UIDatePickerViewComponent> {
    long long  _activeComponent;
    UILayoutGuide * _contentLayoutGuide;
    _UIDatePickerDataModel * _data;
    NSDateFormatter * _dateFormatterMedium;
    NSDateFormatter * _dateFormatterShort;
    bool  _dateOnLeadingSide;
    UIDatePicker * _datePicker;
    NSArray * _dateTimeConstraints;
    _UIDatePickerCompactDateLabel * _dateView;
    struct { 
        unsigned int isEnabled : 1; 
        unsigned int implementsCustomDidSelectComponent : 1; 
    }  _flags;
    NSDateFormatter * _layoutFormatter;
    UIPanGestureRecognizer * _panGestureRecognizer;
    _UIDatePickerOverlayPresentation * _presentation;
    _UIDatePickerCompactTimeLabel * _timeView;
    UILayoutGuide * _timeViewLayoutGuide;
}

@property (nonatomic, readonly) bool alignConstraintsToLayoutGuide;
@property (getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:, nonatomic) bool allowsZeroCountDownDuration;
@property (getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:, nonatomic) bool allowsZeroTimeInterval;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, retain) _UIDatePickerDataModel *data;
@property (nonatomic) UIDatePicker *datePicker;
@property (nonatomic, readonly) long long datePickerStyle;
@property (nonatomic, readonly) _UIDatePickerCompactDateLabel *dateView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_highlightColor, setter=_setHighlightColor:, nonatomic, retain) UIColor *highlightColor;
@property (getter=_isTimeIntervalMode, nonatomic, readonly) bool isTimeIntervalMode;
@property (getter=_magnifierLineColor, setter=_setMagnifierLineColor:, nonatomic, retain) UIColor *magnifierLineColor;
@property (nonatomic, retain) NSDictionary *overrideAttributes;
@property (readonly) Class superclass;
@property (getter=_textColor, setter=_setTextColor:, nonatomic, retain) UIColor *textColor;
@property (getter=_textShadowColor, setter=_setTextShadowColor:, nonatomic, retain) UIColor *textShadowColor;
@property (nonatomic) double timeInterval;
@property (nonatomic, readonly) _UIDatePickerCompactTimeLabel *timeView;

- (void).cxx_destruct;
- (bool)_allowsZeroCountDownDuration;
- (bool)_allowsZeroTimeInterval;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_appliedInsetsToEdgeOfContent;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_datePickerPresentation:(id)arg1 didChangeActiveMode:(long long)arg2;
- (void)_didReceivePanGestureRecognizer:(id)arg1;
- (bool)_isTimeIntervalMode;
- (void)_reloadTimeViewTimeFormat;
- (void)_resignActiveComponentAnimated:(bool)arg1;
- (void)_setAllowsZeroCountDownDuration:(bool)arg1;
- (void)_setAllowsZeroTimeInterval:(bool)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setHidesLabels:(bool)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateDateBeforeTimeValue;
- (void)_updateDateViewTextAlignment;
- (void)_updateEnabledStyling;
- (void)_updateUI;
- (bool)alignConstraintsToLayoutGuide;
- (void)compactDateLabelDidBeginEditing:(id)arg1;
- (void)compactDateLabelDidEndEditing:(id)arg1;
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;
- (bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)compactTimeLabelDidBeginEditing:(id)arg1;
- (void)compactTimeLabelDidEndEditing:(id)arg1;
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;
- (id)createDatePickerForCompactDateLabel:(id)arg1;
- (id)createDatePickerForCompactTimeLabel:(id)arg1;
- (id)data;
- (id)datePicker;
- (long long)datePickerStyle;
- (id)dateView;
- (struct CGSize { double x1; double x2; })defaultSize;
- (void)didChangeCalendar;
- (void)didChangeCompactStyleDelegate;
- (void)didChangeDateFrom:(id)arg1 animated:(bool)arg2;
- (void)didChangeLocale;
- (void)didChangeMaximumDate;
- (void)didChangeMinimumDate;
- (void)didChangeMinuteInterval;
- (void)didChangeMode;
- (void)didChangeRoundsToMinuteInterval;
- (void)didChangeTimeZone;
- (void)didChangeToday;
- (void)didReset;
- (bool)hasDefaultSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overrideAttributes;
- (void)setActiveComponent:(long long)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setData:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setOverrideAttributes:(id)arg1;
- (id)timeView;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateTimeZoneDisplay;
- (bool)usesAutoLayout;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
