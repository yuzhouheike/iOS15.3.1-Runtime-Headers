/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPlaceholderMutableString : NSMutableString

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(bool)arg4;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (unsigned long long)length;
- (oneway void)release;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;

@end
