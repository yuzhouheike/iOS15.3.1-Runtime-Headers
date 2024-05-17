/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRITrialSystemTelemetry : PBCodable <NSCopying> {
    TRITrialAssetPurgeFields * _assetPurgeFields;
    NSString * _clientDeploymentEnv;
    NSString * _clientDeploymentId;
    NSString * _clientProjectId;
    NSString * _clientTeamId;
    TRITrialCloudKitContainerOriginFields * _containerOriginFields;
    TRITrialDownloadSettingsFields * _downloadSettingsFields;
    TRITrialDownloadStatusFields * _downloadStatusFields;
    TRITrialExperimentFields * _experimentFields;
    TRITrialFactorFields * _factorFields;
    TRITrialOnDemandFactorFields * _onDemandFactorFields;
    NSString * _prevBcp47DeviceLocale;
    NSString * _prevLanguageCode;
    NSString * _prevOsBuild;
    NSString * _prevRegionCode;
    TRITrialRolloutFields * _rolloutFields;
    NSString * _trialdTaskName;
}

@property (nonatomic, retain) TRITrialAssetPurgeFields *assetPurgeFields;
@property (nonatomic, retain) NSString *clientDeploymentEnv;
@property (nonatomic, retain) NSString *clientDeploymentId;
@property (nonatomic, retain) NSString *clientProjectId;
@property (nonatomic, retain) NSString *clientTeamId;
@property (nonatomic, retain) TRITrialCloudKitContainerOriginFields *containerOriginFields;
@property (nonatomic, retain) TRITrialDownloadSettingsFields *downloadSettingsFields;
@property (nonatomic, retain) TRITrialDownloadStatusFields *downloadStatusFields;
@property (nonatomic, retain) TRITrialExperimentFields *experimentFields;
@property (nonatomic, retain) TRITrialFactorFields *factorFields;
@property (nonatomic, readonly) bool hasAssetPurgeFields;
@property (nonatomic, readonly) bool hasClientDeploymentEnv;
@property (nonatomic, readonly) bool hasClientDeploymentId;
@property (nonatomic, readonly) bool hasClientProjectId;
@property (nonatomic, readonly) bool hasClientTeamId;
@property (nonatomic, readonly) bool hasContainerOriginFields;
@property (nonatomic, readonly) bool hasDownloadSettingsFields;
@property (nonatomic, readonly) bool hasDownloadStatusFields;
@property (nonatomic, readonly) bool hasExperimentFields;
@property (nonatomic, readonly) bool hasFactorFields;
@property (nonatomic, readonly) bool hasOnDemandFactorFields;
@property (nonatomic, readonly) bool hasPrevBcp47DeviceLocale;
@property (nonatomic, readonly) bool hasPrevLanguageCode;
@property (nonatomic, readonly) bool hasPrevOsBuild;
@property (nonatomic, readonly) bool hasPrevRegionCode;
@property (nonatomic, readonly) bool hasRolloutFields;
@property (nonatomic, readonly) bool hasTrialdTaskName;
@property (nonatomic, retain) TRITrialOnDemandFactorFields *onDemandFactorFields;
@property (nonatomic, retain) NSString *prevBcp47DeviceLocale;
@property (nonatomic, retain) NSString *prevLanguageCode;
@property (nonatomic, retain) NSString *prevOsBuild;
@property (nonatomic, retain) NSString *prevRegionCode;
@property (nonatomic, retain) TRITrialRolloutFields *rolloutFields;
@property (nonatomic, retain) NSString *trialdTaskName;

- (void).cxx_destruct;
- (id)assetPurgeFields;
- (id)clientDeploymentEnv;
- (id)clientDeploymentId;
- (id)clientProjectId;
- (id)clientTeamId;
- (id)containerOriginFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadSettingsFields;
- (id)downloadStatusFields;
- (id)ensureAssetPurgeFields;
- (id)ensureExperimentFields;
- (id)ensureFactorFields;
- (id)ensureOnDemandFactorFields;
- (id)ensureRolloutFields;
- (id)experimentFields;
- (id)factorFields;
- (bool)hasAssetPurgeFields;
- (bool)hasClientDeploymentEnv;
- (bool)hasClientDeploymentId;
- (bool)hasClientProjectId;
- (bool)hasClientTeamId;
- (bool)hasContainerOriginFields;
- (bool)hasDownloadSettingsFields;
- (bool)hasDownloadStatusFields;
- (bool)hasExperimentFields;
- (bool)hasFactorFields;
- (bool)hasOnDemandFactorFields;
- (bool)hasPrevBcp47DeviceLocale;
- (bool)hasPrevLanguageCode;
- (bool)hasPrevOsBuild;
- (bool)hasPrevRegionCode;
- (bool)hasRolloutFields;
- (bool)hasTrialdTaskName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)onDemandFactorFields;
- (id)prevBcp47DeviceLocale;
- (id)prevLanguageCode;
- (id)prevOsBuild;
- (id)prevRegionCode;
- (bool)readFrom:(id)arg1;
- (id)rolloutFields;
- (void)setAssetPurgeFields:(id)arg1;
- (void)setClientDeploymentEnv:(id)arg1;
- (void)setClientDeploymentId:(id)arg1;
- (void)setClientProjectId:(id)arg1;
- (void)setClientTeamId:(id)arg1;
- (void)setContainerOriginFields:(id)arg1;
- (void)setDownloadSettingsFields:(id)arg1;
- (void)setDownloadStatusFields:(id)arg1;
- (void)setExperimentFields:(id)arg1;
- (void)setFactorFields:(id)arg1;
- (void)setFieldsForDownloadOptions:(id)arg1;
- (void)setFieldsForRolloutDeployment:(id)arg1;
- (void)setOnDemandFactorFields:(id)arg1;
- (void)setPrevBcp47DeviceLocale:(id)arg1;
- (void)setPrevLanguageCode:(id)arg1;
- (void)setPrevOsBuild:(id)arg1;
- (void)setPrevRegionCode:(id)arg1;
- (void)setRolloutFields:(id)arg1;
- (void)setTrialdTaskName:(id)arg1;
- (id)trialdTaskName;
- (void)writeTo:(id)arg1;

@end
