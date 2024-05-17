/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPProviderDomain : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsContextualMenuDownloadEntry;
    bool  _allowsSystemDeleteAlerts;
    bool  _allowsUserControlledEviction;
    bool  _appliesChangesAtomically;
    bool  _canDisable;
    unsigned long long  _disconnectionState;
    NSFileProviderDomain * _domain;
    NSDictionary * _domainUserInfo;
    bool  _ejectable;
    bool  _enabled;
    NSURL * _extensionBundleURL;
    bool  _hidden;
    NSString * _identifier;
    bool  _isAvailableSystemWide;
    FPItemCollection * _itemCollection;
    bool  _keepLocalStorageUpToDate;
    NSFileProviderManager * _manager;
    bool  _needsAuthentication;
    NSProgress * _progress;
    NSString * _providerDisplayName;
    NSString * _providerID;
    NSString * _purposeIdentifier;
    bool  _readOnly;
    bool  _shouldHideDomainDisplayName;
    bool  _shouldHideExtensionName;
    NSArray * _storageURLs;
    NSArray * _supportedFileTypes;
    NSArray * _supportedSearchFilters;
    bool  _supportsEnumeration;
    bool  _supportsPickingFolders;
    NSString * _topLevelBundleIdentifier;
    bool  _useFPFS;
    bool  _usesUniqueItemIdentifiersAcrossDevices;
    NSString * _version;
}

@property (nonatomic) bool allowsContextualMenuDownloadEntry;
@property (nonatomic) bool allowsSystemDeleteAlerts;
@property (nonatomic) bool allowsUserControlledEviction;
@property (nonatomic) bool appliesChangesAtomically;
@property (nonatomic) bool canDisable;
@property (nonatomic, readonly) bool canDisconnect;
@property (nonatomic, readonly) NSString *containingBundleIdentifier;
@property (nonatomic, readonly) bool containsPhotos;
@property (nonatomic, readonly) NSString *disconnectionReason;
@property (nonatomic) unsigned long long disconnectionState;
@property (nonatomic, retain) NSFileProviderDomain *domain;
@property (nonatomic, readonly) NSString *domainDisplayName;
@property (nonatomic, readonly) NSString *domainFullDisplayName;
@property (nonatomic, retain) NSDictionary *domainUserInfo;
@property (getter=isEjectable, nonatomic) bool ejectable;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, retain) NSURL *extensionBundleURL;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) NSString *iCloudAccountIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isAvailableSystemWide;
@property (nonatomic, readonly) bool isConnectedToAppExtension;
@property (nonatomic, readonly) bool isDataSeparatedDomain;
@property (nonatomic, readonly) bool isEnterpriseDomain;
@property (nonatomic, readonly) bool isMainiCloudDriveDomain;
@property (nonatomic, readonly) bool isiCloudDriveProvider;
@property (nonatomic, readonly) NSString *localizedDisconnectionBannerText;
@property (nonatomic, readonly) NSFileProviderManager *manager;
@property (nonatomic) bool needsAuthentication;
@property (nonatomic, readonly, copy) NSString *personaIdentifier;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) NSString *providerDisplayName;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, retain) NSString *purposeIdentifier;
@property (getter=isReadOnly, nonatomic) bool readOnly;
@property (nonatomic) bool shouldHideDomainDisplayName;
@property (nonatomic) bool shouldHideExtensionName;
@property (readonly) NSString *spotlightMountPoint;
@property (nonatomic, retain) NSArray *storageURLs;
@property (nonatomic, retain) NSArray *supportedFileTypes;
@property (nonatomic, retain) NSArray *supportedSearchFilters;
@property (nonatomic) bool supportsEnumeration;
@property (nonatomic) bool supportsPickingFolders;
@property (nonatomic, readonly) unsigned long long testingModes;
@property (nonatomic, retain) NSString *topLevelBundleIdentifier;
@property (getter=isUsingFPFS, nonatomic) bool useFPFS;
@property (nonatomic) bool usesUniqueItemIdentifiersAcrossDevices;
@property (nonatomic, retain) NSString *version;

