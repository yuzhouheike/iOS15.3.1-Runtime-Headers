/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWMetalInferenceContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLCommandQueueSPI> * _commandQueueSPI;
    <MTLDevice> * _device;
    bool  _prepared;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;

- (id)commandQueue;
- (void)dealloc;
- (id)device;
- (id)initWithSchedulerPriority:(unsigned int)arg1;
- (int)prepareForInferenceWithCompletionQueue:(id)arg1;

@end
