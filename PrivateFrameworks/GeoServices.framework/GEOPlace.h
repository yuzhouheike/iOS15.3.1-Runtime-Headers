/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlace : PBCodable <GEOURLSerializable, NSCopying> {
    GEOAddress * _address;
    int  _addressGeocodeAccuracy;
    double  _area;
    NSMutableArray * _business;
    GEOLatLng * _center;
    GEOMapRegion * _displayMapRegion;
    NSMutableArray * _entryPoints;
    struct { 
        unsigned int has_uID : 1; 
        unsigned int has_area : 1; 
        unsigned int has_geoId : 1; 
        unsigned int has_addressGeocodeAccuracy : 1; 
        unsigned int has_localSearchProviderID : 1; 
        unsigned int has_referenceFrame : 1; 
        unsigned int has_type : 1; 
        unsigned int has_isDisputed : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_address : 1; 
        unsigned int read_business : 1; 
        unsigned int read_center : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_entryPoints : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_name : 1; 
        unsigned int read_phoneticAddress : 1; 
        unsigned int read_phoneticLocaleIdentifier : 1; 
        unsigned int read_phoneticName : 1; 
        unsigned int read_roadAccessPoints : 1; 
        unsigned int read_spokenAddress : 1; 
        unsigned int read_spokenName : 1; 
        unsigned int read_spokenStructuredAddress : 1; 
        unsigned int read_timezone : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    long long  _geoId;
    bool  _isDisputed;
    int  _localSearchProviderID;
    GEOMapRegion * _mapRegion;
    NSString * _name;
    GEOAddress * _phoneticAddress;
    NSString * _phoneticLocaleIdentifier;
    NSString * _phoneticName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _referenceFrame;
    NSMutableArray * _roadAccessPoints;
    NSString * _spokenAddress;
    NSString * _spokenName;
    GEOStructuredAddress * _spokenStructuredAddress;
    GEOTimezone * _timezone;
    int  _type;
    long long  _uID;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic) int addressGeocodeAccuracy;
@property (nonatomic) double area;
@property (nonatomic, retain) NSMutableArray *business;
@property (nonatomic, retain) GEOLatLng *center;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, retain) NSMutableArray *entryPoints;
@property (nonatomic, readonly) GEOBusiness *firstBusiness;
@property (nonatomic) long long geoId;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic) bool hasAddressGeocodeAccuracy;
@property (nonatomic) bool hasArea;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic) bool hasGeoId;
@property (nonatomic) bool hasIsDisputed;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPhoneticAddress;
@property (nonatomic, readonly) bool hasPhoneticLocaleIdentifier;
@property (nonatomic, readonly) bool hasPhoneticName;
@property (nonatomic) bool hasReferenceFrame;
@property (nonatomic, readonly) bool hasSpokenAddress;
@property (nonatomic, readonly) bool hasSpokenName;
@property (nonatomic, readonly) bool hasSpokenStructuredAddress;
@property (nonatomic, readonly) bool hasTimezone;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDisputed;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOAddress *phoneticAddress;
@property (nonatomic, retain) NSString *phoneticLocaleIdentifier;
@property (nonatomic, retain) NSString *phoneticName;
@property (nonatomic) int referenceFrame;
@property (nonatomic, retain) NSMutableArray *roadAccessPoints;
@property (nonatomic, retain) NSString *spokenAddress;
@property (nonatomic, retain) NSString *spokenName;
@property (nonatomic, retain) GEOStructuredAddress *spokenStructuredAddress;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOTimezone *timezone;
@property (nonatomic) int type;
@property (nonatomic) long long uID;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_placesFromDirectionsAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_placesFromPresentAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_placesFromShowAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_placesFromURL:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_urlForAction:(id)arg1 rison:(id)arg2;
+ (id)_urlForDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 options:(id)arg3;
+ (id)_urlRepresentationForCurrentLocation;
+ (id)_urlToShowCurrentLocationAndPlaces:(id)arg1 currentLocationIndex:(unsigned long long)arg2 options:(id)arg3;
+ (id)_urlToShowCurrentLocationWithOptions:(id)arg1;
+ (id)_urlToShowPlaces:(id)arg1 options:(id)arg2;
+ (id)_urlToShowURLRepresentations:(id)arg1 options:(id)arg2;
+ (Class)businessType;
+ (Class)entryPointType;
+ (bool)isValid:(id)arg1;
+ (id)placeForPlaceData:(id)arg1;
+ (Class)roadAccessPointsType;

