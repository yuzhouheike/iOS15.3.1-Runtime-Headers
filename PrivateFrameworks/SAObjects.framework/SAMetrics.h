/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *eventInformation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalCommandId;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *speechId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *timings;

+ (id)metrics;
+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;

- (id)_descriptionHint;
- (id)assistantId;
- (id)category;
- (id)encodedClassName;
- (id)eventInformation;
- (id)groupIdentifier;
- (id)originalCommandId;
- (bool)requiresResponse;
- (void)setAssistantId:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEventInformation:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (void)setTimings:(id)arg1;
- (id)speechId;
- (id)timings;

@end
