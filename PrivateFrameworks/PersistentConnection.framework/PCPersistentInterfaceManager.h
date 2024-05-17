/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate> {
    NSString * _WWANInterfaceName;
    struct __CFSet { } * _WiFiAutoAssociationDelegates;
    PCSimpleTimer * _WiFiAutoAssociationDisableTimer;
    CoreTelephonyClient * _ctClient;
    bool  _ctIsWWANInHomeCountry;
    void * _ctServerConnection;
    CTXPCServiceSubscriptionContext * _currentDataSimContext;
    NSMapTable * _delegatesAndQueues;
    bool  _hasWWANStatusIndicator;
    NSTimer * _inCallWWANOverrideTimer;
    void * _interfaceAssertion;
    bool  _isInCall;
    bool  _isPowerStateDetectionSupported;
    bool  _isWWANInterfaceActivationPermitted;
    bool  _isWWANInterfaceDataActive;
    bool  _isWWANInterfaceInProlongedHighPowerState;
    bool  _isWWANInterfaceSuspended;
    bool  _isWWANInterfaceUp;
    bool  _isWakeOnWiFiEnabled;
    bool  _isWakeOnWiFiSupported;
    double  _lastActivationTime;
    NSRecursiveLock * _lock;
    struct __CFSet { } * _wakeOnWiFiDelegates;
    PCSimpleTimer * _wakeOnWiFiDisableTimer;
}

@property (nonatomic, readonly) NSString *WWANInterfaceName;
@property (nonatomic, readonly) bool allowBindingToWWAN;
@property (readonly) bool areAllNetworkInterfacesDisabled;
@property (nonatomic, readonly) NSString *currentLinkQualityString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool doesWWANInterfaceExist;
@property (nonatomic, readonly) bool hasWWANStatusIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) bool isInCall;
@property (nonatomic, readonly) bool isInternetReachable;
@property (nonatomic, readonly) bool isInternetReachableViaWiFi;
@property (readonly) bool isPowerStateDetectionSupported;
@property (nonatomic, readonly) bool isWWANBetterThanWiFi;
@property (nonatomic, readonly) bool isWWANInHomeCountry;
@property (readonly) bool isWWANInterfaceActivationPermitted;
@property (readonly) bool isWWANInterfaceInProlongedHighPowerState;
@property (nonatomic, readonly) bool isWWANInterfaceSuspended;
@property (nonatomic, readonly) bool isWWANInterfaceUp;
@property (nonatomic, readonly) bool isWakeOnWiFiSupported;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)WWANInterfaceName;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWakeOnWiFiLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_createCTConnection;
- (void)_ctConnectionAttempt;
- (void)_inCallWWANOverrideTimerFired;
- (bool)_isCellularCall:(struct __CTCall { }*)arg1;
- (bool)_isCurrentDataSimContextLocked:(id)arg1;
- (bool)_isInternetReachableLocked;
- (bool)_isWWANInHomeCountryLocked;
- (bool)_isWiFiUsable;
- (void)_mainThreadCTConnectionAttempt;
- (id)_nonCellularMonitor;
- (void)_processCallStatusChanged:(id)arg1;
- (void)_processConnectionStatusLocked:(id)arg1;
- (void)_processCurrentDataSimChangedLocked:(id)arg1;
- (void)_processDataStatusLocked:(id)arg1;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_updateCTIsWWANInHomeCountry:(bool)arg1 isWWANInterfaceDataActive:(bool)arg2;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (bool)_wantsWWANInterfaceAssertion;
- (bool)_wantsWakeOnWiFiEnabled;
- (bool)_wifiIsPoorLinkQuality;
- (bool)_wwanIsPoorLinkQuality;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (bool)allowBindingToWWAN;
- (bool)areAllNetworkInterfacesDisabled;
- (void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (void)currentDataSimChanged:(id)arg1;
- (id)currentLinkQualityString;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)dealloc;
- (bool)doesWWANInterfaceExist;
- (void)enableWakeOnWiFi:(bool)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(bool)arg1 forDelegate:(id)arg2;
- (void)handleMachMessage:(void*)arg1;
- (bool)hasWWANStatusIndicator;
- (id)init;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (bool)isInCall;
- (bool)isInternetReachable;
- (bool)isInternetReachableViaWiFi;
- (bool)isPowerStateDetectionSupported;
- (bool)isWWANBetterThanWiFi;
- (bool)isWWANInHomeCountry;
- (bool)isWWANInterfaceActivationPermitted;
- (bool)isWWANInterfaceInProlongedHighPowerState;
- (bool)isWWANInterfaceSuspended;
- (bool)isWWANInterfaceUp;
- (bool)isWakeOnWiFiSupported;
- (void)removeDelegate:(id)arg1;

@end
