/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteGeniusRemoteService : NSObject <MNRouteGeniusDelegateProxy> {
    NSXPCConnection * _connection;
    <MNRouteGeniusDelegateProxy> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_q_closeConnection;
- (bool)_q_openConnectionIfNecessary;
- (void)dealloc;
- (void)didUpdateRouteGenius:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
