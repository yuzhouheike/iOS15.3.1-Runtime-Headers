/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CARPFoundation.framework/CARPFoundation
 */

@interface CARPFMessageFilter : CARPFObject <CARPFLogging, CARPFObject> {
    CARPFMessage * _message;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) CARPFMessage *message;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;

+ (bool)canInitWithMessage:(id)arg1;
+ (id)logCategory;
+ (id)policyClasses;

- (void).cxx_destruct;
- (bool)acceptWithPolicies:(id)arg1 error:(id*)arg2;
- (id)attributeDescriptions;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)logIdentifier;
- (id)message;

@end
