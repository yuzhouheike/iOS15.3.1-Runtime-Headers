/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHClientEvent : SISchemaTopLevelUnionType {
    ORCHSchemaORCHASRBridgeContext * _asrBridgeContext;
    ORCHSchemaORCHAssetsReported * _availableAssets;
    ORCHSchemaORCHCDMBridgeContext * _cdmBridgeContext;
    ORCHSchemaORCHConversationContextSubmitted * _contextSubmissionMessage;
    ORCHSchemaORCHClientEventMetadata * _eventMetadata;
    ORCHSchemaORCHExecutionBridgeContext * _executionBridgeContext;
    ORCHSchemaORCHFlowOutputSubmitted * _flowOutputSubmitted;
    bool  _hasAsrBridgeContext;
    bool  _hasAvailableAssets;
    bool  _hasCdmBridgeContext;
    bool  _hasContextSubmissionMessage;
    bool  _hasEventMetadata;
    bool  _hasExecutionBridgeContext;
    bool  _hasFlowOutputSubmitted;
    bool  _hasOrchDeviceDynamicContext;
    bool  _hasPommesBridgeContext;
    bool  _hasRequestContext;
    bool  _hasResourceUtilizationMetadata;
    bool  _hasResultCandidate;
    bool  _hasResultSelected;
    bool  _hasServerFallbackContext;
    ORCHSchemaORCHDeviceDynamicContext * _orchDeviceDynamicContext;
    ORCHSchemaORCHPommesBridgeContext * _pommesBridgeContext;
    ORCHSchemaORCHRequestContext * _requestContext;
    ORCHSchemaORCHResourceUtilizationMetadata * _resourceUtilizationMetadata;
    ORCHSchemaORCHResultCandidateReceived * _resultCandidate;
    ORCHSchemaORCHResultSelected * _resultSelected;
    ORCHSchemaORCHServerFallbackContext * _serverFallbackContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) ORCHSchemaORCHASRBridgeContext *asrBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHAssetsReported *availableAssets;
@property (nonatomic, retain) ORCHSchemaORCHCDMBridgeContext *cdmBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHConversationContextSubmitted *contextSubmissionMessage;
@property (nonatomic, retain) ORCHSchemaORCHClientEventMetadata *eventMetadata;
@property (nonatomic, retain) ORCHSchemaORCHExecutionBridgeContext *executionBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHFlowOutputSubmitted *flowOutputSubmitted;
@property (nonatomic) bool hasAsrBridgeContext;
@property (nonatomic) bool hasAvailableAssets;
@property (nonatomic) bool hasCdmBridgeContext;
@property (nonatomic) bool hasContextSubmissionMessage;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasExecutionBridgeContext;
@property (nonatomic) bool hasFlowOutputSubmitted;
@property (nonatomic) bool hasOrchDeviceDynamicContext;
@property (nonatomic) bool hasPommesBridgeContext;
@property (nonatomic) bool hasRequestContext;
@property (nonatomic) bool hasResourceUtilizationMetadata;
@property (nonatomic) bool hasResultCandidate;
@property (nonatomic) bool hasResultSelected;
@property (nonatomic) bool hasServerFallbackContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHDeviceDynamicContext *orchDeviceDynamicContext;
@property (nonatomic, retain) ORCHSchemaORCHPommesBridgeContext *pommesBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHRequestContext *requestContext;
@property (nonatomic, retain) ORCHSchemaORCHResourceUtilizationMetadata *resourceUtilizationMetadata;
@property (nonatomic, retain) ORCHSchemaORCHResultCandidateReceived *resultCandidate;
@property (nonatomic, retain) ORCHSchemaORCHResultSelected *resultSelected;
@property (nonatomic, retain) ORCHSchemaORCHServerFallbackContext *serverFallbackContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)asrBridgeContext;
- (id)availableAssets;
- (id)cdmBridgeContext;
- (id)contextSubmissionMessage;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)executionBridgeContext;
- (id)flowOutputSubmitted;
- (int)getAnyEventType;
- (bool)hasAsrBridgeContext;
- (bool)hasAvailableAssets;
- (bool)hasCdmBridgeContext;
- (bool)hasContextSubmissionMessage;
- (bool)hasEventMetadata;
- (bool)hasExecutionBridgeContext;
- (bool)hasFlowOutputSubmitted;
- (bool)hasOrchDeviceDynamicContext;
- (bool)hasPommesBridgeContext;
- (bool)hasRequestContext;
- (bool)hasResourceUtilizationMetadata;
- (bool)hasResultCandidate;
- (bool)hasResultSelected;
- (bool)hasServerFallbackContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)orchDeviceDynamicContext;
- (id)pommesBridgeContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)requestContext;
- (id)resourceUtilizationMetadata;
- (id)resultCandidate;
- (id)resultSelected;
- (id)serverFallbackContext;
- (void)setAsrBridgeContext:(id)arg1;
- (void)setAvailableAssets:(id)arg1;
- (void)setCdmBridgeContext:(id)arg1;
- (void)setContextSubmissionMessage:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setExecutionBridgeContext:(id)arg1;
- (void)setFlowOutputSubmitted:(id)arg1;
- (void)setHasAsrBridgeContext:(bool)arg1;
- (void)setHasAvailableAssets:(bool)arg1;
- (void)setHasCdmBridgeContext:(bool)arg1;
- (void)setHasContextSubmissionMessage:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasExecutionBridgeContext:(bool)arg1;
- (void)setHasFlowOutputSubmitted:(bool)arg1;
- (void)setHasOrchDeviceDynamicContext:(bool)arg1;
- (void)setHasPommesBridgeContext:(bool)arg1;
- (void)setHasRequestContext:(bool)arg1;
- (void)setHasResourceUtilizationMetadata:(bool)arg1;
- (void)setHasResultCandidate:(bool)arg1;
- (void)setHasResultSelected:(bool)arg1;
- (void)setHasServerFallbackContext:(bool)arg1;
- (void)setOrchDeviceDynamicContext:(id)arg1;
- (void)setPommesBridgeContext:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResourceUtilizationMetadata:(id)arg1;
- (void)setResultCandidate:(id)arg1;
- (void)setResultSelected:(id)arg1;
- (void)setServerFallbackContext:(id)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
