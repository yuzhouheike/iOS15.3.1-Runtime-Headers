/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private> {
    id /* block */  _bubblePopHandler;
    NSData * _contextData;
    bool  _currentlyBroadcastingWillSwitchToUser;
    bool  _didBroadcastUploadContent;
    bool  _didBroadcastWillSwitchToUser;
    bool  _didRegisterPersonaCalbackStakeholder;
    bool  _didRegisterStakeholder;
    bool  _didSendTasks;
    id /* block */  _directSwitchCompletionHandler;
    unsigned int  _interruptionRetryCount;
    id /* block */  _loginUICheckinSessionCompletionHandler;
    id /* block */  _logoutToLoginSessionCompletionHandler;
    NSString * _machServiceName;
    NSData * _passcodeData;
    NSDictionary * _personaProfileDict;
    id /* block */  _personaRegistrationCompletionHandler;
    NSDictionary * _personaSpec;
    id  _personaStakeholder;
    id  _personaUpdateCallbackStakeholder;
    NSDictionary * _preferencesDict;
    id /* block */  _provisionCompletionHandler;
    NSDictionary * _provisionDict;
    id /* block */  _registrationCompletionHandler;
    NSObject<UMSideEffectsProviding> * _se;
    id  _stakeholder;
    unsigned long long  _stakeholderType;
    id /* block */  _suspendQuotasCompletionHandler;
    NSMutableArray * _switchBlockingTasks;
    id /* block */  _switchCompletionHandler;
    NSMutableArray * _syncTasks;
    NSString * _unregistrationReason;
    unsigned long long  _unregistrationStatus;
    id /* block */  _uploadContentCompletionHandler;
    id /* block */  _willSwitchCompletionHandler;
    unsigned long long  _willSwitchToUserAddedTaskCount;
    NSXPCConnection * _xpcConnection;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, copy) id /* block */ bubblePopHandler;
