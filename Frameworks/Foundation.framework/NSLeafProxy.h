/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLeafProxy <NSCopying> {
    NSString * dir;
    NSDocInfo * docInfo;
    NSString * file;
    Class  isa;
    id  realObject;
    long long  refCount;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)forwardInvocation:(id)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (bool)isProxy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)reallyDealloc;
- (void)release;
- (id)retain;
- (unsigned long long)retainCount;

// Image: /usr/lib/libobjc.A.dylib

+ (void)initialize;

@end
