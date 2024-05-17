/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHEndpointDetected : SISchemaInstrumentationMessage {
    MHSchemaMHStatisticDistributionInfo * _asrFeatureLatencyDistribution;
    unsigned long long  _audioSkippedDurationInNs;
    bool  _derivedBufferTimeFromHistoricalAudio;
    unsigned long long  _endpointAudioDurationInNs;
    MHSchemaMHEndpointFeaturesAtEndpoint * _endpointFeaturesAtEndpoint;
    SISchemaVersion * _endpointModelConfigVersion;
    unsigned long long  _endpointResetPositionInNs;
    unsigned long long  _endpointedBufferTimeInNs;
    unsigned long long  _endpointerDecisionLagInNs;
    float  _endpointerScore;
    float  _endpointerThreshold;
    int  _endpointerType;
    unsigned long long  _extraDelayInNs;
    unsigned long long  _firstBufferTimeInNs;
    struct { 
        unsigned int endpointerType : 1; 
        unsigned int endpointAudioDurationInNs : 1; 
        unsigned int firstBufferTimeInNs : 1; 
        unsigned int endpointedBufferTimeInNs : 1; 
        unsigned int endpointerDecisionLagInNs : 1; 
        unsigned int extraDelayInNs : 1; 
        unsigned int derivedBufferTimeFromHistoricalAudio : 1; 
        unsigned int endpointerThreshold : 1; 
        unsigned int endpointerScore : 1; 
        unsigned int audioSkippedDurationInNs : 1; 
        unsigned int endpointResetPositionInNs : 1; 
    }  _has;
    bool  _hasAsrFeatureLatencyDistribution;
    bool  _hasEndpointFeaturesAtEndpoint;
    bool  _hasEndpointModelConfigVersion;
    bool  _hasTimeoutMetadata;
    MHSchemaMHEndpointerTimeoutMetadata * _timeoutMetadata;
}

@property (nonatomic, retain) MHSchemaMHStatisticDistributionInfo *asrFeatureLatencyDistribution;
@property (nonatomic) unsigned long long audioSkippedDurationInNs;
@property (nonatomic) bool derivedBufferTimeFromHistoricalAudio;
@property (nonatomic) unsigned long long endpointAudioDurationInNs;
@property (nonatomic, retain) MHSchemaMHEndpointFeaturesAtEndpoint *endpointFeaturesAtEndpoint;
@property (nonatomic, retain) SISchemaVersion *endpointModelConfigVersion;
@property (nonatomic) unsigned long long endpointResetPositionInNs;
@property (nonatomic) unsigned long long endpointedBufferTimeInNs;
@property (nonatomic) unsigned long long endpointerDecisionLagInNs;
@property (nonatomic) float endpointerScore;
@property (nonatomic) float endpointerThreshold;
@property (nonatomic) int endpointerType;
@property (nonatomic) unsigned long long extraDelayInNs;
@property (nonatomic) unsigned long long firstBufferTimeInNs;
@property (nonatomic) bool hasAsrFeatureLatencyDistribution;
@property (nonatomic) bool hasAudioSkippedDurationInNs;
@property (nonatomic) bool hasDerivedBufferTimeFromHistoricalAudio;
@property (nonatomic) bool hasEndpointAudioDurationInNs;
@property (nonatomic) bool hasEndpointFeaturesAtEndpoint;
@property (nonatomic) bool hasEndpointModelConfigVersion;
@property (nonatomic) bool hasEndpointResetPositionInNs;
@property (nonatomic) bool hasEndpointedBufferTimeInNs;
@property (nonatomic) bool hasEndpointerDecisionLagInNs;
@property (nonatomic) bool hasEndpointerScore;
@property (nonatomic) bool hasEndpointerThreshold;
@property (nonatomic) bool hasEndpointerType;
@property (nonatomic) bool hasExtraDelayInNs;
@property (nonatomic) bool hasFirstBufferTimeInNs;
@property (nonatomic) bool hasTimeoutMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHEndpointerTimeoutMetadata *timeoutMetadata;

