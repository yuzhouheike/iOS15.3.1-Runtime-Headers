/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider> {
    bool  _allowHEIFPrewarming;
    bool  _alwaysAwaitInference;
    NSArray * _alwaysEncodedSemanticSegmentationMatteURNs;
    NSDictionary * _attachedMediaConfigurationByAttachedMediaKey;
    bool  _cameraSupportsFlash;
    FigCapturePixelConverter * _clientThumbnailPixelConverter;
    BWCMPhotoCompressionSession * _cmPhotoCompressionSession;
    unsigned long long  _dngBitDepth;
    BWDNGCompressionSession * _dngCompressionSession;
    bool  _heifForceCABAC;
    bool  _heifForceEmbedThumb;
    bool  _heifForceHEVC;
    float  _heifQualityOverride;
    unsigned long long  _heifThumbnailMaxPixelSize;
    int  _heifTileHeight;
    int  _heifTileWidth;
    bool  _heifUseTiling;
    BWInferenceEngine * _inferenceEngine;
    struct opaqueCMFormatDescription { } * _inferenceInputFormatDescription;
    NSDictionary * _inputColorInfo;
    FigCapturePixelConverter * _jpegPixelConverter;
    unsigned long long  _maxThreads;
    _Atomic bool  _opportunisticInferenceCompleted;
    int  _portraitRenderQuality;
    bool  _preparedInferenceEngine;
    NSObject<OS_dispatch_group> * _previewGenerationGroup;
    NSObject<OS_dispatch_queue> * _previewGenerationQueue;
    FigCapturePixelConverter * _previewPixelConverter;
    NSObject<OS_dispatch_queue> * _prewarmQueue;
    void * _prewarmQueueID;
    long long  _prewarmedSettingsID;
    bool  _prewarmingOngoing;
    FigCapturePixelConverter * _thumbnailPixelConverter;
    bool  _usesHighEncodingPriority;
    bool  _zeroShutterLagEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRectForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 metadata:(id)arg2;
+ (void)_updateMetadataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)initialize;

