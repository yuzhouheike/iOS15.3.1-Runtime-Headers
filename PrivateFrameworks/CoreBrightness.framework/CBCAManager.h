/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBCAManager : NSObject {
    float  _currentlySetMatrix;
    float  _currentlySetScaler;
    float  _digitalDimmingBrightnessScaler;
    NSMutableArray * _displays;
    NSObject<OS_os_log> * _logHandle;
}

- (void)colorRampPropertyHandler:(id)arg1;
- (void)dealloc;
- (void)displayBrightnessPropertyHandler:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithCADisplay:(id)arg1;
- (void)nitsThresholdPLCPropertyHandler:(id)arg1;
- (void)updateDigitalDimmingBrightnessScaler:(id)arg1;

@end
