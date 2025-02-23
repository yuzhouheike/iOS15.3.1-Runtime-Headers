/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWCinematicFramingNode : BWNode {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    NSDictionary * _cameraInfoByPortType;
    unsigned int  _cinematicFramingControlMode;
    CinematicFramingSession * _cinematicFramingSession;
    NSString * _clientApplicationID;
    BWNodeInput * _detectionMetadataInput;
    BWNodeOutput * _detectionMetadataOutput;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    int  _horizontalSensorBinningFactor;
    int  _maxLossyCompressionLevel;
    unsigned int  _maxPeopleDetected;
    unsigned int  _minLuxLevelNeeded;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    unsigned int  _stillCaptureEnqueueIndex;
    struct { 
        struct __CVBuffer {} *pixelBuffer; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
    }  _stillCaptureQueue;
    bool  _stillImageCaptureEnabled;
    BWNodeInput * _stillImageInput;
    BWNodeOutput * _stillImageOutput;
    struct OpaqueVTPixelTransferSession { } * _stillImagePixelTransferSession;
    int  _verticalSensorBinningFactor;
    BWNodeInput * _videoCaptureInput;
    BWNodeOutput * _videoCaptureOutput;
}

@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (nonatomic, copy) NSString *clientApplicationID;
@property (nonatomic, readonly) BWNodeInput *detectionMetadataInput;
@property (nonatomic, readonly) BWNodeOutput *detectionMetadataOutput;
@property (nonatomic, readonly) BWNodeInput *stillImageInput;
@property (nonatomic, readonly) BWNodeOutput *stillImageOutput;
@property (nonatomic, readonly) BWNodeInput *videoCaptureInput;
@property (nonatomic, readonly) BWNodeOutput *videoCaptureOutput;

+ (void)initialize;

- (struct __CVBuffer { }*)_createMatchingPixelBufferFromSavedVideoBuffersWithTargetPts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_initCinematicFramingSession;
- (struct __CVBuffer { }*)_newStillImageOutputPixelBufferFromVideoPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)_reportCinematicFramingSessionCoreAnalyticsData;
- (void)_savePixelBufferForStillImageCaptureRequests:(struct __CVBuffer { }*)arg1 withPts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)_supportedInputPixelFormats;
- (id)_supportedOutputPixelFormats;
- (void)_updateOutputRequirements;
- (void)_updateSampleBufferMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned int)cinematicFramingControlMode;
- (id)clientApplicationID;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)detectionMetadataInput;
- (id)detectionMetadataOutput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 cameraInfoByPortType:(id)arg2 horizontalSensorBinningFactor:(int)arg3 verticalSensorBinningFactor:(int)arg4 stillImageCaptureEnabled:(bool)arg5 objectMetadataIdentifiers:(id)arg6 maxLossyCompressionLevel:(int)arg7;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setCinematicFramingControlMode:(unsigned int)arg1;
- (void)setClientApplicationID:(id)arg1;
- (id)stillImageInput;
- (id)stillImageOutput;
- (id)videoCaptureInput;
- (id)videoCaptureOutput;

@end
