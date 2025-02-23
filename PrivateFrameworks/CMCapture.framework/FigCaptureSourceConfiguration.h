/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {
    bool  _applyMaxExposureDurationFrameworkOverrideWhenAvailable;
    bool  _backgroundBlurEnabled;
    bool  _backgroundBlurSupported;
    int  _cinematicFramingControlMode;
    bool  _cinematicFramingEnabled;
    bool  _cinematicFramingSupported;
    bool  _clientOSVersionSupportsDecoupledIO;
    int  _colorSpace;
    bool  _depthDataDeliveryEnabled;
    FigCaptureSourceDepthDataFormat * _depthDataFormat;
    float  _depthDataMaxFrameRate;
    NSDictionary * _faceDetectionConfiguration;
    bool  _geometricDistortionCorrectionEnabled;
    bool  _hasSetVideoZoomFactorOnCaptureSource;
    bool  _highlightRecoveryEnabled;
    int  _imageControlMode;
    bool  _lowLightVideoCaptureEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationClientOverride;
    float  _maxFrameRateClientOverride;
    float  _maxGainClientOverride;
    bool  _nonDestructiveCropEnabled;
    FigCaptureSourceVideoFormat * _requiredFormat;
    float  _requiredMaxFrameRate;
    float  _requiredMinFrameRate;
    bool  _sensorHDREnabled;
    struct OpaqueFigCaptureSource { } * _source;
    NSDictionary * _sourceAttributes;
    NSString * _sourceID;
    int  _sourceType;
    bool  _spatialOverCaptureEnabled;
    bool  _variableFrameRateVideoCaptureEnabled;
    float  _videoZoomFactor;
    float  _videoZoomRampAcceleration;
}

@property (nonatomic) bool applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property (nonatomic) bool backgroundBlurEnabled;
@property (getter=isBackgroundBlurSupported, nonatomic) bool backgroundBlurSupported;
@property (readonly) bool bravoShiftMitigationEnabled;
@property (nonatomic) int cinematicFramingControlMode;
@property (nonatomic) bool cinematicFramingEnabled;
@property (getter=isCinematicFramingSupported, nonatomic) bool cinematicFramingSupported;
@property (nonatomic) bool clientOSVersionSupportsDecoupledIO;
@property (nonatomic) int colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic, retain) FigCaptureSourceDepthDataFormat *depthDataFormat;
@property (nonatomic) float depthDataMaxFrameRate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *faceDetectionConfiguration;
@property (nonatomic) bool geometricDistortionCorrectionEnabled;
@property (nonatomic) bool hasSetVideoZoomFactorOnCaptureSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightRecoveryEnabled;
@property (nonatomic) int imageControlMode;
@property (nonatomic) bool lowLightVideoCaptureEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDurationClientOverride;
@property (nonatomic) float maxFrameRateClientOverride;
@property (nonatomic) float maxGainClientOverride;
@property (nonatomic) bool nonDestructiveCropEnabled;
@property (nonatomic, retain) FigCaptureSourceVideoFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) bool sensorHDREnabled;
@property (readonly) bool smartCameraEnabled;
@property (nonatomic, readonly) struct OpaqueFigCaptureSource { }*source;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, readonly) int sourcePosition;
@property (nonatomic, readonly) int sourceType;
@property (nonatomic) bool spatialOverCaptureEnabled;
@property (readonly) Class superclass;
@property (nonatomic) bool variableFrameRateVideoCaptureEnabled;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration;

+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceDeviceType:(int)arg1;
+ (id)stringForSourcePosition:(int)arg1;
+ (id)stringForSourceType:(int)arg1;

- (bool)applyMaxExposureDurationFrameworkOverrideWhenAvailable;
- (bool)backgroundBlurEnabled;
- (bool)bravoShiftMitigationEnabled;
- (int)cinematicFramingControlMode;
- (bool)cinematicFramingEnabled;
- (bool)clientOSVersionSupportsDecoupledIO;
- (int)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (id)depthDataFormat;
- (float)depthDataMaxFrameRate;
- (id)description;
- (id)faceDetectionConfiguration;
- (bool)geometricDistortionCorrectionEnabled;
- (bool)hasSetVideoZoomFactorOnCaptureSource;
- (bool)highlightRecoveryEnabled;
- (int)imageControlMode;
- (id)initWithSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBackgroundBlurSupported;
- (bool)isCinematicFramingSupported;
- (bool)isEqual:(id)arg1;
- (bool)lowLightVideoCaptureEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationClientOverride;
- (float)maxFrameRateClientOverride;
- (float)maxGainClientOverride;
- (bool)nonDestructiveCropEnabled;
- (id)requiredFormat;
- (float)requiredMaxFrameRate;
- (float)requiredMinFrameRate;
- (bool)sensorHDREnabled;
- (void)setApplyMaxExposureDurationFrameworkOverrideWhenAvailable:(bool)arg1;
- (void)setBackgroundBlurEnabled:(bool)arg1;
- (void)setBackgroundBlurSupported:(bool)arg1;
- (void)setCinematicFramingControlMode:(int)arg1;
- (void)setCinematicFramingEnabled:(bool)arg1;
- (void)setCinematicFramingSupported:(bool)arg1;
- (void)setClientOSVersionSupportsDecoupledIO:(bool)arg1;
- (void)setColorSpace:(int)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDepthDataFormat:(id)arg1;
- (void)setDepthDataMaxFrameRate:(float)arg1;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (void)setGeometricDistortionCorrectionEnabled:(bool)arg1;
- (void)setHasSetVideoZoomFactorOnCaptureSource:(bool)arg1;
- (void)setHighlightRecoveryEnabled:(bool)arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setLowLightVideoCaptureEnabled:(bool)arg1;
- (void)setMaxExposureDurationClientOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxFrameRateClientOverride:(float)arg1;
- (void)setMaxGainClientOverride:(float)arg1;
- (void)setNonDestructiveCropEnabled:(bool)arg1;
- (void)setRequiredFormat:(id)arg1;
- (void)setRequiredMaxFrameRate:(float)arg1;
- (void)setRequiredMinFrameRate:(float)arg1;
- (void)setSensorHDREnabled:(bool)arg1;
- (void)setSourceID:(id)arg1;
- (void)setSpatialOverCaptureEnabled:(bool)arg1;
- (void)setVariableFrameRateVideoCaptureEnabled:(bool)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (bool)smartCameraEnabled;
- (struct OpaqueFigCaptureSource { }*)source;
- (int)sourceDeviceType;
- (id)sourceID;
- (int)sourcePosition;
- (int)sourceType;
- (bool)spatialOverCaptureEnabled;
- (bool)variableFrameRateVideoCaptureEnabled;
- (float)videoZoomFactor;
- (float)videoZoomRampAcceleration;

@end
