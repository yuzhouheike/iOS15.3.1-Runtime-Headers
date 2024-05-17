/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWInferenceCompressedVideoRequirement : BWInferenceVideoRequirement {
    BWInferenceVideoRequirement * _uncompressedRequirement;
}

@property (nonatomic, readonly) BWInferenceVideoRequirement *uncompressedRequirement;

+ (id)newRequirementWithUncompressedRequirement:(id)arg1 supportedCompressionType:(int)arg2 supportedLossyCompressionLevel:(int)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithUncompressedRequirement:(id)arg1 compressedVideoFormat:(id)arg2;
- (bool)isSatisfiedByRequirement:(id)arg1;
- (unsigned long long)satisfactionHash;
- (id)uncompressedRequirement;

@end
