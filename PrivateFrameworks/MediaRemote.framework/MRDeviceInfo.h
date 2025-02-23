/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRDeviceInfo : NSObject <NSCopying> {
    bool  _airPlayActive;
    NSString * _airPlayGroupUID;
    NSArray * _airPlayReceivers;
    NSData * _bluetoothAddress;
    NSString * _buildVersion;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    bool  _clusterAware;
    NSString * _clusterID;
    NSString * _clusterLeaderID;
    unsigned int  _clusterType;
    bool  _connected;
    long long  _deviceClass;
    NSString * _deviceUID;
    bool  _groupLeader;
    unsigned long long  _groupLogicalDeviceCount;
    NSString * _groupName;
    NSString * _groupUID;
    unsigned long long  _groupedDeviceCount;
    NSArray * _groupedDevices;
    bool  _hasAirPlayActive;
    bool  _hasConnected;
    bool  _hasDeviceClass;
    bool  _hasGroupLeader;
    bool  _hasGroupLogicalDeviceCount;
    bool  _hasGroupedDeviceCount;
    bool  _hasPairingAllowed;
    bool  _hasProtocolVersion;
    bool  _hasProxyGroupPlayer;
    bool  _hasSharedQueueVersion;
    bool  _hasSupportsACL;
    bool  _hasSupportsExtendedMotion;
    bool  _hasSupportsMultiplayer;
    bool  _hasSupportsSharedQueue;
    bool  _hasSupportsSystemPairing;
    bool  _hasTightSyncGroup;
    NSString * _identifier;
    NSString * _linkAgent;
    NSString * _localReceiverPairingIdentity;
    NSString * _localizedModelName;
    NSString * _managedConfigurationDeviceIdentifier;
    NSString * _modelID;
    NSString * _name;
    bool  _pairingAllowed;
    unsigned long long  _protocolVersion;
    bool  _proxyGroupPlayer;
    NSString * _routingContextID;
    NSString * _senderDefaultGroupUID;
    unsigned long long  _sharedQueueVersion;
    bool  _supportsACL;
    bool  _supportsExtendedMotion;
    bool  _supportsMultiplayer;
    bool  _supportsSharedQueue;
    bool  _supportsSystemPairing;
    NSString * _systemBooksApplication;
    NSString * _systemMediaApplication;
    NSString * _systemPodcastApplication;
    bool  _tightSyncGroup;
    NSString * _tightSyncUID;
}

