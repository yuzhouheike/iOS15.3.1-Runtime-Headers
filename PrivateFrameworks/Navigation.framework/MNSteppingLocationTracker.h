/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSteppingLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate> {
    MNArrivalUpdater * _arrivalUpdater;
    GEORouteMatcher * _routeMatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)arrivalUpdaterDidArrive:(id)arg1 atEndOfLegAtIndex:(unsigned long long)arg2;
- (id)initWithNavigationSession:(id)arg1;
- (id)matchedLocationForLocation:(id)arg1;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)startTracking;
- (void)stopTracking;
- (int)transportType;
- (void)updateLocation:(id)arg1;

@end
