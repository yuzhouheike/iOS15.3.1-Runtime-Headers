/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> * _notificationQ;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (void)_didChangePowerState:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)postNotification;

@end
