/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPMoveOperation : FPActionOperation <FPDaemonActionOperationClient> {
    NSMutableDictionary * _URLByResolvedFPItem;
    FPItem * __destinationFolder;
    NSURL * __destinationURL;
    unsigned long long  __lastUsedDatePolicy;
    NSArray * __sourceItems;
    NSArray * __sourceURLs;
    id /* block */  __t_patchActionOperationInfo;
    id /* block */  __t_remoteOperationWasScheduled;
    id /* block */  __t_rootCompleted;
    NSDictionary * __targetFilenamesByItem;
    NSDictionary * __targetFilenamesByURL;
    NSMutableDictionary * _createdItemsByRoot;
    NSMutableSet * _createdOrFailedRoots;
    NSDictionary * _errorsByItem;
    NSMutableDictionary * _filenamesByURL;
    FPMoveInfo * _info;
    bool  _isScheduledFromThisClient;
    NSMutableDictionary * _placeholderIDsByRoot;
    NSMutableDictionary * _progressByRoot;
    FPProgressManager * _progressManager;
    NSString * _providerIdentifier;
    <NSXPCProxyCreating><FPDaemonActionOperation> * _remoteMoveOperation;
    bool  _shouldBounceOnCollision;
    NSDictionary * _transferLocations;
    NSDictionary * _transferResults;
}

@property (nonatomic, copy) id /* block */ _t_patchActionOperationInfo;
@property (nonatomic, copy) id /* block */ _t_remoteOperationWasScheduled;
@property (nonatomic, copy) id /* block */ _t_rootCompleted;
@property (nonatomic, readonly) bool byCopy;
@property (nonatomic, readonly) NSDictionary *errorsByItem;
@property (nonatomic, readonly) NSMutableDictionary *filenamesByURL;
@property (nonatomic) unsigned long long lastUsageUpdatePolicy;
@property (nonatomic, copy) NSDictionary *progressByRoot;
@property (nonatomic) bool shouldBounceOnCollision;
@property (nonatomic, copy) NSDictionary *targetFilenamesByItem;
@property (nonatomic, copy) NSDictionary *targetFilenamesByURL;
@property (nonatomic, readonly) NSDictionary *transferLocations;
@property (nonatomic, readonly) NSDictionary *transferResults;

- (void).cxx_destruct;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (bool)_hasAccessToURL:(id)arg1 readonly:(bool)arg2;
- (bool)_preflightCheckNotMovingIntoSelfWithError:(id*)arg1;
- (bool)_preflightCheckProviderCanMoveWithErrors:(id*)arg1;
- (void)_preflightForceBounceIfCopyingOntoSelf;
- (void)_presendNotifications;
- (void)_recomputeMoveInfoIfNecessary;
- (void)_recoverFromCollisionError:(id)arg1 withPolicy:(unsigned long long)arg2;
- (void)_resolveURLsWithCompletionHandler:(id /* block */)arg1;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)_scheduleAgainAfterErrorRecovery;
- (id /* block */)_t_patchActionOperationInfo;
- (id /* block */)_t_remoteOperationWasScheduled;
- (id /* block */)_t_rootCompleted;
- (void)_t_unblockReader;
- (void)actionMain;
- (bool)byCopy;
- (void)cancel;
- (void)checkNonEmptyPackage;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (unsigned long long)defaultLastUsedDatePolicy;
- (id)errorsByItem;
- (id)filenamesByURL;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithItems:(id)arg1 destinationURL:(id)arg2;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;
- (id)initWithSourceItems:(id)arg1 orSourceURLs:(id)arg2 destinationFolder:(id)arg3 orDestinationURL:(id)arg4;
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithURLs:(id)arg1 destinationFolder:(id)arg2;
- (unsigned long long)lastUsageUpdatePolicy;
- (id)operationDescription;
- (void)presendNotifications;
- (id)progressByRoot;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationProgressesAreReady;
- (void)runUserInteractionsPreflight:(id /* block */)arg1;
- (void)setLastUsageUpdatePolicy:(unsigned long long)arg1;
- (void)setProgressByRoot:(id)arg1;
- (void)setShouldBounceOnCollision:(bool)arg1;
- (void)setTargetFilenamesByItem:(id)arg1;
- (void)setTargetFilenamesByURL:(id)arg1;
- (void)set_t_patchActionOperationInfo:(id /* block */)arg1;
- (void)set_t_remoteOperationWasScheduled:(id /* block */)arg1;
- (void)set_t_rootCompleted:(id /* block */)arg1;
- (bool)shouldBounceOnCollision;
- (void)subclassPreflightWithCompletion:(id /* block */)arg1;
- (id)targetFilenamesByItem;
- (id)targetFilenamesByURL;
- (id)transferLocations;
- (id)transferResults;

@end
