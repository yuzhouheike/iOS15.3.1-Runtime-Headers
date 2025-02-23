/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechRequest : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _accessoryID;
    NSAttributedString * _attributedText;
    unsigned int  _audioSessionID;
    bool  _canUseServerTTS;
    NSString * _clientBundleIdentifier;
    NSDictionary * _contextInfo;
    NSArray * _customResourceURLs;
    bool  _disableCompactVoiceFallback;
    long long  _footprint;
    bool  _forceServerTTS;
    long long  _gender;
    NSString * _languageCode;
    NSURL * _outputPath;
    id /* block */  _pauseHandler;
    double  _pitch;
    long long  _pointer;
    double  _rate;
    unsigned long long  _requestCreatedTimestamp;
    NSURL * _resourceListURL;
    NSURL * _resourceSearchPathURL;
    bool  _retryDeviceOnNetworkStall;
    bool  _shouldCache;
    bool  _shouldStreamAudioData;
    bool  _shouldWaitCurrentSpeaking;
    bool  _shouldWhisper;
    NSUUID * _siriRequestId;
    id /* block */  _stopHandler;
    NSString * _text;
    NSString * _utterance;
    NSString * _voiceName;
    long long  _voiceType;
    double  _volume;
}

@property (nonatomic, copy) NSUUID *accessoryID;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) bool canUseServerTTS;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) NSDictionary *contextInfo;
@property (nonatomic, retain) NSArray *customResourceURLs;
@property (nonatomic) bool disableCompactVoiceFallback;
@property (nonatomic) long long footprint;
@property (nonatomic) bool forceServerTTS;
@property (nonatomic) long long gender;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic, copy) id /* block */ pauseHandler;
@property (nonatomic) double pitch;
@property (nonatomic) long long pointer;
@property (nonatomic) double rate;
@property (nonatomic) unsigned long long requestCreatedTimestamp;
@property (nonatomic, copy) NSURL *resourceListURL;
@property (nonatomic, copy) NSURL *resourceSearchPathURL;
@property (nonatomic) bool retryDeviceOnNetworkStall;
@property (nonatomic) bool shouldCache;
@property (nonatomic) bool shouldStreamAudioData;
@property (nonatomic) bool shouldWaitCurrentSpeaking;
@property (nonatomic) bool shouldWhisper;
@property (nonatomic, retain) NSUUID *siriRequestId;
@property (nonatomic, copy) id /* block */ stopHandler;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *utterance;
@property (nonatomic, copy) NSString *voiceName;
@property (nonatomic) long long voiceType;
@property (nonatomic) double volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryID;
- (id)attributedText;
- (unsigned int)audioSessionID;
- (bool)canLogRequestText;
- (bool)canUseServerTTS;
- (id)clientBundleIdentifier;
- (id)contextInfo;
- (id)contextInfoString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customResourceURLs;
- (id)description;
- (bool)disableCompactVoiceFallback;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (bool)forceServerTTS;
- (long long)gender;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSimilarTo:(id)arg1;
- (id)languageCode;
- (id)logText;
- (id)logUtterance;
- (id)outputPath;
- (id /* block */)pauseHandler;
- (double)pitch;
- (long long)pointer;
- (double)rate;
- (unsigned long long)requestCreatedTimestamp;
- (id)resourceListURL;
- (id)resourceSearchPathURL;
- (bool)retryDeviceOnNetworkStall;
- (void)setAccessoryID:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setCanUseServerTTS:(bool)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setContextInfo:(id)arg1;
- (void)setCustomResourceURLs:(id)arg1;
- (void)setDisableCompactVoiceFallback:(bool)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setForceServerTTS:(bool)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setPauseHandler:(id /* block */)arg1;
- (void)setPitch:(double)arg1;
- (void)setPointer:(long long)arg1;
- (void)setRate:(double)arg1;
- (void)setRequestCreatedTimestamp:(unsigned long long)arg1;
- (void)setResourceListURL:(id)arg1;
- (void)setResourceSearchPathURL:(id)arg1;
- (void)setRetryDeviceOnNetworkStall:(bool)arg1;
- (void)setShouldCache:(bool)arg1;
- (void)setShouldStreamAudioData:(bool)arg1;
- (void)setShouldWaitCurrentSpeaking:(bool)arg1;
- (void)setShouldWhisper:(bool)arg1;
- (void)setSiriRequestId:(id)arg1;
- (void)setStopHandler:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (void)setUtterance:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (void)setVoiceType:(long long)arg1;
- (void)setVolume:(double)arg1;
- (bool)shouldCache;
- (bool)shouldStreamAudioData;
- (bool)shouldWaitCurrentSpeaking;
- (bool)shouldWhisper;
- (id)siriRequestId;
- (id /* block */)stopHandler;
- (id)text;
- (id)utterance;
- (id)voiceName;
- (long long)voiceType;
- (double)volume;

@end
