/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationInternalClient : NSObject {
    NSXPCConnection * _connection;
}

+ (id)sharedServiceClient;

- (id)applyArchivedAuthorizationDecisions:(id)arg1;
- (bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned char)clearLocationAuthorizations;
- (unsigned char)compassCalibrationDatabaseGetBias:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; int x2; }*)arg1 magneticField:(struct { float x1; float x2; float x3; })arg2 acceleration:(struct { float x1; float x2; float x3; })arg3;
- (unsigned char)compassCalibrationDatabaseSetBias:(struct { float x1; float x2; float x3; })arg1 magneticField:(struct { float x1; float x2; float x3; })arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (unsigned char)configure:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; unsigned char x7; float x8; BOOL x9; unsigned short x10; })arg1;
- (id)connection;
- (const struct __CFArray { }*)copyActivityAlarms;
- (const struct __CFDictionary { }*)copyAppsUsingLocation;
- (const struct __CFArray { }*)copyGnssBandsInUse;
- (unsigned char)copyLastLog;
- (const struct __CFString { }*)copyMicroLocationInternalVersion;
- (const struct __CFDictionary { }*)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString { }*)arg1 orBundlePath:(const struct __CFString { }*)arg2;
- (const struct __CFDictionary { }*)copyNearbyAssetSettings;
- (const struct __CFDictionary { }*)copyNearbyAssetSettingsOfAccessoryFile:(const struct __CFString { }*)arg1;
- (const struct __CFArray { }*)copyTechnologiesInUse;
- (const struct __CFDictionary { }*)copyZaxisStats;
- (unsigned char)deleteCurrentEmergencyLocationAsset;
- (bool)deleteInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(id*)arg4;
- (unsigned char)displayStatistics;
- (unsigned char)dumpLogs:(const struct __CFString { }*)arg1;
- (id)getAccessoryMotionSensorLogs;
- (int)getAccessoryTypeBitSet;
- (id)getArchivedAuthorizationDecisionsWithError:(id*)arg1;
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;
- (unsigned char)getAuthorizationStatus:(int*)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3;
- (unsigned char)getControlPlaneStatusReportClear:(int)arg1 startTime:(double*)arg2 endTime:(double*)arg3 latitude:(double*)arg4 longitude:(double*)arg5 altitude:(double*)arg6 accuracy:(double*)arg7 status:(unsigned int*)arg8;
- (unsigned char)getEmergencyLocationSettingsCompatibilityVersion:(int*)arg1 andContentVersion:(int*)arg2;
- (unsigned char)getGestureServiceEnabled:(char *)arg1;
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString { }*)arg1 orBundlePath:(const struct __CFString { }*)arg2 location:(id)arg3 groundAltitude:(struct { double x1; double x2; double x3; int x4; }*)arg4;
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(struct { int x1; double x2; double x3; union { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_4_1_1; struct { bool x_2_2_1; BOOL x_2_2_2[282]; } x_4_1_2; } x4; }*)arg1 atTemperature:(float)arg2;
- (unsigned char)getGyroCalibrationDatabaseNumTemperatures:(int*)arg1;
- (unsigned char)getIncidentalUseMode:(int*)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3;
- (const void*)getLocationDefaultForKey:(const struct __CFString { }*)arg1;
- (unsigned char)getLocationForBundleID:(const struct __CFString { }*)arg1 orBundlePath:(const struct __CFString { }*)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; }*)arg5;
- (unsigned char)getLocationServicesEnabled:(char *)arg1;
- (id)getMotionSensorLogs;
- (id)getPipelinedCache;
- (unsigned char)getPrecisionPermission:(char *)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3;
- (unsigned char)getPrivateMode;
- (unsigned char)getStatusBarIconEnabled:(bool*)arg1 forEntityClass:(unsigned int)arg2;
- (int)getStatusBarIconState;
- (id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id*)arg3;
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int*)arg1;
- (unsigned char)gyroCalibrationDatabaseWipe;
- (unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(struct { float x1; float x2; float x3; })arg1 temperature:(float)arg2 variance:(struct { float x1; float x2; float x3; })arg3 timestamp:(double)arg4;
- (double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3;
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;
- (unsigned char)performMigration;
- (unsigned char)pingDaemon;
- (bool)registerCircularInterestZoneWithId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(id)arg7 orBundlePath:(id)arg8 error:(id*)arg9;
- (bool)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(id)arg5 orBundlePath:(id)arg6 error:(id*)arg7;
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const struct __CFString { }*)arg3 orBundlePath:(const struct __CFString { }*)arg4;
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(const struct __CFString { }*)arg3 forBundleID:(const struct __CFString { }*)arg4 orBundlePath:(const struct __CFString { }*)arg5;
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString { }*)arg1 orBundlePath:(const struct __CFString { }*)arg2 enabled:(unsigned char)arg3;
- (void)setGestureServiceEnabled:(unsigned char)arg1;
- (unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3;
- (void)setLocationDefaultForKey:(const struct __CFString { }*)arg1 value:(const void*)arg2;
- (void)setLocationServicesEnabled:(unsigned char)arg1;
- (void)setMapMatchingRouteHint:(struct { unsigned long long x1; double x2; double x3; double x4; double x5; }*)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4;
- (void)setPrivateMode:(unsigned char)arg1;
- (bool)setRelevance:(bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleId:(id)arg3 orBundlePath:(id)arg4 error:(id*)arg5;
- (unsigned char)setStatusBarIconEnabled:(bool)arg1 forEntityClass:(unsigned int)arg2;
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3 orAuditToken:(struct { unsigned int x1[8]; })arg4 byLocationButton:(unsigned char)arg5 voiceInteractionEnabled:(unsigned char)arg6;
- (id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3;
- (unsigned char)shouldDisplayEEDUI;
- (unsigned char)shutdownDaemon;
- (bool)startStopAdvertisingBeacon:(id)arg1 power:(id)arg2;
- (id)synchronousRemoteObject;
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long*)arg1 oscarTimeStamp:(unsigned long long*)arg2;
- (id)timeZoneAtLocation:(id)arg1;
- (id)triggerExpiredAuthorizationPurgeOnClientManager;
- (unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1;

@end
