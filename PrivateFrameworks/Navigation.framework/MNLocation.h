/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNLocation : CLLocation <NSSecureCoding> {
    GEONavigationMatchInfo * _detailedMatchInfo;
    NSDate * _expirationDate;
    bool  _isDirectional;
    bool  _isLeeched;
    bool  _locationUnreliable;
    NSDate * _originalDate;
    int  _rampType;
    CLLocation * _rawLocation;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _rawShiftedCoordinate;
    unsigned int  _roadLineType;
    GEORoadMatch * _roadMatch;
    NSString * _roadName;
    NSUUID * _routeID;
    GEORouteMatch * _routeMatch;
    NSString * _shieldText;
    long long  _shieldType;
    unsigned long long  _speedLimit;
    bool  _speedLimitIsMPH;
    long long  _speedLimitShieldType;
    unsigned long long  _state;
    unsigned long long  _traceIndex;
}

@property (nonatomic, retain) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) bool isDirectional;
@property (nonatomic) bool isLeeched;
@property (nonatomic, readonly) bool isProjected;
@property (nonatomic) bool locationUnreliable;
@property (nonatomic, retain) NSDate *originalDate;
@property (nonatomic) int rampType;
@property (nonatomic, retain) CLLocation *rawLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } rawShiftedCoordinate;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic, retain) GEORoadMatch *roadMatch;
@property (nonatomic, copy) NSString *roadName;
@property (nonatomic, readonly) NSUUID *routeID;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (nonatomic, copy) NSString *shieldText;
@property (nonatomic) long long shieldType;
@property (nonatomic) unsigned long long speedLimit;
@property (nonatomic) bool speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic) unsigned long long traceIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_navigation_detailedMatchInfo;
- (bool)_navigation_hasValidCourse;
- (bool)_navigation_isStale;
- (struct CLLocationCoordinate2D { double x1; double x2; })_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (id)_referenceFrameAsString:(int)arg1;
- (id)_roadFeature;
- (id)description;
- (id)detailedMatchInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1 locationMatchType:(unsigned long long)arg2;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (bool)isDirectional;
- (bool)isEqualToLocation:(id)arg1;
- (bool)isLeeched;
- (bool)isProjected;
- (bool)locationUnreliable;
- (id)matchInfo;
- (id)originalDate;
- (id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(bool)arg2;
- (int)rampType;
- (id)rawLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })rawShiftedCoordinate;
- (unsigned int)roadLineType;
- (id)roadMatch;
- (id)roadName;
- (id)routeID;
- (id)routeMatch;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsDirectional:(bool)arg1;
- (void)setIsLeeched:(bool)arg1;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setOriginalDate:(id)arg1;
- (void)setRampType:(int)arg1;
- (void)setRawLocation:(id)arg1;
- (void)setRawShiftedCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setRoadLineType:(unsigned int)arg1;
- (void)setRoadMatch:(id)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShieldText:(id)arg1;
- (void)setShieldType:(long long)arg1;
- (void)setSpeedLimit:(unsigned long long)arg1;
- (void)setSpeedLimitIsMPH:(bool)arg1;
- (void)setSpeedLimitShieldType:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTraceIndex:(unsigned long long)arg1;
- (id)shieldText;
- (long long)shieldType;
- (unsigned long long)speedLimit;
- (bool)speedLimitIsMPH;
- (long long)speedLimitShieldType;
- (unsigned long long)state;
- (unsigned long long)stepIndex;
- (unsigned long long)traceIndex;

@end
