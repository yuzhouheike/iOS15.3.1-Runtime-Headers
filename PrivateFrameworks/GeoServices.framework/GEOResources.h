/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResources : PBCodable <NSCopying> {
    NSString * _abExperimentURL;
    NSString * _addressCorrectionInitURL;
    NSString * _addressCorrectionUpdateURL;
    NSMutableArray * _announcementsSupportedLanguages;
    NSString * _announcementsURL;
    NSMutableArray * _attributions;
    NSString * _authProxyURL;
    NSString * _authToken;
    NSString * _backgroundDispatcherURL;
    NSString * _backgroundRevGeoURL;
    NSString * _batchReverseGeocoderURL;
    NSString * _batchTrafficProbeURL;
    NSString * _bluePOIDispatcherURL;
    NSString * _businessPortalBaseURL;
    NSMutableArray * _dataSetURLOverrides;
    NSMutableArray * _dataSets;
    NSString * _directionsURL;
    NSString * _dispatcherURL;
    NSMutableArray * _displayStrings;
    NSString * _etaURL;
    struct { 
        unsigned int has_locationShiftVersion : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_abExperimentURL : 1; 
        unsigned int read_addressCorrectionInitURL : 1; 
        unsigned int read_addressCorrectionUpdateURL : 1; 
        unsigned int read_announcementsSupportedLanguages : 1; 
        unsigned int read_announcementsURL : 1; 
        unsigned int read_attributions : 1; 
        unsigned int read_authProxyURL : 1; 
        unsigned int read_authToken : 1; 
        unsigned int read_backgroundDispatcherURL : 1; 
        unsigned int read_backgroundRevGeoURL : 1; 
        unsigned int read_batchReverseGeocoderURL : 1; 
        unsigned int read_batchTrafficProbeURL : 1; 
        unsigned int read_bluePOIDispatcherURL : 1; 
        unsigned int read_businessPortalBaseURL : 1; 
        unsigned int read_dataSetURLOverrides : 1; 
        unsigned int read_dataSets : 1; 
        unsigned int read_directionsURL : 1; 
        unsigned int read_dispatcherURL : 1; 
        unsigned int read_displayStrings : 1; 
        unsigned int read_etaURL : 1; 
        unsigned int read_fontChecksums : 1; 
        unsigned int read_fonts : 1; 
        unsigned int read_iconChecksums : 1; 
        unsigned int read_icons : 1; 
        unsigned int read_locationShiftEnabledRegions : 1; 
        unsigned int read_logMessageUsageURL : 1; 
        unsigned int read_logMessageUsageV3URL : 1; 
        unsigned int read_muninBaseURL : 1; 
        unsigned int read_muninBuckets : 1; 
        unsigned int read_muninVersions : 1; 
        unsigned int read_polyLocationShiftURL : 1; 
        unsigned int read_proactiveRoutingURL : 1; 
        unsigned int read_problemCategoriesURL : 1; 
        unsigned int read_problemOptInURL : 1; 
        unsigned int read_problemStatusURL : 1; 
        unsigned int read_problemSubmissionURL : 1; 
        unsigned int read_realtimeTrafficProbeURL : 1; 
        unsigned int read_regionalResources : 1; 
        unsigned int read_releaseInfo : 1; 
        unsigned int read_resourcesURL : 1; 
        unsigned int read_resources : 1; 
        unsigned int read_reverseGeocoderVersionsURL : 1; 
        unsigned int read_searchAttributionManifestURL : 1; 
        unsigned int read_simpleETAURL : 1; 
        unsigned int read_spatialLookupURL : 1; 
        unsigned int read_styleSheetChecksums : 1; 
        unsigned int read_styleSheets : 1; 
        unsigned int read_textureChecksums : 1; 
        unsigned int read_textures : 1; 
        unsigned int read_tileGroups : 1; 
        unsigned int read_tileSets : 1; 
        unsigned int read_urlInfoSets : 1; 
        unsigned int read_versionManifest : 1; 
        unsigned int read_wifiConnectionQualityProbeURL : 1; 
        unsigned int read_xmlChecksums : 1; 
        unsigned int read_xmls : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _fontChecksums;
    NSMutableArray * _fonts;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    NSMutableArray * _locationShiftEnabledRegions;
    unsigned int  _locationShiftVersion;
    NSString * _logMessageUsageURL;
    NSString * _logMessageUsageV3URL;
    NSString * _muninBaseURL;
    NSMutableArray * _muninBuckets;
    NSMutableArray * _muninVersions;
    NSString * _polyLocationShiftURL;
    NSString * _proactiveRoutingURL;
    NSString * _problemCategoriesURL;
    NSString * _problemOptInURL;
    NSString * _problemStatusURL;
    NSString * _problemSubmissionURL;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _realtimeTrafficProbeURL;
    NSMutableArray * _regionalResources;
    NSString * _releaseInfo;
    NSMutableArray * _resources;
    NSString * _resourcesURL;
    NSString * _reverseGeocoderVersionsURL;
    NSString * _searchAttributionManifestURL;
    NSString * _simpleETAURL;
    NSString * _spatialLookupURL;
    NSMutableArray * _styleSheetChecksums;
    NSMutableArray * _styleSheets;
    NSMutableArray * _textureChecksums;
    NSMutableArray * _textures;
    NSMutableArray * _tileGroups;
    NSMutableArray * _tileSets;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _urlInfoSets;
    GEOVersionManifest * _versionManifest;
    NSString * _wifiConnectionQualityProbeURL;
    NSMutableArray * _xmlChecksums;
    NSMutableArray * _xmls;
}

@property (nonatomic, retain) NSString *abExperimentURL;
@property (nonatomic, retain) NSString *addressCorrectionInitURL;
@property (nonatomic, retain) NSString *addressCorrectionUpdateURL;
@property (nonatomic, retain) NSMutableArray *announcementsSupportedLanguages;
@property (nonatomic, retain) NSString *announcementsURL;
@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSString *authProxyURL;
@property (nonatomic, retain) NSString *authToken;
@property (nonatomic, retain) NSString *backgroundDispatcherURL;
@property (nonatomic, retain) NSString *backgroundRevGeoURL;
@property (nonatomic, retain) NSString *batchReverseGeocoderURL;
@property (nonatomic, retain) NSString *batchTrafficProbeURL;
@property (nonatomic, retain) NSString *bluePOIDispatcherURL;
@property (nonatomic, retain) NSString *businessPortalBaseURL;
@property (nonatomic, retain) NSMutableArray *dataSetURLOverrides;
@property (nonatomic, retain) NSMutableArray *dataSets;
@property (nonatomic, retain) NSString *directionsURL;
@property (nonatomic, retain) NSString *dispatcherURL;
@property (nonatomic, retain) NSMutableArray *displayStrings;
@property (nonatomic, retain) NSString *etaURL;
@property (nonatomic, retain) NSMutableArray *fontChecksums;
@property (nonatomic, retain) NSMutableArray *fonts;
@property (nonatomic, readonly) bool hasAbExperimentURL;
@property (nonatomic, readonly) bool hasAddressCorrectionInitURL;
@property (nonatomic, readonly) bool hasAddressCorrectionUpdateURL;
@property (nonatomic, readonly) bool hasAnnouncementsURL;
@property (nonatomic, readonly) bool hasAuthProxyURL;
@property (nonatomic, readonly) bool hasAuthToken;
@property (nonatomic, readonly) bool hasBackgroundDispatcherURL;
@property (nonatomic, readonly) bool hasBackgroundRevGeoURL;
@property (nonatomic, readonly) bool hasBatchReverseGeocoderURL;
@property (nonatomic, readonly) bool hasBatchTrafficProbeURL;
@property (nonatomic, readonly) bool hasBluePOIDispatcherURL;
@property (nonatomic, readonly) bool hasBusinessPortalBaseURL;
@property (nonatomic, readonly) bool hasDirectionsURL;
@property (nonatomic, readonly) bool hasDispatcherURL;
@property (nonatomic, readonly) bool hasEtaURL;
@property (nonatomic) bool hasLocationShiftVersion;
@property (nonatomic, readonly) bool hasLogMessageUsageURL;
@property (nonatomic, readonly) bool hasLogMessageUsageV3URL;
@property (nonatomic, readonly) bool hasMuninBaseURL;
@property (nonatomic, readonly) bool hasPolyLocationShiftURL;
@property (nonatomic, readonly) bool hasProactiveRoutingURL;
@property (nonatomic, readonly) bool hasProblemCategoriesURL;
@property (nonatomic, readonly) bool hasProblemOptInURL;
@property (nonatomic, readonly) bool hasProblemStatusURL;
@property (nonatomic, readonly) bool hasProblemSubmissionURL;
@property (nonatomic, readonly) bool hasRealtimeTrafficProbeURL;
@property (nonatomic, readonly) bool hasReleaseInfo;
@property (nonatomic, readonly) bool hasResourcesURL;
@property (nonatomic, readonly) bool hasReverseGeocoderVersionsURL;
@property (nonatomic, readonly) bool hasSearchAttributionManifestURL;
@property (nonatomic, readonly) bool hasSimpleETAURL;
@property (nonatomic, readonly) bool hasSpatialLookupURL;
@property (nonatomic, readonly) bool hasVersionManifest;
@property (nonatomic, readonly) bool hasWifiConnectionQualityProbeURL;
@property (nonatomic, retain) NSMutableArray *iconChecksums;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic, retain) NSMutableArray *locationShiftEnabledRegions;
@property (nonatomic) unsigned int locationShiftVersion;
@property (nonatomic, retain) NSString *logMessageUsageURL;
@property (nonatomic, retain) NSString *logMessageUsageV3URL;
@property (nonatomic, retain) NSString *muninBaseURL;
@property (nonatomic, retain) NSMutableArray *muninBuckets;
@property (nonatomic, retain) NSMutableArray *muninVersions;
@property (nonatomic, retain) NSString *polyLocationShiftURL;
@property (nonatomic, retain) NSString *proactiveRoutingURL;
@property (nonatomic, retain) NSString *problemCategoriesURL;
@property (nonatomic, retain) NSString *problemOptInURL;
@property (nonatomic, retain) NSString *problemStatusURL;
@property (nonatomic, retain) NSString *problemSubmissionURL;
@property (nonatomic, retain) NSString *realtimeTrafficProbeURL;
@property (nonatomic, retain) NSMutableArray *regionalResources;
@property (nonatomic, retain) NSString *releaseInfo;
@property (nonatomic, retain) NSMutableArray *resources;
@property (nonatomic, retain) NSString *resourcesURL;
@property (nonatomic, retain) NSString *reverseGeocoderVersionsURL;
@property (nonatomic, retain) NSString *searchAttributionManifestURL;
@property (nonatomic, retain) NSString *simpleETAURL;
@property (nonatomic, retain) NSString *spatialLookupURL;
@property (nonatomic, retain) NSMutableArray *styleSheetChecksums;
@property (nonatomic, retain) NSMutableArray *styleSheets;
@property (nonatomic, retain) NSMutableArray *textureChecksums;
@property (nonatomic, retain) NSMutableArray *textures;
@property (nonatomic, retain) NSMutableArray *tileGroups;
@property (nonatomic, retain) NSMutableArray *tileSets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *urlInfoSets;
@property (nonatomic, retain) GEOVersionManifest *versionManifest;
@property (nonatomic, retain) NSString *wifiConnectionQualityProbeURL;
@property (nonatomic, retain) NSMutableArray *xmlChecksums;
@property (nonatomic, retain) NSMutableArray *xmls;

