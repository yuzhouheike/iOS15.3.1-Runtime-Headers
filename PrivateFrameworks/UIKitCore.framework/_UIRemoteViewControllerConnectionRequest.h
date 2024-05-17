/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIRemoteViewControllerConnectionRequest : NSObject {
    _UIAsyncInvocation * _cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo * _connectionInfo;
    NSUUID * _contextToken;
    NSError * _error;
    id  _exportedHostingObject;
    id /* block */  _handler;
    bool  _isCancelledOrComplete;
    NSObject<OS_dispatch_queue> * _queue;
    Class  _remoteViewControllerClass;
    _UIAsyncInvocation * _requestCancellationInvocation;
    NSArray * _serializedAppearanceCustomizations;
    _UIRemoteViewService * _service;
    <_UIViewServiceDeputyXPCInterface> * _serviceViewControllerDeputyInterface;
    UITraitCollection * _traits;
    NSString * _viewControllerClassName;
    NSString * _viewServiceBundleIdentifier;
}

+ (id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 traitCollection:(id)arg5 exportedHostingObject:(id)arg6 serviceViewControllerDeputyInterface:(id)arg7 connectionHandler:(id /* block */)arg8;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 traitCollection:(id)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(id /* block */)arg7;
+ (id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 traitCollection:(id)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(id /* block */)arg7;

- (void).cxx_destruct;
- (void)_cancelUnconditionallyThen:(id /* block */)arg1;
- (id)_cancelWithError:(id)arg1;
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(id /* block */)arg3;
- (void)_connectToPlugInKitService;
- (void)_connectToServiceViewController;
- (void)_connectToTextEffectsOperator;
- (void)_connectToViewControllerControlMessageDeputy;
- (void)_connectToViewControllerOperator;
- (void)_connectToViewService;
- (void)_didFinishEstablishingConnection;
- (void)_sendServiceTextEffectsRequest;
- (void)_sendServiceViewControllerRequest;
- (void)dealloc;

@end
