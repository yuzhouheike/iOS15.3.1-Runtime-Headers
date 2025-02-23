/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigAlternateObjCVideoAttributes : NSObject {
    struct OpaqueFigAlternate { } * _alternate;
    struct OpaqueFigSimpleMutex { } * _mutex;
    double  _nominalFrameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    NSArray * _videoCodecTypes;
    NSString * _videoRange;
}

@property (nonatomic, readonly) NSArray *codecTypes;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, readonly) NSString *videoRange;

- (id)codecTypes;
- (void)dealloc;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { }*)arg1;
- (double)nominalFrameRate;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)videoRange;

@end
