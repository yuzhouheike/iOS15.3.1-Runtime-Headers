/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayProperties : NSObject {
    unsigned int  _connectionSeed;
    CADisplayMode * _currentMode;
    NSString * _overscanAdjustment;
}

@property (nonatomic) unsigned int connectionSeed;
@property (nonatomic, retain) CADisplayMode *currentMode;
@property (nonatomic, copy) NSString *overscanAdjustment;

- (unsigned int)connectionSeed;
- (id)currentMode;
- (void)dealloc;
- (id)overscanAdjustment;
- (void)setConnectionSeed:(unsigned int)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setOverscanAdjustment:(id)arg1;

@end
