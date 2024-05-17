/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRSampledAudioFileEnqueued : SISchemaInstrumentationMessage {
    bool  _hasOriginalAsrId;
    SISchemaUUID * _originalAsrId;
}

@property (nonatomic) bool hasOriginalAsrId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalAsrId;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasOriginalAsrId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalAsrId;
- (bool)readFrom:(id)arg1;
- (void)setHasOriginalAsrId:(bool)arg1;
- (void)setOriginalAsrId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
