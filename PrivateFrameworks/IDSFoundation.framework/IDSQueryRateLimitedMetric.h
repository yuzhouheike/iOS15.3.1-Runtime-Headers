/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSQueryRateLimitedMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _count;
    NSNumber * _timeSinceStart;
    NSString * _topLevelService;
}

@property (nonatomic, readonly) NSNumber *count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *timeSinceStart;
@property (nonatomic, readonly) NSString *topLevelService;

- (void).cxx_destruct;
- (id)count;
- (id)dictionaryRepresentation;
- (id)initWithTopLevelService:(id)arg1 count:(id)arg2 timeSinceStart:(id)arg3;
- (id)name;
- (id)timeSinceStart;
- (id)topLevelService;

@end
