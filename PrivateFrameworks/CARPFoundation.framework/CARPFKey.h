/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CARPFoundation.framework/CARPFoundation
 */

@interface CARPFKey : CARPFObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    unsigned long long  _size;
    NSString * _type;
}

@property (readonly, copy) NSData *data;
@property (readonly) unsigned long long size;
@property (readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carpf_shortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 size:(unsigned long long)arg2 data:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (unsigned long long)size;
- (id)type;

@end
