/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage {
    NSArray * _parses;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *parses;

- (void).cxx_destruct;
- (void)addParses:(id)arg1;
- (void)clearParses;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parses;
- (id)parsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parsesCount;
- (bool)readFrom:(id)arg1;
- (void)setParses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
