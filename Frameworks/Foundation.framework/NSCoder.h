/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCoder : NSObject <BSXPCDecoding, BSXPCEncoding, RBSXPCDecoding, RBSXPCEncoding>

@property (nonatomic, readonly) UIStoryboardDecodingContext *_storyboardDecodingContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FPXPCSanitizer *fp_sanitizer;
@property (readonly) unsigned long long hash;
@property (setter=msv_setUserInfo:, nonatomic, copy) NSDictionary *msv_userInfo;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)__categorizeException:(id)arg1 intoError:(id*)arg2;

- (id)__decoderInfoForAllowedClassesWarning;
- (bool)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3;
- (void)__setError:(id)arg1;
- (bool)_allowsValueCoding;
- (bool)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3;
- (bool)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (id)decodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (id)decodeDataObject;
- (id)decodeDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeLongForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct CGPoint { double x1; double x2; })decodePoint;
- (struct CGPoint { double x1; double x2; })decodePointForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeSize;
- (struct CGSize { double x1; double x2; })decodeSizeForKey:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id*)arg1;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2 size:(unsigned long long)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)error;
- (void)failWithError:(id)arg1;
- (struct _NSZone { }*)objectZone;
- (bool)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (unsigned int)systemVersion;
- (bool)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (bool)validateClassSupportsSecureCoding:(Class)arg1;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (id)ls_decodeArrayWithValuesOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClass:(Class)arg2 forKey:(id)arg3;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClasses:(id)arg2 forKey:(id)arg3;
- (id)ls_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)ls_decodeSetWithValuesOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (bool)fp_checkProviderIdentifier:(id)arg1;
- (id)fp_safeDecodeNSDictionaryForKey:(id)arg1;
- (id)fp_sanitizer;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)CA_supportedClasses;

- (bool)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(bool)arg3;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (id)scn_decodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)scn_decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (id)scn_decodeDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)scn_decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

- (struct { long long x1; int x2; unsigned int x3; long long x4; })decodeCMTimeForKey:(id)arg1;
- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })decodeCMTimeMappingForKey:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })decodeCMTimeRangeForKey:(id)arg1;
- (void)encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)_ams_decodeJSONObjectForKey:(id)arg1 error:(id*)arg2;
- (id)_ams_decodePropertyListObjectForKey:(id)arg1 error:(id*)arg2;
- (bool)_ams_encodeJSONObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_ams_encodePropertyListObject:(id)arg1 forKey:(id)arg2 format:(unsigned long long)arg3 error:(id*)arg4;
- (id)ams_decodeJSONArrayForKey:(id)arg1;
- (id)ams_decodeJSONDictionaryForKey:(id)arg1;
- (id)ams_decodePropertyListArrayForKey:(id)arg1;
- (id)ams_decodePropertyListDictionaryForKey:(id)arg1;
- (void)ams_encodeJSONArray:(id)arg1 forKey:(id)arg2;
- (void)ams_encodeJSONDictionary:(id)arg1 forKey:(id)arg2;
- (void)ams_encodePropertyListArray:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;
- (void)ams_encodePropertyListDictionary:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeStringForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

- (id)_IF_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_decodeBytesNoCopyForKey:(id)arg1;
- (void)if_encodeBytesNoCopy:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MLAssetIO.framework/MLAssetIO

- (struct _MIORange { long long x1; long long x2; })decodeMIORangeForKey:(id)arg1;
- (void)encodeMIORange:(struct _MIORange { long long x1; long long x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)decodeTCCIdentityForKey:(id)arg1;
- (void)encodeTCCIdentity:(id)arg1 forKey:(id)arg2;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeStringForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_createStoryboardDecodingContextIfNeeded;
- (id)_decodeObjectsAndTrackChildViewControllerIndexWithParent:(id)arg1 forKey:(id)arg2;
- (id)_decodeObjectsWithSourceSegueTemplate:(id)arg1 creator:(id /* block */)arg2 sender:(id)arg3 forKey:(id)arg4;
- (void)_initializeClassSwapperWithCurrentDecodingViewControllerIfNeeded:(id)arg1;
- (id)_storyboardDecodingContext;
- (bool)_ui_decodeBoolForKey:(id)arg1 defaultValue:(bool)arg2;
- (struct CAFrameRateRange { float x1; float x2; float x3; })_ui_decodeCAFrameRateRangeForKey:(id)arg1;
- (id /* block */)_ui_decodeNSUIntegerVectorForKey:(id)arg1 returnedCount:(unsigned long long*)arg2;
- (id)_ui_decodeTextAttributesForKey:(id)arg1;
- (id /* block */)_ui_decodeVectorForKey:(id)arg1 returnedCount:(unsigned long long*)arg2;
- (void)_ui_encodeCAFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 forKey:(id)arg2;
- (void)_ui_encodeNSUIntegerVector:(const unsigned long long*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)_ui_encodeTextAttributes:(id)arg1 forKey:(id)arg2;
- (void)_ui_encodeVector:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (bool)_ui_isInterprocess;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })decodeDirectionalEdgeInsetsForKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (struct UIOffset { double x1; double x2; })decodeUIOffsetForKey:(id)arg1;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIOffset:(struct UIOffset { double x1; double x2; })arg1 forKey:(id)arg2;

@end
