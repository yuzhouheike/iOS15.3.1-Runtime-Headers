/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;

- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)invert;
- (void)removeAllObjects;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)removeEntriesPassingTest:(id /* block */)arg1;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)removeKeysForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)setDictionary:(id)arg1;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;

// Image: /System/Library/CoreServices/RawCamera.bundle/RawCamera

- (id)makeSerializable;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAddPropertySafelyForKey:(id)arg1 value:(id)arg2;
- (void)CKSynchronizedRemoveObjectForKey:(id)arg1;
- (bool)CKSynchronizedSetIfAbsentObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)_web_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_safeSetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

- (void)mfo_addEntriesFromDictionaryWithRecursion:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_removeObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (void)ams_setNullableObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)_cn_setObject:(id)arg1 orPlaceholder:(id)arg2 forKey:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

- (void)_processAdditionalInfo:(id)arg1 forFilter:(id)arg2;
- (void)setAverageColorEnabled:(bool)arg1 includingOptimizations:(bool)arg2 withAdditionalInfoPromise:(id /* block */)arg3;
- (void)setBlurRadius:(double)arg1 inputMaskImage:(struct CGImage { }*)arg2 ignoringIdentity:(bool)arg3 includingOptimizations:(bool)arg4 withAdditionalInfoPromise:(id /* block */)arg5;
- (void)setBrightness:(double)arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)setColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)setLuminanceAmount:(double)arg1 values:(id)arg2 ignoringIdentity:(bool)arg3 includingOptimizations:(bool)arg4 withAdditionalInfoPromise:(id /* block */)arg5;
- (void)setSaturation:(double)arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)setTintColor:(id)arg1 includingOptimizations:(bool)arg2 withAdditionalInfoPromise:(id /* block */)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofFilter:(id)arg3;
- (void)setZoom:(double)arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)sortFiltersWithOrder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities

- (void)DMCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)nonRetainingDictionary;
+ (id)nonRetainingKeyAndValueDictionary;
+ (id)retainingKeyDictionary;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_popObjectForKey:(id)arg1;
- (void)if_setBoolIfYES:(bool)arg1 forKey:(id)arg2;
- (void)if_setObjectIfNonNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(bool)arg2 outError:(id*)arg3;
- (void)MCSetBoolRestriction:(id)arg1 value:(bool)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 allowZeroLengthString:(bool)arg4 outError:(id*)arg5;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation

+ (id)MI_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics

- (void)addTurnstileInfoDesc:(const void*)arg1 count:(unsigned int)arg2 elSize:(unsigned int)arg3;
- (void)addWaitInfoDesc:(const void*)arg1 count:(unsigned int)arg2 elSize:(unsigned int)arg3;
- (void)osa_logCounter_countLogTypes_internal:(id)arg1 forOwner:(id)arg2;
- (unsigned long long)osa_logCounter_getForSubtype:(id)arg1 forOwner:(id)arg2;
- (void)osa_logCounter_incrementForSubtype:(id)arg1 signature:(id)arg2 filepath:(const char *)arg3;
- (void)osa_logCounter_incrementForSubtype_internal:(id)arg1 signature:(id)arg2 filepath:(const char *)arg3;
- (bool)osa_logCounter_isLog:(id)arg1 byKey:(id)arg2 count:(unsigned long long*)arg3 withinLimit:(unsigned long long*)arg4 withOptions:(id)arg5;
- (void)osa_logCounter_recordNixedDuplicate:(const char *)arg1;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;
- (id)_mutableDictionaryAtKeyPath:(id)arg1;
- (void)_overlayCustomValueAtKeyPath:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(id /* block */)arg4;
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(bool)arg4 nestedDictionaryHandler:(id /* block */)arg5;
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(bool)arg2 exceptKeyPaths:(id)arg3 exemptionHandler:(id /* block */)arg4;
- (void)pk_removeItemsAtKeyPaths:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

- (void)_pas_setObject:(id)arg1 forNonCopiedKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_dictionaryWithContentsOfDictionaries:(id)arg1;

// Image: /usr/lib/swift/libswiftFoundation.dylib

- (id)__swift_objectForKeyedSubscript:(id)arg1;
- (void)__swift_setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
