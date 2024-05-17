/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoute : PBCodable <NSCopying> {
    NSMutableArray * _advisoryNotices;
    GEOAlertNonRecommendedRouteText * _alertNonRecommendedRouteText;
    unsigned int  _arrivalParameterIndex;
    NSData * _arrivalRouteID;
    unsigned int  _arrivalStepID;
    bool  _avoidsHighways;
    bool  _avoidsTolls;
    bool  _avoidsTraffic;
    NSMutableArray * _basicPoints;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _cellularCoverageOffsets;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _cellularCoverages;
    GEOClickableAdvisory * _clickableAdvisory;
    NSData * _departureRouteID;
    unsigned int  _departureStepID;
    GEOWaypointInfo * _destinationWaypointInfo;
    unsigned int  _distance;
    int  _drivingSide;
    GEOElevationProfile * _elevationProfile;
    NSMutableArray * _endingRouteInstructions;
    NSMutableArray * _enrouteNotices;
    int  _environmentalCongestionZoneImpact;
    unsigned int  _expectedTime;
    struct { 
        unsigned int has_arrivalStepID : 1; 
        unsigned int has_arrivalParameterIndex : 1; 
        unsigned int has_departureStepID : 1; 
        unsigned int has_distance : 1; 
        unsigned int has_drivingSide : 1; 
        unsigned int has_environmentalCongestionZoneImpact : 1; 
        unsigned int has_expectedTime : 1; 
        unsigned int has_historicTravelTime : 1; 
        unsigned int has_licensePlateRestrictionImpact : 1; 
        unsigned int has_routeType : 1; 
        unsigned int has_staticTravelTime : 1; 
        unsigned int has_tollCongestionZoneImpact : 1; 
        unsigned int has_transportType : 1; 
        unsigned int has_travelTimeAggressiveEstimate : 1; 
        unsigned int has_travelTimeConservativeEstimate : 1; 
        unsigned int has_avoidsHighways : 1; 
        unsigned int has_avoidsTolls : 1; 
        unsigned int has_avoidsTraffic : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_cellularCoverageOffsets : 1; 
        unsigned int read_cellularCoverages : 1; 
        unsigned int read_incidentEndOffsetsInRoutes : 1; 
        unsigned int read_incidentIndices : 1; 
        unsigned int read_trafficColorOffsets : 1; 
        unsigned int read_trafficColors : 1; 
        unsigned int read_advisoryNotices : 1; 
        unsigned int read_alertNonRecommendedRouteText : 1; 
        unsigned int read_arrivalRouteID : 1; 
        unsigned int read_basicPoints : 1; 
        unsigned int read_clickableAdvisory : 1; 
        unsigned int read_departureRouteID : 1; 
        unsigned int read_destinationWaypointInfo : 1; 
        unsigned int read_elevationProfile : 1; 
        unsigned int read_endingRouteInstructions : 1; 
        unsigned int read_enrouteNotices : 1; 
        unsigned int read_guidanceEvents : 1; 
        unsigned int read_incidentOnRouteInfos : 1; 
        unsigned int read_infrastructureDescription : 1; 
        unsigned int read_laneWidths : 1; 
        unsigned int read_launchAndGoCardText : 1; 
        unsigned int read_name : 1; 
        unsigned int read_originWaypointInfo : 1; 
        unsigned int read_pathLeg : 1; 
        unsigned int read_phoneticName : 1; 
        unsigned int read_restrictedZoneIds : 1; 
        unsigned int read_roadComplexitys : 1; 
        unsigned int read_routeID : 1; 
        unsigned int read_routeNames : 1; 
        unsigned int read_routeCameraInputInfos : 1; 
        unsigned int read_routeDescriptions : 1; 
        unsigned int read_routeLabelDetailText : 1; 
        unsigned int read_routeLineStyleInfos : 1; 
        unsigned int read_routePlanningDescription : 1; 
        unsigned int read_startingRouteInstructions : 1; 
        unsigned int read_stepGroups : 1; 
        unsigned int read_steps : 1; 
        unsigned int read_trafficColorInfos : 1; 
        unsigned int read_trafficDescriptionLong : 1; 
        unsigned int read_trafficDescription : 1; 
        unsigned int read_unpackedLatLngVertices : 1; 
        unsigned int read_updateLocations : 1; 
        unsigned int read_zilchPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _guidanceEvents;
    unsigned int  _historicTravelTime;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentEndOffsetsInRoutes;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentIndices;
    NSMutableArray * _incidentOnRouteInfos;
    GEOFormattedString * _infrastructureDescription;
    NSMutableArray * _laneWidths;
    GEOLaunchAndGoCardText * _launchAndGoCardText;
    int  _licensePlateRestrictionImpact;
    NSString * _name;
    GEOWaypointInfo * _originWaypointInfo;
    NSData * _pathLeg;
    NSString * _phoneticName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _restrictedZoneIds;
    NSMutableArray * _roadComplexitys;
    NSMutableArray * _routeCameraInputInfos;
    NSMutableArray * _routeDescriptions;
    NSData * _routeID;
    GEOFormattedString * _routeLabelDetailText;
    NSMutableArray * _routeLineStyleInfos;
    NSMutableArray * _routeNames;
    GEORouteInformation * _routePlanningDescription;
    int  _routeType;
    NSMutableArray * _startingRouteInstructions;
    unsigned int  _staticTravelTime;
    NSMutableArray * _stepGroups;
    NSMutableArray * _steps;
    int  _tollCongestionZoneImpact;
    NSMutableArray * _trafficColorInfos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColors;
    NSString * _trafficDescription;
    NSString * _trafficDescriptionLong;
    int  _transportType;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeConservativeEstimate;
    PBUnknownFields * _unknownFields;
    NSData * _unpackedLatLngVertices;
    NSMutableArray * _updateLocations;
    NSMutableArray * _zilchPoints;
}

@property (nonatomic, retain) NSMutableArray *advisoryNotices;
@property (nonatomic, retain) GEOAlertNonRecommendedRouteText *alertNonRecommendedRouteText;
@property (nonatomic) unsigned int arrivalParameterIndex;
@property (nonatomic, retain) NSData *arrivalRouteID;
@property (nonatomic) unsigned int arrivalStepID;
@property (nonatomic) bool avoidsHighways;
@property (nonatomic) bool avoidsTolls;
@property (nonatomic) bool avoidsTraffic;
@property (nonatomic, retain) NSMutableArray *basicPoints;
@property (nonatomic, readonly) unsigned int*cellularCoverageOffsets;
@property (nonatomic, readonly) unsigned long long cellularCoverageOffsetsCount;
@property (nonatomic, readonly) int*cellularCoverages;
@property (nonatomic, readonly) unsigned long long cellularCoveragesCount;
@property (nonatomic, retain) GEOClickableAdvisory *clickableAdvisory;
@property (nonatomic, retain) NSData *departureRouteID;
@property (nonatomic) unsigned int departureStepID;
@property (nonatomic, retain) GEOWaypointInfo *destinationWaypointInfo;
@property (nonatomic) unsigned int distance;
@property (nonatomic) int drivingSide;
@property (nonatomic, retain) GEOElevationProfile *elevationProfile;
@property (nonatomic, retain) NSMutableArray *endingRouteInstructions;
@property (nonatomic, retain) NSMutableArray *enrouteNotices;
@property (nonatomic) int environmentalCongestionZoneImpact;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic, retain) NSMutableArray *guidanceEvents;
@property (nonatomic, readonly) bool hasAlertNonRecommendedRouteText;
@property (nonatomic) bool hasArrivalParameterIndex;
@property (nonatomic, readonly) bool hasArrivalRouteID;
@property (nonatomic) bool hasArrivalStepID;
@property (nonatomic) bool hasAvoidsHighways;
@property (nonatomic) bool hasAvoidsTolls;
@property (nonatomic) bool hasAvoidsTraffic;
@property (nonatomic, readonly) bool hasClickableAdvisory;
@property (nonatomic, readonly) bool hasDepartureRouteID;
@property (nonatomic) bool hasDepartureStepID;
@property (nonatomic, readonly) bool hasDestinationWaypointInfo;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasDrivingSide;
@property (nonatomic, readonly) bool hasElevationProfile;
@property (nonatomic) bool hasEnvironmentalCongestionZoneImpact;
@property (nonatomic) bool hasExpectedTime;
@property (nonatomic) bool hasHistoricTravelTime;
@property (nonatomic, readonly) bool hasInfrastructureDescription;
@property (nonatomic, readonly) bool hasLaunchAndGoCardText;
@property (nonatomic) bool hasLicensePlateRestrictionImpact;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasOriginWaypointInfo;
@property (nonatomic, readonly) bool hasPathLeg;
@property (nonatomic, readonly) bool hasPhoneticName;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic, readonly) bool hasRouteLabelDetailText;
@property (nonatomic, readonly) bool hasRoutePlanningDescription;
@property (nonatomic) bool hasRouteType;
@property (nonatomic) bool hasStaticTravelTime;
@property (nonatomic) bool hasTollCongestionZoneImpact;
@property (nonatomic, readonly) bool hasTrafficDescription;
@property (nonatomic, readonly) bool hasTrafficDescriptionLong;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) bool hasTravelTimeConservativeEstimate;
@property (nonatomic, readonly) bool hasUnpackedLatLngVertices;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) unsigned int*incidentEndOffsetsInRoutes;
@property (nonatomic, readonly) unsigned long long incidentEndOffsetsInRoutesCount;
@property (nonatomic, readonly) unsigned int*incidentIndices;
@property (nonatomic, readonly) unsigned long long incidentIndicesCount;
@property (nonatomic, retain) NSMutableArray *incidentOnRouteInfos;
@property (nonatomic, retain) GEOFormattedString *infrastructureDescription;
@property (nonatomic, retain) NSMutableArray *laneWidths;
@property (nonatomic, retain) GEOLaunchAndGoCardText *launchAndGoCardText;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOWaypointInfo *originWaypointInfo;
@property (nonatomic, retain) NSData *pathLeg;
@property (nonatomic, retain) NSString *phoneticName;
@property (readonly) unsigned int pointCount;
@property (nonatomic, retain) NSMutableArray *restrictedZoneIds;
@property (nonatomic, retain) NSMutableArray *roadComplexitys;
@property (nonatomic, retain) NSMutableArray *routeCameraInputInfos;
@property (nonatomic, retain) NSMutableArray *routeDescriptions;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) GEOFormattedString *routeLabelDetailText;
@property (nonatomic, retain) NSMutableArray *routeLineStyleInfos;
@property (nonatomic, retain) NSMutableArray *routeNames;
@property (nonatomic, retain) GEORouteInformation *routePlanningDescription;
@property (nonatomic) int routeType;
@property (nonatomic, retain) NSMutableArray *startingRouteInstructions;
@property (nonatomic) unsigned int staticTravelTime;
@property (nonatomic, retain) NSMutableArray *stepGroups;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic) int tollCongestionZoneImpact;
@property (nonatomic, retain) NSMutableArray *trafficColorInfos;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, retain) NSString *trafficDescription;
@property (nonatomic, retain) NSString *trafficDescriptionLong;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSData *unpackedLatLngVertices;
@property (nonatomic, retain) NSMutableArray *updateLocations;
@property (nonatomic, retain) NSMutableArray *zilchPoints;

