/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FARequestConfigurator : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    AKAppleIDSigningController * _akSigningController;
    bool  _attachSetupHeader;
    AKAppleIDAuthenticationContext * _authContext;
    AAGrandSlamSigner * _familyGrandSlamSigner;
    ACAccount * _grandSlamAccount;
    AAGrandSlamSigner * _grandSlamSigner;
    NSData * _pushToken;
    AKAppleIDServerResourceLoadDelegate * _resourceLoadDelegate;
    AIDAServiceOwnersManager * _serviceOwnersManager;
}

@property (nonatomic) bool attachSetupHeader;
@property (nonatomic, retain) AKAppleIDAuthenticationContext *authContext;

- (void).cxx_destruct;
- (id)_account;
- (id)_accountStore;
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;
- (id)_akSigningController;
- (id)_authContext;
- (id)_familyGrandSlamSigner;
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;
- (id)_fresnoPayloadWithAdditionalPayload:(id)arg1;
- (id)_grandSlamAccount;
- (id)_grandSlamSigner;
- (void)_resourceLoadDelegate:(id /* block */)arg1;
- (id)_serviceOwnersManager;
- (void)addFresnoHeadersToRequest:(id)arg1;
- (void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2;
- (void)addPayload:(id)arg1 toRequest:(id)arg2;
- (bool)attachSetupHeader;
- (id)authContext;
- (id)initWithAccount:(id)arg1;
- (void)pushTokenWithCompletion:(id /* block */)arg1;
- (void)renewCredentialsWithCompletion:(id /* block */)arg1;
- (void)setAttachSetupHeader:(bool)arg1;
- (void)setAuthContext:(id)arg1;

@end
