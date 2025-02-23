/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying> {
    bool  _allowDuplicateIntersectionFunctionInvocation;
    unsigned long long  _intersectionFunctionTableOffset;
    NSString * _label;
    bool  _opaque;
}

@property (nonatomic) bool allowDuplicateIntersectionFunctionInvocation;
@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool opaque;

- (bool)allowDuplicateIntersectionFunctionInvocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)intersectionFunctionTableOffset;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)opaque;
- (void)setAllowDuplicateIntersectionFunctionInvocation:(bool)arg1;
- (void)setIntersectionFunctionTableOffset:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOpaque:(bool)arg1;

@end
