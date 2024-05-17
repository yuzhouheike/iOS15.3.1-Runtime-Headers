/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWLearnedNRRequest : NSObject {
    <BWLearnedNRProcessorControllerDelegate> * _delegate;
    int  _err;
    BWLearnedNRInput * _input;
    BWLearnedNROutput * _output;
}

@property (nonatomic, readonly) <BWLearnedNRProcessorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWLearnedNRInput *input;
@property (nonatomic, readonly) BWLearnedNROutput *output;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)initWithInput:(id)arg1 output:(id)arg2 delegate:(id)arg3;
- (id)input;
- (id)output;
- (bool)receivedAllBuffers;
- (void)setErr:(int)arg1;

@end
