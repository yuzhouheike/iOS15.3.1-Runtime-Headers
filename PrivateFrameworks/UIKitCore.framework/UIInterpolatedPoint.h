/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterpolatedPoint : NSObject <UIVectorOperatable> {
    double  _epsilon;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)epsilon;
+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1 epsilon:(double)arg2;
+ (id)zero;

- (id)addVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)getNSValue;
- (id)getValue;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; long long x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; long long x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; long long x_3_1_4; } x3; bool x4; bool x5; bool x6; })arg5 state:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg6 delta:(double)arg7;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (bool)isApproximatelyEqualTo:(id)arg1;
- (bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (bool)isUndefined;
- (id)multiplyByScalar:(double)arg1;
- (id)multiplyByVector:(id)arg1;
- (void)reinitWithVector:(id)arg1;

@end
