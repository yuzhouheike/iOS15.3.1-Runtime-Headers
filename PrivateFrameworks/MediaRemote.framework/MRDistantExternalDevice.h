/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRDistantExternalDevice : MRExternalDevice <MRAVDistantExternalDeviceClientProtocol> {
    unsigned long long  _callbacks;
    unsigned int  _connectionState;
    id /* block */  _connectionStateCallback;
    NSObject<OS_dispatch_queue> * _connectionStateCallbackQueue;
    id /* block */  _customDataCallback;
    NSObject<OS_dispatch_queue> * _customDataCallbackQueue;
    MROrigin * _customOrigin;
    unsigned long long  _deviceNotifications;
    id /* block */  _discoveryOutputDevicesCallback;
    MRAVDistantExternalDeviceMetadata * _externalDeviceMetadata;
    bool  _hasEverAttemptedToConnect;
    bool  _hasEverAtteptedToConnectWhileInvalid;
    NSXPCConnection * _hostedExternalDeviceConnection;
    NSNumber * _isPaired;
    bool  _isValid;
    id /* block */  _nameCallback;
    NSObject<OS_dispatch_queue> * _nameCallbackQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSArray * _subscribedPlayerPaths;
    NSString * _uid;
    id /* block */  _volumeCallback;
    NSObject<OS_dispatch_queue> * _volumeCallbackQueue;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (nonatomic, readonly) unsigned long long callbacks;
@property (nonatomic, copy) id /* block */ connectionStateCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue;
@property (nonatomic, copy) id /* block */ customDataCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *customDataCallbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEverAttemptedToConnect;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, copy) id /* block */ nameCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nameCallbackQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ volumeCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *volumeCallbackQueue;

+ (id)clientInterface;
+ (id)serviceInterface;

- (void).cxx_destruct;
- (void)_handleDeviceInfoDidChange:(id)arg1;
- (unsigned long long)callbacks;
- (void)connectWithOptions:(unsigned int)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3;
- (unsigned int)connectionState;
- (id /* block */)connectionStateCallback;
- (id)connectionStateCallbackQueue;
- (id /* block */)customDataCallback;
- (id)customDataCallbackQueue;
- (id)customOrigin;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)deviceInfo;
- (void)disconnect:(id)arg1;
- (void)discoveryOutputDevicesChanged:(id)arg1 forConfiguration:(id)arg2;
- (bool)hasEverAttemptedToConnect;
- (id)hostName;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
- (void)hostedExternalDeviceEndpoint:(id)arg1 didAddOutputDevice:(id)arg2;
- (void)hostedExternalDeviceEndpoint:(id)arg1 didChangeOutputDevice:(id)arg2;
- (void)hostedExternalDeviceEndpoint:(id)arg1 didRemoveOutputDevice:(id)arg2;
- (void)hostedExternalDeviceEndpoint:(id)arg1 volumeCapabilitiesDidChange:(unsigned int)arg2 forOutputDevice:(id)arg3;
- (void)hostedExternalDeviceEndpoint:(id)arg1 volumeDidChange:(float)arg2 forOutputDevice:(id)arg3;
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;
- (void)hostedExternalDeviceNameDidChange:(id)arg1;
- (id)initWithExternalDeviceListenerEndpoint:(id)arg1;
- (bool)isPaired;
- (bool)isUsingSystemPairing;
- (bool)isValid;
- (id)listenerEndpoint;
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(id /* block */)arg8;
- (id)name;
- (id /* block */)nameCallback;
- (id)nameCallbackQueue;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)personalOutputDevices;
- (void)ping:(double)arg1 callback:(id /* block */)arg2 withQueue:(id)arg3;
- (long long)port;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)setConnectionStateCallback:(id /* block */)arg1;
- (void)setConnectionStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallbackQueue:(id)arg1;
- (void)setCustomDataCallback:(id /* block */)arg1;
- (void)setCustomDataCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallbackQueue:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;
- (void)setDiscoveryOutputDevicesChangedCallback:(id /* block */)arg1;
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setNameCallback:(id /* block */)arg1;
- (void)setNameCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setNameCallbackQueue:(id)arg1;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setPairingAllowedCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setSubscribedPlayerPaths:(id)arg1;
- (void)setVolumeCallback:(id /* block */)arg1;
- (void)setVolumeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setVolumeCallbackQueue:(id)arg1;
- (void)setWantsEndpointChangeNotifications:(bool)arg1;
- (void)setWantsNowPlayingArtworkNotifications:(bool)arg1;
- (void)setWantsNowPlayingNotifications:(bool)arg1;
- (void)setWantsOutputDeviceNotifications:(bool)arg1;
- (void)setWantsSystemEndpointNotifications:(bool)arg1;
- (void)setWantsVolumeNotifications:(bool)arg1;
- (id)subscribedPlayerPaths;
- (id)supportedMessages;
- (id)uid;
- (void)unpair;
- (id /* block */)volumeCallback;
- (id)volumeCallbackQueue;
- (bool)wantsEndpointChangeNotifications;
- (bool)wantsNowPlayingArtworkNotifications;
- (bool)wantsNowPlayingNotifications;
- (bool)wantsOutputDeviceNotifications;
- (bool)wantsSystemEndpointNotifications;
- (bool)wantsVolumeNotifications;

@end
