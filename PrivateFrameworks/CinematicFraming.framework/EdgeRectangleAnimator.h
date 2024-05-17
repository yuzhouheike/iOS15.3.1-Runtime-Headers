/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface EdgeRectangleAnimator : NSObject <RectangleAnimator> {
    struct { 
        float x; 
        float y; 
        float w; 
        float vx; 
        float vy; 
        float vw; 
    }  _currentState;
    <FramingSpaceManager> * _framingSpaceManager;
    long long  _movementState;
    AnimationEngine * _sizeAnimationEngine;
    AnimationEngine * _xAxisAnimationEngine;
    AnimationEngine * _yAxisAnimationEngine;
    CinematicFramingSessionOptions * options;
    float  verticalAccelerationMultiplier;
}

@property (nonatomic, retain) CinematicFramingSessionOptions *options;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectangle;
@property (nonatomic, readonly) float sizeSpeed;
@property (nonatomic) float verticalAccelerationMultiplier;
@property (nonatomic, readonly) float xSpeed;
@property (nonatomic, readonly) float ySpeed;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })driveAnimationToTarget:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 inState:(long long)arg3;
- (void)drivePivotAnimationsToTarget:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 withPivotDescriptions:(struct { float x1; float x2; })arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)driveWidthAnimationToTarget:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 withPivotDescriptions:(struct { float x1; float x2; })arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)driveXPivotWithLocation:(float)arg1 velocity:(float)arg2 pivotDescriptions:(struct { float x1; float x2; })arg3 toTargetLocation:(float)arg4 targetVelocity:(float)arg5 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6;
- (void)driveYPivotWithLocation:(float)arg1 velocity:(float)arg2 pivotDescriptions:(struct { float x1; float x2; })arg3 toTargetLocation:(float)arg4 targetVelocity:(float)arg5 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6;
- (id)initWithRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 framingSpaceManager:(id)arg2;
- (id)options;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangle;
- (void)resetToRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOptions:(id)arg1;
- (void)setVerticalAccelerationMultiplier:(float)arg1;
- (float)sizeSpeed;
- (float)verticalAccelerationMultiplier;
- (float)xSpeed;
- (float)ySpeed;

@end
