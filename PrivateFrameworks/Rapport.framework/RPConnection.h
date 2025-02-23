/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPConnection : NSObject <RPAuthenticatable> {
    bool  _activateCalled;
    NSArray * _allowedMACAddresses;
    NSString * _appID;
    NSDictionary * _appInfoPeer;
    NSDictionary * _appInfoSelf;
    id /* block */  _authCompletionHandler;
    long long  _bleClientUseCase;
    CUBLEConnection * _bleConnection;
    NSUUID * _blePeerIdentifier;
    CUBonjourDevice * _bonjourPeerDevice;
    CUBluetoothScalablePipe * _btPipe;
    CUBluetoothScalablePipe * _btPipeHighPriority;
    id  _client;
    bool  _clientMode;
    unsigned long long  _controlFlags;
    NSString * _destinationString;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    bool  _flowControlReadEnabled;
    id /* block */  _flowControlWriteChangedHandler;
    RPIdentity * _forcedPeerIdentity;
    RPIdentity * _forcedSelfIdentity;
    id /* block */  _hidePasswordHandler;
    unsigned long long  _highPriorityAuthTagLength;
    CUPairingStream * _highPriorityStream;
    NSString * _homeKitIdentityIdentifier;
    NSData * _homeKitIdentitySignature;
    CUHomeKitManager * _homeKitManager;
    id /* block */  _homeKitUserIdentifierHandler;
    NSString * _identifierOverride;
    RPIdentityDaemon * _identityDaemon;
    RPIdentity * _identityResolved;
    RPIdentity * _identityVerified;
    NSObject<OS_dispatch_source> * _idleTimer;
    int  _internalState;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    bool  _invalidationHandled;
    id /* block */  _invalidationHandler;
    int  _keepAliveSeconds;
    NSString * _label;
    int  _linkType;
    RPCompanionLinkDevice * _localDeviceInfo;
    unsigned long long  _mainAuthTagLength;
    CUPairingStream * _mainStream;
    CUNetLinkManager * _netLinkManager;
    NSArray * _pairSetupACL;
    int  _pairSetupAuthType;
    unsigned int  _pairSetupFlags;
    CUPairingSession * _pairSetupSession;
    int  _pairVerifyAuthType;
    bool  _pairVerifyCompleted;
    id /* block */  _pairVerifyCompletion;
    bool  _pairVerifyFailed;
    unsigned int  _pairVerifyFlags;
    int  _pairVerifyIdentityType;
    CUPairingSession * _pairVerifySession;
    bool  _pairVerifyUsedIdentity;
    NSString * _password;
    int  _passwordType;
    int  _passwordTypeActual;
    NSString * _peerAddrString;
    RPCompanionLinkDevice * _peerDeviceInfo;
    NSString * _peerIdentifier;
    id /* block */  _peerUpdatedHandler;
    bool  _preAuthEnabled;
    int  _preferredIdentityType;
    bool  _present;
    NSObject<OS_dispatch_source> * _probeTimer;
    id /* block */  _promptForPasswordHandler;
    id /* block */  _proxyDeviceUpdateHandler;
    NSMutableArray * _proxyDevices;
    NSData * _pskData;
    id /* block */  _readErrorHandler;
    struct { 
        struct { 
            unsigned char frameType; 
            unsigned char frameLen[3]; 
        } header; 
        bool receivingHeader; 
        bool readRequested; 
    }  _readFrame;
    struct { 
        struct { 
            unsigned char frameType; 
            unsigned char frameLen[3]; 
        } header; 
        bool receivingHeader; 
        bool readRequested; 
    }  _readFrameBTPipeHighPriority;
    id /* block */  _receivedEventHandler;
    unsigned long long  _receivedFrameCountCurrent;
    unsigned long long  _receivedFrameCountLast;
    id /* block */  _receivedRequestHandler;
    <CUReadWriteRequestable> * _requestable;
    NSMutableDictionary * _requests;
    int  _retryCount;
    bool  _retryFired;
    unsigned long long  _retryTicks;
    NSObject<OS_dispatch_source> * _retryTimer;
    NSString * _selfAddrString;
    NSMutableArray * _sendArray;
    id /* block */  _sessionStartHandler;
    bool  _showPasswordCalled;
    id /* block */  _showPasswordHandler;
    NSObject<OS_dispatch_source> * _startTimer;
    int  _state;
    id /* block */  _stateChangedHandler;
    unsigned long long  _statusFlags;
    bool  _stepDone;
    NSError * _stepError;
    CUTCPConnection * _tcpConnection;
    unsigned int  _trafficFlags;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    unsigned int  _xidLast;
}

