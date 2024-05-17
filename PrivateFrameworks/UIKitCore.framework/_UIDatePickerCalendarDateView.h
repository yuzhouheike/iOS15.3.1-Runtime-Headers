/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerCalendarDateView : UIView <UICollectionViewDelegate> {
    NSCalendar * _calendar;
    NSDateFormatter * _cellFormatter;
    UICollectionView * _collectionView;
    NSLayoutConstraint * _collectionViewHeightConstraint;
    NSString * _customFontDesign;
    UICollectionViewDiffableDataSource * _dataSource;
    _UIDatePickerCalendarViewDataSourceController * _dataSourceController;
    _UIDatePickerDateRange * _dateRange;
    _UIDatePickerLinkedLabel * _daySizingLabel;
    <_UIDatePickerCalendarDateViewDelegate> * _delegate;
    struct { 
        unsigned int needsCollectionViewSelectionUpdate : 1; 
        unsigned int needsCollectionViewScrollPositionUpdate : 1; 
        unsigned int needsUpdateSizing : 1; 
        unsigned int isIgnoringScrollCallbacks : 1; 
        unsigned int renderOverhangDays : 1; 
    }  _flags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _frozenContentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownSize;
    double  _lastWeekdayLabelWidth;
    NSLocale * _locale;
    _UIDatePickerCalendarDay * _selectedDate;
    _UIDatePickerCalendarMonth * _visibleMonth;
    _UIDatePickerLinkedLabel * _weekdaySizingLabel;
    UIStackView * _weekdayStackView;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, retain) NSString *customFontDesign;
@property (nonatomic, readonly) _UIDatePickerDateRange *dateRange;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDatePickerCalendarDateViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) _UIDatePickerCalendarDay *selectedDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIDatePickerCalendarMonth *visibleMonth;

- (void).cxx_destruct;
- (double)__dayAndWeekdayLabelWidth;
- (id)_cellForCollectionView:(id)arg1 indexPath:(id)arg2 day:(id)arg3;
- (void)_cleanupDataIfNecessary;
- (void)_freezeContentOffset;
- (void)_notifyDelegateAboutDataChange;
- (void)_notifyDelegateAboutVisibilityChange;
- (void)_performIfNotIgnoringScrollCallbacks:(id /* block */)arg1;
- (void)_performIgnoringScrollCallbacks:(id /* block */)arg1;
- (void)_reload;
- (void)_reloadCollectionViewLayout;
- (void)_reloadDataSourceController;
- (void)_reloadDateFormatters;
- (void)_reloadPossibleDayValues;
- (void)_reloadWeekdays;
- (void)_restoreContentOffsetWithPageOffset:(long long)arg1;
- (void)_setNeedsCollectionViewScrollPositionUpdate;
- (void)_setNeedsCollectionViewSelectionUpdate;
- (void)_setNeedsUpdateSizing;
- (void)_setSelectedDate:(id)arg1 animated:(bool)arg2 updateVisibleMonth:(bool)arg3 updateCollectionView:(bool)arg4 notifyDelegate:(bool)arg5;
- (void)_setVisibleMonth:(id)arg1 animated:(bool)arg2 updateDataSource:(bool)arg3 updateCollectionView:(bool)arg4 notifyDelegate:(bool)arg5;
- (void)_setupDateFormatter;
- (void)_setupViewHierarchy;
- (void)_shouldDifferentiateWithoutColorUpdated:(id)arg1;
- (void)_updateCollectionViewContentInsets;
- (void)_updateCollectionViewScrollPosition:(bool)arg1;
- (void)_updateCollectionViewSelection:(bool)arg1;
- (void)_updateSizing;
- (void)_updateVisibleMonthIfNecessary;
- (id)calendar;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)customFontDesign;
- (id)dateRange;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locale;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 selectedDay:(id)arg4 visibleMonth:(id)arg5;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedDate;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomFontDesign:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedDate:(id)arg1 animated:(bool)arg2;
- (void)setVisibleMonth:(id)arg1;
- (void)setVisibleMonth:(id)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visibleMonth;

@end
