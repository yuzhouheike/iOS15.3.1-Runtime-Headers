/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface HALSchemaHALClientEvent : SISchemaTopLevelUnionType {
    HALSchemaHALContextCollectorFetchContext * _contextCollectorFetchContext;
    HALSchemaHALCrossDeviceCommandExecutionContext * _crossDeviceCommandContext;
    HALSchemaHALClientEventMetadata * _eventMetadata;
    HALSchemaHALForceFetchContext * _forceFetchContext;
    bool  _hasContextCollectorFetchContext;
    bool  _hasCrossDeviceCommandContext;
    bool  _hasEventMetadata;
    bool  _hasForceFetchContext;
    bool  _hasLocalFetchContext;
    HALSchemaHALLocalFetchContext * _localFetchContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) HALSchemaHALContextCollectorFetchContext *contextCollectorFetchContext;
@property (nonatomic, retain) HALSchemaHALCrossDeviceCommandExecutionContext *crossDeviceCommandContext;
@property (nonatomic, retain) HALSchemaHALClientEventMetadata *eventMetadata;
@property (nonatomic, retain) HALSchemaHALForceFetchContext *forceFetchContext;
@property (nonatomic) bool hasContextCollectorFetchContext;
@property (nonatomic) bool hasCrossDeviceCommandContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasForceFetchContext;
@property (nonatomic) bool hasLocalFetchContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) HALSchemaHALLocalFetchContext *localFetchContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)contextCollectorFetchContext;
- (id)crossDeviceCommandContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)forceFetchContext;
- (int)getAnyEventType;
- (bool)hasContextCollectorFetchContext;
- (bool)hasCrossDeviceCommandContext;
- (bool)hasEventMetadata;
- (bool)hasForceFetchContext;
- (bool)hasLocalFetchContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localFetchContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setContextCollectorFetchContext:(id)arg1;
- (void)setCrossDeviceCommandContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setForceFetchContext:(id)arg1;
- (void)setHasContextCollectorFetchContext:(bool)arg1;
- (void)setHasCrossDeviceCommandContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasForceFetchContext:(bool)arg1;
- (void)setHasLocalFetchContext:(bool)arg1;
- (void)setLocalFetchContext:(id)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
