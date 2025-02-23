/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CASpringAnimation : CABasicAnimation

@property double damping;
@property double initialVelocity;
@property double mass;
@property (readonly) double settlingDuration;
@property double stiffness;
@property double velocity;

+ (id)defaultValueForKey:(id)arg1;

- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (float)_solveForInput:(float)arg1;
- (double)_timeFunction:(double)arg1;
- (double)damping;
- (double)durationForEpsilon:(double)arg1;
- (double)initialVelocity;
- (double)mass;
- (void)setDamping:(double)arg1;
- (void)setInitialVelocity:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)settlingDuration;
- (double)stiffness;
- (double)velocity;

@end
