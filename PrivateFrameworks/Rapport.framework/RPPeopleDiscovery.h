/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface> {
    bool  _activateCalled;
    unsigned int  _changeFlags;
    NSMutableDictionary * _discoveredPeople;
    unsigned int  _discoveryFlags;
    int  _discoveryMode;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    int  _peopleDensity;
    id /* block */  _peopleDensityChangedHandler;
    id /* block */  _personChangedHandler;
    id /* block */  _personFoundHandler;
    id /* block */  _personLostHandler;
    NSSet * _rangingPeople;
    NSMutableSet * _rangingPersonIDs;
    NSObject<OS_dispatch_source> * _retryTimer;
    id /* block */  _statusChangedHandler;
    unsigned int  _statusFlags;
    bool  _targetUserSession;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, readonly, copy) NSArray *discoveredPeople;
@property (nonatomic) unsigned int discoveryFlags;
@property (nonatomic) int discoveryMode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) int peopleDensity;
@property (nonatomic, copy) id /* block */ peopleDensityChangedHandler;
@property (nonatomic, copy) id /* block */ personChangedHandler;
@property (nonatomic, copy) id /* block */ personFoundHandler;
@property (nonatomic, copy) id /* block */ personLostHandler;
@property (nonatomic, copy) NSSet *rangingPeople;
@property (nonatomic, copy) id /* block */ statusChangedHandler;
@property (nonatomic, readonly) unsigned int statusFlags;
@property (nonatomic) bool targetUserSession;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (bool)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(id /* block */)arg1;
- (void)_lostAllPeople;
- (void)_scheduleRetry;
- (void)_updatePeopleDensity:(unsigned long long)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addAppleID:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)changeFlags;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)discoveredPeople;
- (unsigned int)discoveryFlags;
- (int)discoveryMode;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)peopleDensity;
- (id /* block */)peopleDensityChangedHandler;
- (id /* block */)personChangedHandler;
- (id /* block */)personFoundHandler;
- (id /* block */)personLostHandler;
- (id)rangingPeople;
- (void)removeAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDiscoveryFlags:(unsigned int)arg1;
- (void)setDiscoveryMode:(int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPeopleDensityChangedHandler:(id /* block */)arg1;
- (void)setPersonChangedHandler:(id /* block */)arg1;
- (void)setPersonFoundHandler:(id /* block */)arg1;
- (void)setPersonLostHandler:(id /* block */)arg1;
- (void)setRangingPeople:(id)arg1;
- (void)setStatusChangedHandler:(id /* block */)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (id /* block */)statusChangedHandler;
- (unsigned int)statusFlags;
- (bool)targetUserSession;
- (void)xpcPeopleStatusChanged:(unsigned int)arg1;
- (void)xpcPersonChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonFound:(id)arg1;
- (void)xpcPersonID:(id)arg1 deviceID:(id)arg2 updatedMeasurement:(id)arg3;
- (void)xpcPersonLost:(id)arg1;

@end