@property (nonatomic, readonly, copy) NSString *WHAIdentifier;
@property (getter=isAirPlayActive, nonatomic) bool airPlayActive;
@property (nonatomic, copy) NSString *airPlayGroupUID;
@property (nonatomic, copy) NSArray *airPlayReceivers;
@property (nonatomic, copy) NSData *bluetoothAddress;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (getter=isClusterAware, nonatomic) bool clusterAware;
@property (nonatomic, copy) NSString *clusterID;
@property (nonatomic, copy) NSString *clusterLeaderID;
@property (nonatomic) unsigned int clusterType;
@property (getter=isCompanion, nonatomic, readonly) bool companion;
@property (getter=isConnected, nonatomic) bool connected;
@property (nonatomic, readonly) bool containsLocalDevice;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic) long long deviceClass;
@property (nonatomic, copy) NSString *deviceUID;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isGizmo, nonatomic, readonly) bool gizmo;
@property (getter=isGroupLeader, nonatomic) bool groupLeader;
@property (nonatomic) unsigned long long groupLogicalDeviceCount;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupUID;
@property (nonatomic) unsigned long long groupedDeviceCount;
@property (nonatomic, copy) NSArray *groupedDevices;
@property (nonatomic) bool hasAirPlayActive;
@property (nonatomic) bool hasConnected;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasGroupLeader;
@property (nonatomic) bool hasGroupLogicalDeviceCount;
@property (nonatomic) bool hasGroupedDeviceCount;
@property (nonatomic) bool hasPairingAllowed;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) bool hasProxyGroupPlayer;
@property (nonatomic) bool hasSharedQueueVersion;
@property (nonatomic) bool hasSupportsACL;
@property (nonatomic) bool hasSupportsExtendedMotion;
@property (nonatomic) bool hasSupportsMultiplayer;
@property (nonatomic) bool hasSupportsSharedQueue;
@property (nonatomic) bool hasSupportsSystemPairing;
@property (nonatomic) bool hasTightSyncGroup;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *linkAgent;
@property (nonatomic, copy) NSString *localReceiverPairingIdentity;
@property (nonatomic, copy) NSString *localizedModelName;
@property (nonatomic, copy) NSString *managedConfigurationDeviceIdentifier;
@property (nonatomic, readonly, copy) NSString *minimalDescription;
@property (nonatomic, copy) NSString *modelID;
@property (nonatomic, copy) NSString *name;
@property (getter=isPairingAllowed, nonatomic) bool pairingAllowed;
@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *protobuf;
@property (nonatomic) unsigned long long protocolVersion;
@property (getter=isProxyGroupPlayer, nonatomic) bool proxyGroupPlayer;
@property (nonatomic, copy) NSString *routingContextID;
@property (nonatomic, copy) NSString *senderDefaultGroupUID;
@property (nonatomic) unsigned long long sharedQueueVersion;
@property (nonatomic, readonly) MRDeviceInfo *skeleton;
@property (nonatomic) bool supportsACL;
@property (nonatomic) bool supportsExtendedMotion;
@property (nonatomic, readonly) bool supportsImplicitChangeShuffleAndRepeatModeInSetPlaybackQueueCommandOptions;
@property (nonatomic) bool supportsMultiplayer;
@property (nonatomic) bool supportsSharedQueue;
@property (nonatomic) bool supportsSystemPairing;
@property (nonatomic, copy) NSString *systemBooksApplication;
@property (nonatomic, copy) NSString *systemMediaApplication;
@property (nonatomic, copy) NSString *systemPodcastApplication;
@property (getter=isTightSyncGroup, nonatomic) bool tightSyncGroup;
@property (nonatomic, copy) NSString *tightSyncUID;

+ (id)dataFromDeviceInfos:(id)arg1;
+ (long long)deviceClass;
+ (id)deviceInfosFromData:(id)arg1;

