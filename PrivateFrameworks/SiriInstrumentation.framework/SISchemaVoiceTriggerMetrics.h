/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaVoiceTriggerMetrics : SISchemaInstrumentationMessage {
    int  _explicitUtterances;
    int  _firstPassTriggers;
    struct { 
        unsigned int implicitUtterances : 1; 
        unsigned int explicitUtterances : 1; 
        unsigned int firstPassTriggers : 1; 
    }  _has;
    int  _implicitUtterances;
}

@property (nonatomic) int explicitUtterances;
@property (nonatomic) int firstPassTriggers;
@property (nonatomic) bool hasExplicitUtterances;
@property (nonatomic) bool hasFirstPassTriggers;
@property (nonatomic) bool hasImplicitUtterances;
@property (nonatomic) int implicitUtterances;
@property (nonatomic, readonly) NSData *jsonData;

- (id)dictionaryRepresentation;
- (int)explicitUtterances;
- (int)firstPassTriggers;
- (bool)hasExplicitUtterances;
- (bool)hasFirstPassTriggers;
- (bool)hasImplicitUtterances;
- (unsigned long long)hash;
- (int)implicitUtterances;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExplicitUtterances:(int)arg1;
- (void)setFirstPassTriggers:(int)arg1;
- (void)setHasExplicitUtterances:(bool)arg1;
- (void)setHasFirstPassTriggers:(bool)arg1;
- (void)setHasImplicitUtterances:(bool)arg1;
- (void)setImplicitUtterances:(int)arg1;
- (void)writeTo:(id)arg1;

@end
