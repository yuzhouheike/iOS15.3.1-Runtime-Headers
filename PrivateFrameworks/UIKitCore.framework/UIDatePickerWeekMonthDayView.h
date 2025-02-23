/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDatePickerWeekMonthDayView : UIView {
    UILabel * _dateLabel;
    struct { 
        unsigned int weekdayLast : 1; 
    }  _datePickerWeekMonthDayViewFlags;
    NSString * _formattedDateString;
    UILabel * _weekdayLabel;
    double  _weekdayWidth;
}

@property (nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic, copy) NSString *formattedDateString;
@property (nonatomic, readonly) UILabel *weekdayLabel;
@property (nonatomic) bool weekdayLast;
@property (nonatomic) double weekdayWidth;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_canBeReusedInPickerView;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)dateLabel;
- (id)formattedDateString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFormattedDateString:(id)arg1;
- (void)setWeekdayLast:(bool)arg1;
- (void)setWeekdayWidth:(double)arg1;
- (id)weekdayLabel;
- (bool)weekdayLast;
- (double)weekdayWidth;

@end
