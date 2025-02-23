/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSLocalDefaults : BSAbstractDefaultDomain {
    bool  _disableStudyLogALSLogging;
    bool  _disableStudyLogAccelerometerLogging;
    bool  _disableStudyLogGyroLogging;
}

@property (nonatomic) float ALSDelayOnUnlock;
@property (getter=isALSEnabled, nonatomic) bool ALSEnabled;
@property (nonatomic) long long ALSEpoch;
@property (nonatomic, retain) NSDictionary *ALSUserPreferences;
@property (nonatomic) int brightnessCurve;
@property (getter=isDigitizerSignpostsEnabled, nonatomic) bool digitizerSignpostsEnabled;
@property (nonatomic) bool digitizerVisualizeHitTestRegions;
@property (nonatomic) bool digitizerVisualizeTouches;
@property (nonatomic) bool disableCAOverscan;
@property (nonatomic) bool disableCAScaling;
@property (nonatomic) bool disableCAYUV;
@property (nonatomic) bool disableCloneMirroring;
@property (nonatomic) bool disableStudyLogALSLogging;
@property (nonatomic) bool disableStudyLogAccelerometerLogging;
@property (nonatomic) bool disableStudyLogBTKeyboardEventLogging;
@property (nonatomic) bool disableStudyLogBTKeyboardEventRedirection;
@property (nonatomic) bool disableStudyLogButtonLogging;
@property (nonatomic) bool disableStudyLogCameraKeyLogging;
@property (nonatomic) bool disableStudyLogGyroLogging;
@property (nonatomic) bool disableStudyLogHomeButtonLogging;
@property (nonatomic) bool disableStudyLogPowerButtonLogging;
@property (nonatomic) bool disableStudyLogVolumeKeyLogging;
@property (getter=isDitheringEnabled, nonatomic) bool ditheringEnabled;
@property (nonatomic) bool forceCloneMirroring;
@property (nonatomic) NSString *forceMirroredOrientation;
@property (nonatomic, retain) NSData *globalMouseDevicePreferences;
@property (nonatomic) bool hideAppleLogoOnLaunch;
@property (nonatomic) bool ignoreAccelerometerAndOrientationEvents;
@property (nonatomic) bool ignoreTetheringPreferences;
@property (nonatomic) NSArray *loggingTypesEnabled;
@property (nonatomic) NSArray *mouseInterpolation;
@property (nonatomic) bool showBuildNumber;
@property (nonatomic) bool simulatePhoneButton;
@property (getter=isSteveNoteOverscanEnabled, nonatomic) bool steveNoteOverscanEnabled;
@property (getter=isSteveNoteRotationEnabled, nonatomic) bool steveNoteRotationEnabled;
@property (nonatomic) bool visualizeMousePointer;

- (void)_bindAndRegisterDefaults;
- (bool)disableStudyLogALSLogging;
- (bool)disableStudyLogAccelerometerLogging;
- (bool)disableStudyLogGyroLogging;
- (id)init;
- (void)migrateDefaultsIfNecessary;
- (void)setDisableStudyLogALSLogging:(bool)arg1;
- (void)setDisableStudyLogAccelerometerLogging:(bool)arg1;
- (void)setDisableStudyLogGyroLogging:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1 defaultValueProvider:(id /* block */)arg2;

@end
