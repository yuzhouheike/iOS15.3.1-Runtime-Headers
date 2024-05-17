/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, UIGestureRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver> {
    _MKDirectionalArrowRecognizer * _activeArrowGestureRecognizer;
    _MKDirectionalArrowRecognizer * _arrowPanGestureRecognizer;
    _MKDirectionalArrowRecognizer * _arrowRotateGestureRecognizer;
    _MKDirectionalArrowRecognizer * _arrowZoomGestureRecognizer;
    double  _arrowZoomSpeed;
    double  _arrowZoomStartTimestamp;
    MKCompassView * _compassView;
    _MKConditionalPanRotationGestureRecognizer * _conditionalPanRotationGestureRecognizer;
    _MKConditionalPanTiltGestureRecognizer * _conditionalPanTiltGestureRecognizer;
    _MKConditionalPanZoomGestureRecognizer * _conditionalPanZoomGestureRecognizer;
    VKTimedAnimation * _currentArrowAnimation;
    <MKMapGestureControllerDelegate> * _delegate;
    bool  _didStartLongPress;
    MKVariableDelayTapRecognizer * _doubleTapGestureRecognizer;
    long long  _gestureCount;
    _UIInterruptScrollDecelerationGestureRecognizer * _gestureInterruptionRecognizer;
    bool  _isFullRotatingFromArrows;
    bool  _isPanning;
    bool  _isPinching;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastArrowScrollTranslationDelta;
    double  _lastPinchUpdateTimestamp;
    double  _lastRotation;
    double  _lastRotationInGestureDelta;
    double  _lastScale;
    double  _lastZoomPanTranslation;
    MKBasicMapView * _mapView;
    _MKOneHandedZoomGestureRecognizer * _oneHandedZoomGestureRecognizer;
    VKCompoundAnimation * _panDecelerationAnimationGroup;
    UIPanGestureRecognizer * _panGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panRotateStartPoint;
    bool  _panWithMomentum;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panZoomStartPoint;
    VKDynamicAnimation * _pinchDecelerationAnimation;
    double  _pinchFactorAverageInGesture;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    VKDynamicAnimation * _rotationDecelerationAnimation;
    MKRotationFilter * _rotationFilter;
    UIRotationGestureRecognizer * _rotationGestureRecognizer;
    bool  _rotationSnappingEnabled;
    UIPanGestureRecognizer * _scaleDragGestureRecognizer;
    MKScaleView * _scaleView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollTranslation;
    VKDynamicAnimation * _tiltDecelerationAnimation;
    MKTiltGestureRecognizer * _tiltGestureRecognizer;
    _MKUserInteractionGestureRecognizer * _touchGestureRecognizer;
    UITraitCollection * _traitCollection;
    UILongPressGestureRecognizer * _twoFingerLongPressGestureRecognizer;
    UITapGestureRecognizer * _twoFingerTapGestureRecognizer;
    _MKZoomingGestureControlConfiguration * _zoomConfiguration;
}

@property (nonatomic, retain) MKCompassView *compassView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKMapGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKBasicMapView *mapView;
@property (nonatomic, readonly) UIGestureRecognizer *oneHandedZoomGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) bool panWithMomentum;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (getter=isRotationEnabled, nonatomic) bool rotationEnabled;
@property (nonatomic, retain) MKRotationFilter *rotationFilter;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (nonatomic) bool rotationSnappingEnabled;
@property (nonatomic, retain) MKScaleView *scaleView;
@property (getter=isScrollEnabled, nonatomic) bool scrollEnabled;
@property (readonly) Class superclass;
@property (getter=isTiltEnabled, nonatomic) bool tiltEnabled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *twoFingerTapGestureRecognizer;
@property (getter=isZoomEnabled, nonatomic) bool zoomEnabled;

- (void).cxx_destruct;
- (void)_clearGesture:(id)arg1;
- (void)_handleInterrupt:(id)arg1;
- (void)_handleRotationPan:(id)arg1;
- (void)_handleStandardTilt:(id)arg1;
- (void)_handleZoomPan:(id)arg1;
- (void)_setOneHandedZoomGestureConfiguration:(id)arg1;
- (void)_setTraitCollection:(id)arg1;
- (struct CGPoint { double x1; double x2; })_snapPointToDevicePixels:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateRotationGestureForState:(long long)arg1 focusPoint:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 velocity:(double)arg4;
- (void)_updateZoomGestureForState:(long long)arg1 focusPoint:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3 velocity:(double)arg4 gestureType:(long long)arg5 configuration:(id)arg6;
- (void)beginGesturing;
- (void)cancelZoomInOrOut;
- (void)clearGestureRecognizersInFlight;
- (id)compassView;
- (void)dealloc;
- (id)delegate;
- (id)doubleTapGestureRecognizer;
- (void)endGesturing;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)handleArrowPan:(id)arg1;
- (void)handleArrowRotate:(id)arg1;
- (void)handleArrowZoom:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePanZoom:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTilt:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleZoomArrowMask:(long long)arg1 speed:(double)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (bool)isRotationEnabled;
- (bool)isScrollEnabled;
- (bool)isTiltEnabled;
- (bool)isZoomEnabled;
- (bool)keyDown:(id)arg1;
- (bool)keyUp:(id)arg1;
- (id)mapView;
- (id)oneHandedZoomGestureRecognizer;
- (id)panGestureRecognizer;
- (bool)panWithMomentum;
- (id)pinchGestureRecognizer;
- (id)rotationFilter;
- (id)rotationGestureRecognizer;
- (bool)rotationSnappingEnabled;
- (id)scaleView;
- (void)setCompassView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPanWithMomentum:(bool)arg1;
- (void)setRotationEnabled:(bool)arg1;
- (void)setRotationFilter:(id)arg1;
- (void)setRotationSnappingEnabled:(bool)arg1;
- (void)setScaleView:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setTiltEnabled:(bool)arg1;
- (void)setZoomEnabled:(bool)arg1;
- (void)startUserInteractionFromExternalGesture;
- (void)stopDynamicAnimations;
- (void)stopUserInteractionFromExternalGesture;
- (bool)tiltGestureRecognizerShouldBegin:(id)arg1;
- (id)twoFingerLongPressGestureRecognizer;
- (id)twoFingerTapGestureRecognizer;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)zoomIn;
- (void)zoomOut;

@end
