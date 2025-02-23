/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage {
    NSArray * _confusionPairs;
    NSString * _datapackVersion;
    bool  _hasDatapackVersion;
}

@property (nonatomic, copy) NSArray *confusionPairs;
@property (nonatomic, copy) NSString *datapackVersion;
@property (nonatomic) bool hasDatapackVersion;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addConfusionPairs:(id)arg1;
- (void)clearConfusionPairs;
- (id)confusionPairs;
- (id)confusionPairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)confusionPairsCount;
- (id)datapackVersion;
- (id)dictionaryRepresentation;
- (bool)hasDatapackVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConfusionPairs:(id)arg1;
- (void)setDatapackVersion:(id)arg1;
- (void)setHasDatapackVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