- (void)_addAuxImagesIfNeededForEncodingScheme:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 metadata:(id)arg3 stillImageSettings:(id)arg4 processingFlags:(unsigned int)arg5 embedThumbToCompressedImage:(bool)arg6;
- (int)_addCompressedThumbnailForEncodingScheme:(int)arg1 thumbnailSurface:(struct __IOSurface { }*)arg2 thumbnailSurfaceSize:(unsigned long long)arg3;
- (bool)_addDepthForEncodingScheme:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (bool)_addGainMapForEncodingScheme:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 outputWidth:(unsigned int)arg3 outputHeight:(unsigned int)arg4;
- (int)_addMetadataAttachmentsForEncodingScheme:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 requestedSettings:(id)arg3 captureType:(int)arg4;
- (bool)_addPortraitEffectsMatteForEncodingScheme:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 primaryOutputAspectRatio:(double)arg3;
- (void)_addQualityOptionsToDictionary:(id)arg1 codecType:(unsigned int)arg2 pixelBuffer:(struct __CVBuffer { }*)arg3 imageDimensions:(struct { int x1; int x2; })arg4 metadata:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 enableHEIFTiling:(bool)arg8 enableHEIFOrientation:(bool)arg9;
- (int)_addSemanticMatteToCompressionSession:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 attachedMediaKey:(id)arg3 auxImageType:(int)arg4 primaryOutputAspectRatio:(double)arg5 sourceCropRectKey:(id)arg6;
- (void)_addSemanticMattesForEncodingScheme:(int)arg1 semanticSegmentationMatteURNs:(id)arg2 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 primaryOutputAspectRatio:(double)arg4 settingsID:(long long)arg5;
- (int)_addThumbnailForEncodingScheme:(int)arg1 thumbnailPixelBuffer:(struct __CVBuffer { }*)arg2 metadata:(id)arg3 requestedStillImageCaptureSettings:(id)arg4 resolvedStillImageCaptureSettings:(id)arg5 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 codecType:(unsigned int)arg7 maxPixelSize:(unsigned long long)arg8;
- (int)_addValue:(id)arg1 toAuxiliaryImageProperties:(struct CGImageMetadata { }*)arg2 namespace:(struct __CFString { }*)arg3 prefix:(struct __CFString { }*)arg4 key:(struct __CFString { }*)arg5;
- (id)_arrayInColumnMajorOrderFrom3x3MatrixData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)_arrayInColumnMajorOrderFrom3x4MatrixData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct __IOSurface { }*)_closeContainerAndCopySurfaceForEncodingScheme:(int)arg1;
- (void)_closeContainerForEncodingScheme:(int)arg1;
- (unsigned int)_codecTypeForEncodingScheme:(int)arg1;
- (id)_compressionSessionForEncodingScheme:(int)arg1;
- (int)_containerFormatForEncodingScheme:(int)arg1;
- (int)_defaultJPEGIndexedQTableForPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(bool*)arg5;
- (id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned int)arg2;
- (int)_encodeDNGForEncodingScheme:(int)arg1 rawSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 dngDictionary:(id)arg3 requestedSettings:(id)arg4 captureType:(int)arg5 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 dngContainsDepthData:(bool)arg7 dngContainsSemanticSegmentationMattes:(bool)arg8;
- (int)_encodePhotoForEncodingScheme:(int)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 imageDimensions:(struct { int x1; int x2; })arg3 metadata:(id)arg4 thumbnailOptions:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 usePixelsOutsideCrop:(bool)arg9;
- (id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3;
- (int)_fileTypeForEncodingScheme:(int)arg1;
- (int)_generatePreviewForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 previewPixelBuffer:(struct __CVBuffer {}**)arg4;
- (void)_getAssetsSizeForEncodingScheme:(int)arg1 containerSizeOut:(unsigned long long*)arg2 thumbnailSizeOut:(unsigned long long*)arg3 auxiliaryImagesSizeOut:(unsigned long long*)arg4;
- (int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned int)arg1 sourceWidth:(int)arg2 sourceHeight:(int)arg3 destinationPixelFormat:(unsigned int)arg4;
- (bool)_isSupportedThumbnailCodecType:(unsigned int)arg1 forEncodingScheme:(int)arg2;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromGainMapSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_newMetadataAttachmentsForEncodingScheme:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 requestedSettings:(id)arg3 captureType:(int)arg4;
- (id)_newRawMetadataAttachmentsForEncodingScheme:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 dngDictionary:(id)arg3 requestedSettings:(id)arg4 captureType:(int)arg5 dngContainsDepthData:(bool)arg6 dngContainsSemanticSegmentationMattes:(bool)arg7;
- (void)_performInferenceWithBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_removeNonPropagatedAttachedMediaFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_resolveEncodingSchemeForCompressedPhotoWithLinDNGWithRequestedSettings:(id)arg1;
- (int)_resolveEncodingSchemeForRequestedSettings:(id)arg1;
- (int)_scaleInputPixelBuffer:(struct __CVBuffer { }*)arg1 toDimensions:(struct { int x1; int x2; })arg2 colorSpaceProperties:(int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(struct __CVBuffer {}**)arg7;
- (id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 codecType:(unsigned int)arg5 maxPixelSize:(unsigned long long)arg6;
- (id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (bool)cameraSupportsFlash;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 semanticDevelopmentVersion:(int)arg2 inferenceScheduler:(id)arg3 alwaysAwaitInference:(bool)arg4 portraitRenderQuality:(int)arg5 deferredPhotoProcessorEnabled:(bool)arg6 alwaysEncodedSemanticSegmentationMatteURNs:(id)arg7;
- (id)inputColorInfo;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)arg1;
- (void)setCameraSupportsFlash:(bool)arg1;
- (void)setInputColorInfo:(id)arg1;
- (void)setUsesHighEncodingPriority:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (bool)usesHighEncodingPriority;
- (bool)zeroShutterLagEnabled;

@end
