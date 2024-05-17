/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAAction : SADomainObject

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSString *attribute;
@property (nonatomic, copy) NSArray *executionFlags;
@property (nonatomic) long long executionOrder;
@property (nonatomic) bool includeCompleteInformation;
@property (nonatomic, retain) SAHAAttributeValue *value;

+ (id)action;
+ (id)actionWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionType;
- (id)attribute;
- (id)encodedClassName;
- (id)executionFlags;
- (long long)executionOrder;
- (id)groupIdentifier;
- (bool)includeCompleteInformation;
- (void)setActionType:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setExecutionFlags:(id)arg1;
- (void)setExecutionOrder:(long long)arg1;
- (void)setIncludeCompleteInformation:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
