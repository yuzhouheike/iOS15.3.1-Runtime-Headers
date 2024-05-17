/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {
    NSString * _accessibilityString;
    int  _artworkType;
    int  _artworkUse;
    int  _badge;
    struct { 
        unsigned int has_artworkType : 1; 
        unsigned int has_artworkUse : 1; 
        unsigned int has_badge : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_accessibilityString : 1; 
        unsigned int read_iconFallbackShield : 1; 
        unsigned int read_icon : 1; 
        unsigned int read_shield : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPBTransitIcon * _icon;
    GEOPBTransitShield * _iconFallbackShield;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPBTransitShield * _shield;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *accessibilityString;
@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic) int artworkType;
@property (nonatomic) int artworkUse;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic) int badge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAccessibilityString;
@property (nonatomic) bool hasArtworkType;
@property (nonatomic) bool hasArtworkUse;
@property (nonatomic) bool hasBadge;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, readonly) bool hasIconFallbackShield;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) bool hasShield;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPBTransitIcon *icon;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, retain) GEOPBTransitShield *iconFallbackShield;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, retain) GEOPBTransitShield *shield;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitTextDataSource> *textDataSource;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsArtworkType:(id)arg1;
- (int)StringAsArtworkUse:(id)arg1;
- (int)StringAsBadge:(id)arg1;
- (id)accessibilityString;
- (id)accessibilityText;
- (int)artworkSourceType;
- (int)artworkType;
- (id)artworkTypeAsString:(int)arg1;
- (int)artworkUse;
- (id)artworkUseAsString:(int)arg1;
- (int)artworkUseType;
- (int)badge;
- (id)badgeAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessibilityString;
- (bool)hasArtworkType;
- (bool)hasArtworkUse;
- (bool)hasBadge;
- (bool)hasIcon;
- (bool)hasIconFallbackShield;
- (bool)hasRoutingIncidentBadge;
- (bool)hasShield;
- (unsigned long long)hash;
- (id)icon;
- (id)iconDataSource;
- (id)iconFallbackShield;
- (id)iconFallbackShieldDataSource;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessibilityString:(id)arg1;
- (void)setArtworkType:(int)arg1;
- (void)setArtworkUse:(int)arg1;
- (void)setBadge:(int)arg1;
- (void)setHasArtworkType:(bool)arg1;
- (void)setHasArtworkUse:(bool)arg1;
- (void)setHasBadge:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconFallbackShield:(id)arg1;
- (void)setShield:(id)arg1;
- (id)shield;
- (id)shieldDataSource;
- (id)textDataSource;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
