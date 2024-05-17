/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate> {
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSDictionary * _redEyeReductionParametersByPortType;
    CIDualRedEyeRepairSession * _redEyeRepairSession;
    NSMutableArray * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_newRedEyeRepairSessionWithMetalCommandQueue:(id)arg1;
+ (void)initialize;
+ (void)prewarm;

- (void)_clearRequest:(id)arg1;
- (int)_configureRedEyeReductionSessionWithConfiguration:(id)arg1;
- (id)_currentRequest;
- (void)_processRedEyeReductionWhenNecessaryForRequest:(id)arg1;
- (void)_propagateSensorInterfaceRawFromAuxImage:(struct opaqueCMSampleBuffer { }*)arg1 toPrimaryImage:(struct opaqueCMSampleBuffer { }*)arg2;
- (bool)_receivedRequiredFramesForRequest:(id)arg1;
- (id)_requestForInput:(id)arg1;
- (void)_serviceRequests;
- (void)cancelProcessing;
- (void)dealloc;
- (void)didReceiveAllFramesForInput:(id)arg1;
- (void)didReceiveFrameForInput:(id)arg1;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)type;

@end
