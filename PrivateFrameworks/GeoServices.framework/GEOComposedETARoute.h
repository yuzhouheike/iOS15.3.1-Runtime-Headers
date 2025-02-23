/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedETARoute : NSObject <NSSecureCoding, _GEORouteHypothesisMonitorETAProvider> {
    NSUUID * _etauResponseID;
    GEOETARoute * _geoETARoute;
    GEOETATrafficUpdateWaypointRoute * _geoETAWaypointRoute;
    bool  _hasValidTravelDurations;
    double  _historicTravelDuration;
    NSArray * _legs;
    double  _length;
    unsigned long long  _startingStepIndex;
    double  _travelDuration;
    double  _travelDurationAggressiveEstimate;
    double  _travelDurationConservativeEstimate;
    NSUUID * _uniqueRouteID;
}

@property (nonatomic, readonly) double _hypothesis_travelDuration;
@property (nonatomic, readonly) double _hypothesis_travelDurationAggressiveEstimate;
@property (nonatomic, readonly) double _hypothesis_travelDurationConservativeEstimate;
@property (nonatomic, readonly) NSUUID *etauResponseID;
@property (nonatomic, readonly) bool hasValidTravelDurations;
@property (nonatomic, readonly) double historicTravelDuration;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) double travelDuration;
@property (nonatomic, readonly) double travelDurationAggressiveEstimate;
@property (nonatomic, readonly) double travelDurationConservativeEstimate;
@property (nonatomic, readonly) NSUUID *uniqueRouteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_hypothesis_travelDuration;
- (double)_hypothesis_travelDurationAggressiveEstimate;
- (double)_hypothesis_travelDurationConservativeEstimate;
- (double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2;
- (bool)_prepareForOldRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(struct { unsigned int x1; float x2; })arg3;
- (double)_travelDurationFromStepID:(unsigned long long)arg1 toStepID:(unsigned long long)arg2 currentStepRemainingDistance:(double)arg3;
- (bool)_updateForOldResponse:(id)arg1 route:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)etauResponseID;
- (id)evChargingStationInfos;
- (id)evStepInfos;
- (id)geoETARoute;
- (id)geoETAWaypointRoute;
- (id)geoTrafficBannerText;
- (bool)hasValidTravelDurations;
- (double)historicTravelDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithRouteForTesting:(id)arg1;
- (double)length;
- (id)navigabilityInfo;
- (bool)prepareForRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(struct { unsigned int x1; float x2; })arg3;
- (double)travelDuration;
- (double)travelDurationAggressiveEstimate;
- (double)travelDurationConservativeEstimate;
- (double)travelDurationToEndOfLegFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)travelDurationToEndOfRouteFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (id)uniqueRouteID;
- (bool)updateForResponse:(id)arg1 route:(id)arg2;

@end
