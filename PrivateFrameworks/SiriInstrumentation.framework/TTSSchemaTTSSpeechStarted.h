/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface TTSSchemaTTSSpeechStarted : SISchemaInstrumentationMessage {
    int  _audioOutputRoute;
    float  _customerPerceivedLatencyInSecond;
    struct { 
        unsigned int audioOutputRoute : 1; 
        unsigned int customerPerceivedLatencyInSecond : 1; 
        unsigned int synthesisSource : 1; 
        unsigned int synthesisEffect : 1; 
    }  _has;
    bool  _hasVoiceContext;
    int  _synthesisEffect;
    int  _synthesisSource;
    TTSSchemaTTSVoiceContext * _voiceContext;
}

@property (nonatomic) int audioOutputRoute;
@property (nonatomic) float customerPerceivedLatencyInSecond;
@property (nonatomic) bool hasAudioOutputRoute;
@property (nonatomic) bool hasCustomerPerceivedLatencyInSecond;
@property (nonatomic) bool hasSynthesisEffect;
@property (nonatomic) bool hasSynthesisSource;
@property (nonatomic) bool hasVoiceContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) int synthesisSource;
@property (nonatomic, retain) TTSSchemaTTSVoiceContext *voiceContext;

- (void).cxx_destruct;
- (int)audioOutputRoute;
- (float)customerPerceivedLatencyInSecond;
- (id)dictionaryRepresentation;
- (bool)hasAudioOutputRoute;
- (bool)hasCustomerPerceivedLatencyInSecond;
- (bool)hasSynthesisEffect;
- (bool)hasSynthesisSource;
- (bool)hasVoiceContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioOutputRoute:(int)arg1;
- (void)setCustomerPerceivedLatencyInSecond:(float)arg1;
- (void)setHasAudioOutputRoute:(bool)arg1;
- (void)setHasCustomerPerceivedLatencyInSecond:(bool)arg1;
- (void)setHasSynthesisEffect:(bool)arg1;
- (void)setHasSynthesisSource:(bool)arg1;
- (void)setHasVoiceContext:(bool)arg1;
- (void)setSynthesisEffect:(int)arg1;
- (void)setSynthesisSource:(int)arg1;
- (void)setVoiceContext:(id)arg1;
- (int)synthesisEffect;
- (int)synthesisSource;
- (id)voiceContext;
- (void)writeTo:(id)arg1;

@end
