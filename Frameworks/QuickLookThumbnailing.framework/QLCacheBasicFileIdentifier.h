/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {
    unsigned long long  _fileId;
    struct fsid { 
        int val[2]; 
    }  _fsid;
}

@property (readonly) unsigned long long fileId;
@property (readonly) struct fsid { int x1[2]; } fsid;

+ (bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileId;
- (struct fsid { int x1[2]; })fsid;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileId:(unsigned long long)arg1 fsid:(struct fsid { int x1[2]; })arg2;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;

@end
