/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDefaults : NSObject {
    bool  _appleInternal;
    long long  _currentDisplayGamut;
    NSMutableDictionary * _darwinNotificationNames;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _darwinNotificationNamesLock;
    unsigned int  _darwinNotificationNamesUID;
    bool  _hasPersistentPreferences;
    bool  _hasServer;
    NSData * _hmacSecret;
    bool  _inEducationMode;
    bool  _inSyncBubble;
    bool  _inXCTestRigInsecure;
    bool  _isServer;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSURL * _systemContainerURL;
    NSURL * _systemGroupContainerURL;
    NSURL * _userContainerURL;
}

@property (readonly) NSData *HMACSecret;
@property (nonatomic, readonly) bool abortIfMayNotMapDatabase;
@property (nonatomic, readonly) bool allowsAlternateIcons;
@property (readonly) bool alwaysUseDebugOpenWithMenus;
@property (getter=isAppleInternal, nonatomic, readonly) bool appleInternal;
@property (readonly) long long concurrentInstallOperations;
@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *dbRecoveryFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) NSURL *dbSyncInterruptedFileURL;
@property (readonly) bool enumerateExtensionPointsUsingExtensionKit;
@property (readonly) bool hasPersistentPreferences;
@property bool hasServer;
@property (readonly) NSURL *identifiersFileURL;
@property (getter=isInEducationMode, readonly) bool inEducationMode;
@property (getter=isInSyncBubble, readonly) bool inSyncBubble;
@property (getter=isInXCTestRigInsecure, nonatomic, readonly) bool inXCTestRigInsecure;
@property (readonly) NSURL *installJournalDirectoryURL;
@property (nonatomic, readonly) bool issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly) bool markLocalizationsStoredInDatabase;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (getter=isRegionChina, readonly) bool regionChina;
@property (readonly) NSURL *securePeferencesFileURL;
@property (getter=isServer) bool server;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (getter=isSystemServer, readonly) bool systemServer;
@property (readonly) NSURL *unremappableDatabaseStoreFileURL;
@property (readonly) NSURL *userContainerURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)HMACSecret;
- (bool)abortIfMayNotMapDatabase;
- (bool)allowsAlternateIcons;
- (bool)alwaysUseDebugOpenWithMenus;
- (id)classesWithNameForXCTests:(const char *)arg1;
- (long long)concurrentInstallOperations;
- (unsigned int)currentSchemaVersion;
- (id)darwinNotificationNameForCurrentUser:(id)arg1 userID:(const unsigned int*)arg2;
- (double)databaseSaveInterval;
- (double)databaseSaveLatency;
- (unsigned short)databaseStoreFileMode;
- (id)databaseStoreFileURL;
- (id)databaseStoreFileURLWithUID:(unsigned int)arg1;
- (id)databaseUpdateNotificationName;
- (id)databaseUpdateNotificationNameForUserID:(unsigned int)arg1;
- (id)dbRecoveryFileURL;
- (id)dbSentinelFileURL;
- (id)dbSyncInterruptedFileURL;
- (id)debugDescription;
- (bool)enumerateExtensionPointsUsingExtensionKit;
- (bool)hasPersistentPreferences;
- (bool)hasServer;
- (id)identifiersFileURL;
- (id)init;
- (id)installJournalDirectoryURL;
- (bool)isAppleInternal;
- (bool)isInEducationMode;
- (bool)isInSyncBubble;
- (bool)isInXCTestRigInsecure;
- (bool)isRegionChina;
- (bool)isServer;
- (bool)isSystemServer;
- (bool)issueSandboxExceptionsIfMayNotMapDatabase;
- (bool)markLocalizationsStoredInDatabase;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesFileURL;
- (id)preferencesUpdateNotificationName;
- (id)preferredLocalizations;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (unsigned int)proxyUIDForUID:(unsigned int)arg1;
- (id)queriedSchemesMapFileURL;
- (id)securePeferencesFileURL;
- (id)serviceNameForConnectionType:(unsigned short)arg1;
- (void)setHasServer:(bool)arg1;
- (void)setServer:(bool)arg1;
- (id)simulatorRootURL;
- (id)simulatorRuntimeBuildVersion;
- (id)simulatorRuntimeVersion;
- (id)systemContainerURL;
- (id)systemGroupContainerURL;
- (id)unremappableDatabaseStoreFileURL;
- (id)userContainerURL;
- (id)userPreferencesURL;

@end
