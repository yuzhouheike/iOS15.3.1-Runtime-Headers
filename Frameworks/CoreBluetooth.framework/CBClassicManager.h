/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBClassicManager : CBManager {
    id /* block */  _classicPeerDiscovered;
    id /* block */  _connectCallback;
    bool  _connectable;
    id /* block */  _connectionStatusHandler;
    id /* block */  _disconnectCallback;
    bool  _discoverable;
    id /* block */  _inquiryServiceAddedHandler;
    bool  _inquiryState;
    bool  _isInquiryRunning;
    id /* block */  _pairingStatusHandler;
    NSMapTable * _peers;
    long long  _powerState;
    id /* block */  _sdpRecordAddedHandler;
    id /* block */  _serviceAddedHandler;
    bool  _testMode;
}

@property (copy) id /* block */ classicPeerDiscovered;
@property (copy) id /* block */ connectCallback;
@property (readonly) bool connectable;
@property (copy) id /* block */ connectionStatusHandler;
@property (copy) id /* block */ disconnectCallback;
@property (readonly) bool discoverable;
@property (copy) id /* block */ inquiryServiceAddedHandler;
@property (readonly) bool inquiryState;
@property (nonatomic, readonly) bool isInquiryRunning;
@property (copy) id /* block */ pairingStatusHandler;
@property (nonatomic, readonly, retain) NSMapTable *peers;
@property (readonly) long long powerState;
@property (copy) id /* block */ sdpRecordAddedHandler;
@property (copy) id /* block */ serviceAddedHandler;
@property (nonatomic) bool testMode;

- (void).cxx_destruct;
- (void)addAACPClient:(unsigned short)arg1 aacpClientAdded:(id /* block */)arg2;
- (void)addService:(id)arg1;
- (void)addService:(id)arg1 sdpRecord:(id)arg2 sdpRecordAddedHandler:(id /* block */)arg3;
- (void)addServiceToInquiryList:(id)arg1;
- (unsigned int)addServiceWithData:(id)arg1;
- (void)alertUserNotificationIsReady;
- (void)cancelPeerConnection:(id)arg1;
- (void)cancelPeerConnection:(id)arg1 force:(bool)arg2;
- (void)cancelPeerConnection:(id)arg1 options:(id)arg2;
- (id /* block */)classicPeerDiscovered;
- (id)classicPeerWithInfo:(id)arg1;
- (id /* block */)connectCallback;
- (void)connectPeer:(id)arg1 options:(id)arg2;
- (bool)connectable;
- (id /* block */)connectionStatusHandler;
- (void)dealloc;
- (id /* block */)disconnectCallback;
- (bool)discoverable;
- (void)forEachClassicPeer:(id /* block */)arg1;
- (id)getLocalSDPDatabase;
- (void)handleLocalDeviceStateUpdatedMsg:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePeerConnectionCompleted:(id)arg1;
- (void)handlePeerConnectionStateUpdated:(id)arg1;
- (void)handlePeerDisconnectionCompleted:(id)arg1;
- (void)handlePeerDiscovered:(id)arg1;
- (void)handleSDPRecordAdded:(id)arg1;
- (void)handleServiceAddedToInquiryList:(id)arg1;
- (void)handleServiceAddedToSDP:(id)arg1;
- (id)initWithQueue:(id)arg1 options:(id)arg2;
- (id /* block */)inquiryServiceAddedHandler;
- (bool)inquiryState;
- (bool)isInquiryRunning;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanClassicPeers;
- (id /* block */)pairingStatusHandler;
- (id)peerWithIdentifier:(id)arg1;
- (id)peerWithInfo:(id)arg1;
- (id)peers;
- (long long)powerState;
- (void)removeAACPClient:(unsigned short)arg1;
- (void)removeAllServices;
- (void)removeAllServicesFromInquiryList;
- (void)removeService:(id)arg1;
- (void)removeServiceFromInquiryList:(id)arg1;
- (void)removeServiceHandle:(unsigned int)arg1;
- (id)retrievePairedPeersWithOptions:(id)arg1;
- (id)retrievePeerWithAddress:(id)arg1;
- (id /* block */)sdpRecordAddedHandler;
- (bool)secureBluetooth:(bool)arg1 withAuthData:(id)arg2;
- (id /* block */)serviceAddedHandler;
- (void)setBTConnectable:(bool)arg1;
- (void)setBTDiscoverable:(bool)arg1;
- (bool)setBTPowerState:(bool)arg1;
- (void)setClassicPeerDiscovered:(id /* block */)arg1;
- (void)setConnectCallback:(id /* block */)arg1;
- (void)setConnectionStatusHandler:(id /* block */)arg1;
- (void)setDisconnectCallback:(id /* block */)arg1;
- (void)setInquiryServiceAddedHandler:(id /* block */)arg1;
- (void)setPairingStatusHandler:(id /* block */)arg1;
- (void)setSdpRecordAddedHandler:(id /* block */)arg1;
- (void)setServiceAddedHandler:(id /* block */)arg1;
- (void)setTestMode:(bool)arg1;
- (void)startInquiryWithOptions:(id)arg1 classicPeerDiscovered:(id /* block */)arg2;
- (void)stopInquiry;
- (bool)testMode;

@end
