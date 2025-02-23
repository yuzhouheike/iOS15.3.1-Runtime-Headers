/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCameraController : NSObject <VKCameraController> {
    struct AnimationRunner { } * _animationRunner;
    struct shared_ptr<gdc::Camera> { 
        struct Camera {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _camera;
    <VKMapViewCameraDelegate> * _cameraDelegate;
    <MDRenderTarget> * _canvas;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    bool  _edgeInsetsAnimating;
    bool  _gesturing;
    bool  _inProgressRegionChangeIsAnimated;
    bool  _isPitchEnabled;
    bool  _isRotateEnabled;
    struct MapDataAccess { } * _mapDataAccess;
    unsigned long long  _regionChangeCount;
    struct RunLoopController { } * _runLoopController;
    bool  _staysCenteredDuringPinch;
    bool  _staysCenteredDuringRotation;
    VKCamera * _vkCamera;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) struct AnimationRunner { }*animationRunner;
@property (nonatomic, readonly) bool canPitch;
@property (nonatomic, readonly) bool canRotate;
@property (nonatomic) struct { double x1; double x2; } centerCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double heading;
@property (nonatomic, readonly) bool isFullyPitched;
@property (nonatomic) bool isPitchEnabled;
@property (nonatomic, readonly) bool isPitched;
@property (nonatomic) bool isRotateEnabled;
@property (nonatomic, readonly) bool isRotated;
@property (nonatomic, readonly) struct MapDataAccess { }*mapDataAccess;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property (nonatomic, readonly) double maxPitch;
@property (nonatomic, readonly) double minPitch;
@property (nonatomic) double pitch;
@property (nonatomic, readonly) double presentationHeading;
@property (nonatomic, readonly) struct RunLoopController { }*runLoopController;
@property (nonatomic) bool staysCenteredDuringPinch;
@property (nonatomic) bool staysCenteredDuringRotation;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)altitude;
- (struct AnimationRunner { }*)animationRunner;
- (void)beginRegionChange:(bool)arg1;
- (struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })camera;
- (id)cameraDelegate;
- (bool)canPitch;
- (bool)canRotate;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (id)canvas;
- (void)canvasDidLayout;
- (struct { double x1; double x2; })centerCoordinate;
- (bool)centerCoordinate:(struct { double x1; double x2; }*)arg1 andDistanceFromCenter:(double*)arg2 forMapRegion:(id)arg3;
- (struct CGPoint { double x1; double x2; })centerScreenPoint;
- (void)checkAndResetRegionChangeCount;
- (double)currentZoomLevel;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (struct Matrix<int, 2, 1> { int x1[2]; })cursorFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)detailedDescription;
- (double)distanceFromCenterCoordinate;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (bool)edgeInsetsAnimating;
- (void)endRegionChange;
- (double)heading;
- (id)initWithMapDataAccess:(struct MapDataAccess { }*)arg1 animationRunner:(struct AnimationRunner { }*)arg2 runLoopController:(struct RunLoopController { }*)arg3 cameraDelegate:(id)arg4;
- (bool)isAnimating;
- (bool)isChangingRegion;
- (bool)isFullyPitched;
- (bool)isGesturing;
- (bool)isPitchEnabled;
- (bool)isPitched;
- (bool)isRotateEnabled;
- (bool)isRotated;
- (struct MapDataAccess { }*)mapDataAccess;
- (id)mapRegion;
- (id)mapRegionIgnoringEdgeInsets;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minPitch;
- (double)minimumZoomLevel;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)pitch;
- (void)populateDebugNode:(void*)arg1 withOptions:(const void*)arg2;
- (double)presentationHeading;
- (struct RunLoopController { }*)runLoopController;
- (struct CGPoint { double x1; double x2; })scaledScreenPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCameraDelegate:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDistanceFromCenterCoordinate:(double)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEdgeInsetsAnimating:(bool)arg1;
- (void)setGesturing:(bool)arg1;
- (void)setHeading:(double)arg1;
- (void)setIsPitchEnabled:(bool)arg1;
- (void)setIsRotateEnabled:(bool)arg1;
- (void)setPitch:(double)arg1;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (void)setVkCamera:(id)arg1;
- (bool)staysCenteredDuringPinch;
- (bool)staysCenteredDuringRotation;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (long long)tileSize;
- (double)topDownMinimumZoomLevel;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (void)updateCameraToPositionOrientationLimits;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (bool)usesVKCamera;
- (id)vkCamera;
- (bool)wantsTimerTick;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;

@end
