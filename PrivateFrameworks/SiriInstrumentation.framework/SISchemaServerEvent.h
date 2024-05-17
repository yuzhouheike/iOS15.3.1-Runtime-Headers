/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaServerEvent : SISchemaTopLevelUnionType {
    SISchemaServerEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasServerConversationTrace;
    bool  _hasServerDeviceFixedContext;
    bool  _hasServerGeneratedDismissal;
    bool  _hasSpeechResultSelected;
    bool  _hasTurnInteraction;
    bool  _hasUserSpeechDuration;
    SISchemaConversationTrace * _serverConversationTrace;
    SISchemaDeviceFixedContext * _serverDeviceFixedContext;
    SISchemaServerGeneratedDismissal * _serverGeneratedDismissal;
    SISchemaSpeechResultSelected * _speechResultSelected;
    SISchemaTurnInteraction * _turnInteraction;
    SISchemaUserSpeechDuration * _userSpeechDuration;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SISchemaServerEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasServerConversationTrace;
@property (nonatomic) bool hasServerDeviceFixedContext;
@property (nonatomic) bool hasServerGeneratedDismissal;
@property (nonatomic) bool hasSpeechResultSelected;
@property (nonatomic) bool hasTurnInteraction;
@property (nonatomic) bool hasUserSpeechDuration;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaConversationTrace *serverConversationTrace;
@property (nonatomic, retain) SISchemaDeviceFixedContext *serverDeviceFixedContext;
@property (nonatomic, retain) SISchemaServerGeneratedDismissal *serverGeneratedDismissal;
@property (nonatomic, retain) SISchemaSpeechResultSelected *speechResultSelected;
@property (nonatomic, retain) SISchemaTurnInteraction *turnInteraction;
@property (nonatomic, retain) SISchemaUserSpeechDuration *userSpeechDuration;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (bool)hasEventMetadata;
- (bool)hasServerConversationTrace;
- (bool)hasServerDeviceFixedContext;
- (bool)hasServerGeneratedDismissal;
- (bool)hasSpeechResultSelected;
- (bool)hasTurnInteraction;
- (bool)hasUserSpeechDuration;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)serverConversationTrace;
- (id)serverDeviceFixedContext;
- (id)serverGeneratedDismissal;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasServerConversationTrace:(bool)arg1;
- (void)setHasServerDeviceFixedContext:(bool)arg1;
- (void)setHasServerGeneratedDismissal:(bool)arg1;
- (void)setHasSpeechResultSelected:(bool)arg1;
- (void)setHasTurnInteraction:(bool)arg1;
- (void)setHasUserSpeechDuration:(bool)arg1;
- (void)setServerConversationTrace:(id)arg1;
- (void)setServerDeviceFixedContext:(id)arg1;
- (void)setServerGeneratedDismissal:(id)arg1;
- (void)setSpeechResultSelected:(id)arg1;
- (void)setTurnInteraction:(id)arg1;
- (void)setUserSpeechDuration:(id)arg1;
- (id)speechResultSelected;
- (id)turnInteraction;
- (id)userSpeechDuration;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
