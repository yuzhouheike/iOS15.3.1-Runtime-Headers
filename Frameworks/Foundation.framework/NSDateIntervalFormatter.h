/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateIntervalFormatter : NSFormatter {
    NSCalendar * _calendar;
    unsigned long long  _dateStyle;
    NSString * _dateTemplate;
    NSString * _dateTemplateFromStyles;
    void * _formatter;
    NSLocale * _locale;
    NSObject<OS_dispatch_semaphore> * _lock;
    bool  _modified;
    void * _reserved;
    unsigned long long  _timeStyle;
    NSTimeZone * _timeZone;
    bool  _useTemplate;
}

@property (copy) NSCalendar *calendar;
@property unsigned long long dateStyle;
@property (copy) NSString *dateTemplate;
@property (copy) NSLocale *locale;
@property unsigned long long timeStyle;
@property (copy) NSTimeZone *timeZone;

- (id)_stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (unsigned long long)boundaryStyle;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dateStyle;
- (id)dateTemplate;
- (void)dealloc;
- (id)editingStringForObjectValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)locale;
- (void)setBoundaryStyle:(unsigned long long)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (void)setDateTemplate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTimeStyle:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDateInterval:(id)arg1;
- (unsigned long long)timeStyle;
- (id)timeZone;

@end
