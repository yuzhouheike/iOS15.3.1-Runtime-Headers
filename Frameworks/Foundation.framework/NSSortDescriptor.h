/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSortDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    SEL  _selector;
    id  _selectorOrBlock;
    unsigned long long  _sortDescriptorFlags;
}

@property (readonly) bool ascending;
@property (readonly) id /* block */ comparator;
@property (readonly, copy) NSString *key;
@property (readonly, retain) id reversedSortDescriptor;
@property (readonly) SEL selector;

+ (id)_defaultSelectorName;
+ (void)initialize;
+ (id)sortDescriptorWithKey:(id)arg1;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(bool)arg2;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(bool)arg2 comparator:(id /* block */)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(bool)arg2 reverseNullOrder:(bool)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(bool)arg2 selector:(SEL)arg3;
+ (bool)supportsSecureCoding;

- (void)_disallowEvaluation;
- (bool)_isEqualToSortDescriptor:(id)arg1;
- (id)_selectorName;
- (void)_setAscending:(bool)arg1;
- (void)_setKey:(id)arg1;
- (void)_setSelectorName:(id)arg1;
- (void)allowEvaluation;
- (bool)ascending;
- (id /* block */)comparator;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2 comparator:(id /* block */)arg3;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2 reverseNullOrder:(bool)arg3;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2 reverseNullOrder:(bool)arg3 selector:(SEL)arg4;
- (id)initWithKey:(id)arg1 ascending:(bool)arg2 selector:(SEL)arg3;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)replacementObjectForPortCoder:(id)arg1;
- (bool)reverseNullOrder;
- (id)reversedSortDescriptor;
- (SEL)selector;
- (void)setReverseNullOrder:(bool)arg1;

@end
