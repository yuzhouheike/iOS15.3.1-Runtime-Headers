/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <MKETAProviderObserver, MKModuleViewControllerProtocol, _MKStackViewDelegate> {
    MKUGCCallToActionViewAppearance * _callToActionAppearance;
    <MKUGCCallToActionViewDelegate> * _callToActionDelegate;
    MKUGCCallToActionView * _callToActionView;
    _MKTokenAttributedString * _categoryToken;
    NSArray * _constraints;
    bool  _constraintsCreated;
    double  _contentAlpha;
    _MKDataHeaderModel * _dataModel;
    <MKPlaceCardHeaderViewControllerDelegate> * _delegate;
    _MKTokenAttributedString * _distanceToken;
    _MKUILabel * _firstLabel;
    bool  _isUserLocation;
    MKPlaceSectionRowView * _labelsSectionView;
    NSLayoutConstraint * _lastLabelToBottomConstraint;
    double  _lastMaskAlphaValueApplied;
    unsigned long long  _layout;
    UILayoutGuide * _leadingGuide;
    <GEOTransitLineItem> * _lineItem;
    _MKLocalizedHoursBuilder * _localizedHoursBuilder;
    UIImageView * _logoImageView;
    NSURL * _logoURL;
    bool  _notVerified;
    _MKTokenAttributedString * _openStateToken;
    bool  _optionSmallScreen;
    <_MKPlaceItem> * _placeItem;
    _MKTokenAttributedString * _priceToken;
    _MKTokenAttributedString * _ratingsToken;
    _MKUILabel * _secondLabel;
    NSLayoutConstraint * _secondLabelToFirstLabelConstraint;
    double  _secondLabelToFirstLabelConstraintConstantMax;
    double  _secondLabelToFirstLabelConstraintConstantMin;
    _MKUILabel * _secondaryNameLabel;
    _MKTokenAttributedString * _secondaryNameToken;
    UIView * _thirdDisplayedLabel;
    _MKUILabel * _thirdLabel;
    _MKUILabel * _titleOnlyLabel;
    MKPlaceSectionRowView * _titleSectionView;
    _MKTokenAttributedString * _titleToken;
    NSLayoutConstraint * _titleTrailingConstraint;
    _MKTokenAttributedString * _userLocationToken;
    _MKTokenAttributedString * _venueToken;
    _MKTokenAttributedString * _verifiedToken;
}

@property (nonatomic, retain) MKUGCCallToActionViewAppearance *callToActionAppearance;
@property (nonatomic) <MKUGCCallToActionViewDelegate> *callToActionDelegate;
@property (nonatomic) double contentAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceCardHeaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastLabelToBottomConstant;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, retain) _MKLocalizedHoursBuilder *localizedHoursBuilder;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (nonatomic, readonly) bool shouldShowCallToActionWithRatingHeaderInfo;
@property (readonly) Class superclass;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_commonInit;
- (void)_contentSizeDidChange;
- (void)_contentSizeDidChangeNotificationHandler;
- (void)_createViews;
- (id)_currentTitle;
- (bool)_hasSecondaryName;
- (bool)_isLikelyToShowDistance;
- (void)_loadLogo;
- (bool)_mapItemShouldDisplayDistance:(id)arg1;
- (id)_openStateString;
- (id)_reviewLabelText;
- (id)_secondaryNameTitle;
- (void)_setAlpha:(double)arg1 toView:(id)arg2 ifIntersects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_setupDatas;
- (id)_verifiedText;
- (void)animateSecondLabelWithPercentage:(double)arg1;
- (id)callToActionAppearance;
- (id)callToActionDelegate;
- (double)contentAlpha;
- (id)delegate;
- (void)hideTitle:(bool)arg1;
- (void)infoCardThemeChanged;
- (id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2;
- (double)lastLabelToBottomConstant;
- (id)lineItem;
- (id)localizedHoursBuilder;
- (id)newLabel;
- (id)placeItem;
- (double)secondaryNameLabelPadding;
- (id)secondaryNameTimingFunction;
- (void)setCallToActionAppearance:(id)arg1;
- (void)setCallToActionDelegate:(id)arg1;
- (void)setConstraints;
- (void)setContentAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalizedHoursBuilder:(id)arg1;
- (bool)shouldShowCallToActionWithRatingHeaderInfo;
- (id)titleFont;
- (void)updateContent;
- (void)updateContentAlpha;
- (void)updateHeaderTitle;
- (void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;
- (void)updateViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
