/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions, NSSecureCoding, _GEORouteHypothesisMonitorETAProvider> {
    GEOComposedRouteAdvisory * _advisoryMessage;
    bool  _avoidsHighways;
    bool  _avoidsTolls;
    bool  _avoidsTraffic;
    GEOMapRegion * _boundingMapRegion;
    NSArray * _cameraInfos;
    GEOComposedRouteCellularCoverage * _cellularCoverage;
    NSArray * _composedGuidanceEvents;
    GEOComposedRouteCoordinateArray * _coordinates;
    unsigned long long  _currentDisplayStep;
    NSArray * _currentSectionOptions;
    GEOTransitDecoderData * _decoderData;
    NSData * _directionsResponseID;
    GEORouteDisplayHints * _displayHints;
    double  _distance;
    GEOElevationProfile * _elevationProfile;
    NSArray * _enrouteNotices;
    NSArray * _etauPositions;
    NSData * _etauResponseID;
    GEOComposedRouteAdvisory * _evAdvisory;
    unsigned int  _expectedTime;
    unsigned int  _firstVisiblePoint;
    double  _freeflowTravelTime;
    NSArray * _genericAdvisories;
    GEORoute * _geoRoute;
    GEOWaypointRoute * _geoWaypointRoute;
    NSArray * _halls;
    unsigned int  _historicTravelTime;
    NSArray * _incidentsAdvisories;
    unsigned long long  _indexInResponse;
    <GEOServerFormattedString> * _infrastructureDescription;
    long long  _initialPromptTypes;
    bool  _isNavigable;
    bool  _isWalkingOnlyTransitRoute;
    <GEOServerFormattedString> * _launchAndGoCardTitle;
    <GEOServerFormattedString> * _launchAndGoRouteDescription;
    <GEOServerFormattedString> * _launchAndGoRouteTitle;
    NSArray * _legs;
    NSString * _longTrafficDescription;
    bool  _maneuverDisplayEnabled;
    NSArray * _maneuverDisplaySteps;
    GEOComposedRouteMutableData * _mutableData;
    geo_isolater * _mutableDataLock;
    NSString * _name;
    NSArray * _noticesAdvisories;
    NSHashTable * _observers;
    GEOTransitSuggestedRoute * _originalSuggestedRoute;
    <GEOServerFormattedString> * _pickingDurationFormatString;
    <GEOServerFormattedString> * _planningDescriptionFormatString;
    <GEOServerFormattedString> * _planningDistanceFormatString;
    NSString * _planningSeparatorString;
    <GEOServerFormattedString> * _previewDurationFormatString;
    GEORouteRestrictionZoneInfo * _restrictionZoneInfo;
    NSUUID * _revisionIdentifier;
    NSArray * _rideSelections;
    NSArray * _roadComplexities;
    GEORouteAttributes * _routeAttributes;
    GEORouteInitializerData * _routeInitializerData;
    <GEOTransitArtworkDataSource> * _routeLabelArtwork;
    <GEOServerFormattedString> * _routeLabelDescription;
    NSArray * _routePlanningArtworks;
    NSArray * _sections;
    NSArray * _segments;
    unsigned long long  _selectedSegmentIndex;
    unsigned long long  _serverIdentifier;
    NSData * _serverRouteID;
    NSMutableArray * _snappedPaths;
    geo_reentrant_isolater * _snappedRoutesIsolater;
    NSDate * _startDate;
    NSArray * _stations;
    NSArray * _steps;
    NSArray * _stops;
    GEOStyleAttributes * _styleAttributes;
    GEOTransitSuggestedRoute * _suggestedRoute;
    NSArray * _ticketedSegments;
    GEOComposedRouteAdvisory * _tollAdvisory;
    NSString * _trafficDescription;
    NSArray * _transitAdvisories;
    <GEOServerFormattedString> * _transitDescriptionFormatString;
    <GEOServerFormattedString> * _transitRouteBadge;
    <GEOComposedRouteTransitDisplayStrings> * _transitRouteDisplayStrings;
    NSArray * _transitRouteUpdateAlerts;
    GEOTransitRouteUpdateRequest * _transitRouteUpdateRequest;
    <GEOTransitRoutingIncidentMessage> * _transitRoutingIncidentMessage;
    double  _transitUpdateInitialDelay;
    int  _transportType;
    double  _travelTimeAggressiveEstimate;
    double  _travelTimeConservativeEstimate;
    NSUUID * _uniqueRouteID;
    bool  _usesZilch;
    NSArray * _visualInfos;
    GEOZilchDecoder * _zilchDecoder;
}

