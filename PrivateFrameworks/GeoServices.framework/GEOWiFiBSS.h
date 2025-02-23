/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWiFiBSS : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    struct { 
        unsigned int has_uniqueIdentifier : 1; 
        unsigned int read_attributes : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_latLngE7 : 1; 
        unsigned int read_location : 1; 
        unsigned int read_qualities : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    GEOLatLngE7 * _latLngE7;
    GEOLatLng * _location;
    NSMutableArray * _qualities;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLatLngE7;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasUniqueIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOLatLngE7 *latLngE7;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic, retain) NSMutableArray *qualities;
@property (nonatomic) long long uniqueIdentifier;

+ (bool)isValid:(id)arg1;
+ (Class)qualitiesType;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (void)addAttributes:(int)arg1;
- (void)addQualities:(id)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)clearQualities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasLatLngE7;
- (bool)hasLocation;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)latLngE7;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (id)qualities;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasUniqueIdentifier:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatLngE7:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setQualities:(id)arg1;
- (void)setUniqueIdentifier:(long long)arg1;
- (long long)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
