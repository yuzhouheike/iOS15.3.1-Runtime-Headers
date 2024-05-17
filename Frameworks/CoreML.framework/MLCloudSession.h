/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLCloudSession : NSObject {
    CKContainer * _container;
    NSString * _serviceName;
    NSString * _teamIdentifier;
}

@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)container;
- (id)fetchKeyResponseFromServerForKeyID:(id)arg1 signedKeyRequest:(id)arg2 error:(id*)arg3;
- (id)initWithTeamIdentifier:(id)arg1;
- (id)serviceName;
- (void)setContainer:(id)arg1;
- (void)setServiceName:(id)arg1;
- (id)teamIdentifier;

@end
