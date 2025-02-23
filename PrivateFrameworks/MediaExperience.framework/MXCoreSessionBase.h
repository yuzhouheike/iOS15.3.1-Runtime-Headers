/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

@interface MXCoreSessionBase : NSObject {
    NSNumber * _ID;
    NSString * _audioCategory;
    NSString * _audioMode;
    unsigned int  _audioSessionID;
    NSString * _clientName;
    NSNumber * _clientPID;
    int  _coreSessionType;
    NSString * _displayID;
    float  _interruptionFadeDuration;
    bool  _isActive;
    bool  _isPlaying;
    bool  _isRecording;
    bool  _isTheAssistant;
    unsigned long long  _mxSessionIDCounter;
    NSMutableArray * _originalReporterIDs;
    NSMutableArray * _reporterIDs;
    bool  _reporterStarted;
    NSString * _routingContextUUID;
}

@property (nonatomic, retain) NSNumber *ID;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSNumber *clientPID;
@property (nonatomic) int coreSessionType;
@property (nonatomic, retain) NSString *displayID;
@property (nonatomic) float interruptionFadeDuration;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isTheAssistant;
@property (nonatomic) unsigned long long mxSessionIDCounter;
@property (nonatomic, retain) NSMutableArray *originalReporterIDs;
@property (nonatomic, retain) NSMutableArray *reporterIDs;
@property (nonatomic) bool reporterStarted;
@property (nonatomic, retain) NSString *routingContextUUID;

- (id)ID;
- (id)audioCategory;
- (id)audioMode;
- (unsigned int)audioSessionID;
- (id)clientName;
- (id)clientPID;
- (int)coreSessionType;
- (void)dealloc;
- (id)displayID;
- (id)info;
- (id)init;
- (float)interruptionFadeDuration;
- (bool)isActive;
- (bool)isPlaying;
- (bool)isRecording;
- (bool)isSidekick;
- (bool)isTheAssistant;
- (unsigned long long)mxSessionIDCounter;
- (id)originalReporterIDs;
- (id)reporterIDs;
- (bool)reporterStarted;
- (id)routingContextUUID;
- (int)setAudioCategory:(id)arg1;
- (int)setAudioMode:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setClientName:(id)arg1;
- (void)setClientPID:(id)arg1;
- (void)setCoreSessionType:(int)arg1;
- (void)setDisplayID:(id)arg1;
- (void)setID:(id)arg1;
- (void)setInterruptionFadeDuration:(float)arg1;
- (void)setIsActive:(bool)arg1;
- (int)setIsPlaying:(bool)arg1;
- (int)setIsRecording:(bool)arg1;
- (void)setIsTheAssistant:(bool)arg1;
- (void)setMxSessionIDCounter:(unsigned long long)arg1;
- (void)setOriginalReporterIDs:(id)arg1;
- (void)setReporterIDs:(id)arg1;
- (void)setReporterStarted:(bool)arg1;
- (void)setRoutingContextUUID:(id)arg1;

@end
