/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILegibilitySettingsProvider : NSObject {
    double  _accumulatedBrightness;
    double  _accumulatedContrast;
    double  _accumulatedLuminance;
    double  _accumulatedSaturation;
    bool  _accumulatorIsPrimed;
    UIColor * _contentColor;
    long long  _currentStyle;
    bool  _hasContrast;
    double  _mostRecentBrightness;
    double  _mostRecentContrast;
    double  _mostRecentLuminance;
    double  _mostRecentSaturation;
    double  _nextChangeBarrier;
}

@property (nonatomic) double accumulatedBrightness;
@property (nonatomic) double accumulatedContrast;
@property (nonatomic) double accumulatedLuminance;
@property (nonatomic) double accumulatedSaturation;
@property (nonatomic) bool accumulatorIsPrimed;
@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic) long long currentStyle;
@property (nonatomic) bool hasContrast;
@property (nonatomic) double mostRecentBrightness;
@property (nonatomic) double mostRecentContrast;
@property (nonatomic) double mostRecentLuminance;
@property (nonatomic) double mostRecentSaturation;
@property (nonatomic) double nextChangeBarrier;

+ (long long)styleForContentColor:(id)arg1;
+ (long long)styleForContentColor:(id)arg1 contrast:(double)arg2;

- (bool)accumulateChangesToContentColor:(id)arg1;
- (bool)accumulateChangesToContentColor:(id)arg1 contrast:(double)arg2;
- (double)accumulatedBrightness;
- (double)accumulatedContrast;
- (double)accumulatedLuminance;
- (double)accumulatedSaturation;
- (bool)accumulatorIsPrimed;
- (void)clearContentColorAccumulator;
- (id)contentColor;
- (long long)currentStyle;
- (void)dealloc;
- (bool)hasContrast;
- (double)mostRecentBrightness;
- (double)mostRecentContrast;
- (double)mostRecentLuminance;
- (double)mostRecentSaturation;
- (double)nextChangeBarrier;
- (void)setAccumulatedBrightness:(double)arg1;
- (void)setAccumulatedContrast:(double)arg1;
- (void)setAccumulatedLuminance:(double)arg1;
- (void)setAccumulatedSaturation:(double)arg1;
- (void)setAccumulatorIsPrimed:(bool)arg1;
- (void)setContentColor:(id)arg1;
- (void)setCurrentStyle:(long long)arg1;
- (void)setHasContrast:(bool)arg1;
- (void)setMostRecentBrightness:(double)arg1;
- (void)setMostRecentContrast:(double)arg1;
- (void)setMostRecentLuminance:(double)arg1;
- (void)setMostRecentSaturation:(double)arg1;
- (void)setNextChangeBarrier:(double)arg1;
- (id)settings;

@end
