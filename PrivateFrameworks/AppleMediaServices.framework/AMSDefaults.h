/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDefaults : NSObject

+ (bool)QAMode;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 domain:(struct __CFString { }*)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (id)_valueForKey:(id)arg1;
+ (id)_valueForKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (long long)acknowledgePrivacyOverride;
+ (bool)allowDuplicateAccounts;
+ (bool)allowUpsellEnrollmentForAppliedAccounts;
+ (bool)alwaysSendCacheBuster;
+ (bool)alwaysSendGUID;
+ (long long)applePayClassic;
+ (id)authenticationStarted;
+ (id)bagOverrideIgnoredKeys;
+ (id)bagOverrides;
+ (id)bagURLCookies;
+ (long long)cardEnrollmentAutomatic;
+ (long long)cardEnrollmentManual;
+ (long long)cardEnrollmentSilent;
+ (long long)cardEnrollmentUpsell;
+ (id)defaultPaymentPassIdentifier;
+ (id)demoAccount;
+ (bool)devMode;
+ (id)deviceBiometricIdentities;
+ (long long)deviceBiometricsState;
+ (id)deviceOfferEligibility;
+ (id)deviceOffersSerialNumber;
+ (bool)didRetrieveDeviceOffers;
+ (bool)didRetrieveDeviceOffersEligibility;
+ (bool)didRetrieveTVOffers;
+ (bool)disableHARLogging;
+ (bool)disablePrivacyAcknowledgement;
+ (bool)disableStubbedMarketingItems;
+ (bool)enableCameraRedeem;
+ (bool)enablePurchaseQueue;
+ (bool)enableRemoteSecuritySigning;
+ (bool)forceEngagementPurchaseSuccess;
+ (long long)forceLoadUrlMetrics;
+ (id)harURLFilters;
+ (bool)ignoreServerTrustEvaluation;
+ (bool)includeFullRequestInHARLogging;
+ (bool)includeFullResponseInHARLogging;
+ (id)journeysURLOverride;
+ (id)journeysURLOverrides;
+ (id)lastCarrierOfferRegistrationDate;
+ (id)lastMigratedBuildVersion;
+ (bool)logHARData;
+ (id)marketingItemOverrides;
+ (id)mediaTokenOverride;
+ (id)mescalCertExpiration;
+ (id)metricsCanaryIdentifier;
+ (id)metricsTimingWindowStartTime;
+ (bool)migratedDeviceOffers;
+ (bool)migratedDeviceOffersForWatch;
+ (bool)migratedPrivacyAcknowledgements;
+ (bool)migratedToNewCookieStorage;
+ (id)multiUserContainerID;
+ (bool)perfomedDeviceOfferSetup;
+ (long long)pushEnvironment;
+ (long long)reversePushEnabled;
+ (void)setAcknowledgePrivacyOverride:(long long)arg1;
+ (void)setAllowDuplicateAccounts:(bool)arg1;
+ (void)setAllowUpsellEnrollmentForAppliedAccounts:(bool)arg1;
+ (void)setAlwaysSendCacheBuster:(bool)arg1;
+ (void)setAlwaysSendGUID:(bool)arg1;
+ (void)setApplePayClassic:(long long)arg1;
+ (void)setAuthenticationStarted:(id)arg1;
+ (void)setBagOverrideIgnoredKeys:(id)arg1;
+ (void)setBagOverrides:(id)arg1;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setCardEnrollmentAutomatic:(long long)arg1;
+ (void)setCardEnrollmentManual:(long long)arg1;
+ (void)setCardEnrollmentSilent:(long long)arg1;
+ (void)setCardEnrollmentUpsell:(long long)arg1;
+ (void)setDefaultPaymentPassIdentifier:(id)arg1;
+ (void)setDemoAccount:(id)arg1;
+ (void)setDevMode:(bool)arg1;
+ (void)setDeviceBiometricIdentities:(id)arg1;
+ (void)setDeviceBiometricsState:(long long)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setDidRetrieveDeviceOffers:(bool)arg1;
+ (void)setDidRetrieveDeviceOffersEligibility:(bool)arg1;
+ (void)setDidRetrieveTVOffers:(bool)arg1;
+ (void)setDisableHARLogging:(bool)arg1;
+ (void)setDisablePrivacyAcknowledgement:(bool)arg1;
+ (void)setDisableStubbedMarketingItems:(bool)arg1;
+ (void)setEnableCameraRedeem:(bool)arg1;
+ (void)setEnablePurchaseQueue:(bool)arg1;
+ (void)setEnableRemoteSecuritySigning:(bool)arg1;
+ (void)setForceEngagementPurchaseSuccess:(bool)arg1;
+ (void)setForceLoadUrlMetrics:(long long)arg1;
+ (void)setHarURLFilters:(id)arg1;
+ (void)setIgnoreServerTrustEvaluation:(bool)arg1;
+ (void)setIncludeFullRequestInHARLogging:(bool)arg1;
+ (void)setIncludeFullResponseInHARLogging:(bool)arg1;
+ (void)setJourneysURLOverride:(id)arg1;
+ (void)setJourneysURLOverrides:(id)arg1;
+ (void)setLastCarrierOfferRegistrationDate:(id)arg1;
+ (void)setLastMigratedBuildVersion:(id)arg1;
+ (void)setLogHARData:(bool)arg1;
+ (void)setMarketingItemOverrides:(id)arg1;
+ (void)setMediaTokenOverride:(id)arg1;
+ (void)setMescalCertExpiration:(id)arg1;
+ (void)setMetricsCanaryIdentifier:(id)arg1;
+ (void)setMetricsTimingWindowStartTime:(id)arg1;
+ (void)setMigratedDeviceOffers:(bool)arg1;
+ (void)setMigratedDeviceOffersForWatch:(bool)arg1;
+ (void)setMigratedPrivacyAcknowledgements:(bool)arg1;
+ (void)setMigratedToNewCookieStorage:(bool)arg1;
+ (void)setPerfomedDeviceOfferSetup:(bool)arg1;
+ (void)setPushEnvironment:(long long)arg1;
+ (void)setQAMode:(bool)arg1;
+ (void)setReversePushEnabled:(long long)arg1;
+ (void)setSharedDatabaseChangeToken:(id)arg1;
+ (void)setShowSandboxAccountUI:(bool)arg1;
+ (void)setSourceOverrides:(id)arg1;
+ (void)setStorefrontSuffixes:(id)arg1;
+ (void)setTreatmentOverrides:(id)arg1;
+ (id)sharedDatabaseChangeToken;
+ (bool)showSandboxAccountUI;
+ (bool)showSpyglassPurchases;
+ (id)sourceOverrides;
+ (bool)ss_ignoreServerTrustEvaluation;
+ (id)storefrontSuffixes;
+ (bool)streamHARToDisk;
+ (id)treatmentOverrides;
+ (void)updateBadgeIdsForBundle:(id)arg1 block:(id /* block */)arg2;
+ (bool)useNewAccountStore;
+ (bool)useNewCookieStorage;

@end
