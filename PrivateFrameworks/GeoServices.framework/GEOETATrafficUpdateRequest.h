/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {
    GEOPDABClientDatasetMetadata * _abClientMetadata;
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    GEOClientCapabilities * _clientCapabilities;
    struct GEOTimepoint { 
        double _currentUserTime; 
        double _time; 
        int _type; 
        struct { 
            unsigned int currentUserTime : 1; 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _clientTimepoint;
    GEOCommonOptions * _commonOptions;
    GEOLocation * _currentUserLocation;
    NSMutableArray * _destinationWaypointTypeds;
    NSData * _directionsResponseID;
    NSString * _displayedBannerId;
    NSData * _etauResponseID;
    struct { 
        unsigned int has_clientTimepoint : 1; 
        unsigned int has_sessionID : 1; 
        unsigned int has_sessionRelativeTimestamp : 1; 
        unsigned int has_maxAlternateRouteCount : 1; 
        unsigned int has_previouslyRejectedRerouteSavings : 1; 
        unsigned int has_rerouteStatus : 1; 
        unsigned int has_includeBetterRouteSuggestion : 1; 
        unsigned int has_needServerLatency : 1; 
        unsigned int has_useClientTimepointAsNow : 1; 
        unsigned int has_useLiveTrafficAsFallback : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_abClientMetadata : 1; 
        unsigned int read_additionalEnabledMarkets : 1; 
        unsigned int read_clientCapabilities : 1; 
        unsigned int read_commonOptions : 1; 
        unsigned int read_currentUserLocation : 1; 
        unsigned int read_destinationWaypointTypeds : 1; 
        unsigned int read_directionsResponseID : 1; 
        unsigned int read_displayedBannerId : 1; 
        unsigned int read_etauResponseID : 1; 
        unsigned int read_requestingAppId : 1; 
        unsigned int read_routeAttributes : 1; 
        unsigned int read_routes : 1; 
        unsigned int read_serviceTags : 1; 
        unsigned int read_sessionState : 1; 
        unsigned int read_trafficApiResponses : 1; 
        unsigned int read_trafficSnapshotIds : 1; 
        unsigned int read_trafficSnapshot : 1; 
        unsigned int read_tripID : 1; 
        unsigned int read_tripOrigin : 1; 
        unsigned int read_waypointRoute : 1; 
        unsigned int read_xpcUuid : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeBetterRouteSuggestion;
    unsigned int  _maxAlternateRouteCount;
    bool  _needServerLatency;
    unsigned int  _previouslyRejectedRerouteSavings;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _requestingAppId;
    int  _rerouteStatus;
    GEORouteAttributes * _routeAttributes;
    NSMutableArray * _routes;
    NSMutableArray * _serviceTags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    double  _sessionRelativeTimestamp;
    NSData * _sessionState;
    NSMutableArray * _trafficApiResponses;
    GEOTFTrafficSnapshot * _trafficSnapshot;
    NSMutableArray * _trafficSnapshotIds;
    NSData * _tripID;
    GEOLocation * _tripOrigin;
    PBUnknownFields * _unknownFields;
    bool  _useClientTimepointAsNow;
    bool  _useLiveTrafficAsFallback;
    GEOETATrafficUpdateWaypointRoute * _waypointRoute;
    NSString * _xpcUuid;
}

@property (nonatomic, retain) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic, retain) GEOClientCapabilities *clientCapabilities;
@property (nonatomic) struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } clientTimepoint;
@property (nonatomic, retain) GEOCommonOptions *commonOptions;
@property (nonatomic, retain) GEOLocation *currentUserLocation;
@property (nonatomic, retain) NSMutableArray *destinationWaypointTypeds;
@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, retain) NSString *displayedBannerId;
@property (nonatomic, retain) NSData *etauResponseID;
@property (nonatomic, readonly) bool hasAbClientMetadata;
@property (nonatomic, readonly) bool hasAdditionalEnabledMarkets;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic) bool hasClientTimepoint;
@property (nonatomic, readonly) bool hasCommonOptions;
@property (nonatomic, readonly) bool hasCurrentUserLocation;
@property (nonatomic, readonly) bool hasDirectionsResponseID;
@property (nonatomic, readonly) bool hasDisplayedBannerId;
@property (nonatomic, readonly) bool hasEtauResponseID;
@property (nonatomic) bool hasIncludeBetterRouteSuggestion;
@property (nonatomic) bool hasMaxAlternateRouteCount;
@property (nonatomic) bool hasNeedServerLatency;
@property (nonatomic) bool hasPreviouslyRejectedRerouteSavings;
@property (nonatomic, readonly) bool hasRequestingAppId;
@property (nonatomic) bool hasRerouteStatus;
@property (nonatomic, readonly) bool hasRouteAttributes;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasSessionRelativeTimestamp;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic, readonly) bool hasTrafficSnapshot;
@property (nonatomic, readonly) bool hasTripID;
@property (nonatomic, readonly) bool hasTripOrigin;
@property (nonatomic) bool hasUseClientTimepointAsNow;
@property (nonatomic) bool hasUseLiveTrafficAsFallback;
@property (nonatomic, readonly) bool hasWaypointRoute;
@property (nonatomic, readonly) bool hasXpcUuid;
@property (nonatomic) bool includeBetterRouteSuggestion;
@property (nonatomic) unsigned int maxAlternateRouteCount;
@property (nonatomic) bool needServerLatency;
@property (nonatomic) unsigned int previouslyRejectedRerouteSavings;
@property (nonatomic, retain) NSString *requestingAppId;
@property (nonatomic) int rerouteStatus;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic, retain) NSMutableArray *serviceTags;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic, retain) NSMutableArray *trafficApiResponses;
@property (nonatomic, retain) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic, retain) NSMutableArray *trafficSnapshotIds;
@property (nonatomic, retain) NSData *tripID;
@property (nonatomic, retain) GEOLocation *tripOrigin;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool useClientTimepointAsNow;
@property (nonatomic) bool useLiveTrafficAsFallback;
@property (nonatomic, retain) GEOETATrafficUpdateWaypointRoute *waypointRoute;
@property (nonatomic, retain) NSString *xpcUuid;

