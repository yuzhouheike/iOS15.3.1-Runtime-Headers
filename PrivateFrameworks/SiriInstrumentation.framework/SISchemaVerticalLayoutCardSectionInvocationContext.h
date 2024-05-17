/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaVerticalLayoutCardSectionInvocationContext : SISchemaInstrumentationMessage {
    bool  _hasResultIdentifier;
    NSString * _resultIdentifier;
}

@property (nonatomic) bool hasResultIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultIdentifier;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasResultIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultIdentifier;
- (void)setHasResultIdentifier:(bool)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
