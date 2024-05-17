/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLLayerExecutionSchedule : NSObject {
    NSString * _deviceName;
    long long  _layerError;
    NSString * _layerName;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) long long layerError;
@property (nonatomic, copy) NSString *layerName;

- (void).cxx_destruct;
- (id)deviceName;
- (id)initWithLayerError:(long long)arg1;
- (id)initWithScheduledDevice:(id)arg1 layerName:(id)arg2 layerError:(long long)arg3;
- (long long)layerError;
- (id)layerName;
- (void)setDeviceName:(id)arg1;
- (void)setLayerError:(long long)arg1;
- (void)setLayerName:(id)arg1;

@end
