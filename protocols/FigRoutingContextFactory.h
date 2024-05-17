/* Generated by RuntimeBrowser.
 */

@protocol FigRoutingContextFactory <NSObject>

@required

- (int)copyContextForUUIDWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copyDisplayMenuVideoContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySidePlayContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemAudioContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemMirroringContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemMusicContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemRemotePoolContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createAudioContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createControlChannelOnlyContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createPerAppSecondDisplayContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createRemoteMusicControllerContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createVideoContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;

@optional

- (int)copyAllAudioContexts:(const struct __CFArray {}**)arg1;
- (int)copyDefaultContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;

@end
