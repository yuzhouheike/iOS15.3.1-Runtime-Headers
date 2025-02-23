/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureVideoPreviewLayer : CALayer {
    AVCaptureVideoPreviewLayerInternal * _internal;
}

@property (nonatomic) bool automaticallyAdjustsMirroring;
@property (nonatomic, readonly) AVCaptureConnection *connection;
@property (getter=isMirrored, nonatomic) bool mirrored;
@property (getter=isMirroringSupported, nonatomic, readonly) bool mirroringSupported;
@property (nonatomic) long long orientation;
@property (getter=isOrientationSupported, nonatomic, readonly) bool orientationSupported;
@property (getter=isPreviewing, nonatomic, readonly) bool previewing;
@property (nonatomic, retain) AVCaptureSession *session;
@property (copy) NSString *videoGravity;

+ (void)initialize;
+ (id)layerWithSession:(id)arg1;
+ (id)layerWithSessionWithNoConnection:(id)arg1;

- (bool)_automaticallyAdjustsMirroring;
- (bool)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_initWithSession:(id)arg1 makeConnection:(bool)arg2;
- (id)_input;
- (bool)_isMirrored;
- (long long)_orientation;
- (void)_setSensorAndEstimatedPreviewSizes;
- (bool)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(bool)arg2 exceptionReason:(id*)arg3;
- (void)_updateCaptureDeviceTransform;
- (void)_updateDepthDataDeliverySupported;
- (void)_updatePreviewTransforms;
- (void)_updateSemanticStyleRenderingSupported;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)automaticallyAdjustsMirroring;
- (void)bumpChangeSeed;
- (bool)canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })captureDeviceTransformForSensorSize:(struct CGSize { double x1; double x2; })arg1 previewSize:(struct CGSize { double x1; double x2; })arg2 sensorToPreviewVTScalingMode:(id)arg3;
- (void)centerSublayer:(long long)arg1;
- (int)changeSeed;
- (id)connection;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)didUpdatePreviewFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (unsigned int)imageQueueSlot;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (bool)isChromaNoiseReductionEnabled;
- (bool)isChromaNoiseReductionSupported;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isDepthDataDeliverySupported;
- (bool)isFilterRenderingEnabled;
- (bool)isMirrored;
- (bool)isMirroringSupported;
- (bool)isOrientationSupported;
- (bool)isPaused;
- (bool)isPreviewing;
- (bool)isSemanticStyleRenderingEnabled;
- (bool)isSemanticStyleRenderingSupported;
- (bool)isUnoptimizedFilterRenderingEnabled;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)orientation;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (double)previewRotationDegrees;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeConnection:(id)arg1;
- (id)semanticStyle;
- (id)session;
- (void)setAutomaticallyAdjustsMirroring:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCaptureDeviceTransformNeedsUpdate;
- (void)setChromaNoiseReductionEnabled:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSemanticStyle:(id)arg1 animated:(bool)arg2;
- (void)setSemanticStyleRenderingEnabled:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionWithNoConnection:(id)arg1;
- (void)setSinkID:(id)arg1;
- (void)setUnoptimizedFilterRenderingEnabled:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoPreviewFilters:(id)arg1;
- (id)sinkID;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (id)videoGravity;
- (id)videoPreviewFilters;
- (id)weakReference;

@end
