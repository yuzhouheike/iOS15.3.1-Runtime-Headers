/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDeviceOfferRegistrationTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    NSString * _deviceGUID;
    <AMSDeviceOffersTracking> * _deviceOffersStore;
    AMSDeviceOfferEligibilityTask * _eligibilityTask;
    bool  _ignoreRegistrationBlacklist;
    bool  _lightweightCheckOnly;
    NSString * _masterSerialNumber;
    NSSet * _offerIdentifiers;
    AMSDeviceOfferRegistrationPrivacyValidator * _privacyValidator;
    NSArray * _registrationGroups;
    AMSURLSession * _urlSession;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (nonatomic, readonly) <AMSDeviceOffersTracking> *deviceOffersStore;
@property (nonatomic, readonly) AMSDeviceOfferEligibilityTask *eligibilityTask;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreRegistrationBlacklist;
@property (nonatomic) bool lightweightCheckOnly;
@property (nonatomic, readonly) NSString *masterSerialNumber;
@property (nonatomic, retain) NSSet *offerIdentifiers;
@property (nonatomic, readonly) AMSDeviceOfferRegistrationPrivacyValidator *privacyValidator;
@property (nonatomic, retain) NSArray *registrationGroups;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSURLSession *urlSession;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_accountEligibleSerialsFromDeviceOffers:(id)arg1 accountOffers:(id)arg2;
- (id)_bucketedOffers:(id)arg1;
- (id)_companionSerialNumbers;
- (id)_deviceOffersURL;
- (id)_eligibilityQualifiedRegistrationGroupsWithAccount:(id)arg1 pendingRegistrationGroups:(id)arg2;
- (id)_filteredRegistrationGroups:(id)arg1;
- (id)_handleRegistrationResult:(id)arg1;
- (bool)_isDeviceGroupRegistrationAllowed;
- (bool)_isEligibilityCallsAllowed;
- (bool)_isRegistrationAllowed;
- (id)_latestDeviceGroups;
- (id)_latestOffersWithFetchedDeviceOffers:(id)arg1 offersStore:(id)arg2;
- (id)_lightweightDeviceOffersURL;
- (id)_offersDecodedFromResult:(id)arg1;
- (id)_performLightweightRequestWithAccount:(id)arg1;
- (id)_performRegistrationRequestWithAccount:(id)arg1;
- (id)_registrationEndpointPOSTCompanionBodyWithDeviceGroups:(id)arg1 companionSerialNumbers:(id)arg2;
- (id)_registrationEndpointPOSTDeviceGroupsBody:(id)arg1;
- (id)_registrationEndpointPOSTParametersWithRegistrationGroups:(id)arg1 companionSerialNumbers:(id)arg2;
- (id)_registrationGroupsFrom:(id)arg1 matching:(id)arg2;
- (id)_registrationRequestEncoderWithAccount:(id)arg1;
- (id)_sanitizedResultPromise:(id)arg1;
- (id)_serialNumberBlacklist;
- (void)_updateWithDeviceOffers:(id)arg1;
- (id)_urlRequestWithBagURL:(id)arg1;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)deviceGUID;
- (id)deviceOffersStore;
- (id)eligibilityTask;
- (bool)ignoreRegistrationBlacklist;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 deviceGUID:(id)arg3 deviceOffersStore:(id)arg4 eligibilityTask:(id)arg5 masterSerialNumber:(id)arg6 privacyValidator:(id)arg7 urlSession:(id)arg8;
- (bool)lightweightCheckOnly;
- (id)masterSerialNumber;
- (id)offerIdentifiers;
- (id)perform;
- (id)privacyValidator;
- (id)registrationGroups;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setIgnoreRegistrationBlacklist:(bool)arg1;
- (void)setLightweightCheckOnly:(bool)arg1;
- (void)setOfferIdentifiers:(id)arg1;
- (void)setRegistrationGroups:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (id)urlSession;

@end
