/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASExpressSettings : PBCodable <NSCopying> {
    bool  _appAnalyticsOptIn;
    SASExpressSettingsPrivacyBundle * _appAnalyticsPrivacyBundle;
    int  _appearanceMode;
    bool  _deviceAnalyticsOptIn;
    SASExpressSettingsPrivacyBundle * _deviceAnalyticsPrivacyBundle;
    NSString * _deviceClass;
    int  _displayZoomOption;
    bool  _fileVaultEnabled;
    bool  _findMyOptIn;
    SASExpressSettingsPrivacyBundle * _findMyPrivacyBundle;
    struct { 
        unsigned int appearanceMode : 1; 
        unsigned int displayZoomOption : 1; 
        unsigned int appAnalyticsOptIn : 1; 
        unsigned int deviceAnalyticsOptIn : 1; 
        unsigned int fileVaultEnabled : 1; 
        unsigned int findMyOptIn : 1; 
        unsigned int locationServicesOptIn : 1; 
        unsigned int screenTimeEnabled : 1; 
        unsigned int siriDataSharingOptIn : 1; 
        unsigned int siriOptIn : 1; 
        unsigned int softwareUpdateAutoDownloadEnabled : 1; 
        unsigned int softwareUpdateAutoUpdateEnabled : 1; 
        unsigned int unlockWithWatchEnabled : 1; 
    }  _has;
    bool  _locationServicesOptIn;
    SASExpressSettingsPrivacyBundle * _locationServicesPrivacyBundle;
    NSString * _productType;
    bool  _screenTimeEnabled;
    bool  _siriDataSharingOptIn;
    bool  _siriOptIn;
    SASExpressSettingsPrivacyBundle * _siriPrivacyBundle;
    bool  _softwareUpdateAutoDownloadEnabled;
    bool  _softwareUpdateAutoUpdateEnabled;
    bool  _unlockWithWatchEnabled;
    unsigned int  _version;
    NSData * _walletData;
    NSData * _watchMigrationData;
}

@property (nonatomic) bool appAnalyticsOptIn;
@property (nonatomic, retain) SASExpressSettingsPrivacyBundle *appAnalyticsPrivacyBundle;
@property (nonatomic) int appearanceMode;
@property (nonatomic) bool deviceAnalyticsOptIn;
@property (nonatomic, retain) SASExpressSettingsPrivacyBundle *deviceAnalyticsPrivacyBundle;
@property (nonatomic, retain) NSString *deviceClass;
@property (nonatomic) int displayZoomOption;
@property (nonatomic) bool fileVaultEnabled;
@property (nonatomic) bool findMyOptIn;
@property (nonatomic, retain) SASExpressSettingsPrivacyBundle *findMyPrivacyBundle;
@property (nonatomic) bool hasAppAnalyticsOptIn;
@property (nonatomic, readonly) bool hasAppAnalyticsPrivacyBundle;
@property (nonatomic) bool hasAppearanceMode;
@property (nonatomic) bool hasDeviceAnalyticsOptIn;
@property (nonatomic, readonly) bool hasDeviceAnalyticsPrivacyBundle;
@property (nonatomic) bool hasDisplayZoomOption;
@property (nonatomic) bool hasFileVaultEnabled;
@property (nonatomic) bool hasFindMyOptIn;
@property (nonatomic, readonly) bool hasFindMyPrivacyBundle;
@property (nonatomic) bool hasLocationServicesOptIn;
@property (nonatomic, readonly) bool hasLocationServicesPrivacyBundle;
@property (nonatomic) bool hasScreenTimeEnabled;
@property (nonatomic) bool hasSiriDataSharingOptIn;
@property (nonatomic) bool hasSiriOptIn;
@property (nonatomic, readonly) bool hasSiriPrivacyBundle;
@property (nonatomic) bool hasSoftwareUpdateAutoDownloadEnabled;
@property (nonatomic) bool hasSoftwareUpdateAutoUpdateEnabled;
@property (nonatomic) bool hasUnlockWithWatchEnabled;
@property (nonatomic, readonly) bool hasWalletData;
@property (nonatomic, readonly) bool hasWatchMigrationData;
@property (nonatomic) bool locationServicesOptIn;
@property (nonatomic, retain) SASExpressSettingsPrivacyBundle *locationServicesPrivacyBundle;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic) bool screenTimeEnabled;
@property (nonatomic) bool siriDataSharingOptIn;
@property (nonatomic) bool siriOptIn;
@property (nonatomic, retain) SASExpressSettingsPrivacyBundle *siriPrivacyBundle;
@property (nonatomic) bool softwareUpdateAutoDownloadEnabled;
@property (nonatomic) bool softwareUpdateAutoUpdateEnabled;
@property (nonatomic) bool unlockWithWatchEnabled;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSData *walletData;
@property (nonatomic, retain) NSData *watchMigrationData;

