/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPathMatcherRoadLookup : NSObject {
    unsigned long long  _cacheMissCount;
    GEOMapFeatureAccess * _mapFeatureAccess;
    unsigned long long  _mapFeatureRoadsCount;
    NSMutableDictionary * _roadsByMuid;
    NSCache * _roadsCache;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)findOutgoingRoadsFrom:(struct GEOPathMatcherRoadKey { unsigned long long x1; long long x2; double x3; double x4; })arg1;
- (id)findRoadWithMuid:(long long)arg1 nearCoordinate:(struct { double x1; double x2; })arg2;
- (id)findRoadsNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (struct GEOPathMatcherRoadKey { unsigned long long x1; long long x2; double x3; double x4; })flippedRoad:(struct GEOPathMatcherRoadKey { unsigned long long x1; long long x2; double x3; double x4; })arg1;
- (id)init;
- (struct GEOPathMatcherRoadKey { unsigned long long x1; long long x2; double x3; double x4; })keyForRoad:(id)arg1;
- (id)roadForKey:(struct GEOPathMatcherRoadKey { unsigned long long x1; long long x2; double x3; double x4; })arg1;

@end
