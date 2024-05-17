/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineGroupOverlay : NSObject <VKRouteOverlay> {
    GEOMapRegion * _boundingMapRegion;
    bool  _containsTransit;
    VKPolylineOverlay * _focusedPolyline;
    struct __CFSet { } * _observers;
    NSMutableSet * _polylines;
    VKPolylineOverlay * _selectedPolyline;
    bool  _showTraffic;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) bool containsTransit;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VKPolylineOverlay *focusedPolyline;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *polylines;
@property (nonatomic, retain) VKPolylineOverlay *selectedPolyline;
@property (nonatomic) bool showTraffic;
@property (readonly) Class superclass;

- (void)_updateBoundingMapRegion;
- (void)_updateContainsTransit;
- (void)addObserver:(id)arg1;
- (void)addPolyline:(id)arg1;
- (id)boundingMapRegion;
- (bool)containsTransit;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (id)focusedPolyline;
- (id)polylines;
- (void)removeObserver:(id)arg1;
- (void)removePolyline:(id)arg1;
- (id)selectedPolyline;
- (void)setFocusedPolyline:(id)arg1;
- (void)setSelectedPolyline:(id)arg1;
- (void)setShowTraffic:(bool)arg1;
- (bool)showTraffic;

@end
