/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVControlCenterModuleState : NSObject {
    long long  _activeMicrophoneMode;
    NSString * _activeMicrophoneModeKey;
    bool  _auVoiceIOBypassVoiceProcessing;
    NSString * _auVoiceIOBypassVoiceProcessingKey;
    long long  _backgroundBlurControlMode;
    NSString * _backgroundBlurControlModeKey;
    bool  _backgroundBlurEnabled;
    NSString * _backgroundBlurEnabledKey;
    bool  _backgroundBlurSupported;
    NSString * _backgroundBlurUnavailableReasonsKey;
    NSString * _bundleID;
    long long  _centerStageControlMode;
    NSString * _centerStageControlModeKey;
    bool  _centerStageEnabled;
    NSString * _centerStageEnabledKey;
    bool  _centerStageSupported;
    NSString * _centerStageUnavailableReasonsKey;
    bool  _holdingStateLock;
    bool  _isOptedInForBackgroundBlur;
    bool  _isVOIPApp;
    bool  _micModesSupported;
    long long  _microphoneMode;
    NSString * _microphoneModeKey;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    NSArray * _supportedMicrophoneModes;
    NSString * _supportedMicrophoneModesKey;
}

@property (getter=isActive, readonly) bool active;
@property bool backgroundBlurSupported;
@property bool centerStageSupported;
@property bool micModesSupported;

+ (id)moduleStateForBundleID:(id)arg1 micModesSupported:(bool)arg2;

- (void)_proprietaryDefaultChanged:(id)arg1 keyPath:(id)arg2 context:(void*)arg3;
- (long long)activeMicrophoneMode;
- (bool)backgroundBlurSupported;
- (bool)centerStageSupported;
- (long long)controlModeForVideoEffect:(id)arg1;
- (void)dealloc;
- (id)initForBundleID:(id)arg1 micModesSupported:(bool)arg2;
- (bool)isActive;
- (bool)isEnabledForVideoEffect:(id)arg1;
- (bool)micModesSupported;
- (long long)microphoneMode;
- (void)setBackgroundBlurSupported:(bool)arg1;
- (void)setCenterStageSupported:(bool)arg1;
- (bool)setEnabled:(bool)arg1 forVideoEffect:(id)arg2;
- (void)setMicModesSupported:(bool)arg1;
- (bool)setMicrophoneMode:(long long)arg1;
- (id)supportedMicrophoneModes;
- (bool)supportsVideoEffect:(id)arg1;
- (unsigned long long)unavailableReasonsForVideoEffect:(id)arg1;
- (bool)voiceProcessingBypassed;

@end
