/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVExternalDevice : NSObject {
    AVExternalDeviceInternal * _externalDevice;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSData *MFiCertificateSerialNumber;
@property (nonatomic, readonly) NSData *OEMIcon;
@property (nonatomic, readonly) NSString *OEMIconLabel;
@property (nonatomic, readonly) bool OEMIconVisible;
@property (nonatomic, readonly) NSArray *OEMIcons;
@property (nonatomic) <AVExternalDeviceDelegate> *delegate;
@property (nonatomic, readonly) long long electronicTollCollection;
@property (nonatomic, readonly) NSArray *externalDeviceHIDs;
@property (nonatomic, readonly) bool limitedUI;
@property (nonatomic, readonly) NSArray *limitedUIElements;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long navigationAidedDriving;
@property (nonatomic, readonly) bool nightMode;
@property (nonatomic, readonly) bool nightModeSupported;
@property (nonatomic, readonly) bool ownsScreen;
@property (nonatomic, readonly) bool ownsTurnByTurnNavigation;
@property (nonatomic, readonly) bool recognizingSpeech;
@property (nonatomic, readonly) bool rightHandDrive;
@property (nonatomic, readonly) NSArray *screenIDs;
@property (nonatomic, readonly) NSDictionary *screenInputCapabilities;
@property (nonatomic, readonly) NSDictionary *screenPrimaryInputDevices;
@property (nonatomic, readonly) NSDictionary *screenSafeAreas;
@property (nonatomic, readonly) NSDictionary *screenViewAreas;
@property (nonatomic, readonly) NSArray *supportedFeatures;
@property (nonatomic, readonly) long long transportType;

+ (id)currentCarPlayExternalDevice;
+ (id)currentExternalDevice;
+ (id)sharedLocalDevice;

- (id)ID;
- (id)MFiCertificateSerialNumber;
- (id)OEMIcon;
- (id)OEMIconLabel;
- (bool)OEMIconVisible;
- (id)OEMIcons;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (id)_screenInfo;
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;
- (id)_weakReference;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (long long)electronicTollCollection;
- (id)externalDeviceHIDWithUUID:(id)arg1;
- (id)externalDeviceHIDs;
- (struct OpaqueFigEndpoint { }*)figEndpoint;
- (id)init;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (bool)limitedUI;
- (id)limitedUIElements;
- (id)modelName;
- (id)name;
- (long long)navigationAidedDriving;
- (bool)nightMode;
- (bool)nightModeSupported;
- (bool)ownsScreen;
- (bool)ownsTurnByTurnNavigation;
- (bool)recognizingSpeech;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestCarUIForURL:(id)arg1 withUUID:(id)arg2;
- (id)requestTurnByTurnNavigationOwnership;
- (void)requestViewArea:(long long)arg1 forScreenID:(id)arg2;
- (bool)rightHandDrive;
- (id)screenIDs;
- (id)screenInputCapabilities;
- (id)screenPrimaryInputDevices;
- (id)screenSafeAreas;
- (id)screenViewAreas;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)supportedFeatures;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;
- (long long)transportType;

@end
