/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureIntersectionJunction : GEOMapFeatureJunction {
    struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; } * _connectivityJunction;
}

- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; }*)connectivityJunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithConnectivityJunction:(struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; }*)arg1 tile:(id)arg2;
- (unsigned long long)junctionIndex;

@end
