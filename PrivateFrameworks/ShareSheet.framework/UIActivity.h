/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving> {
    id /* block */  _activityCompletionWithItemsHandler;
    _UIActivityResourceLoader * _activityImageLoader;
    NSString * _activitySectionIdentifier;
    _UIActivityResourceLoader * _activitySettingsImageLoader;
    NSUUID * _activityUUID;
    NSString * _contentSizeCategory;
    long long  _defaultPriority;
    id /* block */  _didFinishPerformingActivityHandler;
    unsigned long long  _indexInApplicationDefinedActivities;
    bool  _isInsideDescription;
    long long  _maxPreviews;
    NSArray * _preferredLocalizations;
    NSURL * _representationCacheURL;
}

@property (nonatomic, readonly) UIColor *_activityBadgeColor;
@property (nonatomic, readonly) NSString *_activityBadgeText;
@property (nonatomic, readonly) UIColor *_activityBadgeTextColor;
@property (nonatomic, readonly) _UIActivityResourceLoader *_activityImageLoader;
@property (nonatomic, readonly) _UIActivityResourceLoader *_activitySettingsImageLoader;
@property (nonatomic, readonly) UIImage *_activityStatusImage;
@property (nonatomic, readonly) UIColor *_activityStatusTintColor;
@property (nonatomic, readonly) NSString *_activitySubtitle;
@property (nonatomic, readonly) id /* block */ _backgroundPreheatBlock;
@property (nonatomic, readonly) NSString *_heroActionTitle;
@property (nonatomic, readonly) bool _isDisabled;
@property (nonatomic, copy) id /* block */ activityCompletionWithItemsHandler;
@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, copy) NSString *activitySectionIdentifier;
@property (nonatomic, retain) NSString *activitySectionIdentifier;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic, readonly) UIViewController *activityViewController;
@property (nonatomic, readonly) NSExtension *applicationExtension;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFinishPerformingActivityHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexInApplicationDefinedActivities;
@property (nonatomic) long long maxPreviews;
@property (nonatomic, retain) NSArray *preferredLocalizations;
@property (readonly) Class superclass;

+ (id)_actionImageForActionRepresentationImage:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)_actionImageForActionRepresentationImage:(id)arg1 contentSizeCategory:(id)arg2 monochrome:(bool)arg3;
+ (id)_actionImageForBundleImageConfiguration:(id)arg1;
+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_activityImageForActionRepresentationImage:(id)arg1;
+ (id)_activityImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activityImageForBundleImageConfiguration:(id)arg1;
+ (id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activitySettingsImageForBundleImageConfiguration:(id)arg1;
+ (long long)_activityStyle;
+ (id)_defaultFallbackActivityType;
+ (id)_imageByApplyingDefaultEffectsToImage:(id)arg1 activityCategory:(long long)arg2 iconFormat:(int)arg3;
+ (bool)_isCapabilityBasedActivity;
+ (void)_loadItemProvidersFromActivityItems:(id)arg1 withCacheURL:(id)arg2 completion:(id /* block */)arg3;
+ (void)_performAfterActivityImageLoadingCompletes:(id /* block */)arg1;
+ (id)_stringFromActivityCategory:(long long)arg1;
+ (unsigned long long)_xpcAttributes;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (Class)classForPreparingExtensionItemData;
+ (double)imageWidthForContentSizeCategory:(id)arg1;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;

- (void).cxx_destruct;
- (id)_actionBundleImageConfiguration;
- (id)_actionImage;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_activityBadgeTextColor;
- (id)_activityBundleImageConfiguration;
- (id)_activityImage;
- (id)_activityImageLoader;
- (id)_activitySettingsBundleImageConfiguration;
- (id)_activitySettingsImage;
- (id)_activitySettingsImageLoader;
- (id)_activityStatusImage;
- (id)_activityStatusTintColor;
- (id)_activitySubtitle;
- (bool)_activitySupportsPromiseURLs;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (bool)_appIsDocumentTypeOwner;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id /* block */)_backgroundPreheatBlock;
- (id)_beforeActivity;
- (id)_bundleIdentifierForActivityImageCreation;
- (bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (long long)_defaultSortGroup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_embeddedActivityViewController;
- (id)_heroActionTitle;
- (void)_injectedJavaScriptResult:(id)arg1;
- (bool)_isDisabled;
- (bool)_isExecutedInProcess;
- (void)_loadItemProvidersFromActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (bool)_managesOwnPresentation;
- (bool)_needsResolvedActivityItems;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (bool)_supportsOpenInPlace;
- (id)_systemImageName;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (bool)_wantsAttachmentURLItemData;
- (bool)_wantsInitialSocialText;
- (bool)_wantsOriginalImageColor;
- (bool)_wantsThumbnailItemData;
- (void)_willBePerformedOrPresented;
- (void)_willPresentAsFormSheet;
- (id /* block */)activityCompletionWithItemsHandler;
- (void)activityDidFinish:(bool)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityImage;
- (id)activitySectionIdentifier;
- (id)activityTitle;
- (id)activityType;
- (id)activityUUID;
- (id)activityViewController;
- (id)applicationExtension;
- (id)applicationProxy;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)contentSizeCategory;
- (id)description;
- (id /* block */)didFinishPerformingActivityHandler;
- (unsigned long long)indexInApplicationDefinedActivities;
- (id)init;
- (long long)maxPreviews;
- (void)performActivity;
- (id)preferredLocalizations;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setActivitySectionIdentifier:(id)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDidFinishPerformingActivityHandler:(id /* block */)arg1;
- (void)setIndexInApplicationDefinedActivities:(unsigned long long)arg1;
- (void)setMaxPreviews:(long long)arg1;
- (void)setPreferredLocalizations:(id)arg1;
- (id)ss_activitySpecificExtensionItemDataRequestInfo;
- (id)ss_activityTypeToReportToHost;
- (bool)ss_shouldDismissHostsPresentationBeforePerforming;
- (bool)ss_shouldExecuteInShareSheet;

@end