- (void).cxx_destruct;
- (id)asrFeatureLatencyDistribution;
- (unsigned long long)audioSkippedDurationInNs;
- (bool)derivedBufferTimeFromHistoricalAudio;
- (id)dictionaryRepresentation;
- (unsigned long long)endpointAudioDurationInNs;
- (id)endpointFeaturesAtEndpoint;
- (id)endpointModelConfigVersion;
- (unsigned long long)endpointResetPositionInNs;
- (unsigned long long)endpointedBufferTimeInNs;
- (unsigned long long)endpointerDecisionLagInNs;
- (float)endpointerScore;
- (float)endpointerThreshold;
- (int)endpointerType;
- (unsigned long long)extraDelayInNs;
- (unsigned long long)firstBufferTimeInNs;
- (bool)hasAsrFeatureLatencyDistribution;
- (bool)hasAudioSkippedDurationInNs;
- (bool)hasDerivedBufferTimeFromHistoricalAudio;
- (bool)hasEndpointAudioDurationInNs;
- (bool)hasEndpointFeaturesAtEndpoint;
- (bool)hasEndpointModelConfigVersion;
- (bool)hasEndpointResetPositionInNs;
- (bool)hasEndpointedBufferTimeInNs;
- (bool)hasEndpointerDecisionLagInNs;
- (bool)hasEndpointerScore;
- (bool)hasEndpointerThreshold;
- (bool)hasEndpointerType;
- (bool)hasExtraDelayInNs;
- (bool)hasFirstBufferTimeInNs;
- (bool)hasTimeoutMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAsrFeatureLatencyDistribution:(id)arg1;
- (void)setAudioSkippedDurationInNs:(unsigned long long)arg1;
- (void)setDerivedBufferTimeFromHistoricalAudio:(bool)arg1;
- (void)setEndpointAudioDurationInNs:(unsigned long long)arg1;
- (void)setEndpointFeaturesAtEndpoint:(id)arg1;
- (void)setEndpointModelConfigVersion:(id)arg1;
- (void)setEndpointResetPositionInNs:(unsigned long long)arg1;
- (void)setEndpointedBufferTimeInNs:(unsigned long long)arg1;
- (void)setEndpointerDecisionLagInNs:(unsigned long long)arg1;
- (void)setEndpointerScore:(float)arg1;
- (void)setEndpointerThreshold:(float)arg1;
- (void)setEndpointerType:(int)arg1;
- (void)setExtraDelayInNs:(unsigned long long)arg1;
- (void)setFirstBufferTimeInNs:(unsigned long long)arg1;
- (void)setHasAsrFeatureLatencyDistribution:(bool)arg1;
- (void)setHasAudioSkippedDurationInNs:(bool)arg1;
- (void)setHasDerivedBufferTimeFromHistoricalAudio:(bool)arg1;
- (void)setHasEndpointAudioDurationInNs:(bool)arg1;
- (void)setHasEndpointFeaturesAtEndpoint:(bool)arg1;
- (void)setHasEndpointModelConfigVersion:(bool)arg1;
- (void)setHasEndpointResetPositionInNs:(bool)arg1;
- (void)setHasEndpointedBufferTimeInNs:(bool)arg1;
- (void)setHasEndpointerDecisionLagInNs:(bool)arg1;
- (void)setHasEndpointerScore:(bool)arg1;
- (void)setHasEndpointerThreshold:(bool)arg1;
- (void)setHasEndpointerType:(bool)arg1;
- (void)setHasExtraDelayInNs:(bool)arg1;
- (void)setHasFirstBufferTimeInNs:(bool)arg1;
- (void)setHasTimeoutMetadata:(bool)arg1;
- (void)setTimeoutMetadata:(id)arg1;
- (id)timeoutMetadata;
- (void)writeTo:(id)arg1;

@end
