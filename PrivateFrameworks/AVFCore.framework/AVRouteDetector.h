/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal * _routeDetectorInternal;
}

@property (readonly) bool multipleRoutesDetected;
@property (getter=isRouteDetectionEnabled) bool routeDetectionEnabled;

+ (void)initialize;

- (void)_updateMultipleRoutesDetected;
- (void)dealloc;
- (id)init;
- (bool)isRouteDetectionEnabled;
- (bool)multipleRoutesDetected;
- (void)setRouteDetectionEnabled:(bool)arg1;

@end
