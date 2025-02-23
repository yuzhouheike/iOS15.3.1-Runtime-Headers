/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal * _syncLayer;
}

@property (nonatomic, retain) AVPlayerItem *playerItem;

+ (void)initialize;
+ (id)synchronizedLayerWithPlayerItem:(id)arg1;

- (void)_removeSelfFromPlayerItem;
- (void)dealloc;
- (id)init;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;

@end