+ (Class)advisoryNoticeType;
+ (Class)basicPointsType;
+ (Class)endingRouteInstructionType;
+ (Class)enrouteNoticeType;
+ (Class)guidanceEventType;
+ (Class)incidentOnRouteInfoType;
+ (bool)isValid:(id)arg1;
+ (Class)laneWidthType;
+ (Class)restrictedZoneIdsType;
+ (Class)roadComplexityType;
+ (Class)routeCameraInputInfoType;
+ (Class)routeDescriptionType;
+ (Class)routeLineStyleInfoType;
+ (Class)routeNameType;
+ (Class)startingRouteInstructionType;
+ (Class)stepGroupType;
+ (Class)stepType;
+ (Class)trafficColorInfoType;
+ (Class)updateLocationType;
+ (Class)zilchPointsType;

- (void).cxx_destruct;
- (int)StringAsCellularCoverages:(id)arg1;
- (int)StringAsDrivingSide:(id)arg1;
- (int)StringAsEnvironmentalCongestionZoneImpact:(id)arg1;
- (int)StringAsLicensePlateRestrictionImpact:(id)arg1;
- (int)StringAsRouteType:(id)arg1;
- (int)StringAsTollCongestionZoneImpact:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addAdvisoryNotice:(id)arg1;
- (void)addBasicPoints:(id)arg1;
- (void)addCellularCoverage:(int)arg1;
- (void)addCellularCoverageOffset:(unsigned int)arg1;
- (void)addEndingRouteInstruction:(id)arg1;
- (void)addEnrouteNotice:(id)arg1;
- (void)addGuidanceEvent:(id)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)addIncidentOnRouteInfo:(id)arg1;
- (void)addLaneWidth:(id)arg1;
- (void)addRestrictedZoneIds:(id)arg1;
- (void)addRoadComplexity:(id)arg1;
- (void)addRouteCameraInputInfo:(id)arg1;
- (void)addRouteDescription:(id)arg1;
- (void)addRouteLineStyleInfo:(id)arg1;
- (void)addRouteName:(id)arg1;
- (void)addStartingRouteInstruction:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addStepGroup:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorInfo:(id)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)addUpdateLocation:(id)arg1;
- (void)addZilchPoints:(id)arg1;
- (id)advisoryNoticeAtIndex:(unsigned long long)arg1;
- (id)advisoryNotices;
- (unsigned long long)advisoryNoticesCount;
- (id)alertNonRecommendedRouteText;
- (unsigned int)arrivalParameterIndex;
- (id)arrivalRouteID;
- (unsigned int)arrivalStepID;
- (bool)avoidsHighways;
- (bool)avoidsTolls;
- (bool)avoidsTraffic;
- (id)basicPoints;
- (id)basicPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)basicPointsCount;
- (int)cellularCoverageAtIndex:(unsigned long long)arg1;
- (unsigned int)cellularCoverageOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)cellularCoverageOffsets;
- (unsigned long long)cellularCoverageOffsetsCount;
- (int*)cellularCoverages;
- (id)cellularCoveragesAsString:(int)arg1;
- (unsigned long long)cellularCoveragesCount;
- (void)clearAdvisoryNotices;
- (void)clearBasicPoints;
- (void)clearCellularCoverageOffsets;
- (void)clearCellularCoverages;
- (void)clearEndingRouteInstructions;
- (void)clearEnrouteNotices;
- (void)clearGuidanceEvents;
- (void)clearIncidentEndOffsetsInRoutes;
- (void)clearIncidentIndices;
- (void)clearIncidentOnRouteInfos;
- (void)clearLaneWidths;
- (void)clearRestrictedZoneIds;
- (void)clearRoadComplexitys;
- (void)clearRouteCameraInputInfos;
- (void)clearRouteDescriptions;
- (void)clearRouteLineStyleInfos;
- (void)clearRouteNames;
- (void)clearStartingRouteInstructions;
- (void)clearStepGroups;
- (void)clearSteps;
- (void)clearTrafficColorInfos;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearUpdateLocations;
- (void)clearZilchPoints;
- (id)clickableAdvisory;
- (void*)controlPoints;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(bool)arg2 uniquePointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (struct { double x1; double x2; double x3; })coordinateAt:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)departureRouteID;
- (unsigned int)departureStepID;
- (id)description;
- (id)destinationWaypointInfo;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (double)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2;
- (int)drivingSide;
- (id)drivingSideAsString:(int)arg1;
- (id)elevationProfile;
- (id)endingRouteInstructionAtIndex:(unsigned long long)arg1;
- (id)endingRouteInstructions;
- (unsigned long long)endingRouteInstructionsCount;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;
- (id)enrouteNotices;
- (unsigned long long)enrouteNoticesCount;
- (int)environmentalCongestionZoneImpact;
- (id)environmentalCongestionZoneImpactAsString:(int)arg1;
- (unsigned int)expectedTime;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (id)guidanceEvents;
- (unsigned long long)guidanceEventsCount;
- (bool)hasAlertNonRecommendedRouteText;
- (bool)hasArrivalParameterIndex;
- (bool)hasArrivalRouteID;
- (bool)hasArrivalStepID;
- (bool)hasAvoidsHighways;
- (bool)hasAvoidsTolls;
- (bool)hasAvoidsTraffic;
- (bool)hasClickableAdvisory;
- (bool)hasDepartureRouteID;
- (bool)hasDepartureStepID;
- (bool)hasDestinationWaypointInfo;
- (bool)hasDistance;
- (bool)hasDrivingSide;
- (bool)hasElevationProfile;
- (bool)hasEnvironmentalCongestionZoneImpact;
- (bool)hasExpectedTime;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHistoricTravelTime;
- (bool)hasInfrastructureDescription;
- (bool)hasLaunchAndGoCardText;
- (bool)hasLicensePlateRestrictionImpact;
- (bool)hasName;
- (bool)hasOriginWaypointInfo;
- (bool)hasPathLeg;
- (bool)hasPhoneticName;
- (bool)hasRouteID;
- (bool)hasRouteLabelDetailText;
- (bool)hasRoutePlanningDescription;
- (bool)hasRouteType;
- (bool)hasStaticTravelTime;
- (bool)hasTollCongestionZoneImpact;
- (bool)hasTrafficDescription;
- (bool)hasTrafficDescriptionLong;
- (bool)hasTransportType;
- (bool)hasTravelTimeAggressiveEstimate;
- (bool)hasTravelTimeConservativeEstimate;
- (bool)hasUnpackedLatLngVertices;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentEndOffsetsInRoutes;
- (unsigned long long)incidentEndOffsetsInRoutesCount;
- (unsigned int*)incidentIndices;
- (unsigned int)incidentIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentIndicesCount;
- (id)incidentOnRouteInfoAtIndex:(unsigned long long)arg1;
- (id)incidentOnRouteInfos;
- (unsigned long long)incidentOnRouteInfosCount;
- (unsigned long long)indexForStepID:(unsigned long long)arg1;
- (id)infrastructureDescription;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isContingentRoute;
- (bool)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMainOrAlternateRoute;
- (id)jsonRepresentation;
- (id)laneWidthAtIndex:(unsigned long long)arg1;
- (id)laneWidths;
- (unsigned long long)laneWidthsCount;
- (id)launchAndGoCardText;
- (int)licensePlateRestrictionImpact;
- (id)licensePlateRestrictionImpactAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)newETARoute;
- (id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2;
- (id)originWaypointInfo;
- (id)pathLeg;
- (id)phoneticName;
- (struct { double x1; double x2; })pointAt:(unsigned int)arg1;
- (unsigned int)pointCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)restrictedZoneIds;
- (id)restrictedZoneIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restrictedZoneIdsCount;
- (id)roadComplexityAtIndex:(unsigned long long)arg1;
- (id)roadComplexitys;
- (unsigned long long)roadComplexitysCount;
- (id)routeCameraInputInfoAtIndex:(unsigned long long)arg1;
- (id)routeCameraInputInfos;
- (unsigned long long)routeCameraInputInfosCount;
- (id)routeDescriptionAtIndex:(unsigned long long)arg1;
- (id)routeDescriptions;
- (unsigned long long)routeDescriptionsCount;
- (id)routeID;
- (id)routeLabelDetailText;
- (id)routeLineStyleInfoAtIndex:(unsigned long long)arg1;
- (id)routeLineStyleInfos;
- (unsigned long long)routeLineStyleInfosCount;
- (id)routeNameAtIndex:(unsigned long long)arg1;
- (id)routeNames;
- (unsigned long long)routeNamesCount;
- (id)routePlanningDescription;
- (int)routeType;
- (id)routeTypeAsString:(int)arg1;
- (void)setAdvisoryNotices:(id)arg1;
- (void)setAlertNonRecommendedRouteText:(id)arg1;
- (void)setArrivalParameterIndex:(unsigned int)arg1;
- (void)setArrivalRouteID:(id)arg1;
- (void)setArrivalStepID:(unsigned int)arg1;
- (void)setAvoidsHighways:(bool)arg1;
- (void)setAvoidsTolls:(bool)arg1;
- (void)setAvoidsTraffic:(bool)arg1;
- (void)setBasicPoints:(id)arg1;
- (void)setCellularCoverageOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setCellularCoverages:(int*)arg1 count:(unsigned long long)arg2;
- (void)setClickableAdvisory:(id)arg1;
- (void)setDepartureRouteID:(id)arg1;
- (void)setDepartureStepID:(unsigned int)arg1;
- (void)setDestinationWaypointInfo:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setDrivingSide:(int)arg1;
- (void)setElevationProfile:(id)arg1;
- (void)setEndingRouteInstructions:(id)arg1;
- (void)setEnrouteNotices:(id)arg1;
- (void)setEnvironmentalCongestionZoneImpact:(int)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setGuidanceEvents:(id)arg1;
- (void)setHasArrivalParameterIndex:(bool)arg1;
- (void)setHasArrivalStepID:(bool)arg1;
- (void)setHasAvoidsHighways:(bool)arg1;
- (void)setHasAvoidsTolls:(bool)arg1;
- (void)setHasAvoidsTraffic:(bool)arg1;
- (void)setHasDepartureStepID:(bool)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasDrivingSide:(bool)arg1;
- (void)setHasEnvironmentalCongestionZoneImpact:(bool)arg1;
- (void)setHasExpectedTime:(bool)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasLicensePlateRestrictionImpact:(bool)arg1;
- (void)setHasRouteType:(bool)arg1;
- (void)setHasStaticTravelTime:(bool)arg1;
- (void)setHasTollCongestionZoneImpact:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(bool)arg1;
- (void)setHasTravelTimeConservativeEstimate:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncidentIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncidentOnRouteInfos:(id)arg1;
- (void)setInfrastructureDescription:(id)arg1;
- (void)setLaneWidths:(id)arg1;
- (void)setLaunchAndGoCardText:(id)arg1;
- (void)setLicensePlateRestrictionImpact:(int)arg1;
- (void)setName:(id)arg1;
- (void)setOriginWaypointInfo:(id)arg1;
- (void)setPathLeg:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setRestrictedZoneIds:(id)arg1;
- (void)setRoadComplexitys:(id)arg1;
- (void)setRouteCameraInputInfos:(id)arg1;
- (void)setRouteDescriptions:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteLabelDetailText:(id)arg1;
- (void)setRouteLineStyleInfos:(id)arg1;
- (void)setRouteNames:(id)arg1;
- (void)setRoutePlanningDescription:(id)arg1;
- (void)setRouteType:(int)arg1;
- (void)setStartingRouteInstructions:(id)arg1;
- (void)setStaticTravelTime:(unsigned int)arg1;
- (void)setStepGroups:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setTollCongestionZoneImpact:(int)arg1;
- (void)setTrafficColorInfos:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficDescription:(id)arg1;
- (void)setTrafficDescriptionLong:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (void)setUnpackedLatLngVertices:(id)arg1;
- (void)setUpdateLocations:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)simplifiedDescription;
- (id)startingRouteInstructionAtIndex:(unsigned long long)arg1;
- (id)startingRouteInstructions;
- (unsigned long long)startingRouteInstructionsCount;
- (unsigned int)staticTravelTime;
- (id)stepAtIndex:(unsigned long long)arg1;
- (id)stepGroupAtIndex:(unsigned long long)arg1;
- (id)stepGroups;
- (unsigned long long)stepGroupsCount;
- (unsigned long long)stepIndexForPointIndex:(unsigned int)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (int)tollCongestionZoneImpact;
- (id)tollCongestionZoneImpactAsString:(int)arg1;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (id)trafficColorInfoAtIndex:(unsigned long long)arg1;
- (id)trafficColorInfos;
- (unsigned long long)trafficColorInfosCount;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (id)trafficDescription;
- (id)trafficDescriptionLong;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (int)transportTypeForStep:(id)arg1;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (id)unknownFields;
- (bool)unpackBasicPoints;
- (bool)unpackLatLngVertices;
- (bool)unpackZilchPoints;
- (id)unpackedLatLngVertices;
- (id)updateLocationAtIndex:(unsigned long long)arg1;
- (id)updateLocations;
- (unsigned long long)updateLocationsCount;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zilchPointsCount;

@end
