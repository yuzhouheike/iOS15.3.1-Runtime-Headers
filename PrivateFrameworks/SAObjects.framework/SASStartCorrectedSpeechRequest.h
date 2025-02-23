/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (nonatomic) long long combinedRank;
@property (nonatomic) double combinedScore;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic) bool onDeviceUtterancesPresent;
@property (nonatomic) long long originalRank;
@property (nonatomic) double originalScore;
@property (nonatomic, copy) NSString *previousUtterance;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *utteranceSource;

+ (id)startCorrectedSpeechRequest;
+ (id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (long long)combinedRank;
- (double)combinedScore;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (bool)onDeviceUtterancesPresent;
- (long long)originalRank;
- (double)originalScore;
- (id)previousUtterance;
- (bool)requiresResponse;
- (id)sessionId;
- (void)setCombinedRank:(long long)arg1;
- (void)setCombinedScore:(double)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setOnDeviceUtterancesPresent:(bool)arg1;
- (void)setOriginalRank:(long long)arg1;
- (void)setOriginalScore:(double)arg1;
- (void)setPreviousUtterance:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setUtteranceSource:(id)arg1;
- (id)utteranceSource;

@end