- (void).cxx_destruct;
- (id)WHAIdentifier;
- (id)airPlayGroupUID;
- (id)airPlayReceivers;
- (id)bluetoothAddress;
- (id)buildVersion;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)clusterID;
- (id)clusterLeaderID;
- (unsigned int)clusterType;
- (bool)containsLocalDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)deltaDescriptionFromDeviceInfo:(id)arg1;
- (id)deltaDescriptionFromDeviceInfo:(id)arg1 minimal:(bool)arg2;
- (id)description;
- (long long)deviceClass;
- (id)deviceUID;
- (id)dictionaryRepresentation;
- (unsigned long long)groupLogicalDeviceCount;
- (id)groupName;
- (id)groupUID;
- (unsigned long long)groupedDeviceCount;
- (id)groupedDevices;
- (bool)hasAirPlayActive;
- (bool)hasConnected;
- (bool)hasDeviceClass;
- (bool)hasGroupLeader;
- (bool)hasGroupLogicalDeviceCount;
- (bool)hasGroupedDeviceCount;
- (bool)hasPairingAllowed;
- (bool)hasProtocolVersion;
- (bool)hasProxyGroupPlayer;
- (bool)hasSharedQueueVersion;
- (bool)hasSupportsACL;
- (bool)hasSupportsExtendedMotion;
- (bool)hasSupportsMultiplayer;
- (bool)hasSupportsSharedQueue;
- (bool)hasSupportsSystemPairing;
- (bool)hasTightSyncGroup;
- (id)identifier;
- (id)initWithData:(id)arg1;
- (id)initWithOutputDevice:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isAirPlayActive;
- (bool)isClusterAware;
- (bool)isCompanion;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isGizmo;
- (bool)isGroupLeader;
- (bool)isPairingAllowed;
- (bool)isProxyGroupPlayer;
- (bool)isTightSyncGroup;
- (id)linkAgent;
- (id)localReceiverPairingIdentity;
- (id)localizedModelName;
- (id)managedConfigurationDeviceIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)minimalDeltaDescriptionFromDeviceInfo:(id)arg1;
- (id)minimalDescription;
- (id)modelID;
- (id)name;
- (id)protobuf;
- (unsigned long long)protocolVersion;
- (id)routingContextID;
- (id)senderDefaultGroupUID;
- (void)setAirPlayActive:(bool)arg1;
- (void)setAirPlayGroupUID:(id)arg1;
- (void)setAirPlayReceivers:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setClusterAware:(bool)arg1;
- (void)setClusterID:(id)arg1;
- (void)setClusterLeaderID:(id)arg1;
- (void)setClusterType:(unsigned int)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDeviceClass:(long long)arg1;
- (void)setDeviceUID:(id)arg1;
- (void)setGroupLeader:(bool)arg1;
- (void)setGroupLogicalDeviceCount:(unsigned long long)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupUID:(id)arg1;
- (void)setGroupedDeviceCount:(unsigned long long)arg1;
- (void)setGroupedDevices:(id)arg1;
- (void)setHasAirPlayActive:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasGroupLeader:(bool)arg1;
- (void)setHasGroupLogicalDeviceCount:(bool)arg1;
- (void)setHasGroupedDeviceCount:(bool)arg1;
- (void)setHasPairingAllowed:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setHasProxyGroupPlayer:(bool)arg1;
- (void)setHasSharedQueueVersion:(bool)arg1;
- (void)setHasSupportsACL:(bool)arg1;
- (void)setHasSupportsExtendedMotion:(bool)arg1;
- (void)setHasSupportsMultiplayer:(bool)arg1;
- (void)setHasSupportsSharedQueue:(bool)arg1;
- (void)setHasSupportsSystemPairing:(bool)arg1;
- (void)setHasTightSyncGroup:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLinkAgent:(id)arg1;
- (void)setLocalReceiverPairingIdentity:(id)arg1;
- (void)setLocalizedModelName:(id)arg1;
- (void)setManagedConfigurationDeviceIdentifier:(id)arg1;
- (void)setModelID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairingAllowed:(bool)arg1;
- (void)setProtocolVersion:(unsigned long long)arg1;
- (void)setProxyGroupPlayer:(bool)arg1;
- (void)setRoutingContextID:(id)arg1;
- (void)setSenderDefaultGroupUID:(id)arg1;
- (void)setSharedQueueVersion:(unsigned long long)arg1;
- (void)setSupportsACL:(bool)arg1;
- (void)setSupportsExtendedMotion:(bool)arg1;
- (void)setSupportsMultiplayer:(bool)arg1;
- (void)setSupportsSharedQueue:(bool)arg1;
- (void)setSupportsSystemPairing:(bool)arg1;
- (void)setSystemBooksApplication:(id)arg1;
- (void)setSystemMediaApplication:(id)arg1;
- (void)setSystemPodcastApplication:(id)arg1;
- (void)setTightSyncGroup:(bool)arg1;
- (void)setTightSyncUID:(id)arg1;
- (unsigned long long)sharedQueueVersion;
- (id)skeleton;
- (bool)supportsACL;
- (bool)supportsExtendedMotion;
- (bool)supportsImplicitChangeShuffleAndRepeatModeInSetPlaybackQueueCommandOptions;
- (bool)supportsMultiplayer;
- (bool)supportsSharedQueue;
- (bool)supportsSystemPairing;
- (id)systemBooksApplication;
- (id)systemMediaApplication;
- (id)systemPodcastApplication;
- (id)tightSyncUID;

@end
