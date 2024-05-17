/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceResult : PBCodable <NSCopying> {
    NSMutableArray * _additionalPlaces;
    int  _cacheControl;
    NSMutableArray * _disambiguationLabels;
    struct { 
        unsigned int has_flyoverTourMuid : 1; 
        unsigned int has_cacheControl : 1; 
        unsigned int has_travelDistance : 1; 
        unsigned int has_travelTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_additionalPlaces : 1; 
        unsigned int read_disambiguationLabels : 1; 
        unsigned int read_matchedTokens : 1; 
        unsigned int read_namedFeatures : 1; 
        unsigned int read_namedFields : 1; 
        unsigned int read_place : 1; 
        unsigned int read_quad : 1; 
        unsigned int read_revgeoRequestTemplate : 1; 
        unsigned int read_suggestedQuery : 1; 
        unsigned int read_tokenEntity : 1; 
        unsigned int read_unmatchedStrings : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _flyoverTourMuid;
    NSMutableArray * _matchedTokens;
    NSMutableArray * _namedFeatures;
    NSMutableArray * _namedFields;
    GEOPlace * _place;
    NSString * _quad;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPlaceSearchRequest * _revgeoRequestTemplate;
    NSString * _suggestedQuery;
    GEOAddress * _tokenEntity;
    unsigned int  _travelDistance;
    unsigned int  _travelTime;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _unmatchedStrings;
}

@property (nonatomic, retain) NSMutableArray *additionalPlaces;
@property (nonatomic) int cacheControl;
@property (nonatomic, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic) unsigned long long flyoverTourMuid;
@property (nonatomic) bool hasCacheControl;
@property (nonatomic) bool hasFlyoverTourMuid;
@property (nonatomic, readonly) bool hasQuad;
@property (nonatomic, readonly) bool hasRevgeoRequestTemplate;
@property (nonatomic, readonly) bool hasSuggestedQuery;
@property (nonatomic, readonly) bool hasTokenEntity;
@property (nonatomic) bool hasTravelDistance;
@property (nonatomic) bool hasTravelTime;
@property (nonatomic, retain) NSMutableArray *matchedTokens;
@property (nonatomic, retain) NSMutableArray *namedFeatures;
@property (nonatomic, retain) NSMutableArray *namedFields;
@property (nonatomic, retain) GEOPlace *place;
@property (nonatomic, retain) NSString *quad;
@property (nonatomic, retain) GEOPlaceSearchRequest *revgeoRequestTemplate;
@property (nonatomic, retain) NSString *suggestedQuery;
@property (nonatomic, retain) GEOAddress *tokenEntity;
@property (nonatomic) unsigned int travelDistance;
@property (nonatomic) unsigned int travelTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *unmatchedStrings;

+ (Class)additionalPlaceType;
+ (Class)disambiguationLabelType;
+ (bool)isValid:(id)arg1;
+ (Class)matchedTokenType;
+ (Class)namedFeatureType;
+ (Class)namedFieldType;
+ (Class)unmatchedStringType;

- (void).cxx_destruct;
- (int)StringAsCacheControl:(id)arg1;
- (void)addAdditionalPlace:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addMatchedToken:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addNamedField:(id)arg1;
- (void)addUnmatchedString:(id)arg1;
- (id)additionalPlaceAtIndex:(unsigned long long)arg1;
- (id)additionalPlaces;
- (unsigned long long)additionalPlacesCount;
- (int)cacheControl;
- (id)cacheControlAsString:(int)arg1;
- (void)clearAdditionalPlaces;
- (void)clearDisambiguationLabels;
- (void)clearMatchedTokens;
- (void)clearNamedFeatures;
- (void)clearNamedFields;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearUnmatchedStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (unsigned long long)flyoverTourMuid;
- (id)geoMapItem;
- (bool)hasCacheControl;
- (bool)hasFlyoverTourMuid;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasQuad;
- (bool)hasRevgeoRequestTemplate;
- (bool)hasSuggestedQuery;
- (bool)hasTokenEntity;
- (bool)hasTravelDistance;
- (bool)hasTravelTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)matchedTokenAtIndex:(unsigned long long)arg1;
- (id)matchedTokens;
- (unsigned long long)matchedTokensCount;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (id)namedFeatures;
- (unsigned long long)namedFeaturesCount;
- (id)namedFieldAtIndex:(unsigned long long)arg1;
- (id)namedFields;
- (unsigned long long)namedFieldsCount;
- (id)place;
- (id)quad;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)revgeoRequestTemplate;
- (void)setAdditionalPlaces:(id)arg1;
- (void)setCacheControl:(int)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setFlyoverTourMuid:(unsigned long long)arg1;
- (void)setHasCacheControl:(bool)arg1;
- (void)setHasFlyoverTourMuid:(bool)arg1;
- (void)setHasTravelDistance:(bool)arg1;
- (void)setHasTravelTime:(bool)arg1;
- (void)setMatchedTokens:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setNamedFields:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setRevgeoRequestTemplate:(id)arg1;
- (void)setSuggestedQuery:(id)arg1;
- (void)setTokenEntity:(id)arg1;
- (void)setTravelDistance:(unsigned int)arg1;
- (void)setTravelTime:(unsigned int)arg1;
- (void)setUnmatchedStrings:(id)arg1;
- (id)suggestedQuery;
- (id)tokenEntity;
- (unsigned int)travelDistance;
- (unsigned int)travelTime;
- (id)unknownFields;
- (id)unmatchedStringAtIndex:(unsigned long long)arg1;
- (id)unmatchedStrings;
- (unsigned long long)unmatchedStringsCount;
- (void)writeTo:(id)arg1;

@end
