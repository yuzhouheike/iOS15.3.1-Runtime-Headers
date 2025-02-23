/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnit : NSObject <NSCopying, NSSecureCoding> {
    NSString * _symbol;
}

@property (readonly) Class _effectiveUnitClass;
@property (readonly, copy) NSString *symbol;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)new;
+ (bool)supportsSecureCoding;

- (Class)_effectiveUnitClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)symbol;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_stringRepresentation;

@end
