/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal * _assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;

- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (bool)isProxy;
- (id)tracks;

@end
