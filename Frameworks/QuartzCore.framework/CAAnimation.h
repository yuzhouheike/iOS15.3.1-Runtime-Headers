/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAAnimation : NSObject <CAAction, CAMediaTiming, CAPropertyInfo, NSCopying, NSMutableCopying, NSSecureCoding> {
    void * _attr;
    unsigned int  _flags;
}

@property CAStateControllerTransition *CAStateControllerTransition;
@property long long _mapkit_ID;
@property (nonatomic, copy) NSArray *animationEvents;
@property bool autoreverses;
@property double beginTime;
@property (copy) NSString *beginTimeMode;
@property (retain) <CAAnimationDelegate> *delegate;
@property bool discretizesTime;
@property double duration;
@property (getter=isEnabled) bool enabled;
@property double fadeInDuration;
@property double fadeOutDuration;
@property (copy) NSString *fillMode;
@property double frameInterval;
@property unsigned int highFrameRateReason;
@property struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property float preferredFrameRateRangeMaximum;
@property float preferredFrameRateRangeMinimum;
@property float preferredFrameRateRangePreferred;
@property long long preferredFramesPerSecond;
@property (getter=isRemovedOnCompletion) bool removedOnCompletion;
@property float repeatCount;
@property double repeatDuration;
@property float speed;
@property double timeOffset;
@property (retain) CAMediaTimingFunction *timingFunction;
@property bool usesSceneTimeBase;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; unsigned int x2 : 16; unsigned int x3 : 16; SEL x4[2]; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; unsigned int x2 : 16; unsigned int x3 : 16; SEL x4[2]; char *x5; struct __CFString {} *x6; }*)arg1;
+ (id)animation;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (bool)CAMLTypeSupportedForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; }*)CA_copyRenderValue;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (bool)autoreverses;
- (double)beginTime;
- (id)beginTimeMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (bool)discretizesTime;
- (double)duration;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillMode;
- (double)frameInterval;
- (unsigned int)highFrameRateReason;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isRemovedOnCompletion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (float)preferredFrameRateRangeMaximum;
- (float)preferredFrameRateRangeMinimum;
- (float)preferredFrameRateRangePreferred;
- (long long)preferredFramesPerSecond;
- (bool)removedOnCompletion;
- (float)repeatCount;
- (double)repeatDuration;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setAutoreverses:(bool)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBeginTimeMode:(id)arg1;
- (void)setDefaultDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscretizesTime:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setPreferredFrameRateRangeMaximum:(float)arg1;
- (void)setPreferredFrameRateRangeMinimum:(float)arg1;
- (void)setPreferredFrameRateRangePreferred:(float)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (float)speed;
- (double)timeOffset;
- (id)timingFunction;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (long long)_mapkit_ID;
- (void)set_mapkit_ID:(long long)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)animationWithSCNAnimation:(id)arg1;

- (id)animationEvents;
- (bool)commitsOnCompletion;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void)setAnimationEvents:(id)arg1;
- (void)setCommitsOnCompletion:(bool)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setUsesSceneTimeBase:(bool)arg1;
- (bool)usesSceneTimeBase;

@end
