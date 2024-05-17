/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPlatterMenuPanningTransformer : NSObject {
    unsigned long long  _axisLock;
    <_UIPlatterMenuPanningTransformerDelegate> * _delegate;
    double  _lastAxisLockTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDirectionChangeTouchPosition;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _lastOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTransformedPoint;
    double  _minimumXVelocityForAxisLock;
    unsigned long long  _overrideLockAxis;
    NSDate * _panBeginTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panBeginTouchPosition;
    NSDate * _timeForLastDirectionalChange;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionZonePosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _transitionZoneRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _transitionZoneSize;
    _UIVelocityIntegrator * _velocityIntegrator;
}

@property (nonatomic) unsigned long long axisLock;
@property (nonatomic) <_UIPlatterMenuPanningTransformerDelegate> *delegate;
@property (nonatomic) double lastAxisLockTime;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastDirectionChangeTouchPosition;
@property (nonatomic) struct CGVector { double x1; double x2; } lastOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchPosition;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTransformedPoint;
@property (nonatomic) double minimumXVelocityForAxisLock;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } offset;
@property (nonatomic) unsigned long long overrideLockAxis;
@property (nonatomic, retain) NSDate *panBeginTime;
@property (nonatomic) struct CGPoint { double x1; double x2; } panBeginTouchPosition;
@property (nonatomic, retain) NSDate *timeForLastDirectionalChange;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionZonePosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionZoneRect;
@property (nonatomic) struct CGSize { double x1; double x2; } transitionZoneSize;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } velocity;
@property (nonatomic, retain) _UIVelocityIntegrator *velocityIntegrator;

+ (id)transformerWithAxisTransitionZonePosition:(struct CGPoint { double x1; double x2; })arg1 axisTransitionZoneSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_enterYLockedState;
- (unsigned long long)axisLock;
- (id)delegate;
- (void)didBeginPanningWithTouchPosition:(struct CGPoint { double x1; double x2; })arg1 currentTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)didEndPanningWithTouchPosition:(struct CGPoint { double x1; double x2; })arg1 currentTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)didPanWithTouchPosition:(struct CGPoint { double x1; double x2; })arg1 currentTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithAxisTransitionZonePosition:(struct CGPoint { double x1; double x2; })arg1 axisTransitionZoneSize:(struct CGSize { double x1; double x2; })arg2;
- (double)lastAxisLockTime;
- (struct CGPoint { double x1; double x2; })lastDirectionChangeTouchPosition;
- (struct CGVector { double x1; double x2; })lastOffset;
- (struct CGPoint { double x1; double x2; })lastTouchPosition;
- (struct CGPoint { double x1; double x2; })lastTransformedPoint;
- (void)lockIntoYAxis;
- (double)minimumXVelocityForAxisLock;
- (struct CGVector { double x1; double x2; })offset;
- (unsigned long long)overrideLockAxis;
- (id)panBeginTime;
- (struct CGPoint { double x1; double x2; })panBeginTouchPosition;
- (void)setAxisLock:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAxisLockTime:(double)arg1;
- (void)setLastDirectionChangeTouchPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastOffset:(struct CGVector { double x1; double x2; })arg1;
- (void)setLastTouchPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastTransformedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMinimumXVelocityForAxisLock:(double)arg1;
- (void)setOverrideLockAxis:(unsigned long long)arg1;
- (void)setPanBeginTime:(id)arg1;
- (void)setPanBeginTouchPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimeForLastDirectionalChange:(id)arg1;
- (void)setTransitionZonePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionZoneRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionZoneSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVelocityIntegrator:(id)arg1;
- (id)timeForLastDirectionalChange;
- (double)timeIntervalSinceLastDirectionChange;
- (struct CGPoint { double x1; double x2; })transitionZonePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionZoneRect;
- (struct CGSize { double x1; double x2; })transitionZoneSize;
- (struct CGVector { double x1; double x2; })velocity;
- (id)velocityIntegrator;

@end
