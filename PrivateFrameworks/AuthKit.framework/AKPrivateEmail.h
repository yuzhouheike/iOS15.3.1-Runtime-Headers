/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKPrivateEmail : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    NSString * _privateEmailAddress;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *privateEmailAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 forKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)privateEmailAddress;

@end
