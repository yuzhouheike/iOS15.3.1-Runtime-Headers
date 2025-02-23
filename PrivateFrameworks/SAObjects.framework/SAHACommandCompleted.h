/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *actionResults;
@property (nonatomic, copy) NSString *clientValidity;
@property (nonatomic, copy) NSString *commandOutcome;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *homeIdentifier;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *serverValidity;
@property (readonly) Class superclass;

+ (id)commandCompleted;
+ (id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionResults;
- (id)clientValidity;
- (id)commandOutcome;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)homeIdentifier;
- (bool)requiresResponse;
- (id)serverValidity;
- (void)setActionResults:(id)arg1;
- (void)setClientValidity:(id)arg1;
- (void)setCommandOutcome:(id)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setServerValidity:(id)arg1;

@end
