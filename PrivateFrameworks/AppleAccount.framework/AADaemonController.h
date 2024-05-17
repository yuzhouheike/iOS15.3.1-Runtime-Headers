/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADaemonController : NSObject <AADaemonProtocol, AAFXPCSessionDelegate> {
    AAFXPCSession * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAFXPCSession *remoteService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureRemoteInterface:(id)arg1;
- (void)handleAppleAccountDeleteForAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)remoteService;
- (void)setRemoteService:(id)arg1;

@end
