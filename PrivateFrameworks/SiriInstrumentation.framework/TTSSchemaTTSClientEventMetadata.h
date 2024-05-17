/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface TTSSchemaTTSClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasTtsId;
    SISchemaUUID * _ttsId;
}

@property (nonatomic) bool hasTtsId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *ttsId;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasTtsId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTtsId:(bool)arg1;
- (void)setTtsId:(id)arg1;
- (id)ttsId;
- (void)writeTo:(id)arg1;

@end
