/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {
    BWInferenceVideoFormat * _videoFormat;
}

@property (nonatomic, readonly) BWInferenceVideoFormat *videoFormat;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAttachedMediaKey:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 count:(unsigned long long)arg3;
- (id)initWithVideoRequirement:(id)arg1;
- (bool)isSatisfiedByRequirement:(id)arg1;
- (unsigned long long)satisfactionHash;
- (id)videoFormat;

@end
