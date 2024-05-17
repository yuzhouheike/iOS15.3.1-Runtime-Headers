/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    NSDictionary * _estimatorResults;
    NSString * _portType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *estimatorResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *portType;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)estimatorResults;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (id)portType;
- (void)reset;
- (void)setEstimatorResults:(id)arg1;
- (void)setPortType:(id)arg1;

@end
