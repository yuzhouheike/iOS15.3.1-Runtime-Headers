/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAnimationPlayer : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    SCNAnimation * _animation;
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    bool  _paused;
    struct __C3DAnimationPlayer { } * _playerRef;
    float  _speed;
    float  _weight;
}

@property (nonatomic, readonly) SCNAnimation *animation;
@property (readonly) NSArray *animationKeys;
@property (nonatomic) double blendFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool paused;
@property (nonatomic) double speed;
@property (readonly) Class superclass;

+ (id)animationPlayerWithAnimation:(id)arg1;
+ (id)animationPlayerWithAnimationPlayerRef:(struct __C3DAnimationPlayer { }*)arg1;
+ (id)animationPlayerWithSCNAnimation:(id)arg1;
+ (bool)supportsSecureCoding;

- (const void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_setAnimation:(id)arg1;
- (void)_syncObjCAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animation;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (struct __C3DAnimationPlayer { }*)animationPlayerRef;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (double)blendFactor;
- (void)commonInit;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnimationPlayerRef:(struct __C3DAnimationPlayer { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSCNAnimation:(id)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (bool)paused;
- (void)play;
- (void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setBlendFactor:(double)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSpeed:(double)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setWeight:(float)arg1;
- (double)speed;
- (void)stop;
- (void)stopWithBlendOutDuration:(double)arg1;
- (void)stopWithFadeOutDuration:(double)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (float)weight;

@end
