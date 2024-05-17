/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATIDSServiceConnectionInvitation : NSObject {
    NSUUID * _connectionIdentifier;
    unsigned long long  _messagingVersion;
    <CATCancelable> * _networkPowerAssertion;
    NSString * _senderAddress;
    NSString * _senderAppleID;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSUUID *connectionIdentifier;
@property (nonatomic, readonly) unsigned long long messagingVersion;
@property (nonatomic, readonly) <CATCancelable> *networkPowerAssertion;
@property (nonatomic, readonly, copy) NSString *senderAddress;
@property (nonatomic, readonly, copy) NSString *senderAppleID;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)connectionIdentifier;
- (id)initWithConnectionIdentifier:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 networkPowerAssertion:(id)arg4 messagingVersion:(unsigned long long)arg5 userInfo:(id)arg6;
- (id)initWithSenderAppleID:(id)arg1 senderAddress:(id)arg2 networkPowerAssertion:(id)arg3 messagingVersion:(unsigned long long)arg4 userInfo:(id)arg5;
- (unsigned long long)messagingVersion;
- (id)networkPowerAssertion;
- (id)senderAddress;
- (id)senderAppleID;
- (id)userInfo;

@end
