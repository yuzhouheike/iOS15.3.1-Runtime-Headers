/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitDecoderData : PBCodable <NSCopying> {
    NSMutableArray * _accessPoints;
    NSMutableArray * _artworks;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_accessPoints : 1; 
        unsigned int read_artworks : 1; 
        unsigned int read_halls : 1; 
        unsigned int read_lines : 1; 
        unsigned int read_stations : 1; 
        unsigned int read_steps : 1; 
        unsigned int read_stops : 1; 
        unsigned int read_systems : 1; 
        unsigned int read_transitIncidentMessages : 1; 
        unsigned int read_transitIncidents : 1; 
        unsigned int read_walkings : 1; 
        unsigned int read_zilchPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _halls;
    NSMutableArray * _lines;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _stations;
    NSMutableArray * _steps;
    NSMutableArray * _stops;
    NSMutableArray * _systems;
    NSMutableArray * _transitIncidentMessages;
    NSMutableArray * _transitIncidents;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _walkings;
    NSMutableArray * _zilchPoints;
}

@property (nonatomic, retain) NSMutableArray *accessPoints;
@property (nonatomic, retain) NSMutableArray *artworks;
@property (nonatomic, retain) NSMutableArray *halls;
@property (nonatomic, retain) NSMutableArray *lines;
@property (nonatomic, retain) NSMutableArray *stations;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, retain) NSMutableArray *stops;
@property (nonatomic, retain) NSMutableArray *systems;
@property (nonatomic, retain) NSMutableArray *transitIncidentMessages;
@property (nonatomic, retain) NSMutableArray *transitIncidents;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *walkings;
@property (nonatomic, retain) NSMutableArray *zilchPoints;

+ (Class)accessPointType;
+ (Class)artworkType;
+ (Class)hallType;
+ (bool)isValid:(id)arg1;
+ (Class)lineType;
+ (Class)stationType;
+ (Class)stepType;
+ (Class)stopType;
+ (Class)systemType;
+ (Class)transitIncidentMessageType;
+ (Class)transitIncidentType;
+ (Class)walkingType;
+ (Class)zilchPointsType;

- (void).cxx_destruct;
- (id)accessPointAtIndex:(unsigned long long)arg1;
- (id)accessPoints;
- (unsigned long long)accessPointsCount;
- (void)addAccessPoint:(id)arg1;
- (void)addArtwork:(id)arg1;
- (void)addHall:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addStation:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addStop:(id)arg1;
- (void)addSystem:(id)arg1;
- (void)addTransitIncident:(id)arg1;
- (void)addTransitIncidentMessage:(id)arg1;
- (void)addWalking:(id)arg1;
- (void)addZilchPoints:(id)arg1;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (id)artworkFromIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)artworks;
- (unsigned long long)artworksCount;
- (void)clearAccessPoints;
- (void)clearArtworks;
- (void)clearHalls;
- (void)clearLines;
- (void)clearStations;
- (void)clearSteps;
- (void)clearStops;
- (void)clearSystems;
- (void)clearTransitIncidentMessages;
- (void)clearTransitIncidents;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearWalkings;
- (void)clearZilchPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hallAtIndex:(unsigned long long)arg1;
- (id)halls;
- (unsigned long long)hallsCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lineAtIndex:(unsigned long long)arg1;
- (id)lines;
- (unsigned long long)linesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPoints:(id)arg1;
- (void)setArtworks:(id)arg1;
- (void)setHalls:(id)arg1;
- (void)setLines:(id)arg1;
- (void)setStations:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setStops:(id)arg1;
- (void)setSystems:(id)arg1;
- (void)setTransitIncidentMessages:(id)arg1;
- (void)setTransitIncidents:(id)arg1;
- (void)setWalkings:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)stationAtIndex:(unsigned long long)arg1;
- (id)stations;
- (unsigned long long)stationsCount;
- (id)stepAtIndex:(unsigned long long)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (id)stopAtIndex:(unsigned long long)arg1;
- (id)stops;
- (unsigned long long)stopsCount;
- (id)systemAtIndex:(unsigned long long)arg1;
- (id)systems;
- (unsigned long long)systemsCount;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;
- (id)transitIncidentMessageAtIndex:(unsigned long long)arg1;
- (id)transitIncidentMessages;
- (unsigned long long)transitIncidentMessagesCount;
- (id)transitIncidents;
- (unsigned long long)transitIncidentsCount;
- (id)unknownFields;
- (id)walkingAtIndex:(unsigned long long)arg1;
- (id)walkings;
- (unsigned long long)walkingsCount;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zilchPointsCount;

@end
