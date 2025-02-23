/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int requestType : 1; 
        unsigned int siriUODEnabled : 1; 
    }  _has;
    bool  _hasOrchestratorSessionId;
    SISchemaUUID * _orchestratorSessionId;
    int  _requestType;
    bool  _siriUODEnabled;
}

@property (nonatomic) bool hasOrchestratorSessionId;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasSiriUODEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *orchestratorSessionId;
@property (nonatomic) int requestType;
@property (nonatomic) bool siriUODEnabled;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasOrchestratorSessionId;
- (bool)hasRequestType;
- (bool)hasSiriUODEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)orchestratorSessionId;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (void)setHasOrchestratorSessionId:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasSiriUODEnabled:(bool)arg1;
- (void)setOrchestratorSessionId:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSiriUODEnabled:(bool)arg1;
- (bool)siriUODEnabled;
- (void)writeTo:(id)arg1;

@end
