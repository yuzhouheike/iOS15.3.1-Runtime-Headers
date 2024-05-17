/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDScanServerDispatcher : NSObject {
    unsigned long long  _jobIdentifier;
    bool  _memoryWarningInProgress;
    NSObject<OS_dispatch_source> * _memoryWarningSource;
    NSObject<OS_dispatch_queue> * _reportQueue;
    NSObject<OS_dispatch_queue> * _scannerQueue;
    NSMutableDictionary * _scanners;
    bool  _tearDownRequested;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)cancelJob:(long long)arg1;
- (void)dealloc;
- (long long)emptyIdentifier;
- (id)init;
- (bool)reachedMaxSimultaneousTask;
- (void)recycleScanner:(id)arg1 fromList:(id)arg2 sameQueue:(bool)arg3;
- (id)reportQueue;
- (long long)scannerConf:(id)arg1 sync:(bool)arg2 shortTask:(bool)arg3 runTask:(id /* block */)arg4;
- (id)scannerListForConfiguration:(id)arg1;

@end
