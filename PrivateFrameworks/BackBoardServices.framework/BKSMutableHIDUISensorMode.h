/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSMutableHIDUISensorMode : BKSHIDUISensorMode

@property (nonatomic) bool alwaysOnGesturesEnabled;
@property (nonatomic) unsigned long long changeSource;
@property (nonatomic) bool coverGestureEnabled;
@property (nonatomic) bool digitizerEnabled;
@property (nonatomic) bool estimatedProximityMode;
@property (nonatomic, copy) NSSet *multitouchHostStateKeys;
@property (nonatomic) bool pocketTouchesExpected;
@property (nonatomic) bool postEventWithCurrentDetectionMask;
@property (nonatomic) int proximityDetectionMode;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) bool tapToWakeEnabled;
@property (nonatomic) long long versionedPID;

- (void)_setSettingKey:(id)arg1 enabled:(bool)arg2;
- (id)initWithReason:(id)arg1;
- (void)setAlwaysOnGesturesEnabled:(bool)arg1;
- (void)setChangeSource:(unsigned long long)arg1;
- (void)setCoverGestureEnabled:(bool)arg1;
- (void)setDigitizerEnabled:(bool)arg1;
- (void)setEstimatedProximityMode:(bool)arg1;
- (void)setMultitouchHostStateKeys:(id)arg1;
- (void)setPocketTouchesExpected:(bool)arg1;
- (void)setPostEventWithCurrentDetectionMask:(bool)arg1;
- (void)setProximityDetectionMode:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setTapToWakeEnabled:(bool)arg1;
- (void)setVersionedPID:(long long)arg1;

@end
