/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetContext : NSObject {
    NSArray * _activityItems;
    NSArray * _activityTypeOrder;
    NSArray * _activityTypesToCreateInShareService;
    UIActivityViewController * _activityViewController;
    bool  _allowsEmbedding;
    NSArray * _applicationActivities;
    bool  _configureForCloudSharing;
    bool  _configureForPhotosEdit;
    long long  _excludedActivityCategories;
    NSArray * _excludedActivityTypes;
    NSArray * _heroActionActivityTypes;
    bool  _hideHeaderView;
    NSArray * _includedActivityTypes;
    bool  _isContentManaged;
    <UIActivityViewControllerObjectManipulationDelegate> * _objectManipulationDelegate;
    LPLinkMetadata * _photosHeaderMetadata;
    NSArray * _selectedAssetIdentifiers;
    long long  _sharingStyle;
    bool  _shouldSuggestFamilyMembers;
    bool  _showHeroActionsHorizontally;
    bool  _showKeyboardAutomatically;
    bool  _slotsRenderingDisabled;
    NSString * _topContentSectionText;
    bool  _whitelistActionActivitiesOnly;
}

@property (nonatomic, readonly) NSArray *activityItems;
@property (nonatomic, copy) NSArray *activityTypeOrder;
@property (nonatomic, readonly) NSArray *activityTypesToCreateInShareService;
@property (nonatomic, readonly) UIActivityViewController *activityViewController;
@property (nonatomic) bool allowsEmbedding;
@property (nonatomic, retain) NSArray *applicationActivities;
@property (nonatomic) bool configureForCloudSharing;
@property (nonatomic) bool configureForPhotosEdit;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, copy) NSArray *heroActionActivityTypes;
@property (nonatomic) bool hideHeaderView;
@property (nonatomic, copy) NSArray *includedActivityTypes;
@property (nonatomic) bool isContentManaged;
@property (nonatomic) <UIActivityViewControllerObjectManipulationDelegate> *objectManipulationDelegate;
@property (nonatomic, retain) LPLinkMetadata *photosHeaderMetadata;
@property (nonatomic, copy) NSArray *selectedAssetIdentifiers;
@property (nonatomic) long long sharingStyle;
@property (nonatomic) bool shouldSuggestFamilyMembers;
@property (nonatomic) bool showHeroActionsHorizontally;
@property (nonatomic) bool showKeyboardAutomatically;
@property (nonatomic) bool slotsRenderingDisabled;
@property (nonatomic, retain) NSString *topContentSectionText;
@property (nonatomic) bool whitelistActionActivitiesOnly;

- (void).cxx_destruct;
- (id)activityItems;
- (id)activityTypeOrder;
- (id)activityTypesToCreateInShareService;
- (id)activityViewController;
- (bool)allowsEmbedding;
- (id)applicationActivities;
- (bool)configureForCloudSharing;
- (bool)configureForPhotosEdit;
- (id)description;
- (long long)excludedActivityCategories;
- (id)excludedActivityTypes;
- (id)heroActionActivityTypes;
- (bool)hideHeaderView;
- (id)includedActivityTypes;
- (id)initWithActivityViewController:(id)arg1 activityItems:(id)arg2;
- (bool)isContentManaged;
- (id)objectManipulationDelegate;
- (id)photosHeaderMetadata;
- (id)selectedAssetIdentifiers;
- (void)setActivityTypeOrder:(id)arg1;
- (void)setAllowsEmbedding:(bool)arg1;
- (void)setApplicationActivities:(id)arg1;
- (void)setConfigureForCloudSharing:(bool)arg1;
- (void)setConfigureForPhotosEdit:(bool)arg1;
- (void)setExcludedActivityCategories:(long long)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setHeroActionActivityTypes:(id)arg1;
- (void)setHideHeaderView:(bool)arg1;
- (void)setIncludedActivityTypes:(id)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setObjectManipulationDelegate:(id)arg1;
- (void)setPhotosHeaderMetadata:(id)arg1;
- (void)setSelectedAssetIdentifiers:(id)arg1;
- (void)setSharingStyle:(long long)arg1;
- (void)setShouldSuggestFamilyMembers:(bool)arg1;
- (void)setShowHeroActionsHorizontally:(bool)arg1;
- (void)setShowKeyboardAutomatically:(bool)arg1;
- (void)setSlotsRenderingDisabled:(bool)arg1;
- (void)setTopContentSectionText:(id)arg1;
- (void)setWhitelistActionActivitiesOnly:(bool)arg1;
- (long long)sharingStyle;
- (bool)shouldSuggestFamilyMembers;
- (bool)showHeroActionsHorizontally;
- (bool)showKeyboardAutomatically;
- (bool)slotsRenderingDisabled;
- (id)topContentSectionText;
- (bool)whitelistActionActivitiesOnly;

@end
