/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSRunLoop : NSObject {
    NSString * _currentMode;
    id  _dperf;
    id  _info;
    id  _perft;
    id  _ports;
    void * _reserved;
    id  _rl;
}

@property (readonly, copy) NSString *currentMode;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (void)_deallocHelper;
- (id)_dperf;
- (id)_info;
- (id)_initWithRl:(id)arg1 dperf:(id)arg2 perft:(id)arg3 info:(id)arg4 ports:(id)arg5;
- (id)_perft;
- (id)_ports;
- (id)currentMode;
- (struct __CFRunLoop { }*)getCFRunLoop;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_new:(id)arg1;
+ (id)currentRunLoop;
+ (id)mainRunLoop;

- (void)_addPort:(id)arg1 forMode:(id)arg2;
- (bool)_containsPort:(id)arg1 forMode:(id)arg2;
- (void)_enumerateInfoPairsWithBlock:(id /* block */)arg1;
- (void)_invalidateTimers;
- (void)_portInvalidated:(id)arg1;
- (void)_removePort:(id)arg1 forMode:(id)arg2;
- (void)_wakeup;
- (void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2;
- (void)addPort:(id)arg1 forMode:(id)arg2;
- (void)addTimer:(id)arg1 forMode:(id)arg2;
- (id)allModes;
- (void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)cancelPerformSelectorsWithTarget:(id)arg1;
- (bool)containsPort:(id)arg1 forMode:(id)arg2;
- (bool)containsTimer:(id)arg1 forMode:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)limitDateForMode:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)performInModes:(id)arg1 block:(id /* block */)arg2;
- (void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5;
- (id)portsForMode:(id)arg1;
- (void)removePort:(id)arg1 forMode:(id)arg2;
- (void)removeTimer:(id)arg1 forMode:(id)arg2;
- (void)run;
- (bool)runBeforeDate:(id)arg1;
- (bool)runMode:(id)arg1 beforeDate:(id)arg2;
- (bool)runMode:(id)arg1 untilDate:(id)arg2;
- (void)runUntilDate:(id)arg1;
- (id)timersForMode:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_networkIORunLoop;
+ (void)set_mapkit_networkIORunLoop:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (void)cat_performBlock:(id /* block */)arg1;
+ (void)cat_performBlockOnMainRunLoop:(id /* block */)arg1;

- (void)cat_performBlock:(id /* block */)arg1;
- (void)cat_performInModes:(id)arg1 block:(id /* block */)arg2;

// Image: /usr/lib/swift/libswiftFoundation.dylib

- (void)runLoopScheduledWithAction:(id)arg1;

@end
