/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    float  _SNR;
    float  _accelStandardDeviation;
    int  _activeDeviceMask;
    bool  _afDriverShortOccurred;
    float  _afPowerConsumption;
    int  _alsLuxLevel;
    unsigned int  _apsMode;
    NSDictionary * _apsSubjectDistance;
    unsigned int  _auxiliaryImagesSize;
    bool  _binned;
    unsigned int  _bitDepth;
    bool  _burst;
    unsigned int  _cameraPosture;
    unsigned long long  _captureFlags;
    int  _captureType;
    NSString * _clientApplicationID;
    int  _clientRequestedQualityPrioritization;
    bool  _deferred;
    int  _deliveredDimensionHeight;
    int  _deliveredDimensionWidth;
    bool  _depthEnabled;
    int  _devicePosition;
    int  _deviceType;
    unsigned int  _dngFileSize;
    float  _effectiveIntegrationTime;
    float  _exposureDuration;
    bool  _fastCapturePrioritizationEnabled;
    float  _flashBrightnessRatio;
    NSDictionary * _focusingMethod;
    int  _formatDimensionHeight;
    int  _formatDimensionWidth;
    int  _formatMaxFrameRate;
    bool  _geometricDistortionCorrectionEnabled;
    NSString * _geometricDistortionCorrectionSource;
    int  _greenGhostMitigationBrightLightIsBrightScene;
    int  _greenGhostMitigationBrightLightROIIsComputed;
    int  _greenGhostMitigationLowLightExceedsMaxMaskAverage;
    float  _greenGhostMitigationLowLightMaskAverage;
    int  _greenGhostMitigationLowLightSkipRepair;
    int  _greenGhostMitigationLowLightTripodMode;
    float  _gyroStandardDeviation;
    bool  _highQualityPhotoWithVideoFormatSupported;
    int  _imageExifOrientation;
    int  _intelligentDistortionCorrectionCorrectionType;
    int  _intelligentDistortionCorrectionGainMapProcessingStatusCode;
    int  _intelligentDistortionCorrectionStatusCode;
    float  _iso;
    int  _ispMotionHighPassFilterConvergenceFlags;
    float  _largestFaceHeight;
    NSDictionary * _leaderFollowerAutoFocusData;
    float  _lensPosition;
    bool  _livePhotoEnabled;
    int  _luxLevel;
    float  _maxAFTrackingError;
    float  _maxSphereTrackingError;
    float  _minDistanceFromSphereEndStop;
    float  _normalizedSNR;
    int  _numberOfFaces;
    int  _numberOfFacesAtCenter;
    int  _numberOfFacesAtEdge;
    int  _numberOfFacesWithVisionFaceDetection;
    NSDictionary * _oisRecenteringLoggingData;
    unsigned int  _outputFileType;
    unsigned int  _photoFileSize;
    bool  _photoFormat;
    unsigned int  _pixelFormat;
    NSString * _portType;
    NSString * _portraitEffectStatus;
    bool  _portraitRequested;
    NSDictionary * _practicalFocalLength;
    int  _processingDuration;
    unsigned int  _processingFlags;
    int  _qualityPrioritization;
    unsigned long long  _sceneFlags;
    int  _semanticSceneType;
    bool  _semanticStyleRenderingSupported;
    float  _semanticStyleToneBias;
    float  _semanticStyleWarmthBias;
    int  _sensorTemperature;
    int  _shutterLag;
    float  _smallestFaceHeight;
    NSString * _sphereMode;
    float  _spherePowerConsumption;
    float  _stdAFTrackingError;
    float  _stdSphereTrackingError;
    unsigned int  _stfStillAnalyticsVersion;
    bool  _stfStillApplied;
    int  _stfStillCorrectionStrength;
    bool  _stfStillSupported;
    int  _streamingTime;
    unsigned int  _thumbnailImageSize;
    bool  _timeLapse;
    NSDictionary * _timeOfFlightAssistedAutoFocusEstimatorData;
    NSDictionary * _timeOfFlightFlickerDetectionData;
    unsigned int  _timeSinceLastCaptureInSession;
    float  _uiZoom;
    float  _zoom;
}

