/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOKeyBagNotification : NSObject {
    int  _currentState;
    int  _notifyToken;
}

@property (nonatomic, readonly) int state;

+ (bool)canAccessFilesWithProtection:(unsigned long long)arg1;
+ (id)sharedObject;

- (void)_statusChanged;
- (bool)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2;
- (bool)canAccessFilesWithProtection:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;
- (int)state;
- (void)updateState;

@end
