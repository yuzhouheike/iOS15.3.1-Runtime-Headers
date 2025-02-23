/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy> {
    bool  _directionsFeedbackAllowed;
    bool  _evDirectionsFeedbackAllowed;
    id  _evDirectionsFeedbackAllowedListener;
    bool  _evDirectionsFeedbackAuth;
    id  _evDirectionsFeedbackAuthListener;
    geo_isolater * _evInfoIsolator;
    <GEOAnalyticsPipelineProxy> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool directionsFeedbackAllowed;
@property (nonatomic) bool evDirectionsFeedbackAllowed;
@property (nonatomic, readonly) bool evDirectionsFeedbackAuth;
@property (nonatomic, readonly) bool evalModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (void).cxx_destruct;
- (bool)AppleInternal;
- (bool)PlatformDiagAndUsage;
- (bool)PlatformDiagAndUsageOrAppleInternal;
- (void)dealloc;
- (bool)directionsFeedbackAllowed;
- (bool)evDirectionsFeedbackAllowed;
- (bool)evDirectionsFeedbackAuth;
- (bool)evalModeEnabled;
- (void)flushEvalData;
- (int)functionalAppGroup;
- (bool)getEvDirectionsFeedbackAllowed;
- (bool)getEvDirectionsFeedbackAuth;
- (id)init;
- (void)logToDiagAndUsageUnderBugId:(id)arg1 filePrefix:(id)arg2 logData:(id)arg3;
- (void)processMapsDeletionWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2;
- (void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)reportDailySettings:(id)arg1;
- (void)reportDailySettings:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4;
- (void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(id /* block */)arg5 completionQueue:(id)arg6;
- (void)reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)reportMapKitCountType:(int)arg1;
- (void)reportRRLogMessage:(id)arg1;
- (void)runAggregationTasks;
- (void)setDirectionsFeedbackAllowed:(bool)arg1;
- (void)setEvDirectionsFeedbackAllowed:(bool)arg1;
- (void)setEvalMode:(bool)arg1;
- (void)showEvalDataWithVisitorBlock:(id /* block */)arg1;
- (void)toggleEVDirectionsFeedbackAllowed;

@end
