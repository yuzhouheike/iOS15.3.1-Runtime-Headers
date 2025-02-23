/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding> {
    NSData * _contentVersion;
    NSData * _metadataVersion;
}

@property (nonatomic, readonly) NSData *contentVersion;
@property (nonatomic, readonly) NSData *metadataVersion;

+ (id)beforeFirstSyncComponent;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)metadataVersion;
- (id)versionRewritingBeforeFirstSync;

@end
