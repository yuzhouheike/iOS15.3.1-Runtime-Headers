/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMSystemReportedFailure : SISchemaInstrumentationMessage {
    bool  _hasReason;
    bool  _hasTask;
    bool  _hasTaskId;
    USOSchemaUSOGraph * _reason;
    USOSchemaUSOGraph * _task;
    SISchemaUUID * _taskId;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasTask;
@property (nonatomic) bool hasTaskId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOGraph *reason;
@property (nonatomic, retain) USOSchemaUSOGraph *task;
@property (nonatomic, retain) SISchemaUUID *taskId;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasTask;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setHasReason:(bool)arg1;
- (void)setHasTask:(bool)arg1;
- (void)setHasTaskId:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)task;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
