/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDHomeControlsDataCollectionTask : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSDate * _collectionDate;
    unsigned long long  _daysPerBatch;
    bool  _deleteSessionOnCleanup;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    unsigned long long  _maxBatches;
    double  _samplingRate;
    bool  _selectedForDataCollection;
    _CDHomeControlsDataCollectionSession * _session;
    NSString * _sessionPath;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;

- (void).cxx_destruct;
- (id)activity;
- (void)execute;
- (id)initWithStorage:(id)arg1 activity:(id)arg2;

@end