@property (nonatomic) float SNR;
@property (nonatomic) float accelStandardDeviation;
@property (nonatomic) int activeDeviceMask;
@property (nonatomic) bool afDriverShortOccurred;
@property (nonatomic) float afPowerConsumption;
@property (nonatomic) int alsLuxLevel;
@property (nonatomic) unsigned int apsMode;
@property (nonatomic, retain) NSDictionary *apsSubjectDistance;
@property (nonatomic) unsigned int auxiliaryImagesSize;
@property (nonatomic) bool binned;
@property (nonatomic) unsigned int bitDepth;
@property (nonatomic) bool burst;
@property (nonatomic) unsigned int cameraPosture;
@property (nonatomic) unsigned long long captureFlags;
@property (nonatomic) int captureType;
@property (nonatomic, copy) NSString *clientApplicationID;
@property (nonatomic) int clientRequestedQualityPrioritization;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferred;
@property (nonatomic) int deliveredDimensionHeight;
@property (nonatomic) int deliveredDimensionWidth;
@property (nonatomic) bool depthEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition;
@property (nonatomic) int deviceType;
@property (nonatomic) unsigned int dngFileSize;
@property (nonatomic) float effectiveIntegrationTime;
@property (nonatomic) float exposureDuration;
@property (nonatomic) bool fastCapturePrioritizationEnabled;
@property (nonatomic) float flashBrightnessRatio;
@property (nonatomic, retain) NSDictionary *focusingMethod;
@property (nonatomic) int formatDimensionHeight;
@property (nonatomic) int formatDimensionWidth;
@property (nonatomic) int formatMaxFrameRate;
@property (nonatomic) bool geometricDistortionCorrectionEnabled;
@property (nonatomic, retain) NSString *geometricDistortionCorrectionSource;
@property (nonatomic) int greenGhostMitigationBrightLightIsBrightScene;
@property (nonatomic) int greenGhostMitigationBrightLightROIIsComputed;
@property (nonatomic) int greenGhostMitigationLowLightExceedsMaxMaskAverage;
@property (nonatomic) float greenGhostMitigationLowLightMaskAverage;
@property (nonatomic) int greenGhostMitigationLowLightSkipRepair;
@property (nonatomic) int greenGhostMitigationLowLightTripodMode;
@property (nonatomic) float gyroStandardDeviation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highQualityPhotoWithVideoFormatSupported;
@property (nonatomic) int imageExifOrientation;
@property (nonatomic) int intelligentDistortionCorrectionCorrectionType;
@property (nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode;
@property (nonatomic) int intelligentDistortionCorrectionStatusCode;
@property (nonatomic) float iso;
@property (nonatomic) int ispMotionHighPassFilterConvergenceFlags;
@property (nonatomic) float largestFaceHeight;
@property (nonatomic, retain) NSDictionary *leaderFollowerAutoFocusData;
@property (nonatomic) float lensPosition;
@property (nonatomic) bool livePhotoEnabled;
@property (nonatomic) int luxLevel;
@property (nonatomic) float maxAFTrackingError;
@property (nonatomic) float maxSphereTrackingError;
@property (nonatomic) float minDistanceFromSphereEndStop;
@property (nonatomic) float normalizedSNR;
@property (nonatomic) int numberOfFaces;
@property (nonatomic) int numberOfFacesAtCenter;
@property (nonatomic) int numberOfFacesAtEdge;
@property (nonatomic) int numberOfFacesWithVisionFaceDetection;
@property (nonatomic, retain) NSDictionary *oisRecenteringLoggingData;
@property (nonatomic) unsigned int outputFileType;
@property (nonatomic) unsigned int photoFileSize;
@property (nonatomic) bool photoFormat;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic, retain) NSString *portType;
@property (nonatomic, retain) NSString *portraitEffectStatus;
@property (nonatomic) bool portraitRequested;
@property (nonatomic, retain) NSDictionary *practicalFocalLength;
@property (nonatomic) int processingDuration;
@property (nonatomic) unsigned int processingFlags;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) unsigned long long sceneFlags;
@property (nonatomic) int semanticSceneType;
@property (nonatomic) bool semanticStyleRenderingSupported;
@property (nonatomic) float semanticStyleToneBias;
@property (nonatomic) float semanticStyleWarmthBias;
@property (nonatomic) int sensorTemperature;
@property (nonatomic) int shutterLag;
@property (nonatomic) float smallestFaceHeight;
@property (nonatomic, retain) NSString *sphereMode;
@property (nonatomic) float spherePowerConsumption;
@property (nonatomic) float stdAFTrackingError;
@property (nonatomic) float stdSphereTrackingError;
@property (nonatomic) unsigned int stfStillAnalyticsVersion;
@property (nonatomic) bool stfStillApplied;
@property (nonatomic) int stfStillCorrectionStrength;
@property (nonatomic) bool stfStillSupported;
@property (nonatomic) int streamingTime;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int thumbnailImageSize;
@property (nonatomic) bool timeLapse;
@property (nonatomic, retain) NSDictionary *timeOfFlightAssistedAutoFocusEstimatorData;
@property (nonatomic, retain) NSDictionary *timeOfFlightFlickerDetectionData;
@property (nonatomic) unsigned int timeSinceLastCaptureInSession;
@property (nonatomic) float uiZoom;
@property (nonatomic) float zoom;

