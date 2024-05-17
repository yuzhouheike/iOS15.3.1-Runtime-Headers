/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNGuidanceEventFeedback : PBCodable <NSCopying> {
    double  _endDistance;
    double  _endTime;
    NSString * _enrouteNoticeIdentifier;
    unsigned int  _enrouteNoticeIndex;
    NSString * _eventDescription;
    unsigned int  _eventIndex;
    struct { 
        unsigned int endDistance : 1; 
        unsigned int endTime : 1; 
        unsigned int maneuverTime : 1; 
        unsigned int startDistance : 1; 
        unsigned int startTime : 1; 
        unsigned int vehicleSpeed : 1; 
        unsigned int enrouteNoticeIndex : 1; 
        unsigned int eventIndex : 1; 
        unsigned int selectedPrimaryStringIndex : 1; 
        unsigned int selectedSecondaryStringIndex : 1; 
        unsigned int stepID : 1; 
        unsigned int trafficCameraType : 1; 
        unsigned int trafficColor : 1; 
        unsigned int type : 1; 
        unsigned int shortPrompt : 1; 
    }  _has;
    NSMutableArray * _junctionViewImageIDs;
    double  _maneuverTime;
    NSData * _routeID;
    unsigned int  _selectedPrimaryStringIndex;
    unsigned int  _selectedSecondaryStringIndex;
    bool  _shortPrompt;
    double  _startDistance;
    double  _startTime;
    unsigned int  _stepID;
    unsigned int  _trafficCameraType;
    unsigned int  _trafficColor;
    int  _type;
    NSString * _uniqueIDstring;
    double  _vehicleSpeed;
}

@property (nonatomic) double endDistance;
@property (nonatomic) double endTime;
@property (nonatomic, retain) NSString *enrouteNoticeIdentifier;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic, retain) NSString *eventDescription;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) bool hasEndDistance;
@property (nonatomic) bool hasEndTime;
@property (nonatomic, readonly) bool hasEnrouteNoticeIdentifier;
@property (nonatomic) bool hasEnrouteNoticeIndex;
@property (nonatomic, readonly) bool hasEventDescription;
@property (nonatomic) bool hasEventIndex;
@property (nonatomic) bool hasManeuverTime;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic) bool hasSelectedPrimaryStringIndex;
@property (nonatomic) bool hasSelectedSecondaryStringIndex;
@property (nonatomic) bool hasShortPrompt;
@property (nonatomic) bool hasStartDistance;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTrafficCameraType;
@property (nonatomic) bool hasTrafficColor;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUniqueIDstring;
@property (nonatomic) bool hasVehicleSpeed;
@property (nonatomic, retain) NSMutableArray *junctionViewImageIDs;
@property (nonatomic) double maneuverTime;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned int selectedPrimaryStringIndex;
@property (nonatomic) unsigned int selectedSecondaryStringIndex;
@property (nonatomic) bool shortPrompt;
@property (nonatomic) double startDistance;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) unsigned int trafficCameraType;
@property (nonatomic) unsigned int trafficColor;
@property (nonatomic) int type;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, retain) NSString *uniqueIDstring;
@property (nonatomic) double vehicleSpeed;

+ (Class)junctionViewImageIDType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addJunctionViewImageID:(id)arg1;
- (void)clearJunctionViewImageIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDistance;
- (double)endTime;
- (id)enrouteNoticeIdentifier;
- (unsigned int)enrouteNoticeIndex;
- (id)eventDescription;
- (unsigned int)eventIndex;
- (bool)hasEndDistance;
- (bool)hasEndTime;
- (bool)hasEnrouteNoticeIdentifier;
- (bool)hasEnrouteNoticeIndex;
- (bool)hasEventDescription;
- (bool)hasEventIndex;
- (bool)hasManeuverTime;
- (bool)hasRouteID;
- (bool)hasSelectedPrimaryStringIndex;
- (bool)hasSelectedSecondaryStringIndex;
- (bool)hasShortPrompt;
- (bool)hasStartDistance;
- (bool)hasStartTime;
- (bool)hasStepID;
- (bool)hasTrafficCameraType;
- (bool)hasTrafficColor;
- (bool)hasType;
- (bool)hasUniqueIDstring;
- (bool)hasVehicleSpeed;
- (unsigned long long)hash;
- (id)initWithEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)junctionViewImageIDAtIndex:(unsigned long long)arg1;
- (id)junctionViewImageIDs;
- (unsigned long long)junctionViewImageIDsCount;
- (double)maneuverTime;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (unsigned int)selectedPrimaryStringIndex;
- (unsigned int)selectedSecondaryStringIndex;
- (void)setEndDistance:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setEnrouteNoticeIdentifier:(id)arg1;
- (void)setEnrouteNoticeIndex:(unsigned int)arg1;
- (void)setEventDescription:(id)arg1;
- (void)setEventIndex:(unsigned int)arg1;
- (void)setHasEndDistance:(bool)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasEnrouteNoticeIndex:(bool)arg1;
- (void)setHasEventIndex:(bool)arg1;
- (void)setHasManeuverTime:(bool)arg1;
- (void)setHasSelectedPrimaryStringIndex:(bool)arg1;
- (void)setHasSelectedSecondaryStringIndex:(bool)arg1;
- (void)setHasShortPrompt:(bool)arg1;
- (void)setHasStartDistance:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTrafficCameraType:(bool)arg1;
- (void)setHasTrafficColor:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVehicleSpeed:(bool)arg1;
- (void)setJunctionViewImageIDs:(id)arg1;
- (void)setManeuverTime:(double)arg1;
- (void)setRouteID:(id)arg1;
- (void)setSelectedPrimaryStringIndex:(unsigned int)arg1;
- (void)setSelectedSecondaryStringIndex:(unsigned int)arg1;
- (void)setShortPrompt:(bool)arg1;
- (void)setStartDistance:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTrafficCameraType:(unsigned int)arg1;
- (void)setTrafficColor:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (void)setUniqueIDstring:(id)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (bool)shortPrompt;
- (double)startDistance;
- (double)startTime;
- (unsigned int)stepID;
- (unsigned int)trafficCameraType;
- (unsigned int)trafficColor;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)uniqueID;
- (id)uniqueIDstring;
- (double)vehicleSpeed;
- (void)writeTo:(id)arg1;

@end
