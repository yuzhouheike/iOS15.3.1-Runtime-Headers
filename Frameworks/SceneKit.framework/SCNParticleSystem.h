/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _acceleration;
    bool  _affectedByGravity;
    bool  _affectedByPhysicsFields;
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    long long  _birthDirection;
    long long  _birthLocation;
    double  _birthRate;
    double  _birthRateVariation;
    bool  _blackPassEnabled;
    long long  _blendMode;
    NSArray * _colliderNodes;
    double  _dampingFactor;
    double  _emissionDuration;
    double  _emissionDurationVariation;
    SCNGeometry * _emitterShape;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _emittingDirection;
    double  _fixedTimeStep;
    double  _fresnelExponent;
    double  _idleDuration;
    double  _idleDurationVariation;
    long long  _imageSequenceAnimationMode;
    unsigned long long  _imageSequenceColumnCount;
    double  _imageSequenceFrameRate;
    double  _imageSequenceFrameRateVariation;
    double  _imageSequenceInitialFrame;
    double  _imageSequenceInitialFrameVariation;
    unsigned long long  _imageSequenceRowCount;
    bool  _isLocal;
    unsigned int  _isPresentationInstance;
    double  _lightEmissionRadiusFactor;
    bool  _lightingEnabled;
    bool  _loops;
    NSString * _name;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _orientationDirection;
    long long  _orientationMode;
    double  _particleAngle;
    double  _particleAngleVariation;
    double  _particleAngularVelocity;
    double  _particleAngularVelocityVariation;
    double  _particleBounce;
    double  _particleBounceVariation;
    double  _particleCharge;
    double  _particleChargeVariation;
    UIColor * _particleColor;
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  _particleColorVariation;
    bool  _particleDiesOnCollision;
    double  _particleFriction;
    double  _particleFrictionVariation;
    NSArray * _particleGeometries;
    id  _particleImage;
    double  _particleIntensity;
    double  _particleIntensityVariation;
    double  _particleLifeSpan;
    double  _particleLifeSpanVariation;
    double  _particleMass;
    double  _particleMassVariation;
    double  _particleSize;
    double  _particleSizeVariation;
    struct __C3DParticleSystem { } * _particleSystem;
    double  _particleVelocity;
    double  _particleVelocityVariation;
    bool  _physicsCollisionsEnabled;
    NSDictionary * _propertyControllers;
    NSString * _referenceName;
    long long  _renderingMode;
    long long  _seed;
    bool  _softParticlesEnabled;
    long long  _sortingMode;
    double  _speedFactor;
    double  _spreadingAngle;
    double  _stretchFactor;
    SCNParticleSystem * _systemSpawnedOnCollision;
    SCNParticleSystem * _systemSpawnedOnDying;
    SCNParticleSystem * _systemSpawnedOnLiving;
    double  _warmupDuration;
    bool  _writesToDepthBuffer;
}

@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } acceleration;
@property (nonatomic) bool affectedByGravity;
@property (nonatomic) bool affectedByPhysicsFields;
@property (readonly) NSArray *animationKeys;
@property (nonatomic) long long birthDirection;
@property (nonatomic) long long birthLocation;
@property (nonatomic) double birthRate;
@property (nonatomic) double birthRateVariation;
@property (getter=isBlackPassEnabled, nonatomic) bool blackPassEnabled;
@property (nonatomic) long long blendMode;
@property (nonatomic, copy) NSArray *colliderNodes;
@property (nonatomic) double dampingFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double emissionDuration;
@property (nonatomic) double emissionDurationVariation;
@property (nonatomic, retain) SCNGeometry *emitterShape;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } emittingDirection;
@property (nonatomic) double fresnelExponent;
@property (readonly) unsigned long long hash;
@property (nonatomic) double idleDuration;
@property (nonatomic) double idleDurationVariation;
@property (nonatomic) long long imageSequenceAnimationMode;
@property (nonatomic) unsigned long long imageSequenceColumnCount;
@property (nonatomic) double imageSequenceFrameRate;
@property (nonatomic) double imageSequenceFrameRateVariation;
@property (nonatomic) double imageSequenceInitialFrame;
@property (nonatomic) double imageSequenceInitialFrameVariation;
@property (nonatomic) unsigned long long imageSequenceRowCount;
@property (getter=isLightingEnabled, nonatomic) bool lightingEnabled;
@property (getter=isLocal, nonatomic) bool local;
@property (nonatomic) bool loops;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } orientationDirection;
@property (nonatomic) long long orientationMode;
@property (nonatomic) double particleAngle;
@property (nonatomic) double particleAngleVariation;
@property (nonatomic) double particleAngularVelocity;
@property (nonatomic) double particleAngularVelocityVariation;
@property (nonatomic) double particleBounce;
@property (nonatomic) double particleBounceVariation;
@property (nonatomic) double particleCharge;
@property (nonatomic) double particleChargeVariation;
@property (nonatomic, retain) UIColor *particleColor;
@property (nonatomic) struct SCNVector4 { float x1; float x2; float x3; float x4; } particleColorVariation;
@property (nonatomic) bool particleDiesOnCollision;
@property (nonatomic) double particleFriction;
@property (nonatomic) double particleFrictionVariation;
@property (nonatomic, retain) id particleImage;
@property (nonatomic) double particleIntensity;
@property (nonatomic) double particleIntensityVariation;
@property (nonatomic) double particleLifeSpan;
@property (nonatomic) double particleLifeSpanVariation;
@property (nonatomic) double particleMass;
@property (nonatomic) double particleMassVariation;
@property (nonatomic) double particleSize;
@property (nonatomic) double particleSizeVariation;
@property (nonatomic) double particleVelocity;
@property (nonatomic) double particleVelocityVariation;
@property (nonatomic, copy) NSDictionary *propertyControllers;
@property (nonatomic) long long sortingMode;
@property (nonatomic) double speedFactor;
@property (nonatomic) double spreadingAngle;
@property (nonatomic) double stretchFactor;
@property (readonly) Class superclass;
@property (nonatomic, retain) SCNParticleSystem *systemSpawnedOnCollision;
@property (nonatomic, retain) SCNParticleSystem *systemSpawnedOnDying;
@property (nonatomic, retain) SCNParticleSystem *systemSpawnedOnLiving;
@property (nonatomic) double warmupDuration;
@property (nonatomic) bool writesToDepthBuffer;

