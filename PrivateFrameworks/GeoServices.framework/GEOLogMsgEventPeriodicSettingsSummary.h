/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventPeriodicSettingsSummary : PBCodable <NSCopying> {
    GEOLogMsgStateAccount * _account;
    GEOLogMsgStateDeviceConnection * _deviceConnection;
    unsigned int  _electricVehicleCount;
    unsigned int  _favoritesCount;
    struct { 
        unsigned int has_electricVehicleCount : 1; 
        unsigned int has_favoritesCount : 1; 
        unsigned int has_licensePlateCount : 1; 
        unsigned int has_personalCollectionsCount : 1; 
        unsigned int has_homeFavoriteSet : 1; 
        unsigned int has_learnFromAppEnabled : 1; 
        unsigned int has_notificationsEnabled : 1; 
        unsigned int has_siriSuggestionsEnabled : 1; 
        unsigned int has_workFavoriteSet : 1; 
        unsigned int read_account : 1; 
        unsigned int read_deviceConnection : 1; 
        unsigned int read_mapSettings : 1; 
        unsigned int read_mapUiShown : 1; 
        unsigned int read_mapsFeatures : 1; 
        unsigned int read_mapsUserSettings : 1; 
        unsigned int read_routingSettings : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _homeFavoriteSet;
    bool  _learnFromAppEnabled;
    unsigned int  _licensePlateCount;
    GEOLogMsgStateMapSettings * _mapSettings;
    GEOLogMsgStateMapUIShown * _mapUiShown;
    GEOLogMsgStateMapsFeatures * _mapsFeatures;
    GEOLogMsgStateMapsUserSettings * _mapsUserSettings;
    bool  _notificationsEnabled;
    unsigned int  _personalCollectionsCount;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLogMsgStateRoutingSettings * _routingSettings;
    bool  _siriSuggestionsEnabled;
    bool  _workFavoriteSet;
}

@property (nonatomic, retain) GEOLogMsgStateAccount *account;
@property (nonatomic, retain) GEOLogMsgStateDeviceConnection *deviceConnection;
@property (nonatomic) unsigned int electricVehicleCount;
@property (nonatomic) unsigned int favoritesCount;
@property (nonatomic, readonly) bool hasAccount;
@property (nonatomic, readonly) bool hasDeviceConnection;
@property (nonatomic) bool hasElectricVehicleCount;
@property (nonatomic) bool hasFavoritesCount;
@property (nonatomic) bool hasHomeFavoriteSet;
@property (nonatomic) bool hasLearnFromAppEnabled;
@property (nonatomic) bool hasLicensePlateCount;
@property (nonatomic, readonly) bool hasMapSettings;
@property (nonatomic, readonly) bool hasMapUiShown;
@property (nonatomic, readonly) bool hasMapsFeatures;
@property (nonatomic, readonly) bool hasMapsUserSettings;
@property (nonatomic) bool hasNotificationsEnabled;
@property (nonatomic) bool hasPersonalCollectionsCount;
@property (nonatomic, readonly) bool hasRoutingSettings;
@property (nonatomic) bool hasSiriSuggestionsEnabled;
@property (nonatomic) bool hasWorkFavoriteSet;
@property (nonatomic) bool homeFavoriteSet;
@property (nonatomic) bool learnFromAppEnabled;
@property (nonatomic) unsigned int licensePlateCount;
@property (nonatomic, retain) GEOLogMsgStateMapSettings *mapSettings;
@property (nonatomic, retain) GEOLogMsgStateMapUIShown *mapUiShown;
@property (nonatomic, retain) GEOLogMsgStateMapsFeatures *mapsFeatures;
@property (nonatomic, retain) GEOLogMsgStateMapsUserSettings *mapsUserSettings;
@property (nonatomic) bool notificationsEnabled;
@property (nonatomic) unsigned int personalCollectionsCount;
@property (nonatomic, retain) GEOLogMsgStateRoutingSettings *routingSettings;
@property (nonatomic) bool siriSuggestionsEnabled;
@property (nonatomic) bool workFavoriteSet;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceConnection;
- (id)dictionaryRepresentation;
- (unsigned int)electricVehicleCount;
- (unsigned int)favoritesCount;
- (bool)hasAccount;
- (bool)hasDeviceConnection;
- (bool)hasElectricVehicleCount;
- (bool)hasFavoritesCount;
- (bool)hasHomeFavoriteSet;
- (bool)hasLearnFromAppEnabled;
- (bool)hasLicensePlateCount;
- (bool)hasMapSettings;
- (bool)hasMapUiShown;
- (bool)hasMapsFeatures;
- (bool)hasMapsUserSettings;
- (bool)hasNotificationsEnabled;
- (bool)hasPersonalCollectionsCount;
- (bool)hasRoutingSettings;
- (bool)hasSiriSuggestionsEnabled;
- (bool)hasWorkFavoriteSet;
- (unsigned long long)hash;
- (bool)homeFavoriteSet;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)learnFromAppEnabled;
- (unsigned int)licensePlateCount;
- (id)mapSettings;
- (id)mapUiShown;
- (id)mapsFeatures;
- (id)mapsUserSettings;
- (void)mergeFrom:(id)arg1;
- (bool)notificationsEnabled;
- (unsigned int)personalCollectionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingSettings;
- (void)setAccount:(id)arg1;
- (void)setDeviceConnection:(id)arg1;
- (void)setElectricVehicleCount:(unsigned int)arg1;
- (void)setFavoritesCount:(unsigned int)arg1;
- (void)setHasElectricVehicleCount:(bool)arg1;
- (void)setHasFavoritesCount:(bool)arg1;
- (void)setHasHomeFavoriteSet:(bool)arg1;
- (void)setHasLearnFromAppEnabled:(bool)arg1;
- (void)setHasLicensePlateCount:(bool)arg1;
- (void)setHasNotificationsEnabled:(bool)arg1;
- (void)setHasPersonalCollectionsCount:(bool)arg1;
- (void)setHasSiriSuggestionsEnabled:(bool)arg1;
- (void)setHasWorkFavoriteSet:(bool)arg1;
- (void)setHomeFavoriteSet:(bool)arg1;
- (void)setLearnFromAppEnabled:(bool)arg1;
- (void)setLicensePlateCount:(unsigned int)arg1;
- (void)setMapSettings:(id)arg1;
- (void)setMapUiShown:(id)arg1;
- (void)setMapsFeatures:(id)arg1;
- (void)setMapsUserSettings:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPersonalCollectionsCount:(unsigned int)arg1;
- (void)setRoutingSettings:(id)arg1;
- (void)setSiriSuggestionsEnabled:(bool)arg1;
- (void)setWorkFavoriteSet:(bool)arg1;
- (bool)siriSuggestionsEnabled;
- (bool)workFavoriteSet;
- (void)writeTo:(id)arg1;

@end
