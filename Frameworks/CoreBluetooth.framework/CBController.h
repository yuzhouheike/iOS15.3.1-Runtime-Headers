/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBController : NSObject <CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBXPCReceivable, CUXPCCodable> {
    bool  _activateAssertionCalled;
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    unsigned int  _assertionFlags;
    long long  _bluetoothState;
    id /* block */  _bluetoothStateChangedHandler;
    bool  _changesPending;
    unsigned int  _clientID;
    bool  _direct;
    int  _discoverableState;
    id /* block */  _discoverableStateChangedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    int  _inquiryState;
    id /* block */  _inquiryStateChangedHandler;
    unsigned int  _internalFlags;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    id /* block */  _relayMessageHandler;
    NSObject<OS_xpc_object> * _testListenerEndpoint;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSObject<OS_xpc_object> * _xpcCnx;
}

@property (nonatomic) unsigned int assertionFlags;
@property (nonatomic, readonly) long long bluetoothState;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, readonly) int discoverableState;
@property (nonatomic, copy) id /* block */ discoverableStateChangedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, readonly) int inquiryState;
@property (nonatomic, copy) id /* block */ inquiryStateChangedHandler;
@property (nonatomic) unsigned int internalFlags;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ relayMessageHandler;
@property (nonatomic, retain) NSObject<OS_xpc_object> *testListenerEndpoint;

+ (bool)bluetoothModificationAllowed;
+ (id)controllerInfoAndReturnError:(id*)arg1;
+ (id)controllerInfoWithEndpoint:(id)arg1 error:(id*)arg2;
+ (unsigned int)featureFlags;
+ (id)performDeviceRequest:(id)arg1 device:(id)arg2 error:(id*)arg3;
+ (id)performDeviceRequest:(id)arg1 device:(id)arg2 xpcEndpoint:(id)arg3 error:(id*)arg4;
+ (id)readPrefKeys:(id)arg1 error:(id*)arg2;
+ (bool)safeToPowerOffBluetooth;
+ (bool)setBluetoothModificationAllowed:(bool)arg1 error:(id*)arg2;
+ (void)setOfflineAdvertisingParams:(id)arg1;
+ (bool)systemHasOnlyBluetoothPointingDevices;
+ (bool)writePrefKey:(id)arg1 value:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activateAssertionWithFlagsDirect:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_activateAssertionWithFlagsXPC:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_activateDirectStart;
- (void)_activateXPCCompleted:(id)arg1;
- (void)_activateXPCStart:(bool)arg1;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateDirect;
- (void)_invalidated;
- (void)_update;
- (void)_updateIfNeededWithBlock:(id /* block */)arg1;
- (void)_xpcReceivedDiscoverableStateChanged:(id)arg1;
- (void)_xpcReceivedInquiryStateChanged:(id)arg1;
- (void)_xpcReceivedMessage:(id)arg1;
- (void)_xpcReceivedPowerStateChanged:(id)arg1;
- (void)_xpcReceivedRelayMessage:(id)arg1;
- (void)activateAssertionWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)assertionFlags;
- (long long)bluetoothState;
- (id /* block */)bluetoothStateChangedHandler;
- (unsigned int)clientID;
- (void)dealloc;
- (void)deleteDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)diagnosticControl:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticLog:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticShow:(id)arg1 completion:(id /* block */)arg2;
- (int)discoverableState;
- (id /* block */)discoverableStateChangedHandler;
- (id)dispatchQueue;
- (void)encodeWithXPCObject:(id)arg1;
- (id /* block */)errorHandler;
- (void)getControllerInfoWithCompletion:(id /* block */)arg1;
- (void)getControllerSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)getDevicesWithFlags:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)getPowerStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (int)inquiryState;
- (id /* block */)inquiryStateChangedHandler;
- (unsigned int)internalFlags;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)modifyControllerSettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)modifyDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)modifyDevice:(id)arg1 connectionPriorityDevices:(id)arg2 timeoutSeconds:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)modifyDevice:(id)arg1 peerSourceDevice:(id)arg2 peerSourceState:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)modifyDevice:(id)arg1 peerSourceDevice:(id)arg2 peerSourceState:(BOOL)arg3 requestFlags:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (void)modifyDevice:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (void)performDeviceRequest:(id)arg1 device:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)relayMessageHandler;
- (void)sendRelayMessageType:(unsigned char)arg1 messageData:(id)arg2 conduitDevice:(id)arg3 destinationDevice:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setAssertionFlags:(unsigned int)arg1;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setDiscoverableStateChangedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInquiryStateChangedHandler:(id /* block */)arg1;
- (void)setInternalFlags:(unsigned int)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setLowPowerModeWithReason:(int)arg1 completion:(id /* block */)arg2;
- (bool)setLowPowerModeWithReason:(int)arg1 error:(id*)arg2;
- (void)setPowerState:(long long)arg1 completion:(id /* block */)arg2;
- (void)setRelayMessageHandler:(id /* block */)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (id)testListenerEndpoint;
- (void)updateIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcReceivedMessage:(id)arg1;

@end
