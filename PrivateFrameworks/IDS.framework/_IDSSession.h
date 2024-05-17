/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSSession : NSObject <IDSBaseSocketPairConnectionDelegate, IDSDaemonListenerProtocol> {
    NSString * _accountID;
    bool  _alwaysSkipSelf;
    id  _boostContext;
    NSString * _clientUUID;
    unsigned long long  _connectionCountHint;
    CUTWeakReference * _delegate;
    id  _delegateContext;
    NSSet * _destinations;
    bool  _disableEncryption;
    bool  _disallowCellularInterface;
    bool  _disallowWifiInterface;
    bool  _enableSingleChannelDirectMode;
    unsigned long long  _initialLinkType;
    long long  _inviteTimeout;
    bool  _isAudioEnabled;
    bool  _isLegacy;
    bool  _isMuted;
    bool  _needsToWaitForPreConnectionData;
    bool  _preferCellularForCallSetup;
    NSMutableDictionary * _preferences;
    unsigned long long  _preferredAddressFamily;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionConfig;
    unsigned int  _sessionEndedReason;
    bool  _shouldUseSocketForTransport;
    int  _socket;
    unsigned int  _state;
    long long  _transportType;
    NSString * _uniqueID;
    IDSBaseSocketPairConnection * _unreliableSocketPairConnection;
}

@property (nonatomic, retain) id boostContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long initialLinkType;
@property (nonatomic) long long inviteTimeout;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) int socket;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

- (void).cxx_destruct;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (void)_cleanupSocketPairConnections;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 connectionCountHint:(unsigned long long)arg4 needsToWaitForPreConnectionData:(bool)arg5 uniqueID:(id)arg6 delegateContext:(id)arg7;
- (void)_setupSocketPairToDaemon;
- (void)_setupUnreliableSocketPairConnection;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)allocationDone:(id)arg1 sessionInfo:(id)arg2;
- (id)boostContext;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)daemonController;
- (void)daemonDisconnected;
- (id)daemonListener;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (bool)getAudioEnabled;
- (bool)getMuted;
- (id)getPreferences;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (unsigned long long)initialLinkType;
- (long long)inviteTimeout;
- (void)reconnectSession;
- (void)sendAllocationRequest:(id)arg1;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;
- (void)session:(id)arg1 audioEnabled:(bool)arg2;
- (void)session:(id)arg1 didReceiveReport:(id)arg2;
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(bool)arg3;
- (void)session:(id)arg1 muted:(bool)arg2;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (unsigned int)sessionEndedReason;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setBoostContext:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInviteTimeout:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (bool)shouldUseSocketForTransport;
- (int)socket;
- (unsigned int)state;
- (id)uniqueID;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
