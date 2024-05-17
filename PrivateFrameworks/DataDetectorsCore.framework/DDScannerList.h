/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDScannerList : NSObject {
    NSMutableArray * _activeScanners;
    NSString * _hash;
    NSMutableArray * _scannerCache;
    bool  _spotlightSuggestionsEnabled;
    int  _type;
    NSMutableArray * _waitQueue;
}

- (void).cxx_destruct;
- (void)activateScanner:(id)arg1;
- (unsigned long long)busyCount;
- (bool)cancelJob:(long long)arg1;
- (id)dequeueJob;
- (void)enqueueJob:(id /* block */)arg1 withIdentifier:(long long)arg2;
- (id)getCachedScanner;
- (id)initWithConfiguration:(id)arg1;
- (void)pushBackScanner:(id)arg1;
- (id)scannerCreate;
- (unsigned long long)totalCount;

@end
