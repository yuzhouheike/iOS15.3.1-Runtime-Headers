/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVLocalOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {
    <AVOutputDeviceImplSupport> * _implSupportEventListener;
}

@property (nonatomic, readonly) long long HAPConformance;
@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) NSDictionary *airPlayProperties;
@property (nonatomic, readonly) bool allowsHeadTrackedSpatialAudio;
@property (nonatomic, readonly) bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSArray *availableBluetoothListeningModes;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) bool canAccessAppleMusic;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (nonatomic, readonly) bool canAccessiCloudMusicLibrary;
@property (nonatomic, readonly) bool canBeGroupLeader;
@property (nonatomic, readonly) bool canBeGrouped;
@property (nonatomic, readonly) bool canCommunicateWithAllLogicalDeviceMembers;
@property (nonatomic, readonly) bool canFetchMediaDataFromSender;
@property (nonatomic, readonly) bool canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic, readonly) bool canRelayCommunicationChannel;
@property (readonly) bool canSetVolume;
@property (nonatomic, readonly) NSNumber *caseBatteryLevel;
@property (nonatomic, readonly) NSString *clusterID;
@property (nonatomic, readonly) long long clusterType;
@property (nonatomic, readonly) NSArray *clusteredDeviceDescriptions;
@property (nonatomic, readonly) long long configuredClusterSize;
@property (nonatomic, readonly, copy) NSArray *connectedPairedDevices;
@property (nonatomic, readonly) NSString *currentBluetoothListeningMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceFeatures;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, readonly) bool groupContainsGroupLeader;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (getter=isHeadTrackedSpatialAudioActive, nonatomic, readonly) bool headTrackedSpatialAudioActive;
@property (nonatomic, readonly) NSString *headTrackedSpatialAudioMode;
@property (nonatomic, readonly, copy) NSData *identifyingMACAddress;
@property <AVOutputDeviceImplSupport> *implEventListener;
@property (getter=isInUseByPairedDevice, nonatomic, readonly) bool inUseByPairedDevice;
@property (nonatomic, readonly) bool isClusterLeader;
@property (nonatomic, readonly) bool isGroupLeader;
@property (nonatomic, readonly) NSNumber *isInEar;
@property (nonatomic, readonly) bool isLogicalDeviceLeader;
@property (nonatomic, readonly) NSNumber *leftBatteryLevel;
@property (nonatomic, readonly) NSString *logicalDeviceID;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) bool participatesInGroupPlayback;
@property (nonatomic, readonly) bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly) bool producesLowFidelityAudio;
@property (nonatomic, readonly, copy) NSString *proposedGroupID;
@property (nonatomic, readonly) bool requiresAuthorization;
@property (nonatomic, readonly) NSNumber *rightBatteryLevel;
@property (nonatomic, readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBluetoothSharing;
@property (nonatomic, readonly) bool supportsBufferedAirPlay;
@property (nonatomic, readonly) NSNumber *supportsDataOverACLProtocol;
@property (nonatomic, readonly) bool supportsHeadTrackedSpatialAudio;
@property (readonly) float volume;
@property (readonly) long long volumeControlType;

- (void).cxx_destruct;
- (long long)HAPConformance;
- (id)ID;
- (id)airPlayProperties;
- (bool)allowsHeadTrackedSpatialAudio;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (id)availableBluetoothListeningModes;
- (id)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canCommunicateWithAllLogicalDeviceMembers;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (bool)canSetVolume;
- (id)caseBatteryLevel;
- (id)clusterID;
- (long long)clusterType;
- (id)clusteredDeviceDescriptions;
- (void)configureUsingBlock:(id /* block */)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)configuredClusterSize;
- (id)connectedPairedDevices;
- (id)currentBluetoothListeningMode;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (unsigned long long)hash;
- (id)headTrackedSpatialAudioMode;
- (id)identifyingMACAddress;
- (id)implEventListener;
- (bool)isClusterLeader;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isHeadTrackedSpatialAudioActive;
- (id)isInEar;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (id)leftBatteryLevel;
- (id)logicalDeviceID;
- (id)manufacturer;
- (id)modelID;
- (id)name;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (bool)participatesInGroupPlayback;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)producesLowFidelityAudio;
- (id)proposedGroupID;
- (bool)requiresAuthorization;
- (id)rightBatteryLevel;
- (id)serialNumber;
- (bool)setAllowsHeadTrackedSpatialAudio:(bool)arg1 error:(id*)arg2;
- (bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2;
- (bool)setHeadTrackedSpatialAudioMode:(id)arg1 error:(id*)arg2;
- (void)setImplEventListener:(id)arg1;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setSecondDisplayMode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setVolume:(float)arg1;
- (bool)supportsBluetoothSharing;
- (bool)supportsBufferedAirPlay;
- (id)supportsDataOverACLProtocol;
- (bool)supportsHeadTrackedSpatialAudio;
- (float)volume;
- (long long)volumeControlType;

@end
