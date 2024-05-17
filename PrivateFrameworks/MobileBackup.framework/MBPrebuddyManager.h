/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBPrebuddyManager : NSObject <MBManagerDelegate> {
    MBManagerClient * _managerClient;
}

@property (nonatomic) NSObject<MBManagerDelegate> *delegate;
@property (retain) MBManagerClient *managerClient;
@property (getter=isPrebuddyMode, nonatomic, readonly) bool prebuddyMode;

+ (id)backupToCloudImageName;
+ (id)baseFollowupItem;
+ (id)sharedManager;
+ (id)twoDeviceImageName;

- (void).cxx_destruct;
- (void)beginPrebuddyBackupFromManualSignal:(bool)arg1;
- (bool)beginPrebuddyBackupFromManualSignal:(bool)arg1 error:(id*)arg2;
- (void)cancelPrebuddy;
- (id)dateOfLastBackup;
- (id)delegate;
- (void)extendPrebuddy:(id)arg1 completion:(id /* block */)arg2;
- (void)followupAction:(id /* block */)arg1;
- (id)init;
- (void)isPrebuddyBackupInProgress:(id /* block */)arg1;
- (bool)isPrebuddyMode;
- (id)managerClient;
- (void)prebuddyBackupDeleted:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManagerClient:(id)arg1;
- (void)shortenPrebuddyExpiration;
- (void)signalPrebuddy:(id)arg1;
- (void)turnOnBackup;
- (void)updateFollowUp;

@end
