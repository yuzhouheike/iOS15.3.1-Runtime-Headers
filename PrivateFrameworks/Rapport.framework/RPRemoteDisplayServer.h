/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPRemoteDisplayServer : NSObject <NSSecureCoding, RPAuthenticatable> {
    bool  _activateCalled;
    NSArray * _allowedMACAddresses;
    id /* block */  _authCompletionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _hidePasswordHandler;
    unsigned int  _internalAuthFlags;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSArray * _pairSetupACL;
    unsigned int  _pairSetupFlags;
    unsigned int  _pairVerifyFlags;
    NSString * _password;
    int  _passwordType;
    int  _passwordTypeActual;
    id /* block */  _promptForPasswordHandler;
    id /* block */  _sessionEndedHandler;
    id /* block */  _sessionStartHandler;
    NSMutableDictionary * _sessions;
    id /* block */  _showPasswordHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSArray *allowedMACAddresses;
@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ hidePasswordHandler;
@property (nonatomic, readonly) unsigned int internalAuthFlags;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic, copy) id /* block */ sessionEndedHandler;
@property (nonatomic, copy) id /* block */ sessionStartHandler;
@property (nonatomic, copy) id /* block */ showPasswordHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)allowedMACAddresses;
- (id /* block */)authCompletionHandler;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)hidePasswordHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)internalAuthFlags;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)pairSetupACL;
- (unsigned int)pairSetupFlags;
- (unsigned int)pairVerifyFlags;
- (id)password;
- (int)passwordType;
- (int)passwordTypeActual;
- (id /* block */)promptForPasswordHandler;
- (void)remoteDisplayHidePasswordWithFlags:(unsigned int)arg1;
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4 sessionID:(id)arg5;
- (void)remoteDisplaySessionEndedWithID:(id)arg1;
- (void)remoteDisplayShowPassword:(id)arg1 flags:(unsigned int)arg2;
- (void)remoteDisplayStartServerSessionID:(id)arg1 device:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)sessionEndedHandler;
- (id /* block */)sessionStartHandler;
- (void)setAllowedMACAddresses:(id)arg1;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHidePasswordHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPairSetupACL:(id)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setSessionEndedHandler:(id /* block */)arg1;
- (void)setSessionStartHandler:(id /* block */)arg1;
- (void)setShowPasswordHandler:(id /* block */)arg1;
- (id /* block */)showPasswordHandler;
- (void)tryPassword:(id)arg1;

@end
