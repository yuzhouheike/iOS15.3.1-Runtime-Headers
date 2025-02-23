/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {
    struct CGSize { 
        double width; 
        double height; 
    }  _digitizerSurfaceSize;
    double  _initialTouchTimestamp;
    float  _maximumForce;
    NSArray * _pathAttributes;
    bool  _systemGestureStateChange;
    bool  _systemGesturesPossible;
    unsigned char  _touchStreamIdentifier;
}

@property (nonatomic) double digitizerSurfaceHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } digitizerSurfaceSize;
@property (nonatomic) double digitizerSurfaceWidth;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) float maximumForce;
@property (nonatomic, retain) NSArray *pathAttributes;
@property (nonatomic) bool systemGestureStateChange;
@property (nonatomic) bool systemGesturesPossible;
@property (nonatomic) unsigned char touchStreamIdentifier;

+ (id)protobufSchema;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)digitizerSurfaceHeight;
- (struct CGSize { double x1; double x2; })digitizerSurfaceSize;
- (double)digitizerSurfaceWidth;
- (double)initialTouchTimestamp;
- (bool)isEqual:(id)arg1;
- (float)maximumForce;
- (id)pathAttributes;
- (void)setDigitizerSurfaceHeight:(double)arg1;
- (void)setDigitizerSurfaceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDigitizerSurfaceWidth:(double)arg1;
- (void)setInitialTouchTimestamp:(double)arg1;
- (void)setMaximumForce:(float)arg1;
- (void)setPathAttributes:(id)arg1;
- (void)setSystemGestureStateChange:(bool)arg1;
- (void)setSystemGesturesPossible:(bool)arg1;
- (void)setTouchStreamIdentifier:(unsigned char)arg1;
- (bool)systemGestureStateChange;
- (bool)systemGesturesPossible;
- (unsigned char)touchStreamIdentifier;

@end
