/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCDocumentSource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSArray * _documentContentTypes;
    NSString * _domainName;
    bool  _hasTemplateIcon;
    bool  _hidden;
    UIImage * _icon;
    NSString * _identifier;
    NSString * _promptText;
    NSString * _providerName;
    FPProviderDomain * _searching_fileProviderDomain;
}

@property (readonly) bool appearsInMoveUI;
@property (copy) NSString *displayName;
@property (copy) NSArray *documentContentTypes;
@property (copy) NSString *domainName;
@property bool hasTemplateIcon;
@property bool hidden;
@property (retain) UIImage *icon;
@property (copy) NSString *identifier;
@property (readonly) bool isAvailableSystemWide;
@property (readonly) bool isiCloudBased;
@property (copy) NSString *promptText;
@property (copy) NSString *providerName;
@property FPProviderDomain *searching_fileProviderDomain;
@property (readonly) unsigned long long status;
@property (nonatomic, readonly) NSArray *supportedSearchFilters;

+ (void)defaultSourceForBundleIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)defaultSourceForBundleIdentifier:(id)arg1 defaultSourceIdentifier:(id)arg2 sources:(id)arg3;
+ (void)defaultSourceForBundleIdentifier:(id)arg1 selectedSourceIdentifier:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)defaultSourceIdentifierForBundleIdentifier:(id)arg1;
+ (void)endSearchingSources:(id)arg1;
+ (void)setDefaultSource:(id)arg1 forBundleIdentifier:(id)arg2;
+ (void)setDefaultSourceIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)sourceIdentifierOrderWithDefault:(id)arg1;
+ (id)startSearchingSourcesForBundleIdentifier:(id)arg1 updateBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)appearsInMoveUI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)documentContentTypes;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTemplateIcon;
- (unsigned long long)hash;
- (bool)hidden;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAvailableSystemWide;
- (bool)isEqual:(id)arg1;
- (bool)isValidForConfiguration:(id)arg1;
- (bool)isiCloudBased;
- (id)promptText;
- (id)providerName;
- (id)sanitizedSource;
- (id)searching_fileProviderDomain;
- (void)setDisplayName:(id)arg1;
- (void)setDocumentContentTypes:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setHasTemplateIcon:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPromptText:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSearching_fileProviderDomain:(id)arg1;
- (unsigned long long)status;
- (id)supportedSearchFilters;
- (bool)usesEnumeration;

@end