@property (nonatomic, readonly) double _hypothesis_travelDuration;
@property (nonatomic, readonly) double _hypothesis_travelDurationAggressiveEstimate;
@property (nonatomic, readonly) double _hypothesis_travelDurationConservativeEstimate;
@property (nonatomic, readonly) GEOComposedRouteAdvisory *advisoryMessage;
@property (nonatomic, readonly) NSArray *advisoryNotices;
@property (nonatomic, readonly) bool allowsNetworkTileLoad;
@property (nonatomic, readonly) GEOMapRegion *arrivalMapRegion;
@property (nonatomic, readonly) bool avoidsHighways;
@property (nonatomic, readonly) bool avoidsTolls;
@property (nonatomic, readonly) bool avoidsTraffic;
@property (nonatomic, readonly) NSArray *baseTransitFares;
@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) NSArray *cameraInfos;
@property (nonatomic, readonly) double chargingDuration;
@property (nonatomic, readonly) NSArray *composedGuidanceEvents;
@property (nonatomic) unsigned long long currentDisplayStep;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORoute *deprecatedGeoRoute;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) NSData *directionsResponseID;
@property (nonatomic, readonly) GEORouteDisplayHints *displayHints;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) GEOElevationProfile *elevationProfile;
@property (nonatomic, readonly) NSArray *enrouteNotices;
@property (nonatomic, readonly) NSArray *etauPositions;
@property (nonatomic, readonly) NSData *etauResponseID;
@property (nonatomic, readonly) GEOComposedRouteAdvisory *evAdvisory;
@property (nonatomic, readonly) unsigned int expectedTime;
@property (nonatomic) unsigned int firstVisiblePoint;
@property (nonatomic, readonly) double freeflowTravelTime;
@property (nonatomic, readonly) NSArray *genericAdvisories;
@property (nonatomic, readonly) GEOWaypointRoute *geoWaypointRoute;
@property (nonatomic, readonly) NSArray *halls;
@property (nonatomic, readonly) bool hasArrivalMapRegion;
@property (nonatomic, readonly) bool hasExpectedTime;
@property (nonatomic, readonly) bool hasHistoricTravelTime;
@property (nonatomic, readonly) bool hasRideClusters;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int historicTravelTime;
@property (nonatomic, readonly) NSArray *incidentsAdvisories;
@property (nonatomic, readonly) unsigned long long indexInResponse;
@property (nonatomic, readonly) unsigned long long indexOfSuggestedRoute;
@property (nonatomic, readonly) <GEOServerFormattedString> *infrastructureDescription;
@property (nonatomic, readonly) bool isEVRoute;
@property (nonatomic, readonly) bool isNavigable;
@property (nonatomic, readonly) bool isNewProtocolRoute;
@property (nonatomic, readonly) bool isWalkingOnlyTransitRoute;
@property (nonatomic, readonly) <GEOServerFormattedString> *launchAndGoCardTitle;
@property (nonatomic, readonly) <GEOServerFormattedString> *launchAndGoRouteDescription;
@property (nonatomic, readonly) <GEOServerFormattedString> *launchAndGoRouteTitle;
@property (nonatomic, readonly) NSArray *legs;
@property (nonatomic, readonly) NSString *longTrafficDescription;
@property (nonatomic) bool maneuverDisplayEnabled;
@property (nonatomic, retain) NSArray *maneuverDisplaySteps;
@property (nonatomic, retain) GEOComposedRouteMutableData *mutableData;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *noticesAdvisories;
@property (nonatomic, readonly) unsigned long long numberOfTransitStops;
@property (nonatomic, readonly) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) GEOTransitSuggestedRoute *originalSuggestedRoute;
@property (nonatomic, readonly) <GEOServerFormattedString> *pickingDurationFormatString;
@property (nonatomic, readonly) <GEOServerFormattedString> *planningDescriptionFormatString;
@property (nonatomic, readonly) <GEOServerFormattedString> *planningDistanceFormatString;
@property (nonatomic, readonly) NSString *planningSeparatorString;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) <GEOServerFormattedString> *previewDurationFormatString;
@property (nonatomic, readonly) GEORouteRestrictionZoneInfo *restrictionZoneInfo;
@property (nonatomic, retain) NSUUID *revisionIdentifier;
@property (nonatomic, readonly) NSArray *rideSelections;
@property (nonatomic, readonly) NSArray *roadComplexities;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) NSArray *routeDescriptions;
@property (nonatomic, readonly) GEORouteInitializerData *routeInitializerData;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *routeLabelArtwork;
@property (nonatomic, readonly) <GEOServerFormattedString> *routeLabelDescription;
@property (nonatomic, readonly, copy) NSArray *routePlanningArtworks;
@property (nonatomic, readonly) int routeType;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic) unsigned long long selectedSegmentIndex;
@property (nonatomic, readonly) unsigned long long serverIdentifier;
@property (nonatomic, retain) NSData *serverRouteID;
@property (nonatomic, readonly) bool shouldShowSchedule;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSArray *stations;
@property (nonatomic, readonly) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (nonatomic, readonly) NSArray *stops;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) GEOTransitSuggestedRoute *suggestedRoute;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOComposedRouteAdvisory *tollAdvisory;
@property (nonatomic, readonly) GEOComposedRouteTraffic *traffic;
@property (nonatomic, readonly) NSString *trafficDescription;
@property (nonatomic, readonly) NSArray *transitAdvisories;
@property (nonatomic, readonly) <GEOServerFormattedString> *transitDescriptionFormatString;
@property (nonatomic, readonly) <GEOServerFormattedString> *transitRouteBadge;
@property (nonatomic, readonly) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *transitRoutingIncidentMessage;
@property (nonatomic) double transitUpdateInitialDelay;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) double travelAndChargingDuration;
@property (nonatomic, readonly) double travelTimeAggressiveEstimate;
@property (nonatomic, readonly) double travelTimeConservativeEstimate;
@property (nonatomic, retain) NSUUID *uniqueRouteID;
@property (nonatomic, readonly) bool usesRoutingPathPoints;
@property (nonatomic, readonly) bool usesZilch;
@property (nonatomic, readonly) NSArray *visualInfos;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_MapsCarPlay_isEqual:(id)arg1;
- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 rectsCount:(unsigned long long)arg4;
- (void)_enumerateAllStepsWithBlock:(id /* block */)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_findRouteCoordinateWithOffset:(float)arg1 aPos:(const void*)arg2 aCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 bCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 pointOnSegment:(const void*)arg5 bounds:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (id)_geoETAWaypointRouteWithZilchFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (double)_hypothesis_travelDuration;
- (double)_hypothesis_travelDurationAggressiveEstimate;
- (double)_hypothesis_travelDurationConservativeEstimate;
- (double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2;
- (void)_ingestRouteBuilderOutput:(id)arg1;
- (void)_initAdvisoriesForRoute:(id)arg1 initializerData:(id)arg2;
- (void)_initExplicitAdvisoriesForRoute:(id)arg1 initializerData:(id)arg2;
- (void)_initOtherRouteFeatures:(id)arg1 initializerData:(id)arg2;
- (void)_initializeManeuverDisplaySteps;
- (bool)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (id)_nextOptionForOption:(id)arg1 rideIndex:(unsigned long long)arg2;
- (void)_populateArtworkForSuggestedRoute:(id)arg1 decoderData:(id)arg2;
- (void)_rebuildRouteForRideChange;
- (void)_snapPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)_tripIndexForTripSegment:(id)arg1;
- (void)_updateRevisionIdentifier;
- (id)advisoryMessage;
- (id)advisoryNotices;
- (bool)allowsNetworkTileLoad;
- (void)applyCompanionUpdates:(id)arg1;
- (void)applyUpdatesToTransitRoute:(id)arg1;
- (double)approximateRoadWidthAtPointIndex:(unsigned int)arg1;
- (id)arrivalMapRegion;
- (bool)avoidsHighways;
- (bool)avoidsTolls;
- (bool)avoidsTraffic;
- (id)baseTransitFares;
- (id)boardStepForSection:(id)arg1;
- (id)boundingMapRegion;
- (id)cameraInfos;
- (double)chargingDuration;
- (bool)checkDrivingArrivalForCoordinate:(struct { double x1; double x2; })arg1 coordinateOnRoute:(struct { double x1; double x2; })arg2 routePointIndex:(unsigned int)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(bool)arg6 checkDistanceAlongRoute:(bool)arg7 checkRoadAccessPoints:(bool)arg8 isOnRoute:(bool)arg9;
- (void)clearPoints;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })closestPointOnRoute:(struct { double x1; double x2; })arg1;
- (id)composedGuidanceEvents;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2;
- (id)coordinates;
- (double)courseAtRouteCoordinateIndex:(unsigned int)arg1;
- (unsigned long long)currentDisplayStep;
- (void)dealloc;
- (id)deprecatedGeoRoute;
- (id)description;
- (id)destination;
- (id)directionsResponseID;
- (id)displayHints;
- (double)distance;
- (double)distanceBetweenIndex:(unsigned long long)arg1 andIndex:(unsigned long long)arg2;
- (double)distanceBetweenLocation:(struct { double x1; double x2; })arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (double)distanceBetweenRouteCoordinate:(struct { unsigned int x1; float x2; })arg1 andRouteCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (double)distanceFromPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2;
- (double)distanceFromStartToIndex:(unsigned long long)arg1;
- (double)distanceFromStartToRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (double)distanceToEndFromIndex:(unsigned long long)arg1;
- (double)distanceToEndFromRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (id)elevationProfile;
- (void)encodeWithCoder:(id)arg1;
- (id)enrouteNotices;
- (void)enumerateCellularCoverageRangesWithBlock:(id /* block */)arg1;
- (int)estimatedCellularCoverageForOffset:(double)arg1;
- (id)etaRoute;
- (id)etaRouteFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)etauPositions;
- (id)etauResponseID;
- (id)evAdvisory;
- (unsigned int)expectedTime;
- (unsigned int)firstVisiblePoint;
- (void)forEachSnappedPath:(id /* block */)arg1;
- (int)formOfWayAt:(unsigned int)arg1;
- (double)freeflowTravelTime;
- (id)genericAdvisories;
- (id)geoETAWaypointRoute;
- (id)geoETAWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 includeOriginWaypointInfo:(bool)arg2;
- (id)geoOriginalWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 purpose:(int)arg2;
- (id)geoTrafficBannerText;
- (id)geoWaypointRoute;
- (void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned int)arg3;
- (id)getHallForStop:(id)arg1;
- (id)getSnappedPathsForLocation:(struct { double x1; double x2; })arg1 radius:(double)arg2 observer:(id)arg3;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectsToSnap:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectsToSnap:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)getStationForHall:(id)arg1;
- (id)getStationForStop:(id)arg1;
- (id)halls;
- (bool)hasArrivalMapRegion;
- (bool)hasExpectedTime;
- (bool)hasHistoricTravelTime;
- (bool)hasInitialPromptType:(int)arg1;
- (bool)hasRideClusters;
- (unsigned int)historicTravelTime;
- (id)incidentsAdvisories;
- (unsigned long long)indexInResponse;
- (unsigned long long)indexOfSuggestedRoute;
- (id)infrastructureDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompanionRoute:(id)arg1;
- (id)initWithGeoWaypointRoute:(id)arg1 initializerData:(id)arg2;
- (id)initWithRoute:(id)arg1 initializerData:(id)arg2;
- (id)initWithSuggestedRoute:(id)arg1 initializerData:(id)arg2;
- (id)initWithSuggestedRoute:(id)arg1 initializerData:(id)arg2 uniqueRouteID:(id)arg3;
- (id)initWithSuggestedRoute:(id)arg1 initializerData:(id)arg2 updateRequest:(id)arg3;
- (id)initWithTransitGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3;
- (bool)isEVRoute;
- (bool)isNavigable;
- (bool)isNewProtocolRoute;
- (bool)isSnapping;
- (bool)isStopInTerminalStructure:(id)arg1;
- (bool)isWalkingOnlyTransitRoute;
- (unsigned int)laneCountAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned long long)lastStepIndexOfLegAtStepIndex:(unsigned long long)arg1;
- (id)launchAndGoCardTitle;
- (id)launchAndGoRouteDescription;
- (id)launchAndGoRouteTitle;
- (unsigned long long)legIndexForStepIndex:(unsigned long long)arg1;
- (id)legs;
- (struct { double x1; double x2; double x3; })locationAtDistance:(double)arg1 from:(id)arg2;
- (id)longTrafficDescription;
- (bool)maneuverDisplayEnabled;
- (void)maneuverDisplayHasChanged;
- (id)maneuverDisplaySteps;
- (id)mutableData;
- (id)name;
- (id)noticesAdvisories;
- (unsigned long long)numberOfTransitStops;
- (id)origin;
- (id)originalSuggestedRoute;
- (id)pickingDurationFormatString;
- (id)planningDescriptionFormatString;
- (id)planningDistanceFormatString;
- (id)planningSeparatorString;
- (struct { double x1; double x2; double x3; })pointAt:(unsigned long long)arg1;
- (struct { double x1; double x2; double x3; })pointAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned int)pointCount;
- (id)previewDurationFormatString;
- (void)registerObserver:(id)arg1;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingDistanceToEndOfLeg:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeToEndOfLeg:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (id)restrictionZoneInfo;
- (id)revisionIdentifier;
- (id)rideSelections;
- (id)roadComplexities;
- (id)roadComplexitiesForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned int)roadComplexityAtDistance:(double)arg1;
- (id)roadFeatureAtPointIndex:(unsigned int)arg1;
- (void)roadFeaturesForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 distanceAhead:(double)arg2 handler:(id /* block */)arg3;
- (id)routeAttributes;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinateAtDistance:(double)arg1 beforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct { unsigned int x1; float x2; })routeCoordinateForDistance:(double)arg1 afterRouteCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (struct { unsigned int x1; float x2; })routeCoordinateForDistance:(double)arg1 beforeRouteCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (struct { unsigned int x1; float x2; })routeCoordinateForDistanceAfterStart:(double)arg1;
- (struct { unsigned int x1; float x2; })routeCoordinateForDistanceBeforeEnd:(double)arg1;
- (id)routeDescriptions;
- (id)routeInitializerData;
- (id)routeLabelArtwork;
- (id)routeLabelDescription;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(bool)arg3 stopAtEndOfManeuver:(bool)arg4 date:(id)arg5;
- (id)routePlanningArtworks;
- (int)routeType;
- (id)routingPathDataFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)sectionOptionForTripIndex:(unsigned long long)arg1;
- (id)sectionOptionForTripSegment:(id)arg1;
- (id)sections;
- (id)segmentForPointIndex:(unsigned int)arg1;
- (id)segmentForStepIndex:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForPointIndex:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForStepIndex:(unsigned long long)arg1;
- (id)segments;
- (void)selectRide:(unsigned long long)arg1 forBoardStep:(id)arg2;
- (void)selectRide:(unsigned long long)arg1 forTripSegment:(id)arg2;
- (unsigned long long)selectedSegmentIndex;
- (unsigned long long)serverIdentifier;
- (id)serverRouteID;
- (void)setBoundingMapRegion:(id)arg1;
- (void)setComposedGuidanceEvents:(id)arg1;
- (void)setCurrentDisplayStep:(unsigned long long)arg1;
- (void)setFirstVisiblePoint:(unsigned int)arg1;
- (void)setIsNavigable:(bool)arg1;
- (void)setIsWalkingOnlyTransitRoute:(bool)arg1;
- (void)setManeuverDisplayEnabled:(bool)arg1;
- (void)setManeuverDisplaySteps:(id)arg1;
- (void)setMutableData:(id)arg1;
- (void)setRevisionIdentifier:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSelectedSegmentIndex:(unsigned long long)arg1;
- (void)setServerRouteID:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setSuggestedRoute:(id)arg1;
- (void)setTransitUpdateInitialDelay:(double)arg1;
- (void)setUniqueRouteID:(id)arg1;
- (bool)shouldShowSchedule;
- (id)startDate;
- (id)stations;
- (id)stepAtIndex:(unsigned long long)arg1;
- (double)stepDistanceFromPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (id)stepForPointIndex:(unsigned int)arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexForRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (id)stops;
- (id)styleAttributes;
- (id)suggestedRoute;
- (bool)supportsSnapping;
- (id)ticketingSegmentsForSelectedRides;
- (id)tollAdvisory;
- (id)traffic;
- (id)trafficDescription;
- (id)transitAdvisories;
- (id)transitDescriptionFormatString;
- (id)transitRouteBadge;
- (id)transitRouteUpdateRequest;
- (id)transitRoutingIncidentMessage;
- (double)transitUpdateInitialDelay;
- (int)transportType;
- (int)transportTypeForStep:(id)arg1;
- (double)travelAndChargingDuration;
- (double)travelTimeAggressiveEstimate;
- (double)travelTimeConservativeEstimate;
- (id)truncatedTrafficFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)uniqueRouteID;
- (void)unregisterObserver:(id)arg1;
- (void)updateRouteWithRideSelections:(id)arg1;
- (void)updateTransitRouteUpdateRequest:(id)arg1;
- (bool)usesRoutingPathPoints;
- (bool)usesZilch;
- (id)visualInfos;
- (id)zilchDataArrayToEndOfRouteFromStepIndex:(unsigned long long)arg1;
- (id)zilchDataFromStepIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (void)_addPointsToArray:(id)arg1 forMapPoints:(struct { double x1; double x2; }*)arg2 pointCount:(unsigned long long)arg3 isPolylineA:(bool)arg4;
+ (void)_findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7 outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg8 outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg9 outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg10;
+ (bool)_pointsConverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7;
+ (bool)_pointsConverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinatesA:(out id*)arg6 outCoordinatesB:(out id*)arg7;
+ (bool)_pointsDiverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7;
+ (unsigned long long)_startIndexForPoints:(struct Matrix<double, 2, 1> { double x1[2]; })arg1 withPoints:(void*)arg2 pointCount:(unsigned long long)arg3 toleranceSquared:(double)arg4;
+ (id)_stringForPoint:(const void*)arg1;
+ (void)findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherCoordinates:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 distanceInMeters:(double)arg5 outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7 outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg8 outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg9;
+ (void)findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outCoordinatesA:(out id*)arg7 outCoordinatesB:(out id*)arg8;
+ (void)findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7 outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg8;
+ (bool)pointsConverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6;
+ (bool)pointsDiverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6;

- (bool)_isNavigableForWatch;
- (id)_mapPoints;
- (bool)_timeball_isEqualToRoute:(id)arg1;
- (id)divergenceAndConvergenceWithRoute:(id)arg1;
- (id)divergenceAndConvergenceWithRoute:(id)arg1 outOtherRoutePoints:(out id*)arg2;
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 distanceInMeters:(double)arg2 outDivergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 outConvergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4;
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 outDivergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2 outConvergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3;
- (double)remainingTimeFromLocation:(id)arg1;
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2;
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2 outRemainingDistanceToEndOfLeg:(out double*)arg3 outDistanceToManeuverStart:(out double*)arg4 outDistanceToManeuverEnd:(out double*)arg5 outRemainingTimeToEndOfRoute:(out double*)arg6 outRemainingDistanceToEndOfRoute:(out double*)arg7;
- (double)remainingTimeFromRouteMatch:(id)arg1 etaRoute:(id)arg2 outRemainingDistanceToEndOfLeg:(out double*)arg3 outDistanceToManeuverStart:(out double*)arg4 outDistanceToManeuverEnd:(out double*)arg5 outRemainingTimeToEndOfRoute:(out double*)arg6 outRemainingDistanceToEndOfRoute:(out double*)arg7;

@end
