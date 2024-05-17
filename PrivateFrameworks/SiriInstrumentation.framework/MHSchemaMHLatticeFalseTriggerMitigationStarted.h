/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHLatticeFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    bool  _hasModelVersion;
    NSString * _modelVersion;
}

@property (nonatomic) bool hasModelVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelVersion;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasModelVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
