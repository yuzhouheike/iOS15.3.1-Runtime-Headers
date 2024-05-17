/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCompanionNavigationAdapter : NSObject <MNNavigationServiceObserver, MNNavigationSessionObserver> {
    unsigned long long  _announcementStage;
    NSTimer * _coalescedRouteStatusTimer;
    NSTimer * _coalescedRouteUpdatesTimer;
    GEOCompanionRouteDetails * _companionRouteDetails;
    GEOCompanionRouteStatus * _companionRouteStatus;
    NSArray * _companionRouteUpdates;
    MNCompanionNavigationXPCConnection * _connection;
    NSString * _currentRoadName;
    <MNCompanionNavigationDelegate> * _delegate;
    NSString * _destinationName;
    unsigned long long  _displayedStepIndex;
    <GEOServerFormattedStepStringFormatter> * _formatter;
    bool  _guidancePromptsEnabled;
    GEONavigationGuidanceState * _guidanceState;
    bool  _isConnectedToCarplay;
    bool  _isNavigatingInLowGuidance;
    GEOLocation * _lastLocation;
    bool  _locationUnreliable;
    unsigned long long  _nextAnnouncementStage;
    struct { 
        double remainingTime; 
        double remainingDistance; 
    }  _positionFromDestination;
    double  _positionFromManeuver;
    GEOComposedRoute * _route;
    GEORouteMatch * _routeMatch;
    bool  _shouldSendRouteWithStatus;
    double  _timeUntilNextAnnouncement;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNCompanionNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelScheduledRouteStatus;
- (void)_cancelScheduledRouteUpdates;
- (void)_handleNavigationServiceStopped;
- (bool)_isInvalidated;
- (void)_markCurrentHapticsAsTriggered;
- (void)_reloadRouteFromNavigationService:(id)arg1;
- (void)_reset;
- (void)_scheduleCoalescedRouteStatusUpdate;
- (void)_scheduleCoalescedRouteUpdates;
- (void)_sendRouteDetailsAndStatus;
- (void)_sendRouteStatus;
- (void)_sendRouteUpdates;
- (void)_setAnnouncementStage:(unsigned long long)arg1;
- (void)_setDestinationName:(id)arg1;
- (void)_setDisplayedStepIndex:(unsigned long long)arg1;
- (void)_setGuidancePromptsEnabled:(bool)arg1;
- (void)_setLastLocation:(id)arg1;
- (void)_setLocationUnreliable:(bool)arg1;
- (void)_setNavigationState:(int)arg1;
- (void)_setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)_setPositionFromDestination:(struct { double x1; double x2; })arg1;
- (void)_setPositionFromManeuver:(double)arg1;
- (void)_setRealtimeUpdates:(id)arg1;
- (void)_setRoute:(id)arg1 traffic:(id)arg2 isTrace:(bool)arg3;
- (void)_setRouteMatch:(id)arg1;
- (void)_setTransitAlightMessage:(id)arg1;
- (void)_triggerHaptics:(int)arg1;
- (void)_updateCompanionRouteStatus;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (void)invalidate;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;
- (void)navigationService:(id)arg1 didReceiveTransitAlert:(id)arg2;
- (void)navigationService:(id)arg1 didReroute:(id)arg2;
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;
- (void)navigationService:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationService:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationService:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceDidCancelReroute:(id)arg1;
- (void)navigationServiceDidSynchronize:(id)arg1;
- (void)navigationServiceWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setIsNavigatingInLowGuidance:(bool)arg1;
- (void)setVoiceGuidance:(unsigned long long)arg1;

@end
