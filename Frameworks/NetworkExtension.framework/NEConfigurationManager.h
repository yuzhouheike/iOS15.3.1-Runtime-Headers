/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEConfigurationManager : NSObject {
    NSData * _SCPreferencesSignature;
    id /* block */  _changedHandler;
    int  _changedNotifyToken;
    NSObject<OS_dispatch_queue> * _changedQueue;
    long long  _configurationChangeSource;
    NSDictionary * _currentIndex;
    NSKeyedUnarchiver * _decoder;
    NSString * _description;
    long long  _generation;
    bool  _hasReadPermission;
    bool  _hasVPNAPIEntitlement;
    NEHelper * _helper;
    bool  _isNEHelper;
    bool  _isSyncedOnQueue;
    bool  _isSynchronous;
    bool  _isVPNPrivateAPI;
    bool  _isVPNPublicAPI;
    NSMutableDictionary * _loadedConfigurations;
    NSMutableDictionary * _loadedIndex;
    NSObject<OS_dispatch_queue> * _outerQueue;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _userUUID;
}

@property (retain) NSData *SCPreferencesSignature;
@property (copy) id /* block */ changedHandler;
@property int changedNotifyToken;
@property (retain) NSObject<OS_dispatch_queue> *changedQueue;
@property long long configurationChangeSource;
@property (retain) NSDictionary *currentIndex;
@property (retain) NSKeyedUnarchiver *decoder;
@property long long generation;
@property bool hasReadPermission;
@property bool hasVPNAPIEntitlement;
@property (retain) NEHelper *helper;
@property (copy) id /* block */ incomingMessageHandler;
@property bool isNEHelper;
@property bool isSyncedOnQueue;
@property (nonatomic) bool isSynchronous;
@property bool isVPNPrivateAPI;
@property bool isVPNPublicAPI;
@property (retain) NSMutableDictionary *loadedConfigurations;
@property (retain) NSMutableDictionary *loadedIndex;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *outerQueue;
@property (readonly) NSString *pluginType;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSUUID *userUUID;

+ (long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2 sameTypeCount:(unsigned long long*)arg3;
+ (bool)configurationIsEnabled:(id)arg1;
+ (void)disableConfiguration:(id)arg1 onDemandOnly:(bool)arg2;
+ (id)sharedManager;
+ (id)sharedManagerForAllUsers;
+ (void)updateFlags:(unsigned long long*)arg1 withConfiguration:(id)arg2;

- (void).cxx_destruct;
- (id)SCPreferencesSignature;
- (id /* block */)changedHandler;
- (int)changedNotifyToken;
- (id)changedQueue;
- (void)clearLoadedConfigurationsWithIDs:(id)arg1;
- (long long)configurationChangeSource;
- (bool)configurationHasChanged:(id)arg1;
- (id)copyChangedConfigurationIDs:(id)arg1;
- (id)copyCurrentIndexWithConfigurationIDsExpunged:(id)arg1;
- (void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(id /* block */)arg4;
- (id)currentIndex;
- (void)dealloc;
- (id)decodeConfigurationWithIdentifier:(id)arg1;
- (id)decoder;
- (id)description;
- (void)didLoadConfiguration:(id)arg1;
- (void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2;
- (id)errorWithCode:(long long)arg1 specifics:(id)arg2;
- (void)executeBlock:(id /* block */)arg1;
- (void)executeCallbackOnQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)filterIndexWithFilter:(id)arg1;
- (long long)generation;
- (id)getConfigurationUserUUID:(id)arg1;
- (void)getCurrentIndexWithCompletionHandler:(id /* block */)arg1;
- (id)getCurrentUserUUIDForConfigurationID:(id)arg1 fromIndex:(id)arg2;
- (void)handleApplicationsRemoved:(id)arg1 completionQueue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleFileRemovedWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(struct __SCPreferences { }*)arg4;
- (bool)hasReadPermission;
- (bool)hasVPNAPIEntitlement;
- (id)helper;
- (id /* block */)incomingMessageHandler;
- (id)init;
- (id)initForAllUsers;
- (id)initSynchronous;
- (id)initWithPluginType:(id)arg1;
- (id)initWithUserUUID:(id)arg1;
- (bool)isNEHelper;
- (bool)isSyncedOnQueue;
- (bool)isSynchronous;
- (bool)isSystemConfiguration:(id)arg1;
- (bool)isVPNPrivateAPI;
- (bool)isVPNPublicAPI;
- (void)loadConfigurationAndUserWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)loadLegacyPluginConfigurationsWithCompletionQueue:(id)arg1 handler:(id /* block */)arg2;
- (id)loadedConfigurations;
- (id)loadedIndex;
- (id)makeMutableCopyOfIndex:(id)arg1;
- (void)notifyChanges;
- (id)outerQueue;
- (id)pluginType;
- (void)postChangeNotification;
- (void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2 onlyIfChanged:(bool)arg3;
- (void)postGeneration;
- (id)queue;
- (id)readIndexFromDiskWithError:(id*)arg1;
- (void)registerForChangeNotifications;
- (bool)reloadFromDisk;
- (void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences { }*)arg2;
- (void)repopulateNetworkPrivacyConfigurationResetAll:(bool)arg1;
- (bool)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2;
- (void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 isUpgrade:(bool)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences { }*)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 notifyNow:(bool)arg5 isUpgrade:(bool)arg6;
- (void)sendRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)setChangedHandler:(id /* block */)arg1;
- (void)setChangedNotifyToken:(int)arg1;
- (void)setChangedQueue:(id)arg1;
- (void)setChangedQueue:(id)arg1 andHandler:(id /* block */)arg2;
- (void)setConfigurationChangeSource:(long long)arg1;
- (void)setCurrentIndex:(id)arg1;
- (void)setDecoder:(id)arg1;
- (void)setGeneration:(long long)arg1;
- (void)setHasReadPermission:(bool)arg1;
- (void)setHasVPNAPIEntitlement:(bool)arg1;
- (void)setHelper:(id)arg1;
- (void)setIncomingMessageHandler:(id /* block */)arg1;
- (void)setIsNEHelper:(bool)arg1;
- (void)setIsSyncedOnQueue:(bool)arg1;
- (void)setIsSynchronous:(bool)arg1;
- (void)setIsVPNPrivateAPI:(bool)arg1;
- (void)setIsVPNPublicAPI:(bool)arg1;
- (void)setLoadedConfigurations:(id)arg1;
- (void)setLoadedIndex:(id)arg1;
- (void)setOuterQueue:(id)arg1;
- (void)setSCPreferencesSignature:(id)arg1;
- (void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 query:(id)arg3 hasEntitlement:(bool)arg4 handler:(id /* block */)arg5;
- (void)syncConfigurationsWithSC:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)updateSCPreferencesSignatureOnDisk;
- (void)upgradeLegacyPluginConfigurations:(id)arg1 withUpgradeInfo:(id)arg2 completionQueue:(id)arg3 handler:(id /* block */)arg4;
- (id)userUUID;

@end
