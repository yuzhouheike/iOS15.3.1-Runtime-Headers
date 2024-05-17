/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyedUnarchiver : NSCoder {
    const char * _bytes;
    id  _containers;
    id  _data;
    id  _delegate;
    _Atomic unsigned long long  _flags;
    int  _genericKey;
    id  _helper;
    unsigned long long  _len;
    id  _nameClassMap;
    id  _objRefMap;
    id  _objects;
    void * _offsetData;
    id  _refObjMap;
    id  _replacementMap;
    void * _reserved0;
    id  _tmpRefObjMap;
}

@property long long decodingFailurePolicy;
@property <NSKeyedUnarchiverDelegate> *delegate;
@property bool requiresSecureCoding;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_strictlyUnarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (Class)classForClassName:(id)arg1;
+ (void)initialize;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1 error:(id*)arg2;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id*)arg2;
+ (id)unarchivedArrayOfObjectsOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)unarchivedArrayOfObjectsOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)unarchivedDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 fromData:(id)arg3 error:(id*)arg4;
+ (id)unarchivedDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 fromData:(id)arg3 error:(id*)arg4;
+ (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;

- (void)__setError:(id)arg1;
- (id)_allowedClassNames;
- (bool)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (bool)_containsNextUnkeyedObject;
- (unsigned int)_currentUniqueIdentifier;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)_decodePropertyListForKey:(id)arg1;
- (void)_enableStrictSecureDecodingMode;
- (void)_enforceExplicitPlistTypes;
- (void)_enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
- (id)_initForReadingFromData:(id)arg1 error:(id*)arg2 throwLegacyExceptions:(bool)arg3;
- (id)_initWithStream:(struct __CFReadStream { }*)arg1 data:(id)arg2 topDict:(struct __CFDictionary { }*)arg3;
- (void)_replaceObject:(id)arg1 withObject:(id)arg2;
- (void)_setAllowedClassNames:(id)arg1;
- (bool)_strictSecureDecodingEnabled;
- (void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2;
- (bool)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2;
- (bool)_willEnforceExplicitPlistTypes;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (Class)classForClassName:(id)arg1;
- (bool)containsValueForKey:(id)arg1;
- (void)dealloc;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (id)decodeDataObject;
- (id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (id)delegate;
- (id)description;
- (id)error;
- (void)finishDecoding;
- (id)init;
- (id)initForReadingFromData:(id)arg1 error:(id*)arg2;
- (id)initForReadingWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (bool)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;
- (void)setDecodingFailurePolicy:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequiresSecureCoding:(bool)arg1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)cls_secureUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)cls_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)ls_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/CARPFoundation.framework/CARPFoundation

+ (id)carpf_unarchivedObjectOfClass:(Class)arg1 fromClassName:(id)arg2 fromData:(id)arg3 error:(id*)arg4;
+ (id)deserializeObjectWithData:(id)arg1 allowedClass:(Class)arg2 frameworkClasses:(id)arg3;
+ (id)deserializeObjectWithData:(id)arg1 allowedClasses:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_unarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)cat_unarchiveObjectOfClass:(Class)arg1 withData:(id)arg2 error:(id*)arg3;
+ (id)cat_unarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)cat_unarchiveObjectOfClasses:(id)arg1 withData:(id)arg2 error:(id*)arg3;
+ (id)cat_unarchivePropertyListObjectWithData:(id)arg1;
+ (id)cat_unarchivePropertyListObjectWithData:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)ids_secureUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withFile:(id)arg2;

// Image: /usr/lib/swift/libswiftFoundation.dylib

+ (int)_swift_checkClassAndWarnForKeyedArchiving:(Class)arg1 operation:(int)arg2;

@end
