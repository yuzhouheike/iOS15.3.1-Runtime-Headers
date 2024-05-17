/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCapturePhotoOutputInternal : NSObject {
    bool  EV0PhotoDeliverySupported;
    int  HDRSceneObserverCount;
    bool  appleProRAWEnabled;
    bool  appleProRAWSupported;
    bool  autoRedEyeReductionSupported;
    NSArray * availableLivePhotoVideoCodecTypes;
    NSArray * availablePhotoCodecTypes;
    NSArray * availablePhotoFileTypes;
    NSArray * availablePhotoPixelFormatTypes;
    NSArray * availableRawPhotoFileTypes;
    NSDictionary * availableRawPhotoPixelFormatTypes;
    NSArray * availableSemanticSegmentationTypes;
    NSObject<OS_dispatch_group> * beginEndIrisMovieCaptureHostTimeDispatchGroup;
    NSObject<OS_dispatch_queue> * beginEndIrisMovieCaptureHostTimeQueue;
    bool  cameraCalibrationDataDeliverySupported;
    bool  contentAwareDistortionCorrectionEnabled;
    bool  contentAwareDistortionCorrectionSupported;
    bool  deferredProcessingEnabled;
    bool  deferredProcessingSupported;
    bool  depthDataDeliveryEnabled;
    bool  depthDataDeliverySupported;
    bool  digitalFlashCaptureEnabled;
    NSDictionary * digitalFlashExposureTimes;
    int  digitalFlashExposureTimesObserverCount;
    long long  digitalFlashStatus;
    int  digitalFlashStatusObserverCount;
    bool  dualCameraDualPhotoDeliveryEnabled;
    bool  dualCameraDualPhotoDeliverySupported;
    NSArray * enabledSemanticSegmentationTypes;
    bool  fastCapturePrioritizationEnabled;
    bool  fastCapturePrioritizationSupported;
    bool  filterRenderingEnabled;
    int  flashSceneObserverCount;
    struct ct_green_tea_logger_s { } * greenTeaLogger;
    bool  highPhotoQualitySupported;
    bool  highResolutionCaptureEnabled;
    bool  imageOptimizationForOfflineVideoStabilizationSupported;
    bool  isFlashScene;
    bool  isHDRScene;
    bool  isStillImageStabilizationScene;
    long long  lastMomentSettingsUniqueID;
    long long  lastSettingsUniqueID;
    bool  lensStabilizationDuringBracketedCaptureSupported;
    bool  livePhotoAutoTrimmingEnabled;
    bool  livePhotoCaptureEnabled;
    bool  livePhotoCaptureSupported;
    bool  livePhotoCaptureSuspended;
    struct { 
        int width; 
        int height; 
    }  livePhotoMovieDimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  livePhotoMovieDuration;
    bool  livePhotoMovieProcessingSuspended;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  livePhotoMovieVideoFrameDuration;
    unsigned long long  maxBracketedCapturePhotoCount;
    long long  maxPhotoQualityPrioritization;
    bool  maxPhotoQualityPrioritizationHasBeenSetByClient;
    AVMomentCaptureSettings * momentCaptureInFlight;
    bool  movieRecordingEnabled;
    bool  movieRecordingSupported;
    NSMutableArray * movieRequests;
    struct { 
        int width; 
        int height; 
    }  optimizedImageDimensionsForOfflineStabilization;
    bool  optimizesImagesForOfflineVideoStabilization;
    NSMutableArray * photoRequests;
    AVCapturePhotoSettings * photoSettingsForSceneMonitoring;
    bool  portraitEffectsMatteDeliveryEnabled;
    bool  portraitEffectsMatteDeliverySupported;
    NSMutableArray * prepareRequests;
    bool  previewQualityAdjustedPhotoFilterRenderingEnabled;
    bool  previewQualityAdjustedPhotoFilterRenderingSupported;
    bool  processedPhotoZoomWithoutUpscalingSupported;
    struct OpaqueFigSimpleMutex { } * requestsLock;
    bool  resumeLivePhotoMovieCaptureAfterVideoCaptureEnds;
    NSObject<OS_dispatch_queue> * sceneDetectionObserversDispatchQueue;
    bool  semanticStyleRenderingEnabled;
    bool  semanticStyleRenderingSupported;
    NSString * sourceDeviceType;
    bool  spatialOverCaptureEnabled;
    bool  spatialOverCaptureSupported;
    int  stillImageStabilizationSceneObserverCount;
    bool  stillImageStabilizationSupported;
    NSArray * supportedDigitalFlashModes;
    NSArray * supportedFlashModes;
    NSArray * supportedHDRModes;
    float  timeLapseCaptureRate;
    bool  timeLapseCaptureRateNeedsUpdate;
    bool  videoCaptureEnabled;
    bool  videoCaptureSupported;
    bool  virtualDeviceConstituentPhotoDeliveryEnabled;
    bool  virtualDeviceConstituentPhotoDeliverySupported;
    bool  virtualDeviceFusionSupported;
    AVWeakReference * weakReference;
}

@end