- (void).cxx_destruct;
- (int)StringAsAppearanceMode:(id)arg1;
- (int)StringAsDisplayZoomOption:(id)arg1;
- (bool)appAnalyticsOptIn;
- (id)appAnalyticsPrivacyBundle;
- (int)appearanceMode;
- (id)appearanceModeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)deviceAnalyticsOptIn;
- (id)deviceAnalyticsPrivacyBundle;
- (id)deviceClass;
- (id)dictionaryRepresentation;
- (int)displayZoomOption;
- (id)displayZoomOptionAsString:(int)arg1;
- (bool)fileVaultEnabled;
- (bool)findMyOptIn;
- (id)findMyPrivacyBundle;
- (bool)hasAppAnalyticsOptIn;
- (bool)hasAppAnalyticsPrivacyBundle;
- (bool)hasAppearanceMode;
- (bool)hasDeviceAnalyticsOptIn;
- (bool)hasDeviceAnalyticsPrivacyBundle;
- (bool)hasDisplayZoomOption;
- (bool)hasFileVaultEnabled;
- (bool)hasFindMyOptIn;
- (bool)hasFindMyPrivacyBundle;
- (bool)hasLocationServicesOptIn;
- (bool)hasLocationServicesPrivacyBundle;
- (bool)hasScreenTimeEnabled;
- (bool)hasSiriDataSharingOptIn;
- (bool)hasSiriOptIn;
- (bool)hasSiriPrivacyBundle;
- (bool)hasSoftwareUpdateAutoDownloadEnabled;
- (bool)hasSoftwareUpdateAutoUpdateEnabled;
- (bool)hasUnlockWithWatchEnabled;
- (bool)hasWalletData;
- (bool)hasWatchMigrationData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)locationServicesOptIn;
- (id)locationServicesPrivacyBundle;
- (void)mergeFrom:(id)arg1;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (bool)screenTimeEnabled;
- (void)setAppAnalyticsOptIn:(bool)arg1;
- (void)setAppAnalyticsPrivacyBundle:(id)arg1;
- (void)setAppearanceMode:(int)arg1;
- (void)setDeviceAnalyticsOptIn:(bool)arg1;
- (void)setDeviceAnalyticsPrivacyBundle:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDisplayZoomOption:(int)arg1;
- (void)setFileVaultEnabled:(bool)arg1;
- (void)setFindMyOptIn:(bool)arg1;
- (void)setFindMyPrivacyBundle:(id)arg1;
- (void)setHasAppAnalyticsOptIn:(bool)arg1;
- (void)setHasAppearanceMode:(bool)arg1;
- (void)setHasDeviceAnalyticsOptIn:(bool)arg1;
- (void)setHasDisplayZoomOption:(bool)arg1;
- (void)setHasFileVaultEnabled:(bool)arg1;
- (void)setHasFindMyOptIn:(bool)arg1;
- (void)setHasLocationServicesOptIn:(bool)arg1;
- (void)setHasScreenTimeEnabled:(bool)arg1;
- (void)setHasSiriDataSharingOptIn:(bool)arg1;
- (void)setHasSiriOptIn:(bool)arg1;
- (void)setHasSoftwareUpdateAutoDownloadEnabled:(bool)arg1;
- (void)setHasSoftwareUpdateAutoUpdateEnabled:(bool)arg1;
- (void)setHasUnlockWithWatchEnabled:(bool)arg1;
- (void)setLocationServicesOptIn:(bool)arg1;
- (void)setLocationServicesPrivacyBundle:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setScreenTimeEnabled:(bool)arg1;
- (void)setSiriDataSharingOptIn:(bool)arg1;
- (void)setSiriOptIn:(bool)arg1;
- (void)setSiriPrivacyBundle:(id)arg1;
- (void)setSoftwareUpdateAutoDownloadEnabled:(bool)arg1;
- (void)setSoftwareUpdateAutoUpdateEnabled:(bool)arg1;
- (void)setUnlockWithWatchEnabled:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWalletData:(id)arg1;
- (void)setWatchMigrationData:(id)arg1;
- (bool)siriDataSharingOptIn;
- (bool)siriOptIn;
- (id)siriPrivacyBundle;
- (bool)softwareUpdateAutoDownloadEnabled;
- (bool)softwareUpdateAutoUpdateEnabled;
- (bool)unlockWithWatchEnabled;
- (unsigned int)version;
- (id)walletData;
- (id)watchMigrationData;
- (void)writeTo:(id)arg1;

@end
