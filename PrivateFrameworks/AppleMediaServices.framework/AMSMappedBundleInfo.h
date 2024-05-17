/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMappedBundleInfo : NSObject {
    NSString * _accountMediaType;
    NSString * _bundleIdentifier;
    NSString * _clientName;
    NSString * _clientVersion;
    NSString * _scheme;
    NSString * _secureScheme;
}

@property (nonatomic, retain) NSString *accountMediaType;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, retain) NSString *scheme;
@property (nonatomic, retain) NSString *secureScheme;

+ (id)_accountMediaTypeForClientName:(id)arg1 bundleID:(id)arg2;
+ (id)_clientNameFromProcessInfo:(id)arg1;
+ (id)_clientVersionFromProcessInfo:(id)arg1 clientName:(id)arg2;
+ (id)accountMediaTypeInfoForProcessInfo:(id)arg1;
+ (id)bundleInfoForMobileAppStoreWithProcessInfo:(id)arg1;
+ (id)bundleInfoForProcessInfo:(id)arg1;
+ (id)currentBundleInfo;

- (void).cxx_destruct;
- (id)_initWithClient:(long long)arg1 processInfo:(id)arg2;
- (id)accountMediaType;
- (id)bundleIdentifier;
- (id)clientName;
- (id)clientVersion;
- (id)scheme;
- (id)secureScheme;
- (void)setAccountMediaType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setSecureScheme:(id)arg1;

@end
