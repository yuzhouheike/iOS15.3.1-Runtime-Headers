/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHASRCallFailed : SISchemaInstrumentationMessage {
    int  _error;
    struct { 
        unsigned int error : 1; 
    }  _has;
}

@property (nonatomic) int error;
@property (nonatomic) bool hasError;
@property (nonatomic, readonly) NSData *jsonData;

- (id)dictionaryRepresentation;
- (int)error;
- (bool)hasError;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setError:(int)arg1;
- (void)setHasError:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
