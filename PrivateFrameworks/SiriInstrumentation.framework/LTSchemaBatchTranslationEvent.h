/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface LTSchemaBatchTranslationEvent : SISchemaInstrumentationMessage {
    unsigned int  _batchSeqNo;
    LTSchemaError * _error;
    struct { 
        unsigned int batchSeqNo : 1; 
        unsigned int numberOfParagraphs : 1; 
        unsigned int responseTimeMs : 1; 
        unsigned int numParagraphFailures : 1; 
    }  _has;
    bool  _hasError;
    bool  _hasRequestID;
    bool  _hasSessionID;
    bool  _hasSystemLocale;
    bool  _hasTask;
    unsigned int  _numParagraphFailures;
    unsigned int  _numberOfParagraphs;
    NSString * _requestID;
    unsigned int  _responseTimeMs;
    NSString * _sessionID;
    NSString * _systemLocale;
    LTSchemaTask * _task;
}

@property (nonatomic) unsigned int batchSeqNo;
@property (nonatomic, retain) LTSchemaError *error;
@property (nonatomic) bool hasBatchSeqNo;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasNumParagraphFailures;
@property (nonatomic) bool hasNumberOfParagraphs;
@property (nonatomic) bool hasRequestID;
@property (nonatomic) bool hasResponseTimeMs;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasSystemLocale;
@property (nonatomic) bool hasTask;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numParagraphFailures;
@property (nonatomic) unsigned int numberOfParagraphs;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic, copy) NSString *systemLocale;
@property (nonatomic, retain) LTSchemaTask *task;

- (void).cxx_destruct;
- (unsigned int)batchSeqNo;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasBatchSeqNo;
- (bool)hasError;
- (bool)hasNumParagraphFailures;
- (bool)hasNumberOfParagraphs;
- (bool)hasRequestID;
- (bool)hasResponseTimeMs;
- (bool)hasSessionID;
- (bool)hasSystemLocale;
- (bool)hasTask;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numParagraphFailures;
- (unsigned int)numberOfParagraphs;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (unsigned int)responseTimeMs;
- (id)sessionID;
- (void)setBatchSeqNo:(unsigned int)arg1;
- (void)setError:(id)arg1;
- (void)setHasBatchSeqNo:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasNumParagraphFailures:(bool)arg1;
- (void)setHasNumberOfParagraphs:(bool)arg1;
- (void)setHasRequestID:(bool)arg1;
- (void)setHasResponseTimeMs:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSystemLocale:(bool)arg1;
- (void)setHasTask:(bool)arg1;
- (void)setNumParagraphFailures:(unsigned int)arg1;
- (void)setNumberOfParagraphs:(unsigned int)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseTimeMs:(unsigned int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSystemLocale:(id)arg1;
- (void)setTask:(id)arg1;
- (id)systemLocale;
- (id)task;
- (void)writeTo:(id)arg1;

@end