@property (nonatomic, retain) NSData *contextData;
@property (nonatomic) bool currentlyBroadcastingWillSwitchToUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didBroadcastUploadContent;
@property (nonatomic) bool didBroadcastWillSwitchToUser;
@property (nonatomic) bool didRegisterPersonaCalbackStakeholder;
@property (nonatomic) bool didRegisterStakeholder;
@property (nonatomic) bool didSendTasks;
@property (nonatomic, copy) id /* block */ directSwitchCompletionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int interruptionRetryCount;
@property (nonatomic, copy) id /* block */ loginUICheckinSessionCompletionHandler;
@property (nonatomic, copy) id /* block */ logoutToLoginSessionCompletionHandler;
@property (nonatomic, retain) NSString *machServiceName;
@property (nonatomic, retain) NSData *passcodeData;
@property (nonatomic, retain) NSDictionary *personaProfileDict;
@property (nonatomic, copy) id /* block */ personaRegistrationCompletionHandler;
@property (nonatomic, retain) NSDictionary *personaSpec;
@property (nonatomic) id personaStakeholder;
@property (nonatomic) id personaUpdateCallbackStakeholder;
@property (nonatomic, retain) NSDictionary *preferencesDict;
@property (nonatomic, copy) id /* block */ provisionCompletionHandler;
@property (nonatomic, retain) NSDictionary *provisionDict;
@property (nonatomic, copy) id /* block */ registrationCompletionHandler;
@property (nonatomic, retain) NSObject<UMSideEffectsProviding> *se;
@property (nonatomic) id stakeholder;
@property (nonatomic) unsigned long long stakeholderType;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ suspendQuotasCompletionHandler;
@property (nonatomic, retain) NSMutableArray *switchBlockingTasks;
@property (nonatomic, copy) id /* block */ switchCompletionHandler;
@property (nonatomic, retain) NSMutableArray *syncTasks;
@property (nonatomic, retain) NSString *unregistrationReason;
@property (nonatomic) unsigned long long unregistrationStatus;
@property (nonatomic, copy) id /* block */ uploadContentCompletionHandler;
@property (nonatomic, copy) id /* block */ willSwitchCompletionHandler;
@property (nonatomic) unsigned long long willSwitchToUserAddedTaskCount;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_abortIfWeDoNotHaveAStakeholder;
- (void)_abortIfWeDoNotHaveASyncStakeholder;
- (void)_broadcastReadyToSwitchToLoginSession:(id)arg1;
- (void)_broadcastReadyToSwitchToUser:(id)arg1;
- (void)_broadcastWillSwitchToUser:(id)arg1;
- (void)_broadcastpersonaListDidUpdate;
- (id)_createUMServerSyncConnection;
- (int)_pid;
- (id)_registerPersonaListObserver:(id)arg1 withMachService:(id)arg2;
- (void)_registerStakeholder:(id)arg1;
- (void)_resendXPCMessages;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (void)_setUpXPCConnectionToUMServerIfNeeded;
- (void)_tearDownConnectionToUMServer;
- (void)addTask:(id)arg1;
- (void)bubbleDidPop;
- (id /* block */)bubblePopHandler;
- (id)contextData;
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 passcodeDataType:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)currentlyBroadcastingWillSwitchToUser;
- (void)deleteUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deviceLoginSessionStateDidUpdate;
- (bool)didBroadcastUploadContent;
- (bool)didBroadcastWillSwitchToUser;
- (bool)didRegisterPersonaCalbackStakeholder;
- (bool)didRegisterStakeholder;
- (bool)didSendTasks;
- (id /* block */)directSwitchCompletionHandler;
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)disableUserPersona:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAsidMapwithCompletionHandler:(id /* block */)arg1;
- (void)fetchBundleIdentifierForPersona:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchListOfAllUsersPersonasWithCompletionHandler:(id /* block */)arg1;
- (id)fetchListOfPersonasSynchronousWithError:(id*)arg1;
- (void)fetchListOfPersonasWithCompletionHandler:(id /* block */)arg1;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(id /* block */)arg1;
- (void)fetchPersona:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchPersonaSynchronous:(id)arg1 WithError:(id*)arg2;
- (id)grantSandboxExtensionForPersonaWithUniqueString:(id)arg1;
- (id)init;
- (unsigned int)interruptionRetryCount;
- (void)launchPersonaCallback;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loginUICheckInWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)loginUICheckinSessionCompletionHandler;
- (id /* block */)logoutToLoginSessionCompletionHandler;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)arg1;
- (id)machServiceName;
- (id)passcodeData;
- (void)personaListDidUpdateCompletionHandler:(id /* block */)arg1;
- (id)personaProfileDict;
- (id /* block */)personaRegistrationCompletionHandler;
- (id)personaSpec;
- (id)personaStakeholder;
- (int)personaSynchronousLoginWithODuuid:(id)arg1 withUid:(unsigned int)arg2;
- (int)personaSynchronousLogoutWithODuuid:(id)arg1 withUid:(unsigned int)arg2;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* block */)arg1;
- (id)personaUpdateCallbackStakeholder;
- (id)preferencesDict;
- (id /* block */)provisionCompletionHandler;
- (id)provisionDict;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)registerPersonaUpdateCallbackWithMachService:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (id /* block */)registrationCompletionHandler;
- (void)removeTask:(id)arg1;
- (void)resumeQuotas;
- (void)resumeSync;
- (id)se;
- (void)setBubblePopHandler:(id /* block */)arg1;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersona:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setContextData:(id)arg1;
- (void)setCurrentlyBroadcastingWillSwitchToUser:(bool)arg1;
- (void)setDidBroadcastUploadContent:(bool)arg1;
- (void)setDidBroadcastWillSwitchToUser:(bool)arg1;
- (void)setDidRegisterPersonaCalbackStakeholder:(bool)arg1;
- (void)setDidRegisterStakeholder:(bool)arg1;
- (void)setDidSendTasks:(bool)arg1;
- (void)setDirectSwitchCompletionHandler:(id /* block */)arg1;
- (void)setInterruptionRetryCount:(unsigned int)arg1;
- (void)setLoginUICheckinSessionCompletionHandler:(id /* block */)arg1;
- (void)setLogoutToLoginSessionCompletionHandler:(id /* block */)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPasscodeData:(id)arg1;
- (void)setPersonaProfileDict:(id)arg1;
- (void)setPersonaRegistrationCompletionHandler:(id /* block */)arg1;
- (void)setPersonaSpec:(id)arg1;
- (void)setPersonaStakeholder:(id)arg1;
- (void)setPersonaUpdateCallbackStakeholder:(id)arg1;
- (void)setPreferencesDict:(id)arg1;
- (void)setProvisionCompletionHandler:(id /* block */)arg1;
- (void)setProvisionDict:(id)arg1;
- (void)setRegistrationCompletionHandler:(id /* block */)arg1;
- (void)setSe:(id)arg1;
- (void)setStakeholder:(id)arg1;
- (void)setStakeholderType:(unsigned long long)arg1;
- (void)setSuspendQuotasCompletionHandler:(id /* block */)arg1;
- (void)setSwitchBlockingTasks:(id)arg1;
- (void)setSwitchCompletionHandler:(id /* block */)arg1;
- (void)setSyncTasks:(id)arg1;
- (void)setUnregistrationReason:(id)arg1;
- (void)setUnregistrationStatus:(unsigned long long)arg1;
- (void)setUploadContentCompletionHandler:(id /* block */)arg1;
- (void)setWillSwitchCompletionHandler:(id /* block */)arg1;
- (void)setWillSwitchToUserAddedTaskCount:(unsigned long long)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (void)setupUMUserSessionProvisioning:(id)arg1 WithCompletionHandler:(id /* block */)arg2;
- (id)stakeholder;
- (unsigned long long)stakeholderType;
- (id /* block */)suspendQuotasCompletionHandler;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)arg1;
- (id)switchBlockingTasks;
- (id /* block */)switchCompletionHandler;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)syncTasks;
- (void)terminateSyncWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (id)unregistrationReason;
- (unsigned long long)unregistrationStatus;
- (id /* block */)uploadContentCompletionHandler;
- (void)uploadContentWithCompletionHandler:(id /* block */)arg1;
- (void)userInteractionIsEnabled;
- (void)userSwitchTaskListDidUpdate;
- (id /* block */)willSwitchCompletionHandler;
- (void)willSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)willSwitchToUserAddedTaskCount;
- (id)xpcConnection;
- (id)xpcListener;

@end
