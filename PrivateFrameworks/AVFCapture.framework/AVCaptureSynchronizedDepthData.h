/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedDepthDataInternal * _internal;
}

@property (readonly) AVDepthData *depthData;
@property (readonly) bool depthDataWasDropped;
@property (readonly) long long droppedReason;

+ (void)initialize;

- (id)_initWithDepthData:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 depthDataWasDropped:(bool)arg3 droppedReason:(long long)arg4;
- (void)dealloc;
- (id)debugDescription;
- (id)depthData;
- (bool)depthDataWasDropped;
- (id)description;
- (long long)droppedReason;

@end
