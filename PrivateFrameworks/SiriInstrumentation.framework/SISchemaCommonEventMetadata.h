/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasTimestamp;
    SISchemaLogicalTimestamp * _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaLogicalTimestamp *timestamp;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
