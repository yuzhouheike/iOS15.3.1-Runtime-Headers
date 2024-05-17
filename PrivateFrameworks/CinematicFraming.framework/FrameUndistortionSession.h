/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface FrameUndistortionSession : NSObject <FramingSpaceManager> {
    float  _additionalCameraRotation;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*normalizedOutputToSensorScalingCoefs; 
    }  _calibrationParameters;
    int  _cameraOrientation;
    <MTLCommandQueue> * _commandQueue;
    struct __CVMetalTextureCache { } * _cvMetalTextureCacheRef;
    void _gravity;
    <MTLLibrary> * _library;
    <MTLDevice> * _metalDevice;
    int  _numCCWRotationsFromInputToFramingSpace;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    <MTLComputePipelineState> * _pipelineComputeStates;
}

@property (nonatomic, readonly) float additionalCameraRotation;
@property (nonatomic, readonly) struct { float x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; } calibrationParams;
@property (nonatomic) int cameraOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } defaultFramingSpaceViewport;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } framingSpaceBounds;
@property (nonatomic, readonly) void gravity;
@property (nonatomic, readonly) float maxWidth;
@property (nonatomic, readonly) int numCCWRotationsFromInputToFramingSpace;
@property (nonatomic) struct { int x1; int x2; } outputDimensions;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)_cachedTexturesFromPixelBuffer:(struct __CVBuffer { }*)arg1 isOptimized:(bool)arg2 textures:(struct { unsigned int x1; id x2[2]; }*)arg3;
- (id)_compileComputeShader:(id)arg1 pixelFormat:(unsigned long long)arg2;
- (int)_compileShaders;
- (int)_computeNumberOfCCWRotationsFromInputToFramingSpaceForOrientation:(int)arg1;
- (int)_createComputePipelinesForShaders:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2 outputAspectRatioInDeviceOrientation:(float)arg3;
- (float)_getHeightForWidth:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (int)_getTransformShaderParameters:(unsigned long long)arg1 isLuma:(bool)arg2 pixelRatio:(unsigned int*)arg3 pipelineIndexToUse:(int*)arg4;
- (float)_getWidthForHeight:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setShaderParametersForRotationNormalizedDisplayRect:(void *)arg1 gidToNormalizedOutput:(void *)arg2 calibrationParameters:(void *)arg3 commandEncoder:(void *)arg4; // needs 4 arg types, found 3: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, struct { float x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; }, id
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calibrationParameters:(struct { float x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })arg2;
- (float)additionalCameraRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustDisplayRectToFitInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { float x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })calibrationParams;
- (int)cameraOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeNewCoordinatesInOrientation:(int)arg1 forViewportInCurrentOrientation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFramingSpaceViewport;
- (void)finish;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })framingSpaceBounds;
- (float)getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2;
- (float)getHeightForWidth:(float)arg1;
- (float)getWidthForHeight:(float)arg1;
- (void)gravity;
- (id)init;
- (void)initializeMetal;
- (float)maxWidth;
- (int)numCCWRotationsFromInputToFramingSpace;
- (float)outputAspectRatioInDeviceOrientation;
- (struct { int x1; int x2; })outputDimensions;
- (int)processBuffer:(struct __CVBuffer { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })projectRectInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)registerAdditionalCameraRotation:(float)arg1;
- (void)registerCalibrationData:(id)arg1;
- (void)registerGravityX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (void)setCameraOrientation:(int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })warpRectInInputImageCoordinatesToFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
