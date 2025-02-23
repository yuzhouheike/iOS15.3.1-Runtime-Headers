/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSyncEngineModifyRecordBatchesOperation : NSOperation {
    id /* block */  _batchCompletionBlock;
    CKDatabase * _database;
    NSError * _error;
    int  _executionState;
    CKOperationGroup * _group;
    id /* block */  _modifyRecordBatchesCompletionBlock;
    NSOperationQueue * _operationQueue;
    id /* block */  _perRecordDeleteBlock;
    id /* block */  _perRecordProgressBlock;
    id /* block */  _perRecordSaveBlock;
    id /* block */  _populateNextBatchBlock;
    id /* block */  _willEnqueueOperationBlock;
    NSSet * _zoneIDs;
}

@property (nonatomic, copy) id /* block */ batchCompletionBlock;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) CKOperationGroup *group;
@property (nonatomic, copy) id /* block */ modifyRecordBatchesCompletionBlock;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, copy) id /* block */ perRecordDeleteBlock;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock;
@property (nonatomic, copy) id /* block */ perRecordSaveBlock;
@property (nonatomic, copy) id /* block */ populateNextBatchBlock;
@property (nonatomic, copy) id /* block */ willEnqueueOperationBlock;
@property (nonatomic, retain) NSSet *zoneIDs;

- (void).cxx_destruct;
- (void)addNextModifyOperationOrFinishIfNoRemainingWork;
- (id /* block */)batchCompletionBlock;
- (void)cancel;
- (id)cancelledError;
- (id)database;
- (id)error;
- (void)finishWithError:(id)arg1;
- (id)group;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id /* block */)modifyRecordBatchesCompletionBlock;
- (id)operationQueue;
- (id)operationToModifyBatch:(id)arg1;
- (id /* block */)perRecordDeleteBlock;
- (id /* block */)perRecordProgressBlock;
- (id /* block */)perRecordSaveBlock;
- (id /* block */)populateNextBatchBlock;
- (void)setBatchCompletionBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setModifyRecordBatchesCompletionBlock:(id /* block */)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPerRecordDeleteBlock:(id /* block */)arg1;
- (void)setPerRecordProgressBlock:(id /* block */)arg1;
- (void)setPerRecordSaveBlock:(id /* block */)arg1;
- (void)setPopulateNextBatchBlock:(id /* block */)arg1;
- (void)setWillEnqueueOperationBlock:(id /* block */)arg1;
- (void)setZoneIDs:(id)arg1;
- (void)start;
- (void)transitionToExecuting;
- (void)transitionToFinished;
- (id /* block */)willEnqueueOperationBlock;
- (id)zoneIDs;

@end
