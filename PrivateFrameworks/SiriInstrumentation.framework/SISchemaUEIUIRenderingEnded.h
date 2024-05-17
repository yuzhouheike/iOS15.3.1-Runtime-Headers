/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUEIUIRenderingEnded : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
    }  _has;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic, readonly) NSData *jsonData;

- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
