/* Generated by RuntimeBrowser.
 */

@protocol BWInferenceResourceProvider <NSObject>

@required

- (BWMetalInferenceContext *)defaultDeviceMetalContext;
- (BWEspressoInferenceContext *)espressoContextForExecutionTarget:(int)arg1;
- (BWFigCaptureISPProcessingSession *)ispProcessingSessionForExecutionTarget:(int)arg1;
- (BWVisionInferenceContext *)visionContextForExecutionTarget:(int)arg1;

@end
