/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol> {
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_doPerformInstallCall:(id)arg1 withOptions:(id)arg2 installType:(unsigned long long)arg3 notificationJournaller:(id)arg4 reply:(id /* block */)arg5;
- (void)_doPerformUninstallCall:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)_postProcessingForApp:(id)arg1 type:(id)arg2 notification:(int)arg3;
- (void)_preflightAppDeletion:(id)arg1;
- (id)databaseQueue;
- (bool)dispatchRegistrationOfInstallDict:(id)arg1;
- (void)finishInstallationWithInstalledBundleIDs:(id)arg1 lastWasPlaceholder:(bool)arg2 installationError:(id)arg3 replyBlock:(id /* block */)arg4;
- (id)invokeInstallCall:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)invokeUninstallCall:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)performInstallCall:(id)arg1 withOptions:(id)arg2 installType:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)performUninstallCall:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (bool)registerBundle:(id)arg1 withOptions:(id)arg2;
- (void)sendCallbackDeliveryComplete;
- (void)sendCallbackWithDictionary:(id)arg1;
- (void)setDatabaseQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)unregisterBundle:(id)arg1 placeholderOnly:(bool)arg2 notification:(int*)arg3;
- (bool)validateEntitlementsForInstallCall:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)xpcConnection;

@end
