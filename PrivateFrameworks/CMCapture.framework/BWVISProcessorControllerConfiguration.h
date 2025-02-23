/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWVISProcessorControllerConfiguration : NSObject {
    bool  _attachEstimatedMotionVector;
    bool  _attachStabilizedOutputCenterQuaternion;
    bool  _attachStabilizedTrajectoryHomography;
    bool  _blurBorderPixels;
    NSDictionary * _cameraInfoByPortType;
    unsigned int  _cinematicLookAheadFrameCount;
    float  _cinematicLookAheadTime;
    NSArray * _distortionCompensationEnabledPortTypes;
    NSObject<OS_dispatch_semaphore> * _emitSampleBufferSemaphore;
    unsigned int  _extendedOutputRowsToFill;
    bool  _frameRateConversionEnabled;
    int  _gpuPriority;
    NSDictionary * _inputPixelBufferAttributes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _livePhotoCleanOutputRect;
    float  _minDistanceForBravoParallaxShift;
    bool  _onlyGenerateTransformsParameters;
    BWPixelBufferPool * _outputDepthPixelBufferPool;
    NSDictionary * _outputPixelBufferAttributes;
    BWPixelBufferPool * _outputPixelBufferPool;
    bool  _p3ToBT2020ConversionEnabled;
    NSDictionary * _sensorIDDict;
    int  _smoothingMethod;
    bool  _sphereCorrectionEnabled;
    bool  _sphereVideoEnabled;
    int  _transformPlatform;
    bool  _useISPMotionData;
    NSDictionary * _videoSTFParameters;
    bool  _videoStabilizationDisabled;
}

@property (nonatomic) bool attachEstimatedMotionVector;
@property (nonatomic) bool attachStabilizedOutputCenterQuaternion;
@property (nonatomic) bool attachStabilizedTrajectoryHomography;
@property (nonatomic) bool blurBorderPixels;
@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (nonatomic) unsigned int cinematicLookAheadFrameCount;
@property (nonatomic) float cinematicLookAheadTime;
@property (nonatomic, retain) NSArray *distortionCompensationEnabledPortTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property (nonatomic) unsigned int extendedOutputRowsToFill;
@property (nonatomic) bool frameRateConversionEnabled;
@property (nonatomic) int gpuPriority;
@property (nonatomic, retain) NSDictionary *inputPixelBufferAttributes;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } livePhotoCleanOutputRect;
@property (nonatomic) float minDistanceForBravoParallaxShift;
@property (nonatomic) bool onlyGenerateTransformsParameters;
@property (nonatomic, retain) BWPixelBufferPool *outputDepthPixelBufferPool;
@property (nonatomic, retain) NSDictionary *outputPixelBufferAttributes;
@property (nonatomic, retain) BWPixelBufferPool *outputPixelBufferPool;
@property (nonatomic) bool p3ToBT2020ConversionEnabled;
@property (nonatomic, retain) NSDictionary *sensorIDDict;
@property (nonatomic) int smoothingMethod;
@property (nonatomic) bool sphereCorrectionEnabled;
@property (nonatomic) bool sphereVideoEnabled;
@property (nonatomic) int transformPlatform;
@property (nonatomic) bool useISPMotionData;
@property (nonatomic, retain) NSDictionary *videoSTFParameters;
@property (nonatomic) bool videoStabilizationDisabled;

- (bool)attachEstimatedMotionVector;
- (bool)attachStabilizedOutputCenterQuaternion;
- (bool)attachStabilizedTrajectoryHomography;
- (bool)blurBorderPixels;
- (id)cameraInfoByPortType;
- (unsigned int)cinematicLookAheadFrameCount;
- (float)cinematicLookAheadTime;
- (void)dealloc;
- (id)distortionCompensationEnabledPortTypes;
- (id)emitSampleBufferSemaphore;
- (unsigned int)extendedOutputRowsToFill;
- (bool)frameRateConversionEnabled;
- (int)gpuPriority;
- (id)inputPixelBufferAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })livePhotoCleanOutputRect;
- (float)minDistanceForBravoParallaxShift;
- (bool)onlyGenerateTransformsParameters;
- (id)outputDepthPixelBufferPool;
- (id)outputPixelBufferAttributes;
- (id)outputPixelBufferPool;
- (bool)p3ToBT2020ConversionEnabled;
- (id)sensorIDDict;
- (void)setAttachEstimatedMotionVector:(bool)arg1;
- (void)setAttachStabilizedOutputCenterQuaternion:(bool)arg1;
- (void)setAttachStabilizedTrajectoryHomography:(bool)arg1;
- (void)setBlurBorderPixels:(bool)arg1;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setCinematicLookAheadFrameCount:(unsigned int)arg1;
- (void)setCinematicLookAheadTime:(float)arg1;
- (void)setDistortionCompensationEnabledPortTypes:(id)arg1;
- (void)setEmitSampleBufferSemaphore:(id)arg1;
- (void)setExtendedOutputRowsToFill:(unsigned int)arg1;
- (void)setFrameRateConversionEnabled:(bool)arg1;
- (void)setGpuPriority:(int)arg1;
- (void)setInputPixelBufferAttributes:(id)arg1;
- (void)setLivePhotoCleanOutputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMinDistanceForBravoParallaxShift:(float)arg1;
- (void)setOnlyGenerateTransformsParameters:(bool)arg1;
- (void)setOutputDepthPixelBufferPool:(id)arg1;
- (void)setOutputPixelBufferAttributes:(id)arg1;
- (void)setOutputPixelBufferPool:(id)arg1;
- (void)setP3ToBT2020ConversionEnabled:(bool)arg1;
- (void)setSensorIDDict:(id)arg1;
- (void)setSmoothingMethod:(int)arg1;
- (void)setSphereCorrectionEnabled:(bool)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setTransformPlatform:(int)arg1;
- (void)setUseISPMotionData:(bool)arg1;
- (void)setVideoSTFParameters:(id)arg1;
- (void)setVideoStabilizationDisabled:(bool)arg1;
- (int)smoothingMethod;
- (bool)sphereCorrectionEnabled;
- (bool)sphereVideoEnabled;
- (int)transformPlatform;
- (bool)useISPMotionData;
- (id)videoSTFParameters;
- (bool)videoStabilizationDisabled;

@end
