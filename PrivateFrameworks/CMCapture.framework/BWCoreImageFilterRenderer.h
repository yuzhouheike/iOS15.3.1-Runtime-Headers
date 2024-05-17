/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    float  _inputRenderQuality;
    <MTLCommandQueue> * _metalCommandQueue;
    int  _portraitRenderQuality;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    CIContext * _renderingQueueContext;
    bool  _usingDepth;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CIContext *renderingQueueContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) bool usingDepth;

+ (void)_prewarmCoreImagePortraitFilterV1;
+ (id)context:(bool)arg1 err:(int*)arg2;
+ (void)initialize;
+ (void)prewarmPortraitFilterVersion:(unsigned int)arg1 semanticStyleFilters:(bool)arg2;

- (void)_renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 prewarming:(bool)arg6 completionHandler:(id /* block */)arg7;
- (id)_visionKitFaceObservationToCoreImageDictionary:(id)arg1 orientation:(id)arg2;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (id)coreImageArrayRepresentationForRegion:(id)arg1;
- (void)dealloc;
- (id)displayName;
- (id)init;
- (id)initForRenderingWithDepth:(bool)arg1 context:(id)arg2 portraitRenderQuality:(int)arg3 metalCommandQueue:(id)arg4;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (id)renderingQueueContext;
- (void)setRenderingQueueContext:(id)arg1;
- (bool)supportsAnimation;
- (short)type;
- (bool)usingDepth;

@end
