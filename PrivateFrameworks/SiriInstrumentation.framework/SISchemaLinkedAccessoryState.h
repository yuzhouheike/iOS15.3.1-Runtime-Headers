/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaLinkedAccessoryState : SISchemaInstrumentationMessage {
    SISchemaUUID * _accessoryId;
    bool  _hasAccessoryId;
}

@property (nonatomic, retain) SISchemaUUID *accessoryId;
@property (nonatomic) bool hasAccessoryId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)accessoryId;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryId:(id)arg1;
- (void)setHasAccessoryId:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
