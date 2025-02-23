/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDateLabel : UILabel {
    bool  _boldForAllLocales;
    NSCalendar * _calendar;
    NSDate * _date;
    bool  _forceTimeOnly;
    NSDate * _noon;
    double  _paddingFromTimeToDesignator;
    NSDate * _previousWeek;
    bool  _shouldRecomputeText;
    NSDate * _today;
    NSDate * _tomorrow;
    NSDate * _yesterday;
}

@property (nonatomic) bool boldForAllLocales;
@property (nonatomic, retain) NSDate *date;
@property (getter=_dateString, nonatomic, readonly) NSString *dateString;
@property (nonatomic) bool forceTimeOnly;
@property (nonatomic) double paddingFromTimeToDesignator;
@property (nonatomic) bool shouldRecomputeText;
@property (nonatomic, readonly) NSString *timeDesignator;
@property (nonatomic, readonly) bool timeDesignatorAppearsBeforeTime;
@property (nonatomic, readonly) UIFont *timeDesignatorFont;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } timeDesignatorSize;
@property (nonatomic) double timeInterval;
@property (nonatomic, readonly) bool use24HourTime;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_dateFormatter;
+ (id)_relativeDateFormatter;
+ (id)_timeOnlyDateFormatter;
+ (id)_weekdayDateFormatter;
+ (id)amString;
+ (id)defaultFont;
+ (id)pmString;

- (void).cxx_destruct;
- (id)_calendar;
- (id)_dateString;
- (id)_dateWithDayDiffFromToday:(long long)arg1;
- (void)_didUpdateDate;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_lastWeek;
- (double)_noon;
- (void)_recomputeTextIfNecessary;
- (id)_stringDrawingContext;
- (double)_today;
- (id)_todayDate;
- (double)_tomorrow;
- (double)_yesterday;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (bool)boldForAllLocales;
- (id)date;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (bool)forceTimeOnly;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (double)paddingFromTimeToDesignator;
- (void)setBoldForAllLocales:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setForceTimeOnly:(bool)arg1;
- (void)setPaddingFromTimeToDesignator:(double)arg1;
- (void)setShouldRecomputeText:(bool)arg1;
- (void)setTimeInterval:(double)arg1;
- (bool)shouldRecomputeText;
- (id)text;
- (id)timeDesignator;
- (bool)timeDesignatorAppearsBeforeTime;
- (id)timeDesignatorFont;
- (struct CGSize { double x1; double x2; })timeDesignatorSize;
- (double)timeInterval;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)use24HourTime;

@end
