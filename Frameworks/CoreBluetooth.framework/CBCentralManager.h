/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCentralManager : CBManager {
    <CBCentralManagerDelegate> * _delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didDiscoverPeripheral : 1; 
        unsigned int didConnectPeripheral : 1; 
        unsigned int didFailToConnectPeripheral : 1; 
        unsigned int didDisconnectPeripheral : 1; 
        unsigned int didUpdatePeripheralConnectionState : 1; 
        unsigned int didFindPeripheral : 1; 
        unsigned int didLosePeripheral : 1; 
        unsigned int didLoseZone : 1; 
        unsigned int didUpdateConnectionParameters : 1; 
        unsigned int connectionEventDidOccur : 1; 
        unsigned int didSendBytesToPeripheralWithError : 1; 
        unsigned int didReceiveDataFromPeripheral : 1; 
        unsigned int didDiscoverMultiplePeripherals : 1; 
        unsigned int didUpdateANCSAuthorizationForPeripheral : 1; 
        unsigned int canSendDataToPeripheral : 1; 
        unsigned int didFailToStartScanWithError : 1; 
        unsigned int didUpdateControllerBTClockForPeripheral : 1; 
        unsigned int didUpdateMTUForPeripheral : 1; 
        unsigned int didUpdateRSSIStatisticsDetectionForPeripheral : 1; 
    }  _delegateFlags;
    NSMutableArray * _discoveredPeripherals;
    bool  _isScanning;
    bool  _observingKeyPaths;
    NSMapTable * _peripherals;
}

@property (nonatomic) <CBCentralManagerDelegate> *delegate;
@property (retain) NSMutableArray *discoveredPeripherals;
@property (nonatomic) bool isScanning;
@property (nonatomic, readonly, retain) NSMapTable *peripherals;

+ (bool)supportsFeatures:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)HandleControllerBTClockUpdateMsg:(id)arg1;
- (void)HandleRssiDetectionUpdateMsg:(id)arg1;
- (void)addAdvancedMatchingRule:(id)arg1;
- (void)addIRKwithBTAddress:(id)arg1 irk:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 force:(bool)arg2;
- (void)cancelPeripheralConnection:(id)arg1 options:(id)arg2;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)createOfflineLEPairing:(unsigned short)arg1;
- (id)createPeripheralWithAddress:(id)arg1 andIdentifier:(id)arg2;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteDevice:(id)arg1;
- (id)discoveredPeripherals;
- (void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2;
- (void)enablePrivateModeForSessionWithIdentifier:(id)arg1 forDuration:(unsigned short)arg2;
- (void)forEachPeripheral:(id /* block */)arg1;
- (id)getLPEMData:(id)arg1;
- (unsigned short)getRemainingAdvancedMatchingRule;
- (unsigned short)getTotalSupportedAdvancedMatchingRules;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleAncsAuthChanged:(id)arg1;
- (void)handleApplicationActivityEvent:(id)arg1;
- (void)handleApplicationConnectionEventDidOccur:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleDidReceiveDataFromPeripheral:(id)arg1;
- (void)handleDidSendBytesToPeripheralwithError:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePeerMTUChanged:(id)arg1;
- (void)handlePeripheralCLReady:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralTrackingUpdated:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleScanFailedToStartWithError:(id)arg1;
- (void)handleSupportedFeatures:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)isApplicationConnectedToAnyPeripherals:(id)arg1;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (bool)isScanning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanPeripherals;
- (void)pauseLeConnectionManager;
- (void)pauseScans;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (id)peripherals;
- (void)randomizeAFHMapForPeripheral:(id)arg1;
- (void)registerForConnectionEventsWithOptions:(id)arg1;
- (void)removeAdvancedMatchingRule:(id)arg1;
- (void)removeIRKwithBTAddress:(id)arg1;
- (void)removeMultipleEntriesDuplicateFilter:(id)arg1;
- (void)removeSingleEntryDuplicateFilter:(id)arg1;
- (void)resumeLeConnectionManager;
- (void)resumeScans;
- (id)retrieveAddressForPeripheral:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(bool)arg2;
- (void)retrieveConnectedPeripheralsWithServices:(id)arg1 completion:(id /* block */)arg2;
- (id)retrieveConnectingPeripherals;
- (unsigned short)retrieveMaxConnectionForUsecase:(long long)arg1;
- (id)retrievePairingInfoForPeripheral:(id)arg1;
- (id)retrievePeripheralWithAddress:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)retrievePeripheralsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)retrieveState;
- (id)retrieveWhbCBPeripheralWithInfo:(id)arg1;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)sendData:(id)arg1 toPeripheral:(id)arg2;
- (void)setConnectionEventOptions:(id)arg1;
- (void)setDataLengthChange:(id)arg1 options:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)setDiscoveredPeripherals:(id)arg1;
- (void)setEnhancedScanEnable:(id)arg1;
- (void)setEnhancedSetScanParamtersMultiCore:(id)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setLESetPhy:(id)arg1 options:(id)arg2;
- (void)setLeAFHMap:(id)arg1;
- (void)setMatchActionRules:(id)arg1;
- (void)setRSSIStatisticsDetection:(id)arg1 options:(id)arg2;
- (id)startConnectionEventCounterForPeripheral:(id)arg1;
- (void)startTrackingPeripheral:(id)arg1 options:(id)arg2;
- (id)stopConnectionEventCounterForPeripheral:(id)arg1;
- (void)stopScan;
- (void)stopTrackingPeripheral:(id)arg1 options:(id)arg2;
- (void)wipeDuplicateFilterList:(id)arg1;

@end
