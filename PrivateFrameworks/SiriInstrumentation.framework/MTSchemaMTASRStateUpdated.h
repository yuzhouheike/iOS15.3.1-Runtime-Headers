/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MTSchemaMTASRStateUpdated : SISchemaInstrumentationMessage {
    int  _asrState;
    struct { 
        unsigned int asrState : 1; 
    }  _has;
}

@property (nonatomic) int asrState;
@property (nonatomic) bool hasAsrState;
@property (nonatomic, readonly) NSData *jsonData;

- (int)asrState;
- (id)dictionaryRepresentation;
- (bool)hasAsrState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAsrState:(int)arg1;
- (void)setHasAsrState:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
