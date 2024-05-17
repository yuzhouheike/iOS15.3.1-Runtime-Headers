/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMRequestStarted : SISchemaInstrumentationMessage {
    NLXSchemaCDMTurnInput * _currentTurnInput;
    bool  _hasCurrentTurnInput;
}

@property (nonatomic, retain) NLXSchemaCDMTurnInput *currentTurnInput;
@property (nonatomic) bool hasCurrentTurnInput;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)currentTurnInput;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTurnInput;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTurnInput:(id)arg1;
- (void)setHasCurrentTurnInput:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
