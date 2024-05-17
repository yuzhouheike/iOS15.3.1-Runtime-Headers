/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceProxy> {
    NSArray * _announcementsToIgnore;
    bool  _applicationActive;
    NSHashTable * _clients;
    geo_isolater * _clientsLock;
    NSXPCConnection * _connection;
    <MNNavigationServiceClientInterface> * _delegate;
    NSMutableArray * _interruptionDates;
    bool  _isReconnecting;
    long long  _sandboxHandle;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MNStartNavigationDetails * _startNavigationDetails;
    MNUserOptions * _userOptions;
}

@property (nonatomic, readonly) unsigned long long clientCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long interruptionCount;
@property (nonatomic, readonly) NSArray *interruptionDates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeConnection;
- (void)_consumeSandboxExtension:(char *)arg1;
- (void)_handleInterruption;
- (bool)_hasNavigationServiceEntitlement;
- (void)_openConnection;
- (void)_releaseSandboxExtension;
- (id)_remoteObjectProxy;
- (void)_restoreIdleConnection;
- (void)_restoreNavigationSession;
- (bool)_shouldReconnectWithInterruptionOnDate:(id)arg1;
- (void)_startNavigationWithDetails:(id)arg1;
- (void)_updateConnection;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)changeUserOptions:(id)arg1;
- (void)checkinForNavigationService:(id /* block */)arg1;
- (unsigned long long)clientCount;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableNavigationCapability:(unsigned long long)arg1;
- (void)enableNavigationCapability:(unsigned long long)arg1;
- (void)forceReroute;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (unsigned long long)interruptionCount;
- (id)interruptionDates;
- (bool)isOpenForClient:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)openForClient:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setGuidanceType:(unsigned long long)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* block */)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (void)switchToRoute:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
