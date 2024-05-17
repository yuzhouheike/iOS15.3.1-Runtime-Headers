/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {
    FPItemID * _itemID;
}

@property (readonly, copy) FPItemID *itemID;

+ (id)knownFileProviderIdentifiersSoFar;
+ (bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemID;

@end
