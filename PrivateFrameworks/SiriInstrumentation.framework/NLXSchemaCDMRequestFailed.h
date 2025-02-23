/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMRequestFailed : SISchemaInstrumentationMessage {
    int  _code;
    int  _errorCode;
    struct { 
        unsigned int code : 1; 
        unsigned int originalCode : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    int  _originalCode;
}

@property (nonatomic) int code;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasOriginalCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int originalCode;

- (int)code;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasCode;
- (bool)hasErrorCode;
- (bool)hasOriginalCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)originalCode;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasOriginalCode:(bool)arg1;
- (void)setOriginalCode:(int)arg1;
- (void)writeTo:(id)arg1;

@end