+ (void)_t_discardCache;
+ (id)beginMonitoringProviderDomainChangesWithHandler:(id /* block */)arg1;
+ (void)endMonitoringProviderDomainChanges:(id)arg1;
+ (void)fetchProviderDomainForItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchProviderDomainWithID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)providerDomainForItem:(id)arg1 error:(id*)arg2;
+ (id)providerDomainForURL:(id)arg1 error:(id*)arg2;
+ (id)providerDomainWithID:(id)arg1 error:(id*)arg2;
+ (id)providerDomainsWithError:(id*)arg1;
+ (void)removeDomainAndPreserveDataWithID:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)removeDomainWithID:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsContextualMenuDownloadEntry;
- (bool)allowsSystemDeleteAlerts;
- (bool)allowsUserControlledEviction;
- (bool)appliesChangesAtomically;
- (id)bundleURL;
- (bool)canDisable;
- (bool)canDisconnect;
- (id)containingBundleIdentifier;
- (bool)containsPhotos;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disconnectionReason;
- (unsigned long long)disconnectionState;
- (id)domain;
- (id)domainDisplayName;
- (id)domainFullDisplayName;
- (id)domainUserInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)extensionBundleIdentifier;
- (id)extensionBundleURL;
- (unsigned long long)hash;
- (id)iCloudAccountIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderID:(id)arg1 domain:(id)arg2;
- (bool)isAvailableSystemWide;
- (bool)isConnectedToAppExtension;
- (bool)isDataSeparatedDomain;
- (bool)isEjectable;
- (bool)isEmpty;
- (bool)isEnabled;
- (bool)isEnterpriseDomain;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isMainiCloudDriveDomain;
- (bool)isReadOnly;
- (bool)isUsingFPFS;
- (bool)isiCloudDriveProvider;
- (id)localizedDisconnectionBannerText;
- (id)localizedName;
- (id)localizedTitleForSortDescriptor:(id)arg1;
- (id)manager;
- (bool)needsAuthentication;
- (id)personaIdentifier;
- (id)progress;
- (id)providerDisplayName;
- (id)providerID;
- (id)providerIdentifier;
- (id)purposeIdentifier;
- (void)setAllowsContextualMenuDownloadEntry:(bool)arg1;
- (void)setAllowsSystemDeleteAlerts:(bool)arg1;
- (void)setAllowsUserControlledEviction:(bool)arg1;
- (void)setAppliesChangesAtomically:(bool)arg1;
- (void)setCanDisable:(bool)arg1;
- (void)setDisconnectionState:(unsigned long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainUserInfo:(id)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setExtensionBundleURL:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsAvailableSystemWide:(bool)arg1;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setProviderDisplayName:(id)arg1;
- (void)setPurposeIdentifier:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setShouldHideDomainDisplayName:(bool)arg1;
- (void)setShouldHideExtensionName:(bool)arg1;
- (void)setStorageURLs:(id)arg1;
- (void)setSupportedFileTypes:(id)arg1;
- (void)setSupportedSearchFilters:(id)arg1;
- (void)setSupportsEnumeration:(bool)arg1;
- (void)setSupportsPickingFolders:(bool)arg1;
- (void)setTopLevelBundleIdentifier:(id)arg1;
- (void)setUseFPFS:(bool)arg1;
- (void)setUsesUniqueItemIdentifiersAcrossDevices:(bool)arg1;
- (void)setVersion:(id)arg1;
- (bool)shouldHideDomainDisplayName;
- (bool)shouldHideExtensionName;
- (id)spotlightMountPoint;
- (id)storageURL;
- (id)storageURLs;
- (id)supportedFileTypes;
- (id)supportedSearchFilters;
- (bool)supportsEnumeration;
- (bool)supportsPickingFolders;
- (unsigned long long)testingModes;
- (id)topLevelBundleIdentifier;
- (bool)usesUniqueItemIdentifiersAcrossDevices;
- (id)version;

@end
