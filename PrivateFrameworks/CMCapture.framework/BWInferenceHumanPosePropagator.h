/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWInferenceHumanPosePropagator : NSObject <BWEspressoInferenceTensorMemoryProvider, BWInferencePropagatable> {
    NSMutableData * _heatmapData;
    BWInferenceMetadataRequirement * _outputRequirement;
    struct __IOSurface { } * _tensorBackingSurface;
}

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsAsyncPropagation;
- (struct __IOSurface { }*)backingMemoryForMetadataRequirement:(id)arg1 bindingName:(id)arg2 surfaceProperties:(id)arg3;
- (float)calculateIOU:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 with:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)initWithOutputRequirement:(id)arg1;
- (int)keypointsFromModelOutput:(/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 persons:(id)arg4;
- (id)newMatchesOfHumanPoses:(id)arg1 toTracks:(id)arg2;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
