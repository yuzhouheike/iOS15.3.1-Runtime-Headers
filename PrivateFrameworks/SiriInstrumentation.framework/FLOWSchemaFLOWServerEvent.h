/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWServerEvent : SISchemaTopLevelUnionType {
    FLOWSchemaFLOWEventMetadata * _eventMetadata;
    FLOWSchemaFLOWStep * _flowStep;
    bool  _hasEventMetadata;
    bool  _hasFlowStep;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic, retain) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFlowStep;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)flowStep;
- (int)getAnyEventType;
- (bool)hasEventMetadata;
- (bool)hasFlowStep;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFlowStep:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFlowStep:(bool)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
