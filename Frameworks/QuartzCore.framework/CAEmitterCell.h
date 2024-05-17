/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEmitterCell : NSObject <CAMediaTiming, CAPropertyInfo, NSCopying, NSSecureCoding> {
    void * _attr;
    unsigned int  _flags;
    void * _state;
}

@property float alphaRange;
@property float alphaSpeed;
@property bool autoreverses;
@property double beginTime;
@property float birthRate;
@property float blueRange;
@property float blueSpeed;
@property struct CGColor { }*color;
@property (retain) id contents;
@property unsigned int contentsFrameCount;
@property (copy) NSString *contentsFrameMode;
@property unsigned int contentsFramesPerRow;
@property float contentsFramesPerSecond;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property double contentsScale;
@property double duration;
@property double emissionLatitude;
@property double emissionLongitude;
@property double emissionRange;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSArray *emitterCells;
@property (getter=isEnabled) bool enabled;
@property (copy) NSString *fillMode;
@property float greenRange;
@property float greenSpeed;
@property float lifetime;
@property float lifetimeRange;
@property (copy) NSString *magnificationFilter;
@property float mass;
@property float massRange;
@property (copy) NSString *minificationFilter;
@property float minificationFilterBias;
@property (copy) NSString *name;
@property double orientationLatitude;
@property double orientationLongitude;
@property double orientationRange;
@property (copy) NSString *particleType;
@property float redRange;
@property float redSpeed;
@property float repeatCount;
@property double repeatDuration;
@property double rotation;
@property double rotationRange;
@property double scale;
@property double scaleRange;
@property double scaleSpeed;
@property float speed;
@property double spin;
@property double spinRange;
@property (copy) NSDictionary *style;
@property double timeOffset;
@property double velocity;
@property double velocityRange;
@property double xAcceleration;
@property double yAcceleration;
@property double zAcceleration;

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)emitterCell;
+ (id)properties;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (bool)CAMLTypeSupportedForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; }*)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (float)alphaRange;
- (float)alphaSpeed;
- (bool)autoreverses;
- (double)beginTime;
- (float)birthRate;
- (float)blueRange;
- (float)blueSpeed;
- (struct CGColor { }*)color;
- (id)contents;
- (unsigned int)contentsFrameCount;
- (id)contentsFrameMode;
- (unsigned int)contentsFramesPerRow;
- (float)contentsFramesPerSecond;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (double)contentsScale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)didChangeValueForKey:(id)arg1;
- (double)duration;
- (double)emissionLatitude;
- (double)emissionLongitude;
- (double)emissionRange;
- (id)emitterBehaviors;
- (id)emitterCells;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillMode;
- (float)greenRange;
- (float)greenSpeed;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (float)lifetime;
- (float)lifetimeRange;
- (id)magnificationFilter;
- (float)mass;
- (float)massRange;
- (id)minificationFilter;
- (float)minificationFilterBias;
- (id)name;
- (double)orientationLatitude;
- (double)orientationLongitude;
- (double)orientationRange;
- (id)particleType;
- (float)redRange;
- (float)redSpeed;
- (float)repeatCount;
- (double)repeatDuration;
- (double)rotation;
- (double)rotationRange;
- (double)scale;
- (double)scaleRange;
- (double)scaleSpeed;
- (void)setAlphaRange:(float)arg1;
- (void)setAlphaSpeed:(float)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBirthRate:(float)arg1;
- (void)setBlueRange:(float)arg1;
- (void)setBlueSpeed:(float)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsFrameCount:(unsigned int)arg1;
- (void)setContentsFrameMode:(id)arg1;
- (void)setContentsFramesPerRow:(unsigned int)arg1;
- (void)setContentsFramesPerSecond:(float)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setEmissionLatitude:(double)arg1;
- (void)setEmissionLongitude:(double)arg1;
- (void)setEmissionRange:(double)arg1;
- (void)setEmitterBehaviors:(id)arg1;
- (void)setEmitterCells:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFillMode:(id)arg1;
- (void)setGreenRange:(float)arg1;
- (void)setGreenSpeed:(float)arg1;
- (void)setLifetime:(float)arg1;
- (void)setLifetimeRange:(float)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMass:(float)arg1;
- (void)setMassRange:(float)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setName:(id)arg1;
- (void)setOrientationLatitude:(double)arg1;
- (void)setOrientationLongitude:(double)arg1;
- (void)setOrientationRange:(double)arg1;
- (void)setParticleType:(id)arg1;
- (void)setRedRange:(float)arg1;
- (void)setRedSpeed:(float)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setRotationRange:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setScaleRange:(double)arg1;
- (void)setScaleSpeed:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setSpin:(double)arg1;
- (void)setSpinRange:(double)arg1;
- (void)setStyle:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVelocity:(double)arg1;
- (void)setVelocityRange:(double)arg1;
- (void)setXAcceleration:(double)arg1;
- (void)setYAcceleration:(double)arg1;
- (void)setZAcceleration:(double)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (float)speed;
- (double)spin;
- (double)spinRange;
- (id)style;
- (double)timeOffset;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (double)velocity;
- (double)velocityRange;
- (double)xAcceleration;
- (double)yAcceleration;
- (double)zAcceleration;

@end
