/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerProviderGroup : NSObject <CNPhotoPickerProviderItemDelegate> {
    NSArray * _addItems;
    NSArray * _addedItems;
    bool  _allowAddItem;
    NSArray * _availablePaddingItems;
    <CNScheduler> * _callbackQueue;
    <CNPhotoPickerProviderGroupDelegate> * _delegate;
    NSArray * _displayItems;
    long long  _groupType;
    NSMutableDictionary * _itemsGroupedByProvider;
    unsigned long long  _itemsPerRow;
    NSArray * _paddingItems;
    <CNScheduler> * _providerItemRenderingQueue;
    NSArray * _providers;
    NSArray * _removedItems;
    NSArray * _removedPaddingItems;
    bool  _showCircleMask;
    <CNScheduler> * _workQueue;
}

@property (nonatomic, retain) NSArray *addItems;
@property (nonatomic, retain) NSArray *addedItems;
@property (nonatomic, readonly) bool allowAddItem;
@property (nonatomic, retain) NSArray *availablePaddingItems;
@property (nonatomic, readonly) <CNScheduler> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPhotoPickerProviderGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayItems;
@property (nonatomic, readonly) long long groupType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *itemsGroupedByProvider;
@property (nonatomic) unsigned long long itemsPerRow;
@property (nonatomic, retain) NSArray *paddingItems;
@property (nonatomic, readonly) <CNScheduler> *providerItemRenderingQueue;
@property (nonatomic, retain) NSArray *providers;
@property (nonatomic, retain) NSArray *removedItems;
@property (nonatomic, retain) NSArray *removedPaddingItems;
@property (nonatomic, readonly) bool showCircleMask;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNScheduler> *workQueue;

+ (id)addItemsGroupWithProviders:(id)arg1 environment:(id)arg2;
+ (id)animojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(bool)arg3;
+ (id)emojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(bool)arg3;
+ (id)injectedItemsGroupWithEnvironment:(id)arg1;
+ (id)suggestionsGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(bool)arg3;

- (void).cxx_destruct;
- (id)addItems;
- (long long)addProviderItem:(id)arg1;
- (id)addedItems;
- (bool)allowAddItem;
- (id)availablePaddingItems;
- (id)callbackQueue;
- (id)delegate;
- (id)displayItems;
- (long long)groupType;
- (bool)hasAddedProviderItems;
- (id)initWithProviders:(id)arg1 groupType:(long long)arg2 environment:(id)arg3 allowAddItem:(bool)arg4;
- (id)itemsForProviderIdentifier:(id)arg1;
- (id)itemsGroupedByProvider;
- (unsigned long long)itemsPerRow;
- (void)loadProvidersItemsForSize:(struct CGSize { double x1; double x2; })arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(bool)arg4;
- (long long)numberOfItems;
- (id)paddingItems;
- (void)prepareDisplayItems:(id)arg1;
- (id)providerItemAtIndex:(long long)arg1;
- (void)providerItemDidUpdate:(id)arg1;
- (id)providerItemRenderingQueue;
- (id)providers;
- (void)reloadDisplayItemsNotifyDelegate:(bool)arg1;
- (void)removeAllAddedProviderItems;
- (long long)removeProviderItem:(id)arg1;
- (id)removedItems;
- (id)removedPaddingItems;
- (void)setAddItems:(id)arg1;
- (void)setAddedItems:(id)arg1;
- (void)setAvailablePaddingItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayItems:(id)arg1;
- (void)setItemsGroupedByProvider:(id)arg1;
- (void)setItemsPerRow:(unsigned long long)arg1;
- (void)setPaddingItems:(id)arg1;
- (void)setProviders:(id)arg1;
- (void)setRemovedItems:(id)arg1;
- (void)setRemovedPaddingItems:(id)arg1;
- (bool)showCircleMask;
- (id)suggestionsProviderPrecedingFacesProvider;
- (id)workQueue;

@end
