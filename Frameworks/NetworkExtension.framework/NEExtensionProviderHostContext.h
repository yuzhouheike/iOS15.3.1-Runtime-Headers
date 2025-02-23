/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderHostProtocol, NEExtensionProviderProtocol> {
    <NEExtensionProviderHostDelegate> * _delegate;
    NSString * _description;
    NEProcessIdentity * _extensionProcessIdentity;
    bool  _isHostingSystemExtension;
    NEUserNotification * _notification;
    bool  _stopped;
    NSXPCConnection * _vendorConnection;
    <NEExtensionProviderProtocol> * _vendorContext;
}

@property (readonly, copy) NSString *debugDescription;
@property <NEExtensionProviderHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NEProcessIdentity *extensionProcessIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHostingSystemExtension;
@property (readonly) int requiredEntitlement;
@property (nonatomic) bool stopped;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *vendorConnection;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)copyValueForEntitlement:(id)arg1;
- (void)createWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (bool)deriveProcessIdentity;
- (id)description;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispose;
- (id)extensionProcessIdentity;
- (id)initWithVendorEndpoint:(id)arg1 processIdentity:(id)arg2 delegate:(id)arg3;
- (bool)isHostingSystemExtension;
- (bool)isSignedWithDeveloperID;
- (int)requiredEntitlement;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setExtensionProcessIdentity:(id)arg1;
- (void)setStopped:(bool)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startedWithError:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (bool)stopped;
- (void)validateWithCompletionHandler:(id /* block */)arg1;
- (id)vendorConnection;
- (id)vendorContext;
- (void)wake;

@end
