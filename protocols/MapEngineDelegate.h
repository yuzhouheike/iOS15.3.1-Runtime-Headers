/* Generated by RuntimeBrowser.
 */

@protocol MapEngineDelegate <NSObject>

@required

- (bool)canChangeVenueFocus;
- (void)didFinishLoadingData;
- (void)didFinishLoadingDataWithError:(NSError *)arg1;
- (void)didPresent;
- (void)didStartLoadingData;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)labelManagerDidLayout;
- (void)labelMarkerDidChangeState:(const void*)arg1;
- (void)nearestVenueDidChange:(const void*)arg1 building:(const void*)arg2;
- (void)selectedLabelMarkerWillDisappear:(const void*)arg1;
- (void)venueCreated:(const void*)arg1 building:(const void*)arg2;
- (bool)wantsTimerTick;
- (void)willBecomeFullyDrawn;
- (void)willLayoutWithTimestamp:(double)arg1 withContext:(void*)arg2;

@optional

- (void)activeARWalkingFeatureDidUpdate:(VKARWalkingFeatureDidUpdateInfo *)arg1;
- (void)arWalkingFeatureSetStateDidUpdate:(VKARWalkingFeatureSet *)arg1;
- (void)injectDebugARFeatures:(NSArray *)arg1;
- (void)injectDebugARUserRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)muninJunctionDidChange:(const struct MuninJunction { }*)arg1 currentRoad:(const struct MuninRoadEdge { }*)arg2 localize:(bool)arg3;

@end