@property (nonatomic, retain) NSArray *allowedMACAddresses;
@property (nonatomic, copy) NSString *appID;
@property (nonatomic, readonly, copy) NSDictionary *appInfoPeer;
@property (nonatomic, copy) NSDictionary *appInfoSelf;
@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic) long long bleClientUseCase;
@property (nonatomic, retain) CUBLEConnection *bleConnection;
@property (nonatomic, copy) NSUUID *blePeerIdentifier;
@property (nonatomic, retain) CUBonjourDevice *bonjourPeerDevice;
@property (nonatomic, retain) CUBluetoothScalablePipe *btPipe;
@property (nonatomic, retain) CUBluetoothScalablePipe *btPipeHighPriority;
@property (nonatomic, retain) id client;
@property (nonatomic) bool clientMode;
@property (nonatomic) unsigned long long controlFlags;
@property (nonatomic, copy) NSString *destinationString;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool flowControlReadEnabled;
@property (nonatomic, copy) id /* block */ flowControlWriteChangedHandler;
@property (nonatomic, readonly) int flowControlWriteState;
@property (nonatomic, retain) RPIdentity *forcedPeerIdentity;
@property (nonatomic, retain) RPIdentity *forcedSelfIdentity;
@property (nonatomic, copy) id /* block */ hidePasswordHandler;
@property (nonatomic, retain) CUHomeKitManager *homeKitManager;
@property (nonatomic, copy) id /* block */ homeKitUserIdentifierHandler;
@property (nonatomic, copy) NSString *identifierOverride;
@property (nonatomic, retain) RPIdentityDaemon *identityDaemon;
@property (nonatomic, retain) RPIdentity *identityResolved;
@property (nonatomic, readonly) RPIdentity *identityVerified;
@property (nonatomic) bool invalidationHandled;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) int keepAliveSeconds;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) int linkType;
@property (nonatomic, retain) RPCompanionLinkDevice *localDeviceInfo;
@property (nonatomic, retain) CUNetLinkManager *netLinkManager;
@property (nonatomic, retain) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic, copy) id /* block */ pairVerifyCompletion;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (nonatomic, readonly) NSString *peerAddrString;
@property (nonatomic, readonly) RPCompanionLinkDevice *peerDeviceInfo;
@property (nonatomic, copy) NSString *peerIdentifier;
@property (nonatomic, copy) id /* block */ peerUpdatedHandler;
@property (nonatomic) bool preAuthEnabled;
@property (nonatomic) int preferredIdentityType;
@property (nonatomic) bool present;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic, copy) id /* block */ proxyDeviceUpdateHandler;
@property (nonatomic, retain) NSMutableArray *proxyDevices;
@property (nonatomic, copy) NSData *pskData;
@property (nonatomic, copy) id /* block */ readErrorHandler;
@property (nonatomic, copy) id /* block */ receivedEventHandler;
@property (nonatomic, copy) id /* block */ receivedRequestHandler;
@property (nonatomic, copy) id /* block */ sessionStartHandler;
@property (nonatomic, copy) id /* block */ showPasswordHandler;
@property (nonatomic) int state;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (nonatomic, readonly) unsigned long long statusFlags;
@property (nonatomic, retain) CUTCPConnection *tcpConnection;
@property (nonatomic) unsigned int trafficFlags;

