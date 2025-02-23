/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureBuildingSection : NSObject {
    double  _baseHeight;
    unsigned long long  _coordinateCount;
    struct { double x1; double x2; } * _coordinates;
    GEOBuildingFootprintFeature * _feature;
    double  _height;
    unsigned long long  _sectionIndex;
    GEOVectorTile * _tile;
}

@property (nonatomic, readonly) double baseHeight;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (nonatomic, readonly) double height;

- (void).cxx_destruct;
- (double)baseHeight;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (void)dealloc;
- (double)height;
- (id)initWithFeature:(id)arg1 sectionIndex:(unsigned long long)arg2;

@end