+ (Class)announcementsSupportedLanguagesType;
+ (Class)attributionType;
+ (Class)dataSetType;
+ (Class)dataSetURLOverrideType;
+ (Class)displayStringsType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (bool)isValid:(id)arg1;
+ (Class)locationShiftEnabledRegionType;
+ (Class)muninBucketType;
+ (Class)muninVersionType;
+ (Class)regionalResourceType;
+ (Class)resourceType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)textureChecksumType;
+ (Class)textureType;
+ (Class)tileGroupType;
+ (Class)tileSetType;
+ (Class)urlInfoSetType;
+ (Class)xmlChecksumType;
+ (Class)xmlType;

- (void).cxx_destruct;
- (id)abExperimentURL;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addDataSet:(id)arg1;
- (void)addDataSetURLOverride:(id)arg1;
- (void)addDisplayStrings:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addFontChecksum:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)addMuninBucket:(id)arg1;
- (void)addMuninVersion:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addResource:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addTextureChecksum:(id)arg1;
- (void)addTileGroup:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)addUrlInfoSet:(id)arg1;
- (void)addXml:(id)arg1;
- (void)addXmlChecksum:(id)arg1;
- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)announcementsURL;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)authProxyURL;
- (id)authToken;
- (id)backgroundDispatcherURL;
- (id)backgroundRevGeoURL;
- (id)batchReverseGeocoderURL;
- (id)batchTrafficProbeURL;
- (id)bluePOIDispatcherURL;
- (id)businessPortalBaseURL;
- (void)clearAnnouncementsSupportedLanguages;
- (void)clearAttributions;
- (void)clearDataSetURLOverrides;
- (void)clearDataSets;
- (void)clearDisplayStrings;
- (void)clearFontChecksums;
- (void)clearFonts;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearLocationShiftEnabledRegions;
- (void)clearMuninBuckets;
- (void)clearMuninVersions;
- (void)clearRegionalResources;
- (void)clearResources;
- (void)clearStyleSheetChecksums;
- (void)clearStyleSheets;
- (void)clearTextureChecksums;
- (void)clearTextures;
- (void)clearTileGroups;
- (void)clearTileSets;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearUrlInfoSets;
- (void)clearXmlChecksums;
- (void)clearXmls;
- (void)convertFromLegacyFormat;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (id)dataSetURLOverrideAtIndex:(unsigned long long)arg1;
- (id)dataSetURLOverrides;
- (unsigned long long)dataSetURLOverridesCount;
- (id)dataSets;
- (unsigned long long)dataSetsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (id)displayStrings;
- (id)displayStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayStringsCount;
- (id)etaURL;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (id)fontChecksums;
- (unsigned long long)fontChecksumsCount;
- (id)fonts;
- (unsigned long long)fontsCount;
- (bool)hasAbExperimentURL;
- (bool)hasAddressCorrectionInitURL;
- (bool)hasAddressCorrectionUpdateURL;
- (bool)hasAnnouncementsURL;
- (bool)hasAuthProxyURL;
- (bool)hasAuthToken;
- (bool)hasBackgroundDispatcherURL;
- (bool)hasBackgroundRevGeoURL;
- (bool)hasBatchReverseGeocoderURL;
- (bool)hasBatchTrafficProbeURL;
- (bool)hasBluePOIDispatcherURL;
- (bool)hasBusinessPortalBaseURL;
- (bool)hasDirectionsURL;
- (bool)hasDispatcherURL;
- (bool)hasEtaURL;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocationShiftVersion;
- (bool)hasLogMessageUsageURL;
- (bool)hasLogMessageUsageV3URL;
- (bool)hasMuninBaseURL;
- (bool)hasPolyLocationShiftURL;
- (bool)hasProactiveRoutingURL;
- (bool)hasProblemCategoriesURL;
- (bool)hasProblemOptInURL;
- (bool)hasProblemStatusURL;
- (bool)hasProblemSubmissionURL;
- (bool)hasRealtimeTrafficProbeURL;
- (bool)hasReleaseInfo;
- (bool)hasResourcesURL;
- (bool)hasReverseGeocoderVersionsURL;
- (bool)hasSearchAttributionManifestURL;
- (bool)hasSimpleETAURL;
- (bool)hasSpatialLookupURL;
- (bool)hasVersionManifest;
- (bool)hasWifiConnectionQualityProbeURL;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (id)iconChecksums;
- (unsigned long long)iconChecksumsCount;
- (id)icons;
- (unsigned long long)iconsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)jsonRepresentation;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (id)locationShiftEnabledRegions;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (unsigned int)locationShiftVersion;
- (id)logMessageUsageURL;
- (id)logMessageUsageV3URL;
- (void)mergeFrom:(id)arg1;
- (id)muninBaseURL;
- (id)muninBucketAtIndex:(unsigned long long)arg1;
- (id)muninBuckets;
- (unsigned long long)muninBucketsCount;
- (id)muninVersionAtIndex:(unsigned long long)arg1;
- (id)muninVersions;
- (unsigned long long)muninVersionsCount;
- (id)polyLocationShiftURL;
- (id)preferedURLSetFor:(id)arg1;
- (id)preferredDataSetForClientDatasetMetadata:(id)arg1;
- (id)preferredDataSetForMapsABClient;
- (id)proactiveRoutingURL;
- (id)problemCategoriesURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)realtimeTrafficProbeURL;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (id)regionalResources;
- (unsigned long long)regionalResourcesCount;
- (id)releaseInfo;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (id)resources;
- (unsigned long long)resourcesCount;
- (id)resourcesURL;
- (id)reverseGeocoderVersionsURL;
- (id)searchAttributionManifestURL;
- (void)setAbExperimentURL:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setAuthProxyURL:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setBackgroundDispatcherURL:(id)arg1;
- (void)setBackgroundRevGeoURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setBatchTrafficProbeURL:(id)arg1;
- (void)setBluePOIDispatcherURL:(id)arg1;
- (void)setBusinessPortalBaseURL:(id)arg1;
- (void)setDataSetURLOverrides:(id)arg1;
- (void)setDataSets:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setDisplayStrings:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setFontChecksums:(id)arg1;
- (void)setFonts:(id)arg1;
- (void)setHasLocationShiftVersion:(bool)arg1;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setLocationShiftEnabledRegions:(id)arg1;
- (void)setLocationShiftVersion:(unsigned int)arg1;
- (void)setLogMessageUsageURL:(id)arg1;
- (void)setLogMessageUsageV3URL:(id)arg1;
- (void)setMuninBaseURL:(id)arg1;
- (void)setMuninBuckets:(id)arg1;
- (void)setMuninVersions:(id)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setProactiveRoutingURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setRealtimeTrafficProbeURL:(id)arg1;
- (void)setRegionalResources:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setSpatialLookupURL:(id)arg1;
- (void)setStyleSheetChecksums:(id)arg1;
- (void)setStyleSheets:(id)arg1;
- (void)setTextureChecksums:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setTileGroups:(id)arg1;
- (void)setTileSets:(id)arg1;
- (void)setUrlInfoSets:(id)arg1;
- (void)setVersionManifest:(id)arg1;
- (void)setWifiConnectionQualityProbeURL:(id)arg1;
- (void)setXmlChecksums:(id)arg1;
- (void)setXmls:(id)arg1;
- (id)simpleETAURL;
- (id)spatialLookupURL;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksums;
- (unsigned long long)styleSheetChecksumsCount;
- (id)styleSheets;
- (unsigned long long)styleSheetsCount;
- (id)textureAtIndex:(unsigned long long)arg1;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (id)textureChecksums;
- (unsigned long long)textureChecksumsCount;
- (id)textures;
- (unsigned long long)texturesCount;
- (id)tileGroupAtIndex:(unsigned long long)arg1;
- (id)tileGroups;
- (unsigned long long)tileGroupsCount;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (id)tileSets;
- (unsigned long long)tileSetsCount;
- (id)unknownFields;
- (id)urlInfoSetAtIndex:(unsigned long long)arg1;
- (id)urlInfoSets;
- (unsigned long long)urlInfoSetsCount;
- (id)versionManifest;
- (id)wifiConnectionQualityProbeURL;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (id)xmlChecksums;
- (unsigned long long)xmlChecksumsCount;
- (id)xmls;
- (unsigned long long)xmlsCount;

@end
