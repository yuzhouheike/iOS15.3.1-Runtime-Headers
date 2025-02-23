/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteAttributes : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _additionalTransportTypes;
    GEOAutomobileOptions * _automobileOptions;
    int  _basicPointsToBeIncluded;
    GEOCyclingOptions * _cyclingOptions;
    GEODestinationInfo * _destinationInfo;
    int  _destinationType;
    bool  _directZilchByLaneFlowlines;
    bool  _enableExperimentalMode;
    struct { 
        unsigned int has_timepoint : 1; 
        unsigned int has_basicPointsToBeIncluded : 1; 
        unsigned int has_destinationType : 1; 
        unsigned int has_mainTransportType : 1; 
        unsigned int has_trafficType : 1; 
        unsigned int has_walkingLimitMeters : 1; 
        unsigned int has_directZilchByLaneFlowlines : 1; 
        unsigned int has_enableExperimentalMode : 1; 
        unsigned int has_includeContingencyRoutes : 1; 
        unsigned int has_includeHistoricTravelTime : 1; 
        unsigned int has_includeLaneGuidance : 1; 
        unsigned int has_includeManeuverIcons : 1; 
        unsigned int has_includePhonetics : 1; 
        unsigned int has_includeTrafficAlongRoute : 1; 
        unsigned int has_includeTrafficIncidents : 1; 
        unsigned int has_includeZilchPoints : 1; 
        unsigned int has_includeCellularCoverage : 1; 
        unsigned int has_includeCrossLanguagePhonetics : 1; 
        unsigned int has_includeLaneWidths : 1; 
        unsigned int has_includeRoutingPathLeg : 1; 
        unsigned int has_useMetricThreshold : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_additionalTransportTypes : 1; 
        unsigned int read_initialPromptTypes : 1; 
        unsigned int read_uiContexts : 1; 
        unsigned int read_automobileOptions : 1; 
        unsigned int read_cyclingOptions : 1; 
        unsigned int read_destinationInfo : 1; 
        unsigned int read_phoneticLocaleIdentifier : 1; 
        unsigned int read_transitOptions : 1; 
        unsigned int read_walkingOptions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeCellularCoverage;
    bool  _includeContingencyRoutes;
    bool  _includeCrossLanguagePhonetics;
    bool  _includeHistoricTravelTime;
    bool  _includeLaneGuidance;
    bool  _includeLaneWidths;
    bool  _includeManeuverIcons;
    bool  _includePhonetics;
    bool  _includeRoutingPathLeg;
    bool  _includeTrafficAlongRoute;
    bool  _includeTrafficIncidents;
    bool  _includeZilchPoints;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _initialPromptTypes;
    int  _mainTransportType;
    NSString * _phoneticLocaleIdentifier;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct GEOTimepoint { 
        double _currentUserTime; 
        double _time; 
        int _type; 
        struct { 
            unsigned int currentUserTime : 1; 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _timepoint;
    int  _trafficType;
    GEOTransitOptions * _transitOptions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _uiContexts;
    PBUnknownFields * _unknownFields;
    bool  _useMetricThreshold;
    unsigned int  _walkingLimitMeters;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readonly) int*additionalTransportTypes;
@property (nonatomic, readonly) unsigned long long additionalTransportTypesCount;
@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) int basicPointsToBeIncluded;
@property (nonatomic, retain) GEOCyclingOptions *cyclingOptions;
@property (nonatomic, retain) GEODestinationInfo *destinationInfo;
@property (nonatomic) int destinationType;
@property (nonatomic) bool directZilchByLaneFlowlines;
@property (nonatomic) bool enableExperimentalMode;
@property (nonatomic, readonly) bool hasAutomobileOptions;
@property (nonatomic) bool hasBasicPointsToBeIncluded;
@property (nonatomic, readonly) bool hasCyclingOptions;
@property (nonatomic, readonly) bool hasDestinationInfo;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic) bool hasDirectZilchByLaneFlowlines;
@property (nonatomic) bool hasEnableExperimentalMode;
@property (nonatomic) bool hasIncludeCellularCoverage;
@property (nonatomic) bool hasIncludeContingencyRoutes;
@property (nonatomic) bool hasIncludeCrossLanguagePhonetics;
@property (nonatomic) bool hasIncludeHistoricTravelTime;
@property (nonatomic) bool hasIncludeLaneGuidance;
@property (nonatomic) bool hasIncludeLaneWidths;
@property (nonatomic) bool hasIncludeManeuverIcons;
@property (nonatomic) bool hasIncludePhonetics;
@property (nonatomic) bool hasIncludeRoutingPathLeg;
@property (nonatomic) bool hasIncludeTrafficAlongRoute;
@property (nonatomic) bool hasIncludeTrafficIncidents;
@property (nonatomic) bool hasIncludeZilchPoints;
@property (nonatomic) bool hasMainTransportType;
@property (nonatomic, readonly) bool hasPhoneticLocaleIdentifier;
@property (nonatomic) bool hasTimepoint;
@property (nonatomic) bool hasTrafficType;
@property (nonatomic, readonly) bool hasTransitOptions;
@property (nonatomic) bool hasUseMetricThreshold;
@property (nonatomic) bool hasWalkingLimitMeters;
@property (nonatomic, readonly) bool hasWalkingOptions;
@property (nonatomic) bool includeCellularCoverage;
@property (nonatomic) bool includeContingencyRoutes;
@property (nonatomic) bool includeCrossLanguagePhonetics;
@property (nonatomic) bool includeHistoricTravelTime;
@property (nonatomic) bool includeLaneGuidance;
@property (nonatomic) bool includeLaneWidths;
@property (nonatomic) bool includeManeuverIcons;
@property (nonatomic) bool includePhonetics;
@property (nonatomic) bool includeRoutingPathLeg;
@property (nonatomic) bool includeTrafficAlongRoute;
@property (nonatomic) bool includeTrafficIncidents;
@property (nonatomic) bool includeZilchPoints;
@property (nonatomic, readonly) int*initialPromptTypes;
@property (nonatomic, readonly) unsigned long long initialPromptTypesCount;
@property (nonatomic) int mainTransportType;
@property (nonatomic, retain) NSString *phoneticLocaleIdentifier;
@property (nonatomic) struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } timepoint;
@property (nonatomic) int trafficType;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) int*uiContexts;
@property (nonatomic, readonly) unsigned long long uiContextsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool useMetricThreshold;
@property (nonatomic) unsigned int walkingLimitMeters;
@property (nonatomic, retain) GEOWalkingOptions *walkingOptions;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)defaultRouteAttributes;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAdditionalTransportTypes:(id)arg1;
- (int)StringAsBasicPointsToBeIncluded:(id)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsInitialPromptTypes:(id)arg1;
- (int)StringAsMainTransportType:(id)arg1;
- (int)StringAsTrafficType:(id)arg1;
- (int)StringAsUiContexts:(id)arg1;
- (void)addAdditionalTransportType:(int)arg1;
- (void)addInitialPromptType:(int)arg1;
- (void)addUiContext:(int)arg1;
- (int)additionalTransportTypeAtIndex:(unsigned long long)arg1;
- (int*)additionalTransportTypes;
- (id)additionalTransportTypesAsString:(int)arg1;
- (unsigned long long)additionalTransportTypesCount;
- (id)automobileOptions;
- (int)basicPointsToBeIncluded;
- (id)basicPointsToBeIncludedAsString:(int)arg1;
- (void)buildRouteAttributes:(id)arg1 result:(id /* block */)arg2;
- (void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(id /* block */)arg3;
- (void)clearAdditionalTransportTypes;
- (void)clearInitialPromptTypes;
- (void)clearUiContexts;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cyclingOptions;
- (void)dealloc;
- (id)description;
- (id)destinationInfo;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)directZilchByLaneFlowlines;
- (bool)enableExperimentalMode;
- (bool)hasAutomobileOptions;
- (bool)hasBasicPointsToBeIncluded;
- (bool)hasCyclingOptions;
- (bool)hasDestinationInfo;
- (bool)hasDestinationType;
- (bool)hasDirectZilchByLaneFlowlines;
- (bool)hasEnableExperimentalMode;
- (bool)hasIncludeCellularCoverage;
- (bool)hasIncludeContingencyRoutes;
- (bool)hasIncludeCrossLanguagePhonetics;
- (bool)hasIncludeHistoricTravelTime;
- (bool)hasIncludeLaneGuidance;
- (bool)hasIncludeLaneWidths;
- (bool)hasIncludeManeuverIcons;
- (bool)hasIncludePhonetics;
- (bool)hasIncludeRoutingPathLeg;
- (bool)hasIncludeTrafficAlongRoute;
- (bool)hasIncludeTrafficIncidents;
- (bool)hasIncludeZilchPoints;
- (bool)hasMainTransportType;
- (bool)hasPhoneticLocaleIdentifier;
- (bool)hasTimepoint;
- (bool)hasTrafficType;
- (bool)hasTransitOptions;
- (bool)hasUseMetricThreshold;
- (bool)hasWalkingLimitMeters;
- (bool)hasWalkingOptions;
- (unsigned long long)hash;
- (bool)includeCellularCoverage;
- (bool)includeContingencyRoutes;
- (bool)includeCrossLanguagePhonetics;
- (bool)includeHistoricTravelTime;
- (bool)includeLaneGuidance;
- (bool)includeLaneWidths;
- (bool)includeManeuverIcons;
- (bool)includePhonetics;
- (bool)includeRoutingPathLeg;
- (bool)includeTrafficAlongRoute;
- (bool)includeTrafficIncidents;
- (bool)includeZilchPoints;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)initialPromptTypeAtIndex:(unsigned long long)arg1;
- (int*)initialPromptTypes;
- (id)initialPromptTypesAsString:(int)arg1;
- (unsigned long long)initialPromptTypesCount;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)mainTransportType;
- (id)mainTransportTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneticLocaleIdentifier;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAutomobileOptions:(id)arg1;
- (void)setBasicPointsToBeIncluded:(int)arg1;
- (void)setCyclingOptions:(id)arg1;
- (void)setDestinationInfo:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setDirectZilchByLaneFlowlines:(bool)arg1;
- (void)setEnableExperimentalMode:(bool)arg1;
- (void)setHasBasicPointsToBeIncluded:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasDirectZilchByLaneFlowlines:(bool)arg1;
- (void)setHasEnableExperimentalMode:(bool)arg1;
- (void)setHasIncludeCellularCoverage:(bool)arg1;
- (void)setHasIncludeContingencyRoutes:(bool)arg1;
- (void)setHasIncludeCrossLanguagePhonetics:(bool)arg1;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setHasIncludeLaneGuidance:(bool)arg1;
- (void)setHasIncludeLaneWidths:(bool)arg1;
- (void)setHasIncludeManeuverIcons:(bool)arg1;
- (void)setHasIncludePhonetics:(bool)arg1;
- (void)setHasIncludeRoutingPathLeg:(bool)arg1;
- (void)setHasIncludeTrafficAlongRoute:(bool)arg1;
- (void)setHasIncludeTrafficIncidents:(bool)arg1;
- (void)setHasIncludeZilchPoints:(bool)arg1;
- (void)setHasMainTransportType:(bool)arg1;
- (void)setHasTimepoint:(bool)arg1;
- (void)setHasTrafficType:(bool)arg1;
- (void)setHasUseMetricThreshold:(bool)arg1;
- (void)setHasWalkingLimitMeters:(bool)arg1;
- (void)setIncludeCellularCoverage:(bool)arg1;
- (void)setIncludeContingencyRoutes:(bool)arg1;
- (void)setIncludeCrossLanguagePhonetics:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (void)setIncludeLaneGuidance:(bool)arg1;
- (void)setIncludeLaneWidths:(bool)arg1;
- (void)setIncludeManeuverIcons:(bool)arg1;
- (void)setIncludePhonetics:(bool)arg1;
- (void)setIncludeRoutingPathLeg:(bool)arg1;
- (void)setIncludeTrafficAlongRoute:(bool)arg1;
- (void)setIncludeTrafficIncidents:(bool)arg1;
- (void)setIncludeZilchPoints:(bool)arg1;
- (void)setInitialPromptTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setMainTransportType:(int)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setRoutePointTypeForTransportType:(int)arg1;
- (void)setTimepoint:(struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)setTrafficType:(int)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setUiContexts:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUseMetricThreshold:(bool)arg1;
- (void)setWalkingLimitMeters:(unsigned int)arg1;
- (void)setWalkingOptions:(id)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })timepoint;
- (int)trafficType;
- (id)trafficTypeAsString:(int)arg1;
- (id)transitOptions;
- (int)uiContextAtIndex:(unsigned long long)arg1;
- (int*)uiContexts;
- (id)uiContextsAsString:(int)arg1;
- (unsigned long long)uiContextsCount;
- (id)unknownFields;
- (bool)useMetricThreshold;
- (unsigned int)walkingLimitMeters;
- (id)walkingOptions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)defaultRouteAttributesForTransportType:(int)arg1;

- (id)_vehicleSpecifications;

@end
