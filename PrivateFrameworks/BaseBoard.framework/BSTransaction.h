/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSTransaction : NSObject <BSWatchdogProviding> {
    bool  _aborted;
    BSAuditHistory * _auditHistory;
    bool  _auditHistoryEnabled;
    NSObject<OS_os_log> * _auditHistoryLog;
    NSMutableArray * _blockObservers;
    bool  _cachedDefaultBasedAuditHistoryEnabled;
    NSString * _cachedDescriptionProem;
    NSMutableArray * _childTransactionRelationships;
    id /* block */  _completionBlock;
    NSMutableSet * _debugLogCategories;
    bool  _debugLoggingEnabled;
    bool  _disableDebugLogCheckForUnitTesting;
    NSError * _error;
    bool  _failed;
    bool  _inSubclassBegin;
    bool  _interrupted;
    NSMutableSet * _lifeAssertions;
    NSMutableSet * _milestones;
    NSMutableDictionary * _milestonesToHandlers;
    NSHashTable * _observers;
    NSMutableArray * _parentTransactionRelationships;
    NSDate * _startTime;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSArray *allErrors;
@property (getter=isAuditHistoryEnabled, nonatomic) bool auditHistoryEnabled;
@property (nonatomic, readonly) NSArray *childTransactions;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (getter=isFailed, nonatomic, readonly) bool failed;
@property (getter=isFinishedWorking, nonatomic, readonly) bool finishedWorking;
@property (readonly) unsigned long long hash;
@property (getter=isInterrupted, nonatomic, readonly) bool interrupted;
@property (getter=isInterruptible, nonatomic, readonly) bool interruptible;
@property (nonatomic, readonly) NSSet *milestones;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (getter=hasStarted, nonatomic, readonly) bool started;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAuditHistoryItem:(id)arg1;
- (void)_addDebugLogCategory:(id)arg1;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_childTransactionDidFinishWork:(id)arg1;
- (id)_customizedDescriptionProperties;
- (id)_debugLogCategories;
- (bool)_debugLoggingEnabled;
- (id)_descriptionProem;
- (void)_didAddChildTransaction:(id)arg1;
- (void)_didBegin;
- (void)_didComplete;
- (void)_didFinishWork;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_didSatisfyMilestone:(id)arg1;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (void)_evaluateCompletion;
- (void)_failForTimeoutWithDescription:(id)arg1;
- (void)_failWithReason:(id)arg1 description:(id)arg2;
- (void)_failWithReason:(id)arg1 description:(id)arg2 precipitatingError:(id)arg3;
- (id)_graphNodeDebugName;
- (bool)_isRootTransaction;
- (id)_loggingProem;
- (void)_removeDebugLogCategory:(id)arg1;
- (bool)_revertWithReason:(id)arg1;
- (bool)_shouldComplete;
- (bool)_shouldFailForChildTransaction:(id)arg1;
- (id)_stringForMilestones:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_willBegin;
- (void)_willComplete;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_willRemoveChildTransaction:(id)arg1;
- (void)addChildTransaction:(id)arg1;
- (void)addChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2;
- (void)addMilestone:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allErrors;
- (void)begin;
- (id)childTransactions;
- (id)childTransactionsOfClass:(Class)arg1;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)error;
- (void)evaluateMilestone:(id)arg1 withEvaluator:(id /* block */)arg2;
- (void)failWithReason:(id)arg1;
- (bool)hasChildTransactionsOfClass:(Class)arg1;
- (bool)hasStarted;
- (id)init;
- (void)interrupt;
- (void)interruptWithReason:(id)arg1;
- (bool)isAuditHistoryEnabled;
- (bool)isComplete;
- (bool)isFailed;
- (bool)isFinishedWorking;
- (bool)isInterruptable;
- (bool)isInterrupted;
- (bool)isInterruptible;
- (bool)isRunning;
- (bool)isWaitingForMilestone:(id)arg1;
- (void)listenForSatisfiedMilestone:(id)arg1 withBlock:(id /* block */)arg2;
- (id)milestones;
- (id)queue;
- (void)registerBlockObserver:(id /* block */)arg1;
- (void)removeAllChildTransactions;
- (void)removeAllChildTransactionsOfClass:(Class)arg1;
- (void)removeAllMilestones;
- (void)removeChildTransaction:(id)arg1;
- (bool)removeMilestone:(id)arg1;
- (bool)removeMilestones:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)satisfyMilestone:(id)arg1;
- (void)setAuditHistoryEnabled:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (bool)shouldWatchdog:(id*)arg1;
- (double)watchdogTimeout;

@end
