/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWAdaptiveCorrectionPreviewRegistration : NSObject {
    int (* _computeVerticalBaselineTransformFunction;
    struct CalModel { 
        double focalLengthPix[2]; 
        double opticalCenterX[2]; 
        double opticalCenterY[2]; 
        double extrinRotRefefenceToAuxiliary[12]; 
    }  _correctedCalibration;
    struct OpaqueVTImageRotationSession { } * _cropAndScaleSession;
    void * _disparityLib;
    int (* _fullCorrectionFunction;
    double * _keypointDepths;
    FigRegToolboxGPU * _keypointDetector;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; } * _keypointList;
    double * _keypointWeights;
    FigMetalContext * _metalContext;
    BWPixelBufferPool * _registrationPool;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
        } narrowerToWiderTransforms[3]; 
    }  _registrationTransform;
    bool  _resourcesCleaned;
    int (* _rotateCalModelFunction;
    NSDictionary * _staticParametersByPortType;
    int (* _transformPointsWithMatrixFunction;
    double * _transposedKeypoints;
    BWAdaptiveCorrectionPreviewRegistrationTuningParameters * _tuningParameters;
    unsigned int  _validKeypointsCount;
    double * _validKeypointsInSensorResolution;
}

+ (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; })flattenNarrowerToWiderTransforms:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; })arg1 narrowerDimensions:(struct { int x1; int x2; })arg2 narrowerFinalCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atNarrowerToWiderCameraScale:(double)arg4 useYAnchorAtHeightCenter:(bool)arg5;
+ (void)initialize;

- (int)_computeOISCalibrationFromWiderMetadata:(id)arg1 narrowerMetadata:(id)arg2 calibrationOut:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg3;
- (int)_estimateDepthFromKeypointsUsingCalibration:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; })arg1 narrowerRawSensorResolution:(struct CGSize { double x1; double x2; })arg2 pixelSizeNarrowerInMillimeters:(double)arg3 pixelSizeWiderInMillimeters:(double)arg4 fundamentalMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 macroTransitionType:(int)arg6 totalZoomFactor:(float)arg7 consolidatedDepthsOut:(double*)arg8;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_fundamentalMatrixFromCalibration:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; })arg1 narrowerMetadata:(id)arg2 widerMetadata:(id)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_homographyAtDepth:(double)arg1 calibration:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; })arg2 narrowerMetadata:(id)arg3 widerMetadata:(id)arg4 pixelBufferDimensions:(struct { int x1; int x2; })arg5;
- (int)_loadAdaptiveCorrectionSymbols;
- (int)_updateCorrectedCalibrationUsingInitialOISCalibration:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; })arg1 macroTransitionType:(int)arg2;
- (int)allocateResourcesWithVideoFormat:(id)arg1 metalContext:(id)arg2;
- (void)cleanupResources;
- (int)computeAlignmentFromWiderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 narrowerSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 narrowerToWiderTransformsOut:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; }*)arg3;
- (void)dealloc;
- (id)initWithCameraInfoByPortType:(id)arg1;
- (int)registerWiderSampleBufferUsingADC:(struct opaqueCMSampleBuffer { }*)arg1 narrowerSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 narrowerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 macroTransitionType:(int)arg4 narrowerToWiderTransformsOut:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; }*)arg5;

@end
