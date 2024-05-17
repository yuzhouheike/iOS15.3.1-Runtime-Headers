/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTDataUsagePoliciesWrapper : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _policies;
}

@property (nonatomic, retain) NSSet *policies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)policies;
- (void)setPolicies:(id)arg1;

@end
