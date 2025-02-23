/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType {
    FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown * _appleMusicVoicePreviewOfferNotShown;
    FLOWSchemaFLOWEventMetadata * _eventMetadata;
    FLOWSchemaFLOWEntityContextTier1 * _flowEntityContextTier1;
    FLOWSchemaFLOWStep * _flowStep;
    bool  _hasAppleMusicVoicePreviewOfferNotShown;
    bool  _hasEventMetadata;
    bool  _hasFlowEntityContextTier1;
    bool  _hasFlowStep;
    bool  _hasSmsAttachmentMetadataTier1;
    FLOWSchemaFLOWSmsAttachmentMetadataTier1 * _smsAttachmentMetadataTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown *appleMusicVoicePreviewOfferNotShown;
@property (nonatomic, retain) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic, retain) FLOWSchemaFLOWEntityContextTier1 *flowEntityContextTier1;
@property (nonatomic, retain) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) bool hasAppleMusicVoicePreviewOfferNotShown;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFlowEntityContextTier1;
@property (nonatomic) bool hasFlowStep;
@property (nonatomic) bool hasSmsAttachmentMetadataTier1;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWSmsAttachmentMetadataTier1 *smsAttachmentMetadataTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)appleMusicVoicePreviewOfferNotShown;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)flowEntityContextTier1;
- (id)flowStep;
- (int)getAnyEventType;
- (bool)hasAppleMusicVoicePreviewOfferNotShown;
- (bool)hasEventMetadata;
- (bool)hasFlowEntityContextTier1;
- (bool)hasFlowStep;
- (bool)hasSmsAttachmentMetadataTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAppleMusicVoicePreviewOfferNotShown:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFlowEntityContextTier1:(id)arg1;
- (void)setFlowStep:(id)arg1;
- (void)setHasAppleMusicVoicePreviewOfferNotShown:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFlowEntityContextTier1:(bool)arg1;
- (void)setHasFlowStep:(bool)arg1;
- (void)setHasSmsAttachmentMetadataTier1:(bool)arg1;
- (void)setSmsAttachmentMetadataTier1:(id)arg1;
- (id)smsAttachmentMetadataTier1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