- (float)SNR;
- (float)accelStandardDeviation;
- (int)activeDeviceMask;
- (bool)afDriverShortOccurred;
- (float)afPowerConsumption;
- (int)alsLuxLevel;
- (unsigned int)apsMode;
- (id)apsSubjectDistance;
- (unsigned int)auxiliaryImagesSize;
- (bool)binned;
- (unsigned int)bitDepth;
- (bool)burst;
- (unsigned int)cameraPosture;
- (unsigned long long)captureFlags;
- (int)captureType;
- (id)clientApplicationID;
- (int)clientRequestedQualityPrioritization;
- (void)dealloc;
- (bool)deferred;
- (int)deliveredDimensionHeight;
- (int)deliveredDimensionWidth;
- (bool)depthEnabled;
- (int)devicePosition;
- (int)deviceType;
- (unsigned int)dngFileSize;
- (float)effectiveIntegrationTime;
- (id)eventDictionary;
- (id)eventName;
- (float)exposureDuration;
- (bool)fastCapturePrioritizationEnabled;
- (float)flashBrightnessRatio;
- (id)focusingMethod;
- (int)formatDimensionHeight;
- (int)formatDimensionWidth;
- (int)formatMaxFrameRate;
- (bool)geometricDistortionCorrectionEnabled;
- (id)geometricDistortionCorrectionSource;
- (int)greenGhostMitigationBrightLightIsBrightScene;
- (int)greenGhostMitigationBrightLightROIIsComputed;
- (int)greenGhostMitigationLowLightExceedsMaxMaskAverage;
- (float)greenGhostMitigationLowLightMaskAverage;
- (int)greenGhostMitigationLowLightSkipRepair;
- (int)greenGhostMitigationLowLightTripodMode;
- (float)gyroStandardDeviation;
- (bool)highQualityPhotoWithVideoFormatSupported;
- (int)imageExifOrientation;
- (id)init;
- (int)intelligentDistortionCorrectionCorrectionType;
- (int)intelligentDistortionCorrectionGainMapProcessingStatusCode;
- (int)intelligentDistortionCorrectionStatusCode;
- (float)iso;
- (int)ispMotionHighPassFilterConvergenceFlags;
- (float)largestFaceHeight;
- (id)leaderFollowerAutoFocusData;
- (float)lensPosition;
- (bool)livePhotoEnabled;
- (int)luxLevel;
- (float)maxAFTrackingError;
- (float)maxSphereTrackingError;
- (float)minDistanceFromSphereEndStop;
- (float)normalizedSNR;
- (int)numberOfFaces;
- (int)numberOfFacesAtCenter;
- (int)numberOfFacesAtEdge;
- (int)numberOfFacesWithVisionFaceDetection;
- (id)oisRecenteringLoggingData;
- (unsigned int)outputFileType;
- (unsigned int)photoFileSize;
- (bool)photoFormat;
- (unsigned int)pixelFormat;
- (id)portType;
- (id)portraitEffectStatus;
- (bool)portraitRequested;
- (id)practicalFocalLength;
- (int)processingDuration;
- (unsigned int)processingFlags;
- (int)qualityPrioritization;
- (void)reset;
- (unsigned long long)sceneFlags;
- (int)semanticSceneType;
- (bool)semanticStyleRenderingSupported;
- (float)semanticStyleToneBias;
- (float)semanticStyleWarmthBias;
- (int)sensorTemperature;
- (void)setAccelStandardDeviation:(float)arg1;
- (void)setActiveDeviceMask:(int)arg1;
- (void)setAfDriverShortOccurred:(bool)arg1;
- (void)setAfPowerConsumption:(float)arg1;
- (void)setAlsLuxLevel:(int)arg1;
- (void)setApsMode:(unsigned int)arg1;
- (void)setApsSubjectDistance:(id)arg1;
- (void)setAuxiliaryImagesSize:(unsigned int)arg1;
- (void)setBinned:(bool)arg1;
- (void)setBitDepth:(unsigned int)arg1;
- (void)setBurst:(bool)arg1;
- (void)setCameraPosture:(unsigned int)arg1;
- (void)setCaptureFlags:(unsigned long long)arg1;
- (void)setCaptureType:(int)arg1;
- (void)setClientApplicationID:(id)arg1;
- (void)setClientRequestedQualityPrioritization:(int)arg1;
- (void)setDeferred:(bool)arg1;
- (void)setDeliveredDimensionHeight:(int)arg1;
- (void)setDeliveredDimensionWidth:(int)arg1;
- (void)setDepthEnabled:(bool)arg1;
- (void)setDevicePosition:(int)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setDngFileSize:(unsigned int)arg1;
- (void)setEffectiveIntegrationTime:(float)arg1;
- (void)setExposureDuration:(float)arg1;
- (void)setFastCapturePrioritizationEnabled:(bool)arg1;
- (void)setFlashBrightnessRatio:(float)arg1;
- (void)setFocusingMethod:(id)arg1;
- (void)setFormatDimensionHeight:(int)arg1;
- (void)setFormatDimensionWidth:(int)arg1;
- (void)setFormatMaxFrameRate:(int)arg1;
- (void)setGeometricDistortionCorrectionEnabled:(bool)arg1;
- (void)setGeometricDistortionCorrectionSource:(id)arg1;
- (void)setGreenGhostMitigationBrightLightIsBrightScene:(int)arg1;
- (void)setGreenGhostMitigationBrightLightROIIsComputed:(int)arg1;
- (void)setGreenGhostMitigationLowLightExceedsMaxMaskAverage:(int)arg1;
- (void)setGreenGhostMitigationLowLightMaskAverage:(float)arg1;
- (void)setGreenGhostMitigationLowLightSkipRepair:(int)arg1;
- (void)setGreenGhostMitigationLowLightTripodMode:(int)arg1;
- (void)setGyroStandardDeviation:(float)arg1;
- (void)setHighQualityPhotoWithVideoFormatSupported:(bool)arg1;
- (void)setImageExifOrientation:(int)arg1;
- (void)setIntelligentDistortionCorrectionCorrectionType:(int)arg1;
- (void)setIntelligentDistortionCorrectionGainMapProcessingStatusCode:(int)arg1;
- (void)setIntelligentDistortionCorrectionStatusCode:(int)arg1;
- (void)setIso:(float)arg1;
- (void)setIspMotionHighPassFilterConvergenceFlags:(int)arg1;
- (void)setLargestFaceHeight:(float)arg1;
- (void)setLeaderFollowerAutoFocusData:(id)arg1;
- (void)setLensPosition:(float)arg1;
- (void)setLivePhotoEnabled:(bool)arg1;
- (void)setLuxLevel:(int)arg1;
- (void)setMaxAFTrackingError:(float)arg1;
- (void)setMaxSphereTrackingError:(float)arg1;
- (void)setMinDistanceFromSphereEndStop:(float)arg1;
- (void)setNormalizedSNR:(float)arg1;
- (void)setNumberOfFaces:(int)arg1;
- (void)setNumberOfFacesAtCenter:(int)arg1;
- (void)setNumberOfFacesAtEdge:(int)arg1;
- (void)setNumberOfFacesWithVisionFaceDetection:(int)arg1;
- (void)setOisRecenteringLoggingData:(id)arg1;
- (void)setOutputFileType:(unsigned int)arg1;
- (void)setPhotoFileSize:(unsigned int)arg1;
- (void)setPhotoFormat:(bool)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPortType:(id)arg1;
- (void)setPortraitEffectStatus:(id)arg1;
- (void)setPortraitRequested:(bool)arg1;
- (void)setPracticalFocalLength:(id)arg1;
- (void)setProcessingDuration:(int)arg1;
- (void)setProcessingFlags:(unsigned int)arg1;
- (void)setQualityPrioritization:(int)arg1;
- (void)setSNR:(float)arg1;
- (void)setSceneFlags:(unsigned long long)arg1;
- (void)setSemanticSceneType:(int)arg1;
- (void)setSemanticStyleRenderingSupported:(bool)arg1;
- (void)setSemanticStyleToneBias:(float)arg1;
- (void)setSemanticStyleWarmthBias:(float)arg1;
- (void)setSensorTemperature:(int)arg1;
- (void)setShutterLag:(int)arg1;
- (void)setSmallestFaceHeight:(float)arg1;
- (void)setSphereMode:(id)arg1;
- (void)setSpherePowerConsumption:(float)arg1;
- (void)setStdAFTrackingError:(float)arg1;
- (void)setStdSphereTrackingError:(float)arg1;
- (void)setStfStillAnalyticsVersion:(unsigned int)arg1;
- (void)setStfStillApplied:(bool)arg1;
- (void)setStfStillCorrectionStrength:(int)arg1;
- (void)setStfStillSupported:(bool)arg1;
- (void)setStreamingTime:(int)arg1;
- (void)setThumbnailImageSize:(unsigned int)arg1;
- (void)setTimeLapse:(bool)arg1;
- (void)setTimeOfFlightAssistedAutoFocusEstimatorData:(id)arg1;
- (void)setTimeOfFlightFlickerDetectionData:(id)arg1;
- (void)setTimeSinceLastCaptureInSession:(unsigned int)arg1;
- (void)setUiZoom:(float)arg1;
- (void)setZoom:(float)arg1;
- (int)shutterLag;
- (float)smallestFaceHeight;
- (id)sphereMode;
- (float)spherePowerConsumption;
- (float)stdAFTrackingError;
- (float)stdSphereTrackingError;
- (unsigned int)stfStillAnalyticsVersion;
- (bool)stfStillApplied;
- (int)stfStillCorrectionStrength;
- (bool)stfStillSupported;
- (int)streamingTime;
- (unsigned int)thumbnailImageSize;
- (bool)timeLapse;
- (id)timeOfFlightAssistedAutoFocusEstimatorData;
- (id)timeOfFlightFlickerDetectionData;
- (unsigned int)timeSinceLastCaptureInSession;
- (float)uiZoom;
- (float)zoom;

@end
