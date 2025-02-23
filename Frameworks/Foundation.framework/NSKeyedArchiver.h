/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyedArchiver : NSCoder {
    void * _cache;
    unsigned long long  _cacheSize;
    id  _classNameMap;
    id  _classes;
    id  _conditionals;
    id  _containers;
    id  _delegate;
    unsigned long long  _estimatedCount;
    _Atomic unsigned long long  _flags;
    unsigned long long  _genericKey;
    id  _objRefMap;
    id  _objects;
    id  _replacementMap;
    void * _reserved0;
    void * _reserved2;
    void * _stream;
    id  _visited;
}

@property <NSKeyedArchiverDelegate> *delegate;
@property (readonly) NSData *encodedData;
@property unsigned long long outputFormat;
@property bool requiresSecureCoding;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)archivedDataWithRootObject:(id)arg1 requiringSecureCoding:(bool)arg2 error:(id*)arg3;
+ (id)classNameForClass:(Class)arg1;
+ (void)initialize;
+ (void)setClassName:(id)arg1 forClass:(Class)arg2;

- (bool)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;
- (id)_initWithOutput:(id)arg1;
- (void)_setBlobForCurrentObject:(id)arg1;
- (bool)allowsKeyedCoding;
- (id)classNameForClass:(Class)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
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
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)encodedData;
- (void)finishEncoding;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (id)initRequiringSecureCoding:(bool)arg1;
- (unsigned long long)outputFormat;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (bool)requiresSecureCoding;
- (void)setClassName:(id)arg1 forClass:(Class)arg2;
- (void)setDelegate:(id)arg1;
- (void)setOutputFormat:(unsigned long long)arg1;
- (void)setRequiresSecureCoding:(bool)arg1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_archivedDataWithRootObject:(id)arg1;
+ (id)cat_archivedDataWithRootObject:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (bool)nr_secureArchiveRootObject:(id)arg1 toFile:(id)arg2;
+ (bool)nr_secureArchiveRootObject:(id)arg1 toFile:(id)arg2 withOptions:(unsigned long long)arg3;
+ (id)nr_secureArchivedDataWithRootObject:(id)arg1;

@end
