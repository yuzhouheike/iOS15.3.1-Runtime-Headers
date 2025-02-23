/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWFrameStatistics : NSObject {
    NSDictionary * _aeStatistics;
    NSArray * _displayStrobeRGBEstimate;
    NSString * _portType;
    struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; float x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; float x14; float x15; double x16; unsigned int x17; unsigned int x18; unsigned int x19; bool x20; bool x21; bool x22; int x23; bool x24; float x25; int x26; bool x27; int x28; int x29; int x30; int x31; int x32; int x33; float x34; float x35; unsigned int x36; float x37; int x38; } * _storage;
}

@property (nonatomic, readonly) unsigned int aeAverage;
@property (nonatomic, readonly) unsigned int aeFaceAverage;
@property (nonatomic, readonly) bool aeLimitsReached;
@property (nonatomic, readonly) bool aeLocked;
@property (nonatomic, readonly) bool aeStable;
@property (nonatomic, readonly) NSDictionary *aeStatistics;
@property (nonatomic, readonly) unsigned int aeTarget;
@property (nonatomic, readonly) bool afLocked;
@property (nonatomic, readonly) int afStationaryCount;
@property (nonatomic, readonly) int afStatus;
@property (nonatomic, readonly) unsigned int agc;
@property (nonatomic, readonly) float baseISO;
@property (nonatomic, readonly) unsigned int conversionGain;
@property (nonatomic, readonly) float currentFrameRate;
@property (nonatomic, readonly) NSArray *displayStrobeRGBEstimate;
@property (nonatomic, readonly) double eit;
@property (nonatomic, readonly) double exposureBias;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalCropRect;
@property (nonatomic, readonly) float focusDistance;
@property (nonatomic, readonly) int focusPosition;
@property (nonatomic, readonly) int focusPositionStep;
@property (nonatomic, readonly) int focusingMethod;
@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) bool hrEnabled;
@property (nonatomic, readonly) double integrationTime;
@property (nonatomic, readonly) unsigned int ispDGain;
@property (nonatomic, readonly) float ispDGainRangeExpansionFactor;
@property (nonatomic, readonly) float lensMakersFocusDistance;
@property (nonatomic, readonly) int logicalFocusLensPosition;
@property (nonatomic, readonly) int logicalFocusLensPositionStep;
@property (nonatomic, readonly) int ltmCurve;
@property (nonatomic, readonly) unsigned int luxLevel;
@property (nonatomic, readonly) float motionDataBiasErrorEstimate;
@property (nonatomic, readonly) unsigned int motionDataStatus;
@property (nonatomic, readonly) int motionFromAEMatrix;
@property (nonatomic, readonly) float normalizedSNR;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } pts;
@property (nonatomic, readonly) unsigned int readNoise_1x;
@property (nonatomic, readonly) unsigned int readNoise_8x;
@property (nonatomic, readonly) unsigned int sensorDGain;
@property (nonatomic, readonly) float sifrGain;

- (void)_setAEStatistics:(id)arg1;
- (void)_setDisplayStrobeRGBEstimate:(id)arg1;
- (unsigned int)aeAverage;
- (unsigned int)aeFaceAverage;
- (bool)aeLimitsReached;
- (bool)aeLocked;
- (bool)aeStable;
- (id)aeStatistics;
- (unsigned int)aeTarget;
- (bool)afLocked;
- (int)afStationaryCount;
- (int)afStatus;
- (unsigned int)agc;
- (float)baseISO;
- (unsigned int)conversionGain;
- (float)currentFrameRate;
- (void)dealloc;
- (id)description;
- (id)displayStrobeRGBEstimate;
- (double)eit;
- (double)exposureBias;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalCropRect;
- (float)focusDistance;
- (int)focusPosition;
- (int)focusPositionStep;
- (int)focusingMethod;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; float x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; float x14; float x15; double x16; unsigned int x17; unsigned int x18; unsigned int x19; bool x20; bool x21; bool x22; int x23; bool x24; float x25; int x26; bool x27; int x28; int x29; int x30; int x31; int x32; int x33; float x34; float x35; unsigned int x36; float x37; int x38; }*)frameStatisticsStorage;
- (float)gain;
- (bool)hrEnabled;
- (id)initWthPortType:(id)arg1 storage:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; float x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; float x14; float x15; double x16; unsigned int x17; unsigned int x18; unsigned int x19; bool x20; bool x21; bool x22; int x23; bool x24; float x25; int x26; bool x27; int x28; int x29; int x30; int x31; int x32; int x33; float x34; float x35; unsigned int x36; float x37; int x38; }*)arg2;
- (double)integrationTime;
- (unsigned int)ispDGain;
- (float)ispDGainRangeExpansionFactor;
- (float)lensMakersFocusDistance;
- (int)logicalFocusLensPosition;
- (int)logicalFocusLensPositionStep;
- (int)ltmCurve;
- (unsigned int)luxLevel;
- (float)motionDataBiasErrorEstimate;
- (unsigned int)motionDataStatus;
- (int)motionFromAEMatrix;
- (float)normalizedSNR;
- (id)portType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pts;
- (unsigned int)readNoise_1x;
- (unsigned int)readNoise_8x;
- (void)reset;
- (unsigned int)sensorDGain;
- (float)sifrGain;

@end
