/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMutableComposition : AVComposition {
    AVMutableCompositionInternal * _mutablePriv;
}

@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) NSArray *tracks;

+ (id)composition;
+ (id)compositionWithURLAssetInitializationOptions:(id)arg1;

- (id)_initWithComposition:(id)arg1;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_notifyTracksThatSegmentsDidChange:(id)arg1 successfully:(bool)arg2;
- (void)_notifyTracksThatSegmentsWillChange:(id)arg1;
- (id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertEmptyTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofAsset:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)removeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)removeTrack:(id)arg1;
- (void)scaleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end
