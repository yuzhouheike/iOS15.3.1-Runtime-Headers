/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UIFontCacheKey : NSObject <NSCopying> {
    unsigned long long  _hash;
}

+ (id)newFontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 textLegibility:(bool)arg6;
+ (id)newFontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3;
+ (id)newFontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 textLegibility:(bool)arg3;
+ (id)newSystemFontCacheKeyWithDesign:(id)arg1 weight:(double)arg2 pointSize:(double)arg3 monospacedDigits:(bool)arg4;
+ (id)newSystemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2;

- (unsigned long long)_hash;
- (bool)_isEqualToKey:(id)arg1;
- (void)_precalculateHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
