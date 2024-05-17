/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputDeviceAuthorizedPeer : NSObject {
    AVOutputDeviceAuthorizedPeerInternal * _ivars;
}

@property (nonatomic, readonly) bool hasAdministratorPrivileges;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic, readonly) NSData *publicKey;

- (void)dealloc;
- (bool)hasAdministratorPrivileges;
- (unsigned long long)hash;
- (id)init;
- (id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)peerID;
- (id)publicKey;

@end
