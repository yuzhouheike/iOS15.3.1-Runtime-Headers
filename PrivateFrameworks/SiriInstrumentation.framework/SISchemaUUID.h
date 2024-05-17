/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUUID : SISchemaInstrumentationMessage {
    bool  _hasValue;
    NSData * _value;
}

@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *value;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithNSUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)toNSUUID;
- (id)value;
- (void)willProduceDictionaryRepresentation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
