/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding> {
    NSMutableDictionary * _legIndexToChargingStationInfos;
    NSMutableDictionary * _stepsIDToEVInfos;
    GEOComposedRouteTraffic * _traffic;
    NSArray * _trafficDelayInfos;
    NSArray * _updateableCameraInfos;
}

@property (nonatomic, retain) GEOComposedRouteTraffic *traffic;
@property (nonatomic, retain) NSArray *trafficDelayInfos;
@property (nonatomic, retain) NSArray *updateableCameraInfos;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chargingStationInfoForLegIndex:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)evInfoForStepID:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTraffic:(id)arg1;
- (void)setTrafficDelayInfos:(id)arg1;
- (void)setUpdateableCameraInfos:(id)arg1;
- (id)traffic;
- (id)trafficDelayInfos;
- (void)updateForRoute:(id)arg1;
- (void)updateForRoute:(id)arg1 etaRoute:(id)arg2;
- (id)updateableCameraInfos;

@end
