/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor {
    NSArray * _boundingBoxBuffers;
    unsigned long long  _boundingBoxStride;
}

@property (nonatomic, retain) NSArray *boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxStride;

- (id)boundingBoxBuffers;
- (unsigned long long)boundingBoxStride;
- (void)dealloc;
- (unsigned long long)primitiveType;
- (void)setBoundingBoxBuffers:(id)arg1;
- (void)setBoundingBoxStride:(unsigned long long)arg1;

@end
