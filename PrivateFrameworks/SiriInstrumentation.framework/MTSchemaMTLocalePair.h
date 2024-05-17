/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MTSchemaMTLocalePair : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sourceLocale : 1; 
        unsigned int targetLocale : 1; 
    }  _has;
    int  _sourceLocale;
    int  _targetLocale;
}

@property (nonatomic) bool hasSourceLocale;
@property (nonatomic) bool hasTargetLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sourceLocale;
@property (nonatomic) int targetLocale;

- (id)dictionaryRepresentation;
- (bool)hasSourceLocale;
- (bool)hasTargetLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSourceLocale:(bool)arg1;
- (void)setHasTargetLocale:(bool)arg1;
- (void)setSourceLocale:(int)arg1;
- (void)setTargetLocale:(int)arg1;
- (int)sourceLocale;
- (int)targetLocale;
- (void)writeTo:(id)arg1;

@end