+ (Class)destinationWaypointTypedType;
+ (bool)isValid:(id)arg1;
+ (Class)routeType;
+ (Class)serviceTagType;
+ (Class)trafficApiResponsesType;
+ (Class)trafficSnapshotIdsType;

- (void).cxx_destruct;
- (int)StringAsRerouteStatus:(id)arg1;
- (id)abClientMetadata;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)addTrafficApiResponses:(id)arg1;
- (void)addTrafficSnapshotIds:(id)arg1;
- (id)additionalEnabledMarkets;
- (void)clearDestinationWaypointTypeds;
- (void)clearRoutes;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearServiceTags;
- (void)clearTrafficApiResponses;
- (void)clearTrafficSnapshotIds;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientCapabilities;
- (struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })clientTimepoint;
- (id)commonOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserLocation;
- (id)description;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypeds;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (id)displayedBannerId;
- (id)etauResponseID;
- (bool)hasAbClientMetadata;
- (bool)hasAdditionalEnabledMarkets;
- (bool)hasClientCapabilities;
- (bool)hasClientTimepoint;
- (bool)hasCommonOptions;
- (bool)hasCurrentUserLocation;
- (bool)hasDirectionsResponseID;
- (bool)hasDisplayedBannerId;
- (bool)hasEtauResponseID;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIncludeBetterRouteSuggestion;
- (bool)hasMaxAlternateRouteCount;
- (bool)hasNeedServerLatency;
- (bool)hasPreviouslyRejectedRerouteSavings;
- (bool)hasRequestingAppId;
- (bool)hasRerouteStatus;
- (bool)hasRouteAttributes;
- (bool)hasSessionID;
- (bool)hasSessionRelativeTimestamp;
- (bool)hasSessionState;
- (bool)hasTrafficSnapshot;
- (bool)hasTripID;
- (bool)hasTripOrigin;
- (bool)hasUseClientTimepointAsNow;
- (bool)hasUseLiveTrafficAsFallback;
- (bool)hasWaypointRoute;
- (bool)hasXpcUuid;
- (unsigned long long)hash;
- (bool)includeBetterRouteSuggestion;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)maxAlternateRouteCount;
- (void)mergeFrom:(id)arg1;
- (bool)needServerLatency;
- (unsigned int)previouslyRejectedRerouteSavings;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestingAppId;
- (int)rerouteStatus;
- (id)rerouteStatusAsString:(int)arg1;
- (Class)responseClass;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routeAttributes;
- (id)routes;
- (unsigned long long)routesCount;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (double)sessionRelativeTimestamp;
- (id)sessionState;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientTimepoint:(struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)setCommonOptions:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDestinationWaypointTypeds:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setDisplayedBannerId:(id)arg1;
- (void)setEtauResponseID:(id)arg1;
- (void)setHasClientTimepoint:(bool)arg1;
- (void)setHasIncludeBetterRouteSuggestion:(bool)arg1;
- (void)setHasMaxAlternateRouteCount:(bool)arg1;
- (void)setHasNeedServerLatency:(bool)arg1;
- (void)setHasPreviouslyRejectedRerouteSavings:(bool)arg1;
- (void)setHasRerouteStatus:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSessionRelativeTimestamp:(bool)arg1;
- (void)setHasUseClientTimepointAsNow:(bool)arg1;
- (void)setHasUseLiveTrafficAsFallback:(bool)arg1;
- (void)setIncludeBetterRouteSuggestion:(bool)arg1;
- (void)setMaxAlternateRouteCount:(unsigned int)arg1;
- (void)setNeedServerLatency:(bool)arg1;
- (void)setPreviouslyRejectedRerouteSavings:(unsigned int)arg1;
- (void)setRequestingAppId:(id)arg1;
- (void)setRerouteStatus:(int)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setSessionState:(id)arg1;
- (void)setTrafficApiResponses:(id)arg1;
- (void)setTrafficSnapshot:(id)arg1;
- (void)setTrafficSnapshotIds:(id)arg1;
- (void)setTripID:(id)arg1;
- (void)setTripOrigin:(id)arg1;
- (void)setUseClientTimepointAsNow:(bool)arg1;
- (void)setUseLiveTrafficAsFallback:(bool)arg1;
- (void)setWaypointRoute:(id)arg1;
- (void)setXpcUuid:(id)arg1;
- (id)trafficApiResponses;
- (id)trafficApiResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficApiResponsesCount;
- (id)trafficSnapshot;
- (id)trafficSnapshotIds;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSnapshotIdsCount;
- (id)tripID;
- (id)tripOrigin;
- (id)unknownFields;
- (bool)useClientTimepointAsNow;
- (bool)useLiveTrafficAsFallback;
- (id)waypointRoute;
- (void)writeTo:(id)arg1;
- (id)xpcUuid;

@end
