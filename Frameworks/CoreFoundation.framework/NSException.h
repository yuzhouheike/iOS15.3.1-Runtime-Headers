/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSException : NSObject <NSCopying, NSSecureCoding> {
    NSString * name;
    NSString * reason;
    id  reserved;
    NSDictionary * userInfo;
}

@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (bool)supportsSecureCoding;

- (bool)_installStackTraceKeyIfNeeded;
- (bool)_isUnarchived;
- (void)_markAsUnarchived;
- (id)callStackReturnAddresses;
- (id)callStackSymbols;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)raise;
- (id)reason;
- (id)redactedDescription;
- (id)userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

- (id)nr_safeDescription;

@end