- (void).cxx_destruct;
- (void)_abortRequestsWithError:(id)arg1;
- (id)_allowedMACAddressesForMCFeature:(id)arg1;
- (void)_clientConnectCompleted:(id)arg1;
- (void)_clientConnectStart;
- (void)_clientConnectStartBLE;
- (void)_clientConnectStartBTPipe;
- (void)_clientConnectStartTCP;
- (bool)_clientError:(id)arg1;
- (void)_clientNetworkError:(id)arg1 label:(const char *)arg2;
- (void)_clientPairSetupCompleted:(id)arg1;
- (void)_clientPairSetupPromptWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2 handler:(id /* block */)arg3;
- (void)_clientPairSetupStart;
- (void)_clientPairSetupWithData:(id)arg1;
- (void)_clientPairVerifyCompleted:(id)arg1;
- (void)_clientPairVerifyStart;
- (void)_clientPairVerifyWithData:(id)arg1;
- (void)_clientPreAuthResponseWithData:(id)arg1;
- (void)_clientPreAuthStart;
- (void)_clientRetryFired;
- (void)_clientRetryStart;
- (void)_clientRun;
- (void)_clientStartSession;
- (void)_clientStarted;
- (id)_identityProofDataClient;
- (id)_identityProofDataServer;
- (void)_identityProofsAdd:(id)arg1 update:(bool)arg2;
- (void)_identityProofsVerify:(id)arg1;
- (void)_identityProofsVerifyHomeKitSignature:(id)arg1 identifier:(id)arg2;
- (void)_idleTimerFired;
- (void)_idleTimerStart:(unsigned int)arg1 repeat:(unsigned int)arg2;
- (void)_invalidate;
- (void)_invalidateCore:(id)arg1;
- (void)_invalidateWithError:(id)arg1;
- (void)_invalidated;
- (void)_pairSetupInvalidate;
- (void)_pairVerifyInvalidate;
- (id)_pairVerifySignData:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (bool)_pairVerifyVerifySignature:(id)arg1 data:(id)arg2 flags:(unsigned int)arg3 error:(id*)arg4;
- (void)_processSends;
- (void)_pskPrepare:(bool)arg1;
- (void)_receiveCompletion:(id)arg1 readFrame:(struct { struct { unsigned char x_1_1_1; unsigned char x_1_1_2[3]; } x1; bool x2; bool x3; }*)arg2 requestable:(id)arg3;
- (void)_receiveStart:(id)arg1 readFrame:(struct { struct { unsigned char x_1_1_1; unsigned char x_1_1_2[3]; } x1; bool x2; bool x3; }*)arg2 requestable:(id)arg3;
- (void)_receivedEvent:(id)arg1 ctx:(struct { unsigned long long x1; bool x2; }*)arg2;
- (void)_receivedHeader:(const struct { unsigned char x1; unsigned char x2[3]; }*)arg1 body:(id)arg2 ctx:(struct { unsigned long long x1; bool x2; }*)arg3;
- (void)_receivedHeader:(const struct { unsigned char x1; unsigned char x2[3]; }*)arg1 encryptedObjectData:(id)arg2 ctx:(struct { unsigned long long x1; bool x2; }*)arg3;
- (void)_receivedObject:(id)arg1 ctx:(struct { unsigned long long x1; bool x2; }*)arg2;
- (void)_receivedRequest:(id)arg1 ctx:(struct { unsigned long long x1; bool x2; }*)arg2;
- (void)_receivedResponse:(id)arg1 ctx:(struct { unsigned long long x1; bool x2; }*)arg2;
- (void)_receivedSystemInfo:(id)arg1 xid:(id)arg2;
- (void)_run;
- (void)_sendEncryptedEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)_sendEncryptedRequestID:(id)arg1 request:(id)arg2 xpcID:(unsigned int)arg3 options:(id)arg4 sendEntry:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)_sendEncryptedResponse:(id)arg1 error:(id)arg2 xid:(id)arg3 requestID:(id)arg4 highPriority:(bool)arg5 isChatty:(bool)arg6;
- (void)_sendFrameType:(unsigned char)arg1 body:(id)arg2;
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;
- (void)_serverAccept;
- (void)_serverAcceptBLE;
- (void)_serverAcceptBTPipe;
- (void)_serverAcceptTCP;
- (void)_serverError:(id)arg1;
- (void)_serverNetworkError:(id)arg1 label:(const char *)arg2;
- (void)_serverPairSetupCompleted:(id)arg1;
- (void)_serverPairSetupWithData:(id)arg1 start:(bool)arg2;
- (void)_serverPairVerifyCompleted:(id)arg1;
- (void)_serverPairVerifyWithData:(id)arg1 start:(bool)arg2;
- (bool)_serverPairingAllowed;
- (void)_serverPreAuthRequestWithData:(id)arg1;
- (void)_serverRun;
- (void)_serverStarted;
- (id)_systeminfo;
- (void)_timeoutForSendEntry:(id)arg1;
- (void)_timeoutForXID:(id)arg1;
- (void)_updateExternalState;
- (void)_updateLinkInfo;
- (void)activate;
- (id)allowedMACAddresses;
- (id)appID;
- (id)appInfoPeer;
- (id)appInfoSelf;
- (id /* block */)authCompletionHandler;
- (long long)bleClientUseCase;
- (id)bleConnection;
- (id)blePeerIdentifier;
- (id)bonjourPeerDevice;
- (id)btPipe;
- (id)btPipeHighPriority;
- (id)client;
- (bool)clientMode;
- (unsigned long long)controlFlags;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)destinationString;
- (id)dispatchQueue;
- (unsigned int)flags;
- (bool)flowControlReadEnabled;
- (id /* block */)flowControlWriteChangedHandler;
- (int)flowControlWriteState;
- (id)forcedPeerIdentity;
- (id)forcedSelfIdentity;
- (id /* block */)hidePasswordHandler;
- (void)homeKitIdentityUpdated;
- (id)homeKitManager;
- (id /* block */)homeKitUserIdentifierHandler;
- (id)identifierOverride;
- (id)identityDaemon;
- (id)identityResolved;
- (id)identityVerified;
- (id)init;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (bool)invalidationHandled;
- (id /* block */)invalidationHandler;
- (int)keepAliveSeconds;
- (id)label;
- (int)linkType;
- (id)localDeviceInfo;
- (id)netLinkManager;
- (id)pairSetupACL;
- (unsigned int)pairSetupFlags;
- (id /* block */)pairVerifyCompletion;
- (unsigned int)pairVerifyFlags;
- (id)password;
- (int)passwordType;
- (int)passwordTypeActual;
- (id)peerAddrString;
- (id)peerDeviceInfo;
- (id)peerIdentifier;
- (id /* block */)peerUpdatedHandler;
- (bool)preAuthEnabled;
- (int)preferredIdentityType;
- (bool)present;
- (id /* block */)promptForPasswordHandler;
- (id /* block */)proxyDeviceUpdateHandler;
- (id)proxyDevices;
- (id)pskData;
- (id /* block */)readErrorHandler;
- (id /* block */)receivedEventHandler;
- (id /* block */)receivedRequestHandler;
- (void)sendEncryptedEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendEncryptedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendEncryptedRequestID:(id)arg1 request:(id)arg2 xpcID:(unsigned int)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)sendReachabilityProbe:(const char *)arg1;
- (id /* block */)sessionStartHandler;
- (void)sessionStopped:(id)arg1;
- (void)setAllowedMACAddresses:(id)arg1;
- (void)setAppID:(id)arg1;
- (void)setAppInfoSelf:(id)arg1;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setBleClientUseCase:(long long)arg1;
- (void)setBleConnection:(id)arg1;
- (void)setBlePeerIdentifier:(id)arg1;
- (void)setBonjourPeerDevice:(id)arg1;
- (void)setBtPipe:(id)arg1;
- (void)setBtPipeHighPriority:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setClientMode:(bool)arg1;
- (void)setControlFlags:(unsigned long long)arg1;
- (void)setDestinationString:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFlowControlReadEnabled:(bool)arg1;
- (void)setFlowControlWriteChangedHandler:(id /* block */)arg1;
- (void)setForcedPeerIdentity:(id)arg1;
- (void)setForcedSelfIdentity:(id)arg1;
- (void)setHidePasswordHandler:(id /* block */)arg1;
- (void)setHomeKitManager:(id)arg1;
- (void)setHomeKitUserIdentifierHandler:(id /* block */)arg1;
- (void)setIdentifierOverride:(id)arg1;
- (void)setIdentityDaemon:(id)arg1;
- (void)setIdentityResolved:(id)arg1;
- (void)setInvalidationHandled:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setKeepAliveSeconds:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalDeviceInfo:(id)arg1;
- (void)setNetLinkManager:(id)arg1;
- (void)setPairSetupACL:(id)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyCompletion:(id /* block */)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPeerIdentifier:(id)arg1;
- (void)setPeerUpdatedHandler:(id /* block */)arg1;
- (void)setPreAuthEnabled:(bool)arg1;
- (void)setPreferredIdentityType:(int)arg1;
- (void)setPresent:(bool)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setProxyDeviceUpdateHandler:(id /* block */)arg1;
- (void)setProxyDevices:(id)arg1;
- (void)setPskData:(id)arg1;
- (void)setReadErrorHandler:(id /* block */)arg1;
- (void)setReceivedEventHandler:(id /* block */)arg1;
- (void)setReceivedRequestHandler:(id /* block */)arg1;
- (void)setSessionStartHandler:(id /* block */)arg1;
- (void)setShowPasswordHandler:(id /* block */)arg1;
- (void)setState:(int)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (void)setTcpConnection:(id)arg1;
- (void)setTrafficFlags:(unsigned int)arg1;
- (id /* block */)showPasswordHandler;
- (int)state;
- (id /* block */)stateChangedHandler;
- (unsigned long long)statusFlags;
- (id)tcpConnection;
- (unsigned int)trafficFlags;
- (void)tryPassword:(id)arg1;

@end
