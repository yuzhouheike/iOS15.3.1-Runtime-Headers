/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFRequestInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _activationEvent;
    NSNumber * _combinedRank;
    NSNumber * _combinedScore;
    NSString * _correctedSpeech;
    NSDictionary * _correctedSpeechContext;
    NSString * _directActionAppId;
    long long  _directActionEvent;
    unsigned long long  _expectedSpeakerConfidenceScore;
    NSString * _expectedSpeakerSharedUserID;
    NSString * _handoffNotification;
    NSString * _handoffOriginDeviceName;
    NSData * _handoffRequestData;
    bool  _handoffRequiresUserInteraction;
    NSString * _handoffURLString;
    NSString * _interactionId;
    NSString * _legacyDirectActionIdentifier;
    NSDictionary * _nonspeakerConfidenceScores;
    NSNumber * _notifyState;
    NSNumber * _onDeviceUtterancesPresent;
    unsigned long long  _options;
    NSNumber * _originalRank;
    NSNumber * _originalScore;
    NSString * _previousUtterance;
    AFRequestCompletionOptions * _requestCompletionOptions;
    NSString * _sessionId;
    AFSpeechRequestOptions * _speechRequestOptions;
    SAStartLocalRequest * _startLocalRequest;
    SAStartRequest * _startRequest;
    AFTestRequestOptions * _testRequestOptions;
    NSString * _text;
    unsigned long long  _timestamp;
    NSUUID * _turnIdentifier;
    NSString * _utteranceSource;
    NSUUID * _uuid;
}

@property (nonatomic) long long activationEvent;
@property (nonatomic, copy) NSNumber *combinedRank;
@property (nonatomic, copy) NSNumber *combinedScore;
@property (nonatomic, copy) NSString *correctedSpeech;
@property (nonatomic, copy) NSDictionary *correctedSpeechContext;
@property (nonatomic, copy) NSString *directActionAppId;
@property (nonatomic) long long directActionEvent;
@property (nonatomic) unsigned long long expectedSpeakerConfidenceScore;
@property (nonatomic, copy) NSString *expectedSpeakerSharedUserID;
@property (nonatomic, copy) NSString *handoffNotification;
@property (nonatomic, copy) NSString *handoffOriginDeviceName;
@property (nonatomic, copy) NSData *handoffRequestData;
@property (nonatomic) bool handoffRequiresUserInteraction;
@property (nonatomic, copy) NSString *handoffURLString;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSString *legacyDirectActionIdentifier;
@property (nonatomic, copy) NSDictionary *nonspeakerConfidenceScores;
@property (nonatomic, copy) NSNumber *notifyState;
@property (nonatomic, copy) NSNumber *onDeviceUtterancesPresent;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSNumber *originalRank;
@property (nonatomic, copy) NSNumber *originalScore;
@property (nonatomic, copy) NSString *previousUtterance;
@property (nonatomic, copy) AFRequestCompletionOptions *requestCompletionOptions;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) AFSpeechRequestOptions *speechRequestOptions;
@property (nonatomic, copy) SAStartLocalRequest *startLocalRequest;
@property (nonatomic, copy) SAStartRequest *startRequest;
@property (nonatomic, copy) AFTestRequestOptions *testRequestOptions;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, copy) NSUUID *turnIdentifier;
@property (nonatomic, copy) NSString *utteranceSource;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;
+ (id)testRequestWithStartLocalRequest:(id)arg1;
+ (id)testRequestWithText:(id)arg1 speechRequestOptions:(id)arg2 testOptions:(id)arg3;

- (void).cxx_destruct;
- (long long)activationEvent;
- (id)combinedRank;
- (id)combinedScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedSpeech;
- (id)correctedSpeechContext;
- (id)description;
- (id)directActionAppId;
- (long long)directActionEvent;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedSpeakerConfidenceScore;
- (id)expectedSpeakerSharedUserID;
- (id)handoffNotification;
- (id)handoffOriginDeviceName;
- (id)handoffRequestData;
- (bool)handoffRequiresUserInteraction;
- (id)handoffURLString;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1;
- (id)interactionId;
- (bool)isSpeechRequest;
- (id)legacyDirectActionIdentifier;
- (id)nonspeakerConfidenceScores;
- (id)notifyState;
- (id)onDeviceUtterancesPresent;
- (unsigned long long)options;
- (id)originalRank;
- (id)originalScore;
- (id)previousUtterance;
- (id)requestCompletionOptions;
- (bool)requiresUserInteraction;
- (id)sessionId;
- (void)setActivationEvent:(long long)arg1;
- (void)setCombinedRank:(id)arg1;
- (void)setCombinedScore:(id)arg1;
- (void)setCorrectedSpeech:(id)arg1;
- (void)setCorrectedSpeechContext:(id)arg1;
- (void)setDirectActionAppId:(id)arg1;
- (void)setDirectActionEvent:(long long)arg1;
- (void)setExpectedSpeakerConfidenceScore:(unsigned long long)arg1;
- (void)setExpectedSpeakerSharedUserID:(id)arg1;
- (void)setHandoffNotification:(id)arg1;
- (void)setHandoffOriginDeviceName:(id)arg1;
- (void)setHandoffRequestData:(id)arg1;
- (void)setHandoffRequiresUserInteraction:(bool)arg1;
- (void)setHandoffURLString:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setLegacyDirectActionIdentifier:(id)arg1;
- (void)setNonspeakerConfidenceScores:(id)arg1;
- (void)setNotifyState:(id)arg1;
- (void)setOnDeviceUtterancesPresent:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setOriginalRank:(id)arg1;
- (void)setOriginalScore:(id)arg1;
- (void)setPreviousUtterance:(id)arg1;
- (void)setRequestCompletionOptions:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSpeechRequestOptions:(id)arg1;
- (void)setStartLocalRequest:(id)arg1;
- (void)setStartRequest:(id)arg1;
- (void)setTestRequestOptions:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTurnIdentifier:(id)arg1;
- (void)setUtteranceSource:(id)arg1;
- (id)speechRequestOptions;
- (id)startLocalRequest;
- (id)startRequest;
- (id)testRequestOptions;
- (id)text;
- (unsigned long long)timestamp;
- (id)turnIdentifier;
- (id)utteranceSource;
- (id)uuid;

@end
