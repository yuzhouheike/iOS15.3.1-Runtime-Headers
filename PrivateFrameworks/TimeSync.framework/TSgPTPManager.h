/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPManager : NSObject {
    IOKConnection * _connection;
    IOKService * _service;
    TSgPTPClock * _systemDomain;
    unsigned long long  _systemDomainClockIdentifier;
    NSObject<OS_dispatch_queue> * _systemDomainQueue;
}

@property (nonatomic, readonly) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance0ClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance1ClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance2ClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance3ClockIdentifier;
@property (nonatomic, readonly) unsigned long long copresencePTPInstanceClockIdentifier;
@property (nonatomic, readonly, retain) TSgPTPClock *systemDomain;
@property (nonatomic, readonly) unsigned long long systemDomainClockIdentifier;

+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;
+ (id)diagnosticInfoForService:(id)arg1;
+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)arg1;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)addAVBDomainIndex:(unsigned short)arg1 identifier:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)addAVBPTPInstanceIndex:(unsigned short)arg1 identifier:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)addAirPlayPTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)addCopresencePTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)addDomain:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)addPTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)addTimeOfDayPTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (unsigned long long)airPlayPTPInstanceClockIdentifier;
- (unsigned long long)avbPTPInstance0ClockIdentifier;
- (unsigned long long)avbPTPInstance1ClockIdentifier;
- (unsigned long long)avbPTPInstance2ClockIdentifier;
- (unsigned long long)avbPTPInstance3ClockIdentifier;
- (unsigned long long)copresencePTPInstanceClockIdentifier;
- (void)dealloc;
- (id)init;
- (bool)removeAVBDomainWithIndex:(unsigned short)arg1 error:(id*)arg2;
- (bool)removeAVBPTPInstanceWithIndex:(unsigned short)arg1 error:(id*)arg2;
- (bool)removeAirPlayPTPInstanceWithError:(id*)arg1;
- (bool)removeCopresencePTPInstanceWithError:(id*)arg1;
- (bool)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removePTPInstanceWithIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (id)systemDomain;
- (unsigned long long)systemDomainClockIdentifier;

@end
