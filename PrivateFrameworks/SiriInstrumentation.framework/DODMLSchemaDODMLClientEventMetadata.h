/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _dodMlId;
    NSString * _experimentName;
    bool  _hasDodMlId;
    bool  _hasExperimentName;
}

@property (nonatomic, retain) SISchemaUUID *dodMlId;
@property (nonatomic, copy) NSString *experimentName;
@property (nonatomic) bool hasDodMlId;
@property (nonatomic) bool hasExperimentName;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)dodMlId;
- (id)experimentName;
- (bool)hasDodMlId;
- (bool)hasExperimentName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDodMlId:(id)arg1;
- (void)setExperimentName:(id)arg1;
- (void)setHasDodMlId:(bool)arg1;
- (void)setHasExperimentName:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
