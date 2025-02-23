/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPItemCollection : NSObject <FPCollectionDataSourceDelegate, FPReachabilityObserver> {
    NSPredicate * _additionalItemFilteringPredicate;
    FPAppRegistry * _appRegistry;
    _FPItemList * _currentItems;
    <FPCollectionDataSource> * _dataSource;
    <FPItemCollectionMinimalDelegate> * _delegate;
    NSMutableSet * _deletedItemsIdentifiers;
    FPItemID * _enumeratedItemID;
    NSMutableDictionary * _formerItemsIdentifiers;
    bool  _gathering;
    bool  _hasMoreUpdates;
    bool  _immutable;
    <FPItemCollectionIndexPathBasedDelegate> * _indexPathBasedDelegate;
    unsigned long long  _invalidationOnErrorCount;
    NSObject<OS_dispatch_queue> * _itemAccessQueue;
    NSPredicate * _itemFilteringPredicate;
    <FPItemCollectionItemIDBasedDelegate> * _itemIDBasedDelegate;
    unsigned long long  _lastForcedUpdate;
    NSDate * _lastInvalidationOnError;
    bool  _observing;
    NSMutableDictionary * _pendingItemsFields;
    NSMutableDictionary * _pendingItemsStitching;
    bool  _regathering;
    NSObject<OS_dispatch_source> * _restartTimer;
    bool  _shouldResort;
    bool  _shouldRetryOnceAfterCrash;
    bool  _showHiddenFiles;
    NSArray * _sortDescriptors;
    FPPacer * _updatePacer;
    NSObject<OS_dispatch_queue> * _updateQueue;
    NSMutableDictionary * _updatedItemsByIdentifiers;
    NSObject<OS_dispatch_queue> * _workingQueue;
}

@property (nonatomic, retain) NSPredicate *additionalItemFilteringPredicate;
@property (nonatomic, readonly) <FPCollectionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPItemCollectionMinimalDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) bool doc_displaysSearchResults;
@property (nonatomic, readonly) bool doc_isObserving;
@property (readonly) NSString *domainIdentifier;
@property (readonly) FPItemID *enumeratedItemID;
@property (getter=isGathering, nonatomic) bool gathering;
@property (nonatomic, readonly) bool hasMoreUpdates;
@property (readonly) unsigned long long hash;
@property (getter=isImmutable, nonatomic, readonly) bool immutable;
@property (nonatomic, retain) NSPredicate *itemFilteringPredicate;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) unsigned long long lastForcedUpdate;
@property (nonatomic) bool observing;
@property (readonly) NSString *providerIdentifier;
@property (nonatomic) bool showHiddenFiles;
@property (nonatomic, readonly) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FPPacer *updatePacer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *updateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workingQueue;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)_bouncedItem:(id)arg1 withinItems:(id)arg2;
+ (id)activeCollections;
+ (void)addActiveCollection:(id)arg1;
+ (void)consumeUpdates:(id)arg1 deletes:(id)arg2;
+ (void)initialize;
+ (bool)isEnumerationSuspended;
+ (void)refreshActiveCollectionsForDecorationChange;
+ (void)removeActiveCollection:(id)arg1;
+ (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3;
+ (void)resumeVendorEnumeration;
+ (void)suspendVendorEnumeration;

- (void).cxx_destruct;
- (bool)__isUsingDataSource:(id)arg1;
- (void)_cancelStartTime;
- (void)_didEncounterError:(id)arg1 forObservationID:(unsigned long long)arg2;
- (void)_flushPendingUpdates;
- (unsigned long long)_indexOfItem:(id)arg1;
- (unsigned long long)_indexOfItemID:(id)arg1;
- (bool)_isUsingDataSource:(id)arg1;
- (id)_itemsMutableCopy;
- (long long)_numberOfItems;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 dropForReplacedPlaceholders:(bool)arg3;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 forceFlush:(bool)arg3 dropForReplacedPlaceholders:(bool)arg4;
- (id)_reorderWithPlaceholdersLast:(id)arg1;
- (void)_replaceContentsWithVendorItems:(id)arg1;
- (void)_restartObservation;
- (void)_restartObservationWithReason:(id)arg1;
- (void)_setObserving:(bool)arg1;
- (void)_startObserving;
- (void)_startRegathering;
- (id)_t_items;
- (void)_updateObservedItem:(id)arg1;
- (id)additionalItemFilteringPredicate;
- (id)computeIndexPathsBasedDiffsWithOldItems:(id)arg1 futureItems:(id)arg2;
- (id)computeItemIDBasedDiffs;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)dataSource;
- (void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(bool)arg4;
- (void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(bool)arg3;
- (void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
- (bool)dataSourceShouldAlwaysReplaceContents:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)domainIdentifier;
- (id)enumeratedItemID;
- (void)forceRefreshOfItemWithItemID:(id)arg1;
- (bool)hasMoreUpdates;
- (id)indexPathFromIndex:(long long)arg1;
- (id)indexPathsFromIndexSet:(id)arg1;
- (id)init;
- (id)initWithPacing:(bool)arg1;
- (bool)isCollectionValidForItem:(id)arg1;
- (bool)isGathering;
- (bool)isHiddenItem:(id)arg1;
- (bool)isImmutable;
- (bool)isRegatheringAfterSignal;
- (bool)isRootItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemFilteringPredicate;
- (id)items;
- (unsigned long long)lastForcedUpdate;
- (long long)numberOfItems;
- (bool)observing;
- (id)providerIdentifier;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(bool)arg2;
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 hasMoreChanges:(bool)arg3;
- (bool)recoverFromError:(id)arg1;
- (void)reorderItemsWithSortDescriptors:(id)arg1;
- (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3;
- (void)resumeUpdates;
- (id)scopedSearchQuery;
- (void)sendIndexPathBasedDiffs:(id)arg1;
- (void)sendItemIDBasedDiffs:(id)arg1;
- (void)setAdditionalItemFilteringPredicate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGathering:(bool)arg1;
- (void)setItemFilteringPredicate:(id)arg1;
- (void)setObserving:(bool)arg1;
- (void)setShowHiddenFiles:(bool)arg1;
- (void)setWorkingQueue:(id)arg1;
- (bool)shouldRetryError:(id)arg1;
- (bool)showHiddenFiles;
- (id)sortDescriptors;
- (void)startObserving;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)stopObserving;
- (void)suspendUpdates;
- (id)updatePacer;
- (id)updateQueue;
- (void)updateRootItem:(id)arg1;
- (id)workingQueue;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (bool)doc_displaysSearchResults;
- (bool)doc_isObserving;
- (void)doc_restartObservation;
- (void)doc_setIsObserving:(bool)arg1;
- (void)doc_startObservationIfNeeded;
- (void)doc_startObserving;
- (void)doc_stopObserving;

@end
