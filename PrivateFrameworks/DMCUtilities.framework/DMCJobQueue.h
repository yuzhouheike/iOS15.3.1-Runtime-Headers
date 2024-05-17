/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities
 */

@interface DMCJobQueue : NSObject {
    NSObject<OS_dispatch_queue> * _executionQueue;
    id /* block */  _executionQueueAbortCompletionBlock;
    NSObject<OS_dispatch_group> * _jobGroup;
    NSObject<OS_dispatch_queue> * _jobQueue;
    unsigned int  _nextJobSequenceNumber;
    NSString * _queueID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, copy) id /* block */ executionQueueAbortCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *jobGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *jobQueue;
@property unsigned int nextJobSequenceNumber;
@property (nonatomic, retain) NSString *queueID;

- (void).cxx_destruct;
- (void)abortEnqueuedJobsCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)executionQueue;
- (id /* block */)executionQueueAbortCompletionBlock;
- (void)fromFunction:(const char *)arg1 enqueueJob:(id /* block */)arg2;
- (id)init;
- (void)jobDidFinishFromFunction:(const char *)arg1;
- (id)jobGroup;
- (id)jobQueue;
- (unsigned int)nextJobSequenceNumber;
- (id)queueID;
- (void)setExecutionQueue:(id)arg1;
- (void)setExecutionQueueAbortCompletionBlock:(id /* block */)arg1;
- (void)setJobGroup:(id)arg1;
- (void)setJobQueue:(id)arg1;
- (void)setNextJobSequenceNumber:(unsigned int)arg1;
- (void)setQueueID:(id)arg1;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id /* block */)arg1;

@end
