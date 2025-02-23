/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {
    bool  _RGBIRStereoFusionEnabled;
    unsigned int  _RGBIRStereoFusionMinDepthThresholdMM;
    float  _additionalVISOverscanWhenRecording;
    int  _autoImageControlMode;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    bool  _clientIsCameraOrDerivative;
    bool  _clockSynchronizationEnabled;
    bool  _configureForDigitalFlashSupport;
    bool  _configureForSIFRStillImageCaptureIfAvailable;
    bool  _configureForSpatialOverCaptureSupport;
    bool  _configureForZeroShutterLagSupport;
    bool  _coreMediaFaceTrackingEnabled;
    bool  _depthConversionEnabled;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    struct { 
        int width; 
        int height; 
    }  _depthDimensionsOverride;
    bool  _depthOutputEnabled;
    int  _depthType;
    bool  _enableStillImageSensorOverscanIfAvailable;
    bool  _forceCNRDisabled;
    bool  _fullGeometricDistortionCorrectionRequired;
    bool  _ispFaceTrackingEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationClientOverride;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationFrameworkOverride;
    NSArray * _metadataObjectConnectionConfigurations;
    bool  _midFrameSynchronizationEnabled;
    int  _motionAttachmentsSource;
    NSArray * _movieFileDetectedObjectMetadataConnectionConfigurations;
    int  _movieFileMaxLossyCompressionLevel;
    bool  _offlineVISEnabled;
    int  _originalVideoStabilizationTypeForOfflineVIS;
    float  _overCapturePercentage;
    FigPointCloudDataCaptureConnectionConfiguration * _pointCloudDataConnectionConfiguration;
    NSArray * _previewDerivedConnectionConfigurations;
    int  _previewMaxLossyCompressionLevel;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    int  _stillImageFocusPixelDataRetainedBufferCount;
    bool  _stillImageGeometricDistortionCorrectionEnabled;
    bool  _stillImageGeometricDistortionCorrectionExpansionCoversOverscan;
    bool  _stillImageLocalHistogramClippingDataMetadataEnabled;
    int  _stillImageMaxLossyCompressionLevel;
    int  _stillImageOutputRetainedBufferCountOverride;
    bool  _stillImageOutputSushiRawAttachmentOptionEnabled;
    int  _stillImageSashimiRawRetainedBufferCount;
    int  _stillImageSensorInterfaceRawRetainedBufferCount;
    bool  _streamingCameraCalibrationDataDeliveryEnabled;
    bool  _streamingForegroundSegmentationEnabled;
    bool  _streamingGeometricDistortionCorrectionEnabled;
    bool  _strictDepthModePreferred;
    NSArray * _videoCaptureConnectionConfigurations;
    int  _videoDataMaxLossyCompressionLevel;
    bool  _videoHDRImageStatisticsEnabled;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    bool  _videoSTFMetadataEnabled;
    int  _videoStabilizationType;
    NSArray * _visionDataConnectionConfigurations;
    bool  _zeroShutterLagEnabled;
}

- (void)dealloc;

@end
