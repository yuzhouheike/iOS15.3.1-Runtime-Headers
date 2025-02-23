/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CARPFoundation.framework/CARPFoundation
 */

@interface CARPFLogBackendSessionManager : NSObject <CARPFLogging, _CARPFLogBackendSessionDelegate> {
    NSPointerArray * _activeSessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _queuedSessions;
    <CARPFRTCSessionFactory> * _rtcFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedSessionManager;

- (void).cxx_destruct;
- (void)__sendMetaEventWithName:(id)arg1 correspondingServiceName:(id)arg2;
- (void)didCompleteActiveSession;
- (id)init;
- (id)initWithFactory:(id)arg1;
- (id)logBackendSessionWithServiceName:(id)arg1;

@end
