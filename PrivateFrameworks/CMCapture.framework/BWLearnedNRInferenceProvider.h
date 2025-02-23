/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWLearnedNRInferenceProvider : BWTiledEspressoInferenceProvider {
    BWLearnedNRInferenceConfiguration * _configuration;
    BWInferenceVideoRequirement * _inputVideoRequirement;
    LearnedNRMetalStage * _metalStage;
    short  _networkVersion;
    void _numTiles;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    BWInferenceVideoRequirement * _outputVideoRequirement;
    void _tileSize;
}

+ (void)initialize;

- (int)createInputTileFor:(void *)arg1 to:(void *)arg2 withInputs:(void *)arg3 atPosition:(void *)arg4 cmdBuffer:(void *)arg5; // needs 5 arg types, found 4: id, struct __CVBuffer { }*, id, id*
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceProvider:(id)arg2;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (int)propagateInferenceResultsFrom:(struct __CVBuffer { }*)arg1 to:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)purgeIntermediateResources;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)type;
- (int)writeOutputTile:(void *)arg1 to:(void *)arg2 withAdditionalPixelBuffers:(void *)arg3 withInputTilePixelBuffers:(void *)arg4 withInputFullPixelBuffers:(void *)arg5 atPosition:(void *)arg6 cmdBuffer:(void *)arg7; // needs 7 arg types, found 6: struct __CVBuffer { }*, struct __CVBuffer { }*, id, id, id, id*

@end
