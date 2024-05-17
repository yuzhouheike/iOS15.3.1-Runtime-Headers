/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperation : NSOperation <CKOperationCallbacks, CKThrottlingCriteria> {
    CKOperationMMCSRequestOptions * _MMCSRequestOptions;
    bool  __ckRaiseInGeneratedCallbackImplementation;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSError * _cancelError;
    CKOperationCallbackProxy * _clientOperationCallbackProxy;
    NSObject<OS_voucher> * _clientVoucher;
    bool  _clouddConnectionInterrupted;
    CKOperationConfiguration * _configuration;
    CKOperationConfiguration * _convenienceOperationConfiguration;
    CKOperationGroup * _convenienceOperationGroup;
    unsigned long long  _discretionaryWhenBackgroundedState;
    unsigned long long  _duetPreClearedMode;
    NSError * _error;
    NSObject<OS_os_transaction> * _executingTransaction;
    int  _executionState;
    bool  _failedToScheduleDiscretionaryOperation;
    CKOperationGroup * _group;
    bool  _isDiscretionarySuspended;
    bool  _isFinishingOnCallbackQueue;
    bool  _isOutstandingOperation;
    NSMutableDictionary * _lifecycleCallbacks;
    id /* block */  _longLivedOperationWasPersistedBlock;
    CKOperationMetrics * _metrics;
    NSString * _operationID;
    CKEventMetric * _operationMetric;
    NSObject<OS_os_activity> * _osActivity;
    CKPlaceholderOperation * _placeholderOperation;
    bool  _queueHasStarted;
    id /* block */  _requestCompletedBlock;
    unsigned long long  _requestOriginator;
    CKOperationConfiguration * _resolvedConfiguration;
    bool  _scheduledDiscretionaryOperation;
    bool  _startedDaemonOperation;
    bool  _startedDiscretionaryOperation;
    unsigned long long  _systemScheduler;
    NSObject<OS_dispatch_source> * _timeoutSource;
    bool  _usesBackgroundSession;
    struct _xpc_activity_eligibility_changed_handler_s { } * _xpcActivityEligibilityChangedHandler;
}

@property (nonatomic, retain) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic) bool _ckRaiseInGeneratedCallbackImplementation;
@property (nonatomic, copy) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CKOperationCallbackProxy *clientOperationCallbackProxy;
@property (nonatomic, copy) CKOperationConfiguration *configuration;
@property (nonatomic, copy) CKOperationConfiguration *convenienceOperationConfiguration;
@property (nonatomic, retain) CKOperationGroup *convenienceOperationGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKLogicalDeviceContext *deviceContext;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSString *flowControlKey;
@property (nonatomic, retain) CKOperationGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinished;
@property (nonatomic, readonly) bool isFinishingOnCallbackQueue;
@property (nonatomic) bool isOutstandingOperation;
@property (nonatomic, retain) NSMutableDictionary *lifecycleCallbacks;
@property (nonatomic, copy) id /* block */ longLivedOperationWasPersistedBlock;
@property (nonatomic, retain) CKOperationMetrics *metrics;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic, readonly) CKOperationInfo *operationInfo;
@property (nonatomic) bool preferAnonymousRequests;
@property bool queueHasStarted;
@property (nonatomic, copy) id /* block */ requestCompletedBlock;
@property (nonatomic) unsigned long long requestOriginator;
@property (nonatomic, readonly, copy) CKOperationConfiguration *resolvedConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) bool usesBackgroundSession;

+ (bool)_wireUpAssetContentForOperation:(id)arg1 inRecord:(id)arg2 checkSignatures:(bool)arg3 outError:(id*)arg4;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (id)assetInfoForOperation:(id)arg1 recordID:(id)arg2 recordKey:(id)arg3 arrayIndex:(long long)arg4;
+ (SEL)daemonCallbackCompletionSelector;
+ (Class)operationClass;
+ (id)operationDaemonCallbackProtocol;
+ (id)operationIDPrefix;
+ (Class)operationInfoClass;
+ (void)setOperationIDPrefix:(id)arg1;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)CKShortDescriptionRedact:(bool)arg1;
- (id)MMCSRequestOptions;
- (bool)_BOOLForUnitTestOverride:(id)arg1 defaultValue:(bool)arg2;
- (void)_cancelDaemonOperation;
- (bool)_ckRaiseInGeneratedCallbackImplementation;
- (id)_createPlaceholderOperation;
- (void)_finishDiscretionaryOperation;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRemoteProxyFailureWithError:(id)arg1;
- (id)activityCreate;
- (void)addUnitTestOverrides:(id)arg1;
- (id)additionalRequestHTTPHeaders;
- (bool)allowsCellularAccess;
- (id)applicationBundleIdentifierForContainerAccess;
- (void)applyConvenienceConfiguration:(id)arg1;
- (id)callbackQueue;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (void)cancelWithUnderlyingError:(id)arg1;
- (void)cancelWithUnderlyingError:(id)arg1 message:(id)arg2;
- (id)ckShortDescription;
- (id)clientOperationCallbackProxy;
- (id)configuration;
- (id)container;
- (id)containerID;
- (id)convenienceOperationConfiguration;
- (id)convenienceOperationGroup;
- (void)dealloc;
- (id)description;
- (id)deviceContext;
- (id)error;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)flowControlKey;
- (id)group;
- (void)handleDaemonOperationWillStartWithClassName:(id)arg1 isTopLevelDaemonOperation:(bool)arg2 replyBlock:(id /* block */)arg3;
- (void)handleDiscretionaryOperationShouldStart:(bool)arg1 nonDiscretionary:(bool)arg2 error:(id)arg3;
- (void)handleDiscretionaryOperationShouldSuspend;
- (void)handleLongLivedOperationDidPersist;
- (void)handleOperationDidCompleteWithMetrics:(id)arg1 error:(id)arg2;
- (void)handleRequestDidComplete:(id)arg1;
- (void)handleSystemDidImposeInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isFinishingOnCallbackQueue;
- (bool)isLongLived;
- (bool)isOutstandingOperation;
- (id)lifecycleCallbacks;
- (id /* block */)longLivedOperationWasPersistedBlock;
- (void)main;
- (id)metrics;
- (id)operationGroupName;
- (id)operationID;
- (id)operationInfo;
- (void)performCKOperation;
- (bool)preferAnonymousRequests;
- (long long)qualityOfService;
- (bool)queueHasStarted;
- (id /* block */)requestCompletedBlock;
- (unsigned long long)requestOriginator;
- (id)resolvedConfiguration;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setConvenienceOperationConfiguration:(id)arg1;
- (void)setConvenienceOperationGroup:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setIsOutstandingOperation:(bool)arg1;
- (void)setLifecycleCallbacks:(id)arg1;
- (void)setLongLived:(bool)arg1;
- (void)setLongLivedOperationWasPersistedBlock:(id /* block */)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setPreferAnonymousRequests:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setQueueHasStarted:(bool)arg1;
- (void)setRequestCompletedBlock:(id /* block */)arg1;
- (void)setRequestOriginator:(unsigned long long)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setUsesBackgroundSession:(bool)arg1;
- (void)set_ckRaiseInGeneratedCallbackImplementation:(bool)arg1;
- (void)start;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (bool)transitionToExecuting;
- (bool)transitionToFinished;
- (id)unitTestOverrides;
- (bool)usesBackgroundSession;
- (void)withContainerScopedDaemon:(id /* block */)arg1;

@end
