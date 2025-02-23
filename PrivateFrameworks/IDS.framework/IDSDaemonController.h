/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {
    bool  _acquiringDaemonConnection;
    bool  _autoReconnect;
    unsigned int  _cachedCapabilities;
    NSSet * _cachedCommands;
    NSSet * _cachedServices;
    NSSet * _commands;
    NSObject<OS_dispatch_queue> * _connectingQueue;
    unsigned long long  _connectionID;
    int  _curXPCMessagePriority;
    NSObject<OS_dispatch_group> * _daemonConnectedGroup;
    IDSDaemonListener * _daemonListener;
    id  _delegate;
    bool  _fatalErrorOccured;
    IDSDaemonControllerForwarder * _forwarder;
    bool  _hasBeenSuspended;
    bool  _hasCheckedForDaemon;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    unsigned int  _lastUpdateCaps;
    NSMutableDictionary * _listenerCapabilities;
    NSMutableDictionary * _listenerCommands;
    NSString * _listenerID;
    NSMutableDictionary * _listenerServices;
    IMLocalObject * _localObject;
    NSMutableSet * _notificationServices;
    bool  _preventReconnect;
    NSProtocolChecker * _protocol;
    NSObject<OS_dispatch_queue> * _remoteMessageQueue;
    IMRemoteObject<IDSDaemonProtocol> * _remoteObject;
    NSSet * _services;
}

@property (setter=_setAutoReconnect:) bool _autoReconnect;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_remoteMessageQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectingQueue;
@property (nonatomic) int curXPCMessagePriority;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnecting;
@property (nonatomic, readonly) IDSDaemonListener *listener;
@property (nonatomic, readonly) NSString *listenerID;
@property (nonatomic, retain) IMRemoteObject<IDSDaemonProtocol> *remoteObject;
@property (readonly) Class superclass;

+ (bool)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_agentDidLaunchNotification:(id)arg1;
- (bool)_autoReconnect;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_connectToDaemonWithLaunch:(bool)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)_disconnectFromDaemonWithForce:(bool)arg1;
- (void)_handleDaemonException:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (bool)_makeConnectionWithLaunch:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)_noteDisconnected;
- (void)_noteSetupComplete;
- (void)_performBlock:(id /* block */)arg1;
- (void)_performBlock:(id /* block */)arg1 wait:(bool)arg2;
- (id)_remoteMessageQueue;
- (void)_remoteObjectCleanup;
- (void)_setAutoReconnect:(bool)arg1;
- (bool)_setCapabilities:(unsigned int)arg1;
- (bool)_setCommands:(id)arg1;
- (bool)_setServices:(id)arg1;
- (void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3;
- (bool)addListenerID:(id)arg1 services:(id)arg2;
- (bool)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (void)addedDelegateForService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)blockUntilConnected;
- (unsigned int)capabilities;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (id)commands;
- (id)commandsForListenerID:(id)arg1;
- (bool)connectToDaemon;
- (bool)connectToDaemonWithLaunch:(bool)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (id)connectingQueue;
- (bool)consumeQueryContext:(id)arg1;
- (int)curXPCMessagePriority;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFromDaemon;
- (id)forwarderWithCompletion:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)hasListenerForID:(id)arg1;
- (id)init;
- (bool)isConnected;
- (bool)isConnecting;
- (id)listener;
- (id)listenerID;
- (id)localObject;
- (void)localObjectDiedNotification:(id)arg1;
- (bool)localObjectExists;
- (id)remoteObject;
- (void)remoteObjectDiedNotification:(id)arg1;
- (bool)remoteObjectExists;
- (void)removeListenerID:(id)arg1;
- (void)sendQueryWithReply:(bool)arg1 query:(id /* block */)arg2;
- (void)sendXPCObject:(id)arg1 objectContext:(id)arg2;
- (id)services;
- (id)servicesForListenerID:(id)arg1;
- (bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2 shouldLog:(bool)arg3;
- (bool)setCommands:(id)arg1 forListenerID:(id)arg2;
- (void)setConnectingQueue:(id)arg1;
- (void)setCurXPCMessagePriority:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueryContext:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (bool)setServices:(id)arg1 forListenerID:(id)arg2;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)unsetQueryContext:(id)arg1;

@end
