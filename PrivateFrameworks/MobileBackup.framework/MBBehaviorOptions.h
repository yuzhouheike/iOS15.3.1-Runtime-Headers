/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBBehaviorOptions : NSObject {
    NSMutableDictionary * _cachedPrefs;
    NSObject<OS_dispatch_queue> * _cachedPrefsQueue;
    MBConnection * _conn;
    bool  _flushLogMessages;
    bool  _warnForLateiTunesBackups;
}

@property (nonatomic) bool backupFromLocalSnapshot;
@property (nonatomic, retain) NSMutableDictionary *cachedPrefs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (nonatomic, copy) NSString *cloudKitContainerName;
@property (nonatomic, retain) MBConnection *conn;
@property (nonatomic) bool flushLogMessages;
@property (nonatomic) bool keepDailySnapshots;
@property (nonatomic) long long manifestPageSize;
@property (nonatomic) long long maxBatchCount;
@property (nonatomic, readonly) long long maxBatchFetchAssetSize;
@property (nonatomic, readonly) long long maxBatchSaveAssetSize;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic, copy) NSString *minimumBuildVersionForFullBackup;
@property (nonatomic) long long recordSaveAttempts;
@property (nonatomic) bool snapshotAfterForegroundRestore;
@property (nonatomic) int sqlBatchCount;
@property (nonatomic) double sqlBatchTime;
@property (nonatomic) bool sqlTrace;
@property (nonatomic) bool useABC;
@property (nonatomic) bool useBackgroundOperationsForBackup;
@property (nonatomic, readonly) bool usePowerLog;
@property (nonatomic) bool warnForLateiTunesBackups;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (double)SQLiteSpaceSavingsThresholdWithDefaultValue:(double)arg1;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_getBoolOptionForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (bool)backupFromLocalSnapshot;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (id)cloudKitContainerName;
- (id)conn;
- (bool)enableSQLiteArchivingWithDefaultValue:(bool)arg1;
- (bool)fixOwnershipOnFileScanWithDefaultValue:(bool)arg1;
- (bool)flushLogMessages;
- (id)init;
- (bool)keepDailySnapshots;
- (long long)manifestPageSize;
- (long long)maxBatchCount;
- (int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1;
- (long long)maxBatchFetchAssetSize;
- (int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:(int)arg1;
- (long long)maxBatchSaveAssetSize;
- (int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1;
- (long long)maxBatchSize;
- (id)minimumBuildVersionForFullBackup;
- (long long)recordSaveAttempts;
- (void)setBackupFromLocalSnapshot:(bool)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCloudKitContainerName:(id)arg1;
- (void)setConn:(id)arg1;
- (void)setFlushLogMessages:(bool)arg1;
- (void)setKeepDailySnapshots:(bool)arg1;
- (void)setManifestPageSize:(long long)arg1;
- (void)setMaxBatchCount:(long long)arg1;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMinimumBuildVersionForFullBackup:(id)arg1;
- (void)setRecordSaveAttempts:(long long)arg1;
- (void)setSQLTrace:(bool)arg1;
- (void)setSnapshotAfterForegroundRestore:(bool)arg1;
- (void)setSqlBatchCount:(int)arg1;
- (void)setSqlBatchTime:(double)arg1;
- (void)setUseABC:(bool)arg1;
- (void)setUseBackgroundOperationsForBackup:(bool)arg1;
- (void)setUsePowerLog:(bool)arg1;
- (void)setWarnForLateiTunesBackups:(bool)arg1;
- (void)setmaxBatchFetchAssetSize:(long long)arg1;
- (void)setmaxBatchSaveAssetSize:(long long)arg1;
- (bool)snapshotAfterForegroundRestore;
- (int)sqlBatchCount;
- (double)sqlBatchTime;
- (bool)sqlTrace;
- (bool)useABC;
- (bool)useBackgroundOperationsForBackup;
- (bool)usePowerLog;
- (int)validateFileEncodingWithDefaultValue:(int)arg1;
- (bool)validateSignatureOnRestoreWithDefaultValue:(bool)arg1;
- (bool)warnForLateiTunesBackups;

@end
