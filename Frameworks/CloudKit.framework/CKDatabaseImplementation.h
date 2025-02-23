/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseImplementation : NSObject {
    CKContainerImplementation * _containerImplementation;
    NSOperationQueue * _operationQueue;
    long long  _scope;
    NSObject<OS_dispatch_queue> * _underlyingDispatchQueue;
}

@property (nonatomic) CKContainerImplementation *containerImplementation;
@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) long long scope;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (id)_initWithContainerImplementation:(id)arg1 scope:(long long)arg2;
- (void)_scheduleConvenienceOperation:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3;
- (void)addOperation:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3;
- (void)clearAssetCache;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearCacheEntriesForZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)clearRecordCache;
- (id)containerImplementation;
- (unsigned long long)countAssetCacheItems;
- (long long)databaseScope;
- (void)deleteRecordWithID:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteRecordZoneWithID:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteSubscriptionWithID:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)description;
- (void)fetchAllRecordZonesWithWrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchAllSubscriptionsWithWrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPCSFromCacheForZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordWithID:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchRecordZoneWithID:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchSubscriptionWithID:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)arg1;
- (id)operationQueue;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 wrappingDatabase:(id)arg3 convenienceConfiguration:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)saveRecord:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)saveRecordZone:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)saveSubscription:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)scope;
- (void)setContainerImplementation:(id)arg1;
- (void)setUnderlyingDispatchQueue:(id)arg1;
- (void)showAssetCache;
- (id)underlyingDispatchQueue;

@end
