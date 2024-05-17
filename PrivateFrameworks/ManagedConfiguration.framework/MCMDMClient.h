/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMClient : NSObject

+ (id)sharedClient;

- (int)_MCMigrationContextToMDMMigrationContext:(int)arg1;
- (int)_MDMAccessFlagToMCMDMAccessFlag:(int)arg1;
- (int)accessRights;
- (bool)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 topic:(id)arg5 useDevelopmentAPNS:(bool)arg6 signMessage:(bool)arg7 isUserEnrollment:(bool)arg8 enrollmentID:(id)arg9 outError:(id*)arg10;
- (bool)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 topic:(id)arg5 signMessage:(bool)arg6 isUserEnrollment:(bool)arg7 enrollmentID:(id)arg8 outError:(id*)arg9;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)arg1;
- (bool)isActivationLockAllowedWhileSupervised;
- (bool)isManagedByMDM;
- (void)migrateMDMWithContext:(int)arg1 completion:(id /* block */)arg2;
- (void)notifyNewConfiguration;
- (void)processDeviceRequest:(id)arg1 encodeResponse:(bool)arg2 completion:(id /* block */)arg3;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)arg1;
- (void)uprootMDM;

@end
