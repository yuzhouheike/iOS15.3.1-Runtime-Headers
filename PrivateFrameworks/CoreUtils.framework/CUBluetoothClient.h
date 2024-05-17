/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBluetoothClient : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate> {
    id /* block */  _bluetoothAddressChangedHandler;
    int  _bluetoothState;
    id /* block */  _bluetoothStateChangedHandler;
    struct { 
        int (*accessoryEvent)(); 
        int (*accessorySetupCommand)(); 
        int (*accessoryRelayMsgRecv)(); 
        int (*accessoryCommandStatus)(); 
    }  _btAccessoryCallbacks;
    bool  _btAccessoryEventsNeeded;
    bool  _btAccessoryEventsRegistered;
    struct BTAccessoryManagerImpl { } * _btAccessoryManager;
    NSData * _btAdvertisingAddress;
    CBCentralManager * _btCentralManager;
    bool  _btCentralManagerNeeded;
    NSMutableDictionary * _btConnectedDevices;
    bool  _btConnectionDevicesInitialized;
    bool  _btConnectionEventsNeeded;
    struct BTLocalDeviceImpl { } * _btLocalDevice;
    NSData * _btLocalDeviceAddr;
    bool  _btLocalDeviceAddrNeeded;
    struct { 
        int (*statusEvent)(); 
        int (*leTestStopped)(); 
        int (*afhMapChanged)(); 
    }  _btLocalDeviceCallbacks;
    bool  _btLocalDeviceCallbacksNeeded;
    bool  _btLocalDeviceCallbacksRegistered;
    NSMutableDictionary * _btPairedDevices;
    bool  _btPairedDevicesInitialized;
    struct BTPairingAgentImpl { } * _btPairingAgent;
    bool  _btPairingAgentNeeded;
    bool  _btPairingAgentStarted;
    CBPeripheralManager * _btPeripheralManager;
    bool  _btPeripheralManagerNeeded;
    struct BTSessionImpl { } * _btSession;
    bool  _btSessionAddedServiceCallback;
    bool  _btSessionAttaching;
    bool  _btSessionNeeded;
    bool  _btSessionStarted;
    id /* block */  _deviceConnectedHandler;
    id /* block */  _deviceDisconnectedHandler;
    id /* block */  _deviceEventHandler;
    id /* block */  _devicePairedHandler;
    id /* block */  _deviceUnpairedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _findDeviceRequests;
    unsigned int  _flags;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned int  _requiredServices;
    unsigned int  _statusFlags;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, copy) id /* block */ bluetoothAddressChangedHandler;
@property (nonatomic) int bluetoothState;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceConnectedHandler;
@property (nonatomic, copy) id /* block */ deviceDisconnectedHandler;
@property (nonatomic, copy) id /* block */ deviceEventHandler;
@property (nonatomic, copy) id /* block */ devicePairedHandler;
@property (nonatomic, copy) id /* block */ deviceUnpairedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int requiredServices;
@property (nonatomic) unsigned int statusFlags;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_btAccessoryNameChanged:(struct BTDeviceImpl { }*)arg1;
- (void)_btAccessoryPlacementChanged:(struct BTAccessoryManagerImpl { }*)arg1 device:(struct BTDeviceImpl { }*)arg2;
- (void)_btAccessoryStreamStateChanged:(int)arg1 device:(struct BTDeviceImpl { }*)arg2;
- (struct BTDeviceImpl { }*)_btDeviceWithID:(id)arg1 error:(id*)arg2;
- (void)_btEnsureStarted;
- (void)_btEnsureStopped;
- (id)_createCUBluetoothDeviceWithBTDevice:(struct BTDeviceImpl { }*)arg1;
- (void)_externalInvokeBlock:(id /* block */)arg1;
- (void)_findDeviceByAddress:(struct { unsigned char x1[6]; })arg1 completion:(id /* block */)arg2;
- (void)_handleBluetoothAddressChanged;
- (void)_handleConnectedDevicesInit;
- (void)_handleDeviceConnected:(struct BTDeviceImpl { }*)arg1;
- (void)_handleDeviceDisconnected:(struct BTDeviceImpl { }*)arg1 reason:(int)arg2;
- (void)_handleDeviceEvent:(unsigned int)arg1 device:(struct BTDeviceImpl { }*)arg2;
- (void)_handlePairingStatusChanged;
- (id)_internalDispatchQueue;
- (void)_invalidated;
- (void)_processFindDeviceRequests;
- (void)_setDeviceFlags:(unsigned int)arg1 mask:(unsigned int)arg2 deviceID:(id)arg3 completion:(id /* block */)arg4;
- (void)activate;
- (id /* block */)bluetoothAddressChangedHandler;
- (int)bluetoothState;
- (id /* block */)bluetoothStateChangedHandler;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id /* block */)deviceConnectedHandler;
- (id /* block */)deviceDisconnectedHandler;
- (id /* block */)deviceEventHandler;
- (id /* block */)devicePairedHandler;
- (id /* block */)deviceUnpairedHandler;
- (id)dispatchQueue;
- (void)findDeviceByAddress:(struct { unsigned char x1[6]; })arg1 completion:(id /* block */)arg2;
- (unsigned int)flags;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (unsigned int)requiredServices;
- (void)setBluetoothAddressChangedHandler:(id /* block */)arg1;
- (void)setBluetoothState:(int)arg1;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setDeviceConnectedHandler:(id /* block */)arg1;
- (void)setDeviceDisconnectedHandler:(id /* block */)arg1;
- (void)setDeviceEventHandler:(id /* block */)arg1;
- (void)setDeviceFlags:(unsigned int)arg1 mask:(unsigned int)arg2 deviceID:(id)arg3 completion:(id /* block */)arg4;
- (void)setDevicePairedHandler:(id /* block */)arg1;
- (void)setDeviceUnpairedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setRequiredServices:(unsigned int)arg1;
- (void)setStatusFlags:(unsigned int)arg1;
- (unsigned int)statusFlags;
- (void)updateDevice:(id)arg1 btDevice:(struct BTDeviceImpl { }*)arg2;
- (void)updateStatusFlags;

@end
