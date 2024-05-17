/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIStoreMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _DSPersonID;
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _artistName;
    NSString * _assetToken;
    NSString * _betaBuildGroupID;
    NSNumber * _betaExternalVersionIdentifier;
    NSString * _bundleShortVersionString;
    NSString * _bundleVersion;
    NSArray * _categories;
    bool  _deviceBasedVPP;
    NSNumber * _downloaderID;
    NSString * _enterpriseInstallURL;
    bool  _factoryInstall;
    NSNumber * _familyID;
    bool  _gameCenterEnabled;
    bool  _gameCenterEverEnabled;
    NSString * _genre;
    NSNumber * _genreID;
    bool  _hasMessagesExtension;
    NSString * _iAdAttribution;
    NSString * _iAdConversionDate;
    NSString * _iAdImpressionDate;
    NSNumber * _initialODRSize;
    bool  _isAutoDownload;
    NSNumber * _itemID;
    NSString * _itemName;
    NSString * _kind;
    NSString * _label;
    bool  _launchProhibited;
    NSString * _md5;
    NSDictionary * _nameTranscriptions;
    NSData * _protectedMetadata;
    NSString * _purchaseDate;
    bool  _purchasedRedownload;
    NSNumber * _purchaserID;
    NSString * _ratingLabel;
    NSNumber * _ratingRank;
    NSString * _redownloadParams;
    NSString * _referrerApp;
    NSString * _referrerURL;
    NSString * _releaseDate;
    bool  _sideLoadedDeviceBasedVPP;
    NSString * _softwareVersionBundleID;
    NSNumber * _softwareVersionExternalIdentifier;
    NSString * _sourceApp;
    NSString * _storeCohort;
    NSNumber * _storefront;
    NSArray * _subGenres;
    NSString * _variantID;
}

@property (nonatomic, retain) NSNumber *DSPersonID;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *assetToken;
@property (nonatomic, copy) NSString *betaBuildGroupID;
@property (nonatomic, retain) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, copy) NSString *bundleShortVersionString;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic) bool deviceBasedVPP;
@property (nonatomic, retain) NSNumber *downloaderID;
@property (nonatomic, copy) NSString *enterpriseInstallURL;
@property (getter=isFactoryInstall, nonatomic) bool factoryInstall;
@property (nonatomic, retain) NSNumber *familyID;
@property (getter=isGameCenterEnabled, nonatomic) bool gameCenterEnabled;
@property (nonatomic) bool gameCenterEverEnabled;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) NSNumber *genreID;
@property (nonatomic) bool hasMessagesExtension;
@property (nonatomic, copy) NSString *iAdAttribution;
@property (nonatomic, copy) NSString *iAdConversionDate;
@property (nonatomic, copy) NSString *iAdImpressionDate;
@property (nonatomic, retain) NSNumber *initialODRSize;
@property (nonatomic) bool isAutoDownload;
@property (nonatomic, retain) NSNumber *itemID;
@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *label;
@property (getter=isLaunchProhibited, nonatomic) bool launchProhibited;
@property (nonatomic, copy) NSString *md5;
@property (nonatomic, copy) NSDictionary *nameTranscriptions;
@property (nonatomic, copy) NSData *protectedMetadata;
@property (nonatomic, copy) NSString *purchaseDate;
@property (getter=isPurchasedRedownload, nonatomic) bool purchasedRedownload;
@property (nonatomic, retain) NSNumber *purchaserID;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic, retain) NSNumber *ratingRank;
@property (nonatomic, copy) NSString *redownloadParams;
@property (nonatomic, copy) NSString *referrerApp;
@property (nonatomic, copy) NSString *referrerURL;
@property (nonatomic, copy) NSString *releaseDate;
@property (nonatomic) bool sideLoadedDeviceBasedVPP;
@property (nonatomic, copy) NSString *softwareVersionBundleID;
@property (nonatomic, retain) NSNumber *softwareVersionExternalIdentifier;
@property (nonatomic, copy) NSString *sourceApp;
@property (nonatomic, copy) NSString *storeCohort;
@property (nonatomic, retain) NSNumber *storefront;
@property (nonatomic, copy) NSArray *subGenres;
@property (nonatomic, copy) NSString *variantID;

