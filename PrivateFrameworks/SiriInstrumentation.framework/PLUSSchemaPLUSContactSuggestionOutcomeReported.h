/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLUSSchemaPLUSContactSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    int  _contactSuggestionOutcome;
    struct { 
        unsigned int contactSuggestionOutcome : 1; 
    }  _has;
    bool  _hasSuggestionId;
    SISchemaUUID * _suggestionId;
}

@property (nonatomic) int contactSuggestionOutcome;
@property (nonatomic) bool hasContactSuggestionOutcome;
@property (nonatomic) bool hasSuggestionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *suggestionId;

- (void).cxx_destruct;
- (int)contactSuggestionOutcome;
- (id)dictionaryRepresentation;
- (bool)hasContactSuggestionOutcome;
- (bool)hasSuggestionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactSuggestionOutcome:(int)arg1;
- (void)setHasContactSuggestionOutcome:(bool)arg1;
- (void)setHasSuggestionId:(bool)arg1;
- (void)setSuggestionId:(id)arg1;
- (id)suggestionId;
- (void)writeTo:(id)arg1;

@end
