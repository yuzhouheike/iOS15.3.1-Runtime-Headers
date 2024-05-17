/* Generated by RuntimeBrowser.
 */

@protocol BWStillImageProcessorControllerDelegate <NSObject>

@required

- (void)processorController:(BWStillImageProcessorController *)arg1 didFinishProcessingInput:(BWStillImageProcessorInput *)arg2 err:(int)arg3;
- (void)processorController:(BWStillImageProcessorController *)arg1 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 type:(unsigned long long)arg3 processorInput:(BWStillImageProcessorInput *)arg4 err:(int)arg5;
- (struct __CVBuffer { }*)processorController:(BWStillImageProcessorController *)arg1 newOutputPixelBufferForProcessorInput:(BWStillImageProcessorInput *)arg2 type:(unsigned long long)arg3;

@optional

- (void)processorController:(BWStillImageProcessorController *)arg1 didFinishProcessingBuffer:(struct __CVBuffer { }*)arg2 metadata:(NSDictionary *)arg3 type:(unsigned long long)arg4 processorInput:(BWStillImageProcessorInput *)arg5 err:(int)arg6;

@end
