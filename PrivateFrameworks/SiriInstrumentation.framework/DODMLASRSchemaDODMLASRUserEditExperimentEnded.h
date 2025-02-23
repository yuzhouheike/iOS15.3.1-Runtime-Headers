/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _redecodingResults;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *redecodingResults;

- (void).cxx_destruct;
- (void)addRedecodingResults:(id)arg1;
- (void)clearRedecodingResults;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)redecodingResults;
- (id)redecodingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)redecodingResultsCount;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRedecodingResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
