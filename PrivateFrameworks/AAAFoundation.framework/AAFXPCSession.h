/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation
 */

@interface AAFXPCSession : NSObject {
    id  __proxy;
    NSXPCConnection * _connection;
    <AAFXPCSessionDelegate> * _delegate;
    NSUUID * _identifier;
    AAFXPCSessionConfig * _remoteServiceConfig;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) id _proxy;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <AAFXPCSessionDelegate> *delegate;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) AAFXPCSessionConfig *remoteServiceConfig;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)_proxy;
- (id)connection;
- (id)delegate;
- (void)destroyXPCConnection;
- (id)identifier;
- (id)initWithRemoteServiceConfig:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)remoteServiceConfig;
- (id)remoteServiceProxy;
- (id)remoteServiceProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (id)serialQueue;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRemoteServiceConfig:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)set_proxy:(id)arg1;
- (void)suspend;
- (id)syncRemoteServiceProxy;
- (id)syncRemoteServiceProxyWithErrorHandler:(id /* block */)arg1;

@end
