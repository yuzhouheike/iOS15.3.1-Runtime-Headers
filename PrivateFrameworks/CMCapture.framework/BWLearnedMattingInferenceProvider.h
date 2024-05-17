/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWLearnedMattingInferenceProvider : BWTiledEspressoInferenceProvider {
    void _inputAlphaScale;
    BWInferenceVideoRequirement * _inputAlphaVideoRequirement;
    BWInferenceVideoRequirement * _inputImageVideoRequirement;
    void _inputTileOverlap;
    void _inputTileSize;
    FigLearnedMattingMetalStage * _metalProcessor;
    void _numTiles;
    BWInferenceVideoRequirement * _outputAlphaVideoRequirement;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    void _outputTileOverlap;
    void _outputTileSize;
}

+ (void)initialize;

- (int)createInputTileFor:(void *)arg1 to:(void *)arg2 withInputs:(void *)arg3 atPosition:(void *)arg4 cmdBuffer:(void *)arg5; // needs 5 arg types, found 4: id, struct __CVBuffer { }*, id, id*
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceProvider:(id)arg2;
- (int)preProcessOutputBuffer:(struct __CVBuffer { }*)arg1;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (int)propagateInferenceResultsFrom:(struct __CVBuffer { }*)arg1 to:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)purgeIntermediateResources;
- (int)type;
- (int)writeOutputTile:(void *)arg1 to:(void *)arg2 withAdditionalPixelBuffers:(void *)arg3 withInputTilePixelBuffers:(void *)arg4 withInputFullPixelBuffers:(void *)arg5 atPosition:(void *)arg6 cmdBuffer:(void *)arg7; // needs 7 arg types, found 6: struct __CVBuffer { }*, struct __CVBuffer { }*, id, id, id, id*

@end