+ (id)particleSystem;
+ (id)particleSystemNamed:(id)arg1 inDirectory:(id)arg2;
+ (id)particleSystemWithParticleSystemRef:(struct __C3DParticleSystem { }*)arg1;
+ (bool)supportsSecureCoding;

- (const void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNParticleSystem:(id)arg1;
- (void)_customEncodingOfSCNParticleSystem:(id)arg1;
- (bool)_isAReference;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_setParticleImagePath:(id)arg1 withResolvedPath:(id)arg2;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateParticleC3DImage:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })acceleration;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (void)addModifierForProperties:(id)arg1 atStage:(long long)arg2 withBlock:(id /* block */)arg3;
- (bool)affectedByGravity;
- (bool)affectedByPhysicsFields;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (bool)areSoftParticlesEnabled;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (long long)birthDirection;
- (long long)birthLocation;
- (double)birthRate;
- (double)birthRateVariation;
- (bool)blackPassEnabled;
- (long long)blendMode;
- (id)colliderNodes;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dampingFactor;
- (void)dealloc;
- (double)emissionDuration;
- (double)emissionDurationVariation;
- (id)emitterShape;
- (struct SCNVector3 { float x1; float x2; float x3; })emittingDirection;
- (void)encodeWithCoder:(id)arg1;
- (double)fixedTimeStep;
- (double)fresnelExponent;
- (void)handleEvent:(long long)arg1 forProperties:(id)arg2 withBlock:(id /* block */)arg3;
- (id)identifier;
- (double)idleDuration;
- (double)idleDurationVariation;
- (long long)imageSequenceAnimationMode;
- (unsigned long long)imageSequenceColumnCount;
- (double)imageSequenceFrameRate;
- (double)imageSequenceFrameRateVariation;
- (double)imageSequenceInitialFrame;
- (double)imageSequenceInitialFrameVariation;
- (unsigned long long)imageSequenceRowCount;
- (id)init;
- (id)initPresentationSystemWithSystemRef:(struct __C3DParticleSystem { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticleSystemRef:(struct __C3DParticleSystem { }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isBlackPassEnabled;
- (bool)isLightingEnabled;
- (bool)isLocal;
- (bool)isPausedOrPausedByInheritance;
- (double)lightEmissionRadiusFactor;
- (bool)lightingEnabled;
- (bool)loops;
- (id)name;
- (struct SCNVector3 { float x1; float x2; float x3; })orientationDirection;
- (long long)orientationMode;
- (double)particleAngle;
- (double)particleAngleVariation;
- (double)particleAngularVelocity;
- (double)particleAngularVelocityVariation;
- (double)particleBounce;
- (double)particleBounceVariation;
- (double)particleCharge;
- (double)particleChargeVariation;
- (id)particleColor;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })particleColorVariation;
- (bool)particleDiesOnCollision;
- (double)particleFriction;
- (double)particleFrictionVariation;
- (id)particleGeometries;
- (id)particleImage;
- (double)particleIntensity;
- (double)particleIntensityVariation;
- (double)particleLifeSpan;
- (double)particleLifeSpanVariation;
- (double)particleMass;
- (double)particleMassVariation;
- (double)particleSize;
- (double)particleSizeVariation;
- (struct __C3DParticleSystem { }*)particleSystemRef;
- (double)particleVelocity;
- (double)particleVelocityVariation;
- (void)pauseAnimationForKey:(id)arg1;
- (bool)physicsCollisionsEnabled;
- (id)presentationInstance;
- (id)propertyControllers;
- (id)referenceName;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;
- (void)removeAllBindings;
- (void)removeAllModifiers;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeModifiersOfStage:(long long)arg1;
- (long long)renderingMode;
- (void)reset;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (long long)seed;
- (void)setAcceleration:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setAffectedByGravity:(bool)arg1;
- (void)setAffectedByPhysicsFields:(bool)arg1;
- (void)setBirthDirection:(long long)arg1;
- (void)setBirthLocation:(long long)arg1;
- (void)setBirthRate:(double)arg1;
- (void)setBirthRateVariation:(double)arg1;
- (void)setBlackPassEnabled:(bool)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setColliderNodes:(id)arg1;
- (void)setDampingFactor:(double)arg1;
- (void)setEmissionDuration:(double)arg1;
- (void)setEmissionDurationVariation:(double)arg1;
- (void)setEmitterShape:(id)arg1;
- (void)setEmittingDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setFixedTimeStep:(double)arg1;
- (void)setFresnelExponent:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdleDuration:(double)arg1;
- (void)setIdleDurationVariation:(double)arg1;
- (void)setImageSequenceAnimationMode:(long long)arg1;
- (void)setImageSequenceColumnCount:(unsigned long long)arg1;
- (void)setImageSequenceFrameRate:(double)arg1;
- (void)setImageSequenceFrameRateVariation:(double)arg1;
- (void)setImageSequenceInitialFrame:(double)arg1;
- (void)setImageSequenceInitialFrameVariation:(double)arg1;
- (void)setImageSequenceRowCount:(unsigned long long)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setLightEmissionRadiusFactor:(double)arg1;
- (void)setLightingEnabled:(bool)arg1;
- (void)setLocal:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOrientationDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setOrientationMode:(long long)arg1;
- (void)setParticleAngle:(double)arg1;
- (void)setParticleAngleVariation:(double)arg1;
- (void)setParticleAngularVelocity:(double)arg1;
- (void)setParticleAngularVelocityVariation:(double)arg1;
- (void)setParticleBounce:(double)arg1;
- (void)setParticleBounceVariation:(double)arg1;
- (void)setParticleCharge:(double)arg1;
- (void)setParticleChargeVariation:(double)arg1;
- (void)setParticleColor:(id)arg1;
- (void)setParticleColorVariation:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setParticleDiesOnCollision:(bool)arg1;
- (void)setParticleFriction:(double)arg1;
- (void)setParticleFrictionVariation:(double)arg1;
- (void)setParticleGeometries:(id)arg1;
- (void)setParticleImage:(id)arg1;
- (void)setParticleIntensity:(double)arg1;
- (void)setParticleIntensityVariation:(double)arg1;
- (void)setParticleLifeSpan:(double)arg1;
- (void)setParticleLifeSpanVariation:(double)arg1;
- (void)setParticleMass:(double)arg1;
- (void)setParticleMassVariation:(double)arg1;
- (void)setParticleSize:(double)arg1;
- (void)setParticleSizeVariation:(double)arg1;
- (void)setParticleVelocity:(double)arg1;
- (void)setParticleVelocityVariation:(double)arg1;
- (void)setPhysicsCollisionsEnabled:(bool)arg1;
- (void)setPropertyControllers:(id)arg1;
- (void)setReferenceName:(id)arg1;
- (void)setRenderingMode:(long long)arg1;
- (void)setSeed:(long long)arg1;
- (void)setSoftParticlesEnabled:(bool)arg1;
- (void)setSortingMode:(long long)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setSpeedFactor:(double)arg1;
- (void)setSpreadingAngle:(double)arg1;
- (void)setStretchFactor:(double)arg1;
- (void)setSystemSpawnedOnCollision:(id)arg1;
- (void)setSystemSpawnedOnDying:(id)arg1;
- (void)setSystemSpawnedOnLiving:(id)arg1;
- (void)setWarmupDuration:(double)arg1;
- (void)setWritesToDepthBuffer:(bool)arg1;
- (bool)softParticlesEnabled;
- (long long)sortingMode;
- (double)speedFactor;
- (double)spreadingAngle;
- (double)stretchFactor;
- (id)systemSpawnedOnCollision;
- (id)systemSpawnedOnDying;
- (id)systemSpawnedOnLiving;
- (short)typeOfProperty:(id)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (double)warmupDuration;
- (bool)writesToDepthBuffer;

@end
