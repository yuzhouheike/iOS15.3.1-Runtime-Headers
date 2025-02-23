/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSyncEngineFetchChangesOperation : NSOperation {
    CKDatabase * _database;
    id /* block */  _databaseChangeTokenUpdatedBlock;
    NSError * _error;
    int  _executionState;
    id /* block */  _fetchChangesCompletionBlock;
    id /* block */  _fetchDatabaseChangesCompletionBlock;
    CKOperationGroup * _group;
    NSOperationQueue * _operationQueue;
    CKServerChangeToken * _previousDatabaseServerChangeToken;
    id /* block */  _recordWasChangedBlock;
    id /* block */  _recordWithIDWasDeletedBlock;
    id /* block */  _recordZoneChangeTokensUpdatedBlock;
    id /* block */  _recordZoneChangesConfigurationBlock;
    id /* block */  _recordZoneFetchCompletionBlock;
    id /* block */  _recordZoneWithIDChangedBlock;
    id /* block */  _recordZoneWithIDWasDeletedBlock;
    id /* block */  _recordZoneWithIDWasPurgedBlock;
    bool  _shouldFetchDatabaseChanges;
    id /* block */  _willEnqueueOperationBlock;
    NSSet * _zoneIDs;
}

@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, copy) id /* block */ databaseChangeTokenUpdatedBlock;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) id /* block */ fetchChangesCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (nonatomic, retain) CKOperationGroup *group;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, copy) CKServerChangeToken *previousDatabaseServerChangeToken;
@property (nonatomic, copy) id /* block */ recordWasChangedBlock;
@property (nonatomic, copy) id /* block */ recordWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (nonatomic, copy) id /* block */ recordZoneChangesConfigurationBlock;
@property (nonatomic, copy) id /* block */ recordZoneFetchCompletionBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDChangedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (nonatomic) bool shouldFetchDatabaseChanges;
@property (nonatomic, copy) id /* block */ willEnqueueOperationBlock;
@property (nonatomic, retain) NSSet *zoneIDs;

+ (unsigned long long)maxZonesPerOperation;
+ (void)setMaxZonesPerOperation:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)cancelledError;
- (id)database;
- (id /* block */)databaseChangeTokenUpdatedBlock;
- (id)error;
- (id /* block */)fetchChangesCompletionBlock;
- (id /* block */)fetchDatabaseChangesCompletionBlock;
- (void)fetchDatabaseChangesThenRecordZoneChanges;
- (void)fetchRecordZoneChanges;
- (void)finishWithError:(id)arg1;
- (id)group;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)operationQueue;
- (id)previousDatabaseServerChangeToken;
- (id /* block */)recordWasChangedBlock;
- (id /* block */)recordWithIDWasDeletedBlock;
- (id /* block */)recordZoneChangeTokensUpdatedBlock;
- (id /* block */)recordZoneChangesConfigurationBlock;
- (id /* block */)recordZoneFetchCompletionBlock;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (id /* block */)recordZoneWithIDWasPurgedBlock;
- (void)setDatabaseChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setFetchChangesCompletionBlock:(id /* block */)arg1;
- (void)setFetchDatabaseChangesCompletionBlock:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPreviousDatabaseServerChangeToken:(id)arg1;
- (void)setRecordWasChangedBlock:(id /* block */)arg1;
- (void)setRecordWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneChangeTokensUpdatedBlock:(id /* block */)arg1;
- (void)setRecordZoneChangesConfigurationBlock:(id /* block */)arg1;
- (void)setRecordZoneFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasPurgedBlock:(id /* block */)arg1;
- (void)setShouldFetchDatabaseChanges:(bool)arg1;
- (void)setWillEnqueueOperationBlock:(id /* block */)arg1;
- (void)setZoneIDs:(id)arg1;
- (bool)shouldFetchDatabaseChanges;
- (void)start;
- (void)transitionToExecuting;
- (void)transitionToFinished;
- (id /* block */)willEnqueueOperationBlock;
- (id)zoneIDs;

@end
