/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFAttributedString : NSMutableAttributedString

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributedString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)string;

@end