+ (id)metadataFromDictionary:(id)arg1;
+ (id)metadataFromPlistAtURL:(id)arg1 error:(id*)arg2;
+ (id)metadataFromPlistData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSPersonID;
- (id)altDSID;
- (id)appleID;
- (id)artistName;
- (id)assetToken;
- (id)betaBuildGroupID;
- (id)betaExternalVersionIdentifier;
- (id)bundleShortVersionString;
- (id)bundleVersion;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)deviceBasedVPP;
- (id)dictionaryRepresentation;
- (id)downloaderID;
- (void)encodeWithCoder:(id)arg1;
- (id)enterpriseInstallURL;
- (id)familyID;
- (bool)gameCenterEverEnabled;
- (id)genre;
- (id)genreID;
- (bool)hasMessagesExtension;
- (id)iAdAttribution;
- (id)iAdConversionDate;
- (id)iAdImpressionDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initialODRSize;
- (bool)isAutoDownload;
- (bool)isEqual:(id)arg1;
- (bool)isFactoryInstall;
- (bool)isGameCenterEnabled;
- (bool)isLaunchProhibited;
- (bool)isPurchasedRedownload;
- (id)itemID;
- (id)itemName;
- (id)kind;
- (id)label;
- (id)md5;
- (id)nameTranscriptions;
- (id)protectedMetadata;
- (id)purchaseDate;
- (id)purchaserID;
- (id)ratingLabel;
- (id)ratingRank;
- (id)redownloadParams;
- (id)referrerApp;
- (id)referrerURL;
- (id)releaseDate;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setAssetToken:(id)arg1;
- (void)setBetaBuildGroupID:(id)arg1;
- (void)setBetaExternalVersionIdentifier:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setDSPersonID:(id)arg1;
- (void)setDeviceBasedVPP:(bool)arg1;
- (void)setDownloaderID:(id)arg1;
- (void)setEnterpriseInstallURL:(id)arg1;
- (void)setFactoryInstall:(bool)arg1;
- (void)setFamilyID:(id)arg1;
- (void)setGameCenterEnabled:(bool)arg1;
- (void)setGameCenterEverEnabled:(bool)arg1;
- (void)setGenre:(id)arg1;
- (void)setGenreID:(id)arg1;
- (void)setHasMessagesExtension:(bool)arg1;
- (void)setIAdAttribution:(id)arg1;
- (void)setIAdConversionDate:(id)arg1;
- (void)setIAdImpressionDate:(id)arg1;
- (void)setInitialODRSize:(id)arg1;
- (void)setIsAutoDownload:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLaunchProhibited:(bool)arg1;
- (void)setMd5:(id)arg1;
- (void)setNameTranscriptions:(id)arg1;
- (void)setProtectedMetadata:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setPurchasedRedownload:(bool)arg1;
- (void)setPurchaserID:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingRank:(id)arg1;
- (void)setRedownloadParams:(id)arg1;
- (void)setReferrerApp:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSideLoadedDeviceBasedVPP:(bool)arg1;
- (void)setSoftwareVersionBundleID:(id)arg1;
- (void)setSoftwareVersionExternalIdentifier:(id)arg1;
- (void)setSourceApp:(id)arg1;
- (void)setStoreCohort:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)setSubGenres:(id)arg1;
- (void)setVariantID:(id)arg1;
- (bool)sideLoadedDeviceBasedVPP;
- (id)softwareVersionBundleID;
- (id)softwareVersionExternalIdentifier;
- (id)sourceApp;
- (id)storeCohort;
- (id)storefront;
- (id)subGenres;
- (id)variantID;

@end
