/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaDictationEndPointStop : SISchemaInstrumentationMessage {
    int  _dictationEndPointType;
    struct { 
        unsigned int dictationEndPointType : 1; 
    }  _has;
}

@property (nonatomic) int dictationEndPointType;
@property (nonatomic) bool hasDictationEndPointType;
@property (nonatomic, readonly) NSData *jsonData;

- (int)dictationEndPointType;
- (id)dictionaryRepresentation;
- (bool)hasDictationEndPointType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDictationEndPointType:(int)arg1;
- (void)setHasDictationEndPointType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
