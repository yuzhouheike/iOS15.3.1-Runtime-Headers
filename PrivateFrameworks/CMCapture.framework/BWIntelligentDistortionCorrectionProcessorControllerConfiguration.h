/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWIntelligentDistortionCorrectionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {
    struct { 
        int width; 
        int height; 
    }  _geometricDistortionCorrectionExpandedImageDimensions;
    int  _horizontalSensorBinningFactor;
    bool  _intelligentDistortionCorrectionAppliesFinalDimensions;
    bool  _intelligentDistortionCorrectionEnabled;
    int  _intelligentDistortionCorrectionVersion;
    NSArray * _portTypesWithGeometricDistortionCorrectionEnabled;
    struct { 
        unsigned int maximumImageWidth; 
        unsigned int maximumImageHeight; 
        unsigned int maximumPersonMaskWidth; 
        unsigned int maximumPersonMaskHeight; 
    }  _processorConfig;
    NSDictionary * _providedInferenceAttachedMediaByMode;
    int  _verticalSensorBinningFactor;
}

@property (nonatomic) struct { int x1; int x2; } geometricDistortionCorrectionExpandedImageDimensions;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) bool intelligentDistortionCorrectionAppliesFinalDimensions;
@property (nonatomic) bool intelligentDistortionCorrectionEnabled;
@property (nonatomic) int intelligentDistortionCorrectionVersion;
@property (nonatomic, retain) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } processorConfig;
@property (nonatomic, retain) NSDictionary *providedInferenceAttachedMediaByMode;
@property (nonatomic) int verticalSensorBinningFactor;

- (void)dealloc;
- (struct { int x1; int x2; })geometricDistortionCorrectionExpandedImageDimensions;
- (int)horizontalSensorBinningFactor;
- (bool)intelligentDistortionCorrectionAppliesFinalDimensions;
- (bool)intelligentDistortionCorrectionEnabled;
- (int)intelligentDistortionCorrectionVersion;
- (id)portTypesWithGeometricDistortionCorrectionEnabled;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })processorConfig;
- (id)providedInferenceAttachedMediaByMode;
- (void)setGeometricDistortionCorrectionExpandedImageDimensions:(struct { int x1; int x2; })arg1;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setIntelligentDistortionCorrectionAppliesFinalDimensions:(bool)arg1;
- (void)setIntelligentDistortionCorrectionEnabled:(bool)arg1;
- (void)setIntelligentDistortionCorrectionVersion:(int)arg1;
- (void)setPortTypesWithGeometricDistortionCorrectionEnabled:(id)arg1;
- (void)setProcessorConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setProvidedInferenceAttachedMediaByMode:(id)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (int)verticalSensorBinningFactor;

@end
