/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWCameraStreamingMonitor : NSObject {
    BKSApplicationStateMonitor * _applicationStateMonitor;
    NSObject<OS_dispatch_queue> * _cameraStreamingMonitorQueue;
    unsigned int  _cameraTypeBitMask;
    NSMutableDictionary * _clientInfoByPID;
    NSMutableDictionary * _managedClientInfoByBundleID;
    STMediaStatusDomainPublisher * _mediaStatusDomainPublisher;
    bool  _msnReportingEnabled;
    PAAccessLogger * _privacyAccountingAccessLogger;
    bool  _systemStatusReportingEnabled;
}

+ (void)initialize;
+ (id)sharedCameraStreamingMonitor;

- (void)dealloc;
- (id)initWithMediaStatusDomainPublisher:(id)arg1 msnReportingEnabled:(bool)arg2 systemStatusReportingEnabled:(bool)arg3 privacyAccountingAccessLogger:(id)arg4;
- (void)setCameraAccess:(bool)arg1 clientAuditToken:(struct { unsigned int x1[8]; })arg2 tccIdentity:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setStreaming:(bool)arg1 portType:(id)arg2 clientAuditToken:(struct { unsigned int x1[8]; })arg3 tccIdentity:(id)arg4 completionHandler:(id /* block */)arg5;

@end
