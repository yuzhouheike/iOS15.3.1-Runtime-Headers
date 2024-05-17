/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICommonAssetStorage : NSObject {
    void * _appearancedb;
    NSDictionary * _appearances;
    void * _bitmapKeydb;
    void * _colordb;
    struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; } * _extendedMetadata;
    NSSet * _externalTags;
    void * _facetKeysdb;
    void * _fontdb;
    void * _fontsizedb;
    NSData * _globals;
    unsigned int  _hasAppearanceKey;
    unsigned int  _hasLocalizationKey;
    struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } * _header;
    void * _imagedb;
    unsigned int  _isMemoryMapped;
    struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * _keyfmt;
    struct _renditionkeyattributeindex { 
        unsigned long long keymask; 
        unsigned char keyindices[65]; 
        unsigned int nkeys; 
        unsigned int keylist[29]; 
    }  _keyfmtindex;
    void * _localizationdb;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _renditionInfoCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renditionInfoCacheLock;
    unsigned short  _renditionInfoCacheLookup;
    unsigned int  _reserved;
    unsigned int  _swap;
}

@property (nonatomic) void*appearancedb;
@property (nonatomic, readonly) NSDictionary *appearances;
@property (nonatomic) void*bitmapKeydb;
@property (nonatomic) void*colordb;
@property (nonatomic) struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; }*extendedMetadata;
@property (nonatomic) void*facetKeysdb;
@property (nonatomic) void*fontdb;
@property (nonatomic) void*fontsizedb;
@property (nonatomic, retain) NSData *globals;
@property (nonatomic) struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; }*header;
@property (nonatomic) void*imagedb;
@property (nonatomic) struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*keyfmt;
@property (nonatomic) void*localizationdb;

+ (bool)isValidAssetStorageWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (bool)isValidAssetStorageWithURL:(id)arg1;

- (void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4;
- (struct _BOMStorage { }*)_bomStorage;
- (void)_bringHeaderInfoUpToDate;
- (void)_buildBitmapInfoIntoDictionary:(id)arg1;
- (bool)_commonInitWithStorage:(struct _BOMStorage { }*)arg1 forWritting:(bool)arg2;
- (const struct FontValue { BOOL x1[128]; float x2; }*)_fontValueForFontType:(id)arg1;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;
- (void)_loadExtendedMetadata;
- (id)_readAppearances;
- (long long)_storagefileTimestamp;
- (void)_swapHeader;
- (void)_swapKeyFormat;
- (void)_swapRenditionKeyArray:(unsigned short*)arg1;
- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; })_swapRenditionKeyToken:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; })arg1;
- (id)allAssetKeys;
- (id)allRenditionNames;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (void*)appearancedb;
- (id)appearances;
- (bool)assetExistsForKey:(id)arg1;
- (bool)assetExistsForKeyData:(const void*)arg1 length:(unsigned long long)arg2;
- (id)assetForKey:(id)arg1;
- (id)assetKeysMatchingBlock:(id /* block */)arg1;
- (unsigned int)associatedChecksum;
- (id)authoringTool;
- (void*)bitmapKeydb;
- (id)catalogGlobalData;
- (unsigned int)colorSpaceID;
- (void*)colordb;
- (unsigned int)coreuiVersion;
- (void)dealloc;
- (id)deploymentPlatform;
- (id)deploymentPlatformVersion;
- (id)description;
- (void)enumerateBitmapIndexUsingBlock:(id /* block */)arg1;
- (bool)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(id /* block */)arg1;
- (void)enumerateRenditionInfosUsingBlock:(id /* block */)arg1;
- (struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; }*)extendedMetadata;
- (id)externalTags;
- (void*)facetKeysdb;
- (float)fontSizeForFontSizeType:(id)arg1;
- (void*)fontdb;
- (void*)fontsizedb;
- (bool)getBaselineOffset:(float*)arg1 forFontType:(id)arg2;
- (bool)getColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 forName:(const char *)arg2;
- (bool)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
- (id)globals;
- (bool)hasColorForName:(const char *)arg1;
- (struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; }*)header;
- (void*)imagedb;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 forWriting:(bool)arg2;
- (const struct _renditionkeyattributeindex { unsigned long long x1; unsigned char x2[65]; unsigned int x3; unsigned int x4[29]; }*)keyAttributeIndex;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (id)keyFormatData;
- (int)keySemantics;
- (struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyfmt;
- (unsigned short)localizationIdentifierForName:(id)arg1;
- (void*)localizationdb;
- (id)localizations;
- (struct os_unfair_lock_s { unsigned int x1; }*)lock;
- (const char *)mainVersionString;
- (long long)maximumRenditionKeyTokenCount;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)nameForLocalizationIdentifier:(unsigned short)arg1;
- (id)path;
- (unsigned int)renditionCount;
- (struct os_unfair_lock_s { unsigned int x1; }*)renditionInfoCacheLock;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)renditionNameForKeyBaseList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionNamesWithKeys;
- (unsigned int)schemaVersion;
- (void)setAppearancedb:(void*)arg1;
- (void)setBitmapKeydb:(void*)arg1;
- (void)setColordb:(void*)arg1;
- (void)setExtendedMetadata:(struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; }*)arg1;
- (void)setExternalTags:(id)arg1;
- (void)setFacetKeysdb:(void*)arg1;
- (void)setFontdb:(void*)arg1;
- (void)setFontsizedb:(void*)arg1;
- (void)setGlobals:(id)arg1;
- (void)setHeader:(struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg1;
- (void)setImagedb:(void*)arg1;
- (void)setKeyfmt:(struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1;
- (void)setLocalizationdb:(void*)arg1;
- (long long)storageTimestamp;
- (unsigned int)storageVersion;
- (bool)swapped;
- (id)thinningArguments;
- (bool)usesCUISystemThemeRenditionKey;
- (id)uuid;
- (int)validateBitmapInfo;
- (int)validateFile;
- (int)validatekeyformat;
- (const char *)versionString;
- (bool)writeToPath:(id)arg1 withTreePageSize:(unsigned int)arg2;

@end
