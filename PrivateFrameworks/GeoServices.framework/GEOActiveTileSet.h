/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActiveTileSet : PBCodable <NSCopying> {
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _availableTiles;
    unsigned long long  _availableTilesCount;
    unsigned long long  _availableTilesSpace;
    NSString * _baseURL;
    int  _checksumType;
    NSMutableArray * _countryRegionAllowlists;
    NSMutableArray * _deviceSKUAllowlists;
    struct { 
        unsigned int has_checksumType : 1; 
        unsigned int has_requestStyle : 1; 
        unsigned int has_timeToLiveSeconds : 1; 
        unsigned int has_updateBehavior : 1; 
        unsigned int has_useAuthProxy : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_availableTiles : 1; 
        unsigned int read_baseURL : 1; 
        unsigned int read_countryRegionAllowlists : 1; 
        unsigned int read_deviceSKUAllowlists : 1; 
        unsigned int read_localizationURL : 1; 
        unsigned int read_sentinelTiles : 1; 
        unsigned int read_supportedLanguages : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _localizationURL;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestStyle;
    int  _scale;
    NSMutableArray * _sentinelTiles;
    int  _size;
    int  _style;
    NSMutableArray * _supportedLanguages;
    unsigned int  _timeToLiveSeconds;
    PBUnknownFields * _unknownFields;
    int  _updateBehavior;
    bool  _useAuthProxy;
    unsigned int  _version;
}

@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*availableTiles;
@property (nonatomic, readonly) unsigned long long availableTilesCount;
@property (nonatomic, retain) NSString *baseURL;
@property (nonatomic) int checksumType;
@property (nonatomic, retain) NSMutableArray *countryRegionAllowlists;
@property (nonatomic, retain) NSMutableArray *deviceSKUAllowlists;
@property (nonatomic, readonly) bool hasBaseURL;
@property (nonatomic) bool hasChecksumType;
@property (nonatomic, readonly) bool hasLocalizationURL;
@property (nonatomic) bool hasRequestStyle;
@property (nonatomic) bool hasTimeToLiveSeconds;
@property (nonatomic) bool hasUpdateBehavior;
@property (nonatomic) bool hasUseAuthProxy;
@property (nonatomic, retain) NSString *localizationURL;
@property (nonatomic) int requestStyle;
@property (nonatomic) int scale;
@property (nonatomic, retain) NSMutableArray *sentinelTiles;
@property (nonatomic) int size;
@property (nonatomic) int style;
@property (nonatomic, retain) NSMutableArray *supportedLanguages;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int updateBehavior;
@property (nonatomic) bool useAuthProxy;
@property (nonatomic) unsigned int version;

+ (id)buildDisputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;
+ (Class)countryRegionAllowlistType;
+ (Class)deviceSKUAllowlistType;
+ (bool)isValid:(id)arg1;
+ (Class)sentinelTileType;
+ (Class)supportedLanguageType;

- (void).cxx_destruct;
- (int)StringAsChecksumType:(id)arg1;
- (int)StringAsRequestStyle:(id)arg1;
- (int)StringAsScale:(id)arg1;
- (int)StringAsSize:(id)arg1;
- (int)StringAsStyle:(id)arg1;
- (int)StringAsUpdateBehavior:(id)arg1;
- (id)_bestCountryRegionAllowlistMatchForCountry:(id)arg1 region:(id)arg2;
- (void)_resetBestLanguage;
- (void)addAvailableTiles:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addCountryRegionAllowlist:(id)arg1;
- (void)addDeviceSKUAllowlist:(id)arg1;
- (void)addSentinelTile:(id)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)availableTiles;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })availableTilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableTilesCount;
- (id)baseURL;
- (id)bestLanguageWithOverrideLocale:(id)arg1;
- (int)checksumType;
- (id)checksumTypeAsString:(int)arg1;
- (void)clearAvailableTiles;
- (void)clearCountryRegionAllowlists;
- (void)clearDeviceSKUAllowlists;
- (void)clearSentinelTiles;
- (void)clearSupportedLanguages;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryRegionAllowlistAtIndex:(unsigned long long)arg1;
- (id)countryRegionAllowlists;
- (unsigned long long)countryRegionAllowlistsCount;
- (id)dataForGenericTileType:(int)arg1 configuration:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)deviceSKUAllowlistAtIndex:(unsigned long long)arg1;
- (id)deviceSKUAllowlists;
- (unsigned long long)deviceSKUAllowlistsCount;
- (id)dictionaryRepresentation;
- (id)disputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;
- (bool)hasBaseURL;
- (bool)hasChecksumType;
- (bool)hasLocalizationURL;
- (bool)hasRequestStyle;
- (bool)hasTimeToLiveSeconds;
- (bool)hasUpdateBehavior;
- (bool)hasUseAuthProxy;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 36; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;
- (bool)isDisputedBordersAllowlistedForCountry:(id)arg1 region:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentTileSet:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg1 inRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)localizationURL;
- (unsigned int)maximumZoomLevelForMapPoint:(struct { double x1; double x2; })arg1;
- (unsigned int)maximumZoomLevelInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minimumZoomLevelForMapPoint:(struct { double x1; double x2; })arg1;
- (unsigned int)minimumZoomLevelInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestStyle;
- (id)requestStyleAsString:(int)arg1;
- (int)scale;
- (id)scaleAsString:(int)arg1;
- (id)sentinelTileAtIndex:(unsigned long long)arg1;
- (id)sentinelTiles;
- (unsigned long long)sentinelTilesCount;
- (void)setAvailableTiles:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setBaseURL:(id)arg1;
- (void)setChecksumType:(int)arg1;
- (void)setCountryRegionAllowlists:(id)arg1;
- (void)setDeviceSKUAllowlists:(id)arg1;
- (void)setHasChecksumType:(bool)arg1;
- (void)setHasRequestStyle:(bool)arg1;
- (void)setHasTimeToLiveSeconds:(bool)arg1;
- (void)setHasUpdateBehavior:(bool)arg1;
- (void)setHasUseAuthProxy:(bool)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setRequestStyle:(int)arg1;
- (void)setScale:(int)arg1;
- (void)setSentinelTiles:(id)arg1;
- (void)setSize:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg1;
- (void)setUpdateBehavior:(int)arg1;
- (void)setUseAuthProxy:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (id)supportedLanguages;
- (unsigned long long)supportedLanguagesCount;
- (unsigned int)timeToLiveSeconds;
- (id)unknownFields;
- (int)updateBehavior;
- (id)updateBehaviorAsString:(int)arg1;
- (bool)useAuthProxy;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
