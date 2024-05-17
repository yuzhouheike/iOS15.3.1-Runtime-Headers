/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHUnintendedResponseSuppressionStarted : SISchemaInstrumentationMessage {
    MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated * _aftmScore;
    struct { 
        unsigned int numAsrRecords : 1; 
        unsigned int numTokensTopPath : 1; 
        unsigned int trailingSilenceDurationInNs : 1; 
    }  _has;
    bool  _hasAftmScore;
    bool  _hasLrnnScore;
    MHSchemaMHLatticeFalseTriggerMitigationEnded * _lrnnScore;
    unsigned int  _numAsrRecords;
    unsigned int  _numTokensTopPath;
    unsigned long long  _trailingSilenceDurationInNs;
}

@property (nonatomic, retain) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *aftmScore;
@property (nonatomic) bool hasAftmScore;
@property (nonatomic) bool hasLrnnScore;
@property (nonatomic) bool hasNumAsrRecords;
@property (nonatomic) bool hasNumTokensTopPath;
@property (nonatomic) bool hasTrailingSilenceDurationInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHLatticeFalseTriggerMitigationEnded *lrnnScore;
@property (nonatomic) unsigned int numAsrRecords;
@property (nonatomic) unsigned int numTokensTopPath;
@property (nonatomic) unsigned long long trailingSilenceDurationInNs;

- (void).cxx_destruct;
- (id)aftmScore;
- (id)dictionaryRepresentation;
- (bool)hasAftmScore;
- (bool)hasLrnnScore;
- (bool)hasNumAsrRecords;
- (bool)hasNumTokensTopPath;
- (bool)hasTrailingSilenceDurationInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)lrnnScore;
- (unsigned int)numAsrRecords;
- (unsigned int)numTokensTopPath;
- (bool)readFrom:(id)arg1;
- (void)setAftmScore:(id)arg1;
- (void)setHasAftmScore:(bool)arg1;
- (void)setHasLrnnScore:(bool)arg1;
- (void)setHasNumAsrRecords:(bool)arg1;
- (void)setHasNumTokensTopPath:(bool)arg1;
- (void)setHasTrailingSilenceDurationInNs:(bool)arg1;
- (void)setLrnnScore:(id)arg1;
- (void)setNumAsrRecords:(unsigned int)arg1;
- (void)setNumTokensTopPath:(unsigned int)arg1;
- (void)setTrailingSilenceDurationInNs:(unsigned long long)arg1;
- (unsigned long long)trailingSilenceDurationInNs;
- (void)writeTo:(id)arg1;

@end
