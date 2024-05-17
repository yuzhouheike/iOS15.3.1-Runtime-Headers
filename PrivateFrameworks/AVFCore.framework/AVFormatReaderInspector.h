/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } * _formatReader;
    bool  didCheckForSaveRestriction;
    bool  hasSaveRestriction;
}

@property (getter=_formatReader, setter=_setFormatReader:, nonatomic, retain) struct OpaqueFigFormatReader { }*formatReader;

- (struct OpaqueFigFormatReader { }*)_formatReader;
- (bool)_hasQTSaveRestriction;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { }*)arg1;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (bool)canContainFragments;
- (id)commonMetadata;
- (bool)containsFragments;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (unsigned long long)hash;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { }*)arg1;
- (bool)isComposable;
- (bool)isEqual:(id)arg1;
- (bool)isExportable;
- (bool)isReadable;
- (id)lyrics;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumTimeOffsetFromLive;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (bool)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackReferences;

@end
