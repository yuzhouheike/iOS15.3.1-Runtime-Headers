/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureJunction : NSObject <NSCopying> {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    GEOVectorTile * _tile;
    struct { 
        float x; 
        float y; 
    }  _tilePoint;
}

@property (nonatomic, readonly) struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; }*connectivityJunction;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) bool isOnTileBorder;
@property (nonatomic, readonly) unsigned long long junctionIndex;
@property (nonatomic, readonly) GEOVectorTile *tile;
@property (nonatomic, readonly) struct { float x1; float x2; } tilePoint;

+ (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; }*)connectivityJunctionForRoadFeature:(id)arg1 startJunction:(bool)arg2 outError:(out id*)arg3;
+ (bool)isPointOnTileBorder:(struct GeoCodecsVectorTilePoint { float x1; float x2; }*)arg1;
+ (id)junctionForRoadFeature:(id)arg1 startJunction:(bool)arg2;

- (void).cxx_destruct;
- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; }*)connectivityJunction;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isOnTileBorder;
- (unsigned long long)junctionIndex;
- (id)tile;
- (struct { float x1; float x2; })tilePoint;

@end
