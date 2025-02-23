/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureDeviceFormatInternal : NSObject {
    bool  backgroundBlurSupported;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  defaultActiveMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  defaultActiveMinFrameDuration;
    FigCaptureSourceFormat * sourceFormat;
    NSArray * supportedDepthDataFormats;
    NSArray * videoSupportedFrameRateRanges;
}

@end