- (void).cxx_destruct;
- (int)StringAsAddressGeocodeAccuracy:(id)arg1;
- (int)StringAsReferenceFrame:(id)arg1;
- (int)StringAsType:(id)arg1;
- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)_urlForDirectionsFromCurrentLocationWithOptions:(id)arg1;
- (id)_urlForDirectionsFromPlace:(id)arg1 options:(id)arg2;
- (id)_urlForDirectionsToCurrentLocationWithOptions:(id)arg1;
- (id)_urlForDirectionsToPlace:(id)arg1 options:(id)arg2;
- (id)_urlToShowWithOptions:(id)arg1;
- (void)addBusiness:(id)arg1;
- (void)addEntryPoint:(id)arg1;
- (void)addRoadAccessPoints:(id)arg1;
- (id)address;
- (id)addressDictionary;
- (int)addressGeocodeAccuracy;
- (id)addressGeocodeAccuracyAsString:(int)arg1;
- (double)area;
- (id)arrivalMapRegion;
- (id)arrivalMapRegionForTransportType:(int)arg1;
- (id)bestName;
- (id)business;
- (id)businessAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessCount;
- (id)center;
- (void)clearBusiness;
- (void)clearEntryPoints;
- (void)clearRoadAccessPoints;
- (void)clearUnknownFields:(bool)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (id)entryPointAtIndex:(unsigned long long)arg1;
- (id)entryPoints;
- (unsigned long long)entryPointsCount;
- (id)firstBusiness;
- (long long)geoId;
- (id)geoMapItem;
- (bool)hasAddress;
- (bool)hasAddressGeocodeAccuracy;
- (bool)hasArea;
- (bool)hasCenter;
- (bool)hasDisplayMapRegion;
- (bool)hasGeoId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsDisputed;
- (bool)hasLocalSearchProviderID;
- (bool)hasMapRegion;
- (bool)hasName;
- (bool)hasPhoneticAddress;
- (bool)hasPhoneticLocaleIdentifier;
- (bool)hasPhoneticName;
- (bool)hasReferenceFrame;
- (bool)hasSpokenAddress;
- (bool)hasSpokenName;
- (bool)hasSpokenStructuredAddress;
- (bool)hasTimezone;
- (bool)hasType;
- (bool)hasUID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 addressDictionary:(id)arg3;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 placeType:(int)arg3;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 muid:(unsigned long long)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned int)arg8 normalizedUserRatingScore:(float)arg9;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;
- (id)initWithPlaceInfo:(id)arg1 entity:(id)arg2 addressObject:(id)arg3 bounds:(id)arg4 roadAccessInfo:(id)arg5;
- (id)initWithUrlRepresentation:(id)arg1;
- (bool)isDisputed;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)localSearchProviderID;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)phoneticAddress;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (double)radialDistance;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)referenceFrame;
- (id)referenceFrameAsString:(int)arg1;
- (id)roadAccessPoints;
- (id)roadAccessPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)setAddress:(id)arg1;
- (void)setAddressGeocodeAccuracy:(int)arg1;
- (void)setArea:(double)arg1;
- (void)setBusiness:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setEntryPoints:(id)arg1;
- (void)setGeoId:(long long)arg1;
- (void)setHasAddressGeocodeAccuracy:(bool)arg1;
- (void)setHasArea:(bool)arg1;
- (void)setHasGeoId:(bool)arg1;
- (void)setHasIsDisputed:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasReferenceFrame:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUID:(bool)arg1;
- (void)setIsDisputed:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setNSTimeZone:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneticAddress:(id)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setReferenceFrame:(int)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (void)setSpokenAddress:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (void)setSpokenStructuredAddress:(id)arg1;
- (void)setTimezone:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUID:(long long)arg1;
- (id)spokenAddress;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)timezone;
- (int)type;
- (id)typeAsString:(int)arg1;
- (long long)uID;
- (id)unknownFields;
- (id)urlRepresentation;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)clLocation;
- (id)clRegion;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithPlacemark:(id)arg1;

@end
