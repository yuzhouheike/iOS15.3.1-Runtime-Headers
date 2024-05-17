/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMutableMovieTrack : AVMovieTrack {
    AVMutableMovieTrackInternal * _mutableMovieTrackInternal;
}

@property (nonatomic) long long alternateGroupID;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSArray *formatDescriptions;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (nonatomic, copy) AVMediaDataStorage *mediaDataStorage;
@property (nonatomic, copy) NSArray *metadata;
@property (getter=isModified, nonatomic) bool modified;
@property (nonatomic, copy) NSURL *sampleReferenceBaseURL;
@property (nonatomic) int timescale;

+ (bool)expectsPropertyRevisedNotifications;
+ (id)trackWithTrackID:(int)arg1 forMovie:(id)arg2;

- (void).cxx_destruct;
- (void)_addFigAssetTrackNotifications;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigMutableMovie { }*)_figMutableMovie;
- (void)_removeFigAssetTrackNotifications;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1 forProperty:(struct __CFString { }*)arg2;
- (void)_setString:(id)arg1 forProperty:(struct __CFString { }*)arg2;
- (void)_signalMetadataUpdated;
- (struct CGSize { double x1; double x2; })_sizeForProperty:(struct __CFString { }*)arg1;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (long long)alternateGroupID;
- (bool)appendMediaData:(id)arg1 dataOffset:(long long*)arg2;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 decodeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 error:(id*)arg4;
- (id)availableMetadataFormats;
- (struct CGSize { double x1; double x2; })cleanApertureDimensions;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })dimensions;
- (struct CGSize { double x1; double x2; })encodedPixelsDimensions;
- (id)extendedLanguageTag;
- (id)formatDescriptions;
- (bool)hasProtectedContent;
- (id)initWithTrackID:(int)arg1 forMovie:(id)arg2;
- (void)insertEmptyTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)insertMediaTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 intoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (bool)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofTrack:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 copySampleData:(bool)arg4 error:(id*)arg5;
- (bool)isCompatibleWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)isEnabled;
- (bool)isModified;
- (id)languageCode;
- (long long)layer;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)locale;
- (id)mediaDataStorage;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (struct CGSize { double x1; double x2; })productionApertureDimensions;
- (void)removeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 withFormatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (id)sampleReferenceBaseURL;
- (void)scaleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setAlternateGroupID:(long long)arg1;
- (void)setCleanApertureDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEncodedPixelsDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMediaDataStorage:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModified:(bool)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setProductionApertureDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setTimescale:(int)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (int)timescale;
- (int)trackID;

@end
