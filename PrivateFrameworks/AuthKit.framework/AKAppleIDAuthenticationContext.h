/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, AKAuthenticationContext, NSSecureCoding> {
    NSString * _DSID;
    struct __CFUserNotification { } * _activeSecondFactoryEntryPrompt;
    NSString * _altDSID;
    NSString * _alternativeButtonString;
    bool  _alwaysShowUsernameField;
    <AKAnisetteServiceProtocol> * _anisetteDataProvider;
    bool  _anticipateEscrowAttempt;
    NSString * _appProvidedContext;
    NSDictionary * _appProvidedData;
    unsigned long long  _attemptIndex;
    long long  _authenticationMode;
    long long  _authenticationPromptStyle;
    unsigned long long  _authenticationType;
    NSString * _callerIconBundlePath;
    NSString * _cancelButtonString;
    unsigned long long  _capabilityForUIDisplay;
    NSString * _cellularDataAttributionAppBundleID;
    id  _clientInfo;
    bool  _clientShouldHandleAlternativeButtonAction;
    AKDevice * _companionDevice;
    AKAnisetteData * _companionDeviceAnisetteData;
    NSString * _custodianRecoveryToken;
    NSString * _defaultButtonString;
    NSSet * _desiredInternalTokens;
    NSString * _deviceClass;
    NSString * _deviceColor;
    NSString * _deviceEnclosureColor;
    NSData * _displayImageData;
    NSString * _displayString;
    NSString * _displayTitle;
    bool  _forceEligibleForForegroundAuthentication;
    NSString * _generatedCode;
    NSNumber * _hasEmptyPassword;
    NSString * _helpAnchor;
    NSString * _helpBook;
    bool  _hideAlternativeButton;
    bool  _hideCancelButton;
    bool  _hideReasonString;
    NSDictionary * _httpHeadersForRemoteUI;
    NSUUID * _identifier;
    NSString * _identityToken;
    NSString * _interpolatedReason;
    NSNumber * _isAppleIDLoginEnabled;
    bool  _isContextRequestingReauthForExistingService;
    bool  _isEphemeral;
    bool  _isFirstTimeLogin;
    bool  _isPasswordEditable;
    bool  _isProxyingForApp;
    bool  _isTriggeredByNotification;
    bool  _isUsernameEditable;
    bool  _keepAlive;
    NSNumber * _latitude;
    NSString * _localizedCallerName;
    NSNumber * _longitude;
    NSString * _masterKey;
    long long  _maximumLoginAttempts;
    NSString * _message;
    bool  _needsCredentialRecovery;
    bool  _needsNewAppleID;
    bool  _needsNewChildAccount;
    bool  _needsPasswordChange;
    bool  _needsRepair;
    bool  _needsSecurityUpgradeUI;
    NSString * _password;
    NSString * _passwordPromptTitle;
    bool  _performUIOutOfProcess;
    NSString * _privacyBundleIdentifier;
    NSString * _proxiedAppBundleID;
    NSString * _proxiedAppName;
    AKDevice * _proxiedDevice;
    AKAnisetteData * _proxiedDeviceAnisetteData;
    NSString * _reason;
    NSObject<OS_dispatch_queue> * _secondFactorQueue;
    id /* block */  _secondFactoryEntryCompletion;
    NSString * _securityUpgradeContext;
    NSArray * _serviceIdentifiers;
    long long  _serviceType;
    NSString * _shortLivedToken;
    bool  _shouldAllowAppleIDCreation;
    bool  _shouldForceInteractiveAuth;
    bool  _shouldOfferSecurityUpgrade;
    bool  _shouldPreventInteractiveAuth;
    bool  _shouldPromptForPasswordOnly;
    bool  _shouldRequestConfigurationInfo;
    bool  _shouldRequestRecoveryPET;
    bool  _shouldRequestShortLivedToken;
    bool  _shouldSendGrandSlamTokensForRemoteUI;
    bool  _shouldSendIdentityTokenForRemoteUI;
    bool  _shouldSkipInitialReachabilityCheck;
    bool  _shouldSkipSettingsLaunchAlert;
    bool  _shouldUpdatePersistentServiceTokens;
    bool  _supportsPiggybacking;
    NSString * _title;
    NSString * _username;
    long long  _verifyCredentialReason;
    NSString * _windowTitle;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic) unsigned long long _attemptIndex;
@property (nonatomic, readonly) unsigned long long _capabilityForUIDisplay;
@property (getter=_isForcedEligibleForForegroundAuthentication, setter=set_forceEligibleForForegroundAuthentication:, nonatomic) bool _forceEligibleForForegroundAuthentication;
@property (nonatomic, readonly) NSUUID *_identifier;
@property (setter=_setIdentityToken:, nonatomic, copy) NSString *_identityToken;
@property (nonatomic, readonly) NSString *_interpolatedReason;
@property (nonatomic, readonly) NSString *_interpolatedReasonWithBlame;
@property (nonatomic) bool _isPasswordEditable;
@property (setter=_setProxyingForApp:, nonatomic) bool _isProxyingForApp;
@property (nonatomic) bool _keepAlive;
@property (setter=_setMasterKey:, nonatomic, copy) NSString *_masterKey;
@property (setter=_setMessage:, nonatomic, copy) NSString *_message;
@property (setter=_setPassword:, nonatomic, copy) NSString *_password;
@property (nonatomic, copy) NSString *_passwordPromptTitle;
@property (nonatomic) bool _performUIOutOfProcess;
@property (setter=_setProxiedAppBundleID:, nonatomic, copy) NSString *_proxiedAppBundleID;
@property (setter=_setProxiedAppName:, nonatomic, copy) NSString *_proxiedAppName;
@property (nonatomic, readonly) bool _requiresPasswordInput;
@property (setter=_setShortLivedToken:, nonatomic, copy) NSString *_shortLivedToken;
@property (nonatomic, readonly) bool _shouldRefreshAccountAndUpdateContext;
@property (nonatomic) bool _shouldSendGrandSlamTokensForRemoteUI;
@property (nonatomic) bool _shouldSendIdentityTokenForRemoteUI;
@property (nonatomic) bool _shouldSkipInitialReachabilityCheck;
@property (nonatomic, copy) NSString *altDSID;
@property (retain) NSString *alternativeButtonString;
@property (nonatomic) bool alwaysShowUsernameField;
@property (nonatomic, retain) <AKAnisetteServiceProtocol> *anisetteDataProvider;
@property (nonatomic) bool anticipateEscrowAttempt;
@property (nonatomic, copy) NSString *appProvidedContext;
@property (nonatomic, copy) NSDictionary *appProvidedData;
@property (nonatomic) long long authenticationMode;
@property (nonatomic) long long authenticationPromptStyle;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic, copy) NSString *callerIconBundlePath;
@property (retain) NSString *cancelButtonString;
@property (nonatomic, copy) NSString *cellularDataAttributionAppBundleID;
@property (nonatomic, retain) id clientInfo;
@property (nonatomic) bool clientShouldHandleAlternativeButtonAction;
@property (nonatomic, copy) AKDevice *companionDevice;
@property (nonatomic, retain) AKAnisetteData *companionDeviceAnisetteData;
@property (getter=isContextEligibleForBiometricOrPasscodeAuth, nonatomic, readonly) bool contextEligibleForBiometricOrPasscodeAuth;
@property (getter=isContextEligibleForSilentAuth, nonatomic, readonly) bool contextEligibleForSilentAuth;
@property (getter=isContextEligibleForSilentAuthCoercion, nonatomic, readonly) bool contextEligibleForSilentAuthCoercion;
@property (getter=isContextRequestingReauthForExistingService, nonatomic, readonly) bool contextRequestingReauthForExistingService;
@property (setter=setCustodianRecoveryToken:, nonatomic, copy) NSString *custodianRecoveryToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultButtonString;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *desiredInternalTokens;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceColor;
@property (nonatomic, copy) NSString *deviceEnclosureColor;
@property (retain) NSData *displayImageData;
@property (nonatomic, copy) NSString *displayString;
@property (nonatomic, copy) NSString *displayTitle;
@property (nonatomic, copy) NSString *generatedCode;
@property (setter=setHasEmptyPassword:, nonatomic, copy) NSNumber *hasEmptyPassword;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *helpAnchor;
@property (nonatomic, copy) NSString *helpBook;
@property bool hideAlternativeButton;
@property bool hideCancelButton;
@property bool hideReasonString;
@property (nonatomic, copy) NSDictionary *httpHeadersForRemoteUI;
@property (setter=setAppleIDLoginEnabled:, nonatomic, copy) NSNumber *isAppleIDLoginEnabled;
@property (nonatomic) bool isEphemeral;
@property (setter=setFirstTimeLogin:, nonatomic) bool isFirstTimeLogin;
@property (setter=setTriggeredByNotification:, nonatomic) bool isTriggeredByNotification;
@property (nonatomic) bool isUsernameEditable;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSString *localizedCallerName;
@property (nonatomic, copy) NSNumber *longitude;
@property (nonatomic) long long maximumLoginAttempts;
@property (nonatomic) bool needsCredentialRecovery;
@property (nonatomic) bool needsNewAppleID;
@property (nonatomic) bool needsNewChildAccount;
@property (nonatomic) bool needsPasswordChange;
@property (nonatomic) bool needsRepair;
@property (nonatomic) bool needsSecurityUpgradeUI;
@property (copy) NSString *privacyBundleIdentifier;
@property (nonatomic, copy) AKDevice *proxiedDevice;
@property (nonatomic, retain) AKAnisetteData *proxiedDeviceAnisetteData;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *securityUpgradeContext;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSArray *serviceIdentifiers;
@property (nonatomic) long long serviceType;
@property (nonatomic) bool shouldAllowAppleIDCreation;
@property (nonatomic) bool shouldForceInteractiveAuth;
@property (nonatomic) bool shouldOfferSecurityUpgrade;
@property (nonatomic) bool shouldPreventInteractiveAuth;
@property (nonatomic) bool shouldPromptForPasswordOnly;
@property (nonatomic) bool shouldRequestConfigurationInfo;
@property (nonatomic) bool shouldRequestRecoveryPET;
@property (nonatomic) bool shouldRequestShortLivedToken;
@property (nonatomic) bool shouldSkipSettingsLaunchAlert;
@property (nonatomic) bool shouldUpdatePersistentServiceTokens;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsPiggybacking;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) NSString *username;
@property (nonatomic) long long verifyCredentialReason;
@property (retain) NSString *windowTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (id)_appendBlameIfRequiredTo:(id)arg1;
- (unsigned long long)_attemptIndex;
- (unsigned long long)_capabilityForUIDisplay;
- (void)_handleSecondFactorCodeEntry;
- (id)_identifier;
- (id)_identityToken;
- (id)_initWithIdentifier:(id)arg1;
- (id)_interpolatedReason;
- (id)_interpolatedReasonWithBlame;
- (bool)_isForcedEligibleForForegroundAuthentication;
- (bool)_isPasswordEditable;
- (bool)_isProxyingForApp;
- (bool)_isVerifyCredentialReasonEligibleForBiometricOrPasscodeAuth;
- (bool)_keepAlive;
- (bool)_localUserHasEmptyPassword;
- (id)_masterKey;
- (id)_message;
- (id)_password;
- (id)_passwordPromptTitle;
- (bool)_performUIOutOfProcess;
- (id)_proxiedAppBundleID;
- (id)_proxiedAppName;
- (bool)_requiresPasswordInput;
- (id)_sanitizedCopy;
- (id)_secondFactorQueue;
- (void)_setIdentityToken:(id)arg1;
- (void)_setMasterKey:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setPassword:(id)arg1;
- (void)_setProxiedAppBundleID:(id)arg1;
- (void)_setProxiedAppName:(id)arg1;
- (void)_setProxyingForApp:(bool)arg1;
- (void)_setShortLivedToken:(id)arg1;
- (id)_shortLivedToken;
- (bool)_shouldRefreshAccountAndUpdateContext;
- (bool)_shouldSendGrandSlamTokensForRemoteUI;
- (bool)_shouldSendIdentityTokenForRemoteUI;
- (bool)_shouldSkipInitialReachabilityCheck;
- (void)_startListeningForSecondFactorCodeEntryNotification;
- (void)_stopListeningForSecondFactorCodeEntryNotification;
- (void)_updateWithValuesFromContext:(id)arg1;
- (id)altDSID;
- (id)alternativeButtonString;
- (bool)alwaysShowUsernameField;
- (id)anisetteDataProvider;
- (bool)anticipateEscrowAttempt;
- (id)appProvidedContext;
- (id)appProvidedData;
- (id)authKitAccount:(id*)arg1;
- (id)authKitAccountForSilentServiceToken:(id*)arg1;
- (long long)authenticationMode;
- (long long)authenticationPromptStyle;
- (unsigned long long)authenticationType;
- (id)callerIconBundlePath;
- (id)cancelButtonString;
- (id)cellularDataAttributionAppBundleID;
- (id)clientInfo;
- (bool)clientShouldHandleAlternativeButtonAction;
- (id)companionDevice;
- (id)companionDeviceAnisetteData;
- (id)custodianRecoveryToken;
- (id)debugDescription;
- (id)defaultButtonString;
- (id)description;
- (id)desiredInternalTokens;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)arg1;
- (id)displayImageData;
- (id)displayString;
- (id)displayTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedCode;
- (id)hasEmptyPassword;
- (id)helpAnchor;
- (id)helpBook;
- (bool)hideAlternativeButton;
- (bool)hideCancelButton;
- (bool)hideReasonString;
- (id)httpHeadersForRemoteUI;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)isAppleIDLoginEnabled;
- (bool)isContextEligibleForBiometricOrPasscodeAuth;
- (bool)isContextEligibleForSilentAuth;
- (bool)isContextEligibleForSilentAuthCoercion;
- (bool)isContextRequestingReauthForExistingService;
- (bool)isEphemeral;
- (bool)isFirstTimeLogin;
- (bool)isTriggeredByNotification;
- (bool)isUsernameEditable;
- (id)latitude;
- (id)localizedCallerName;
- (id)longitude;
- (long long)maximumLoginAttempts;
- (bool)needsCredentialRecovery;
- (bool)needsNewAppleID;
- (bool)needsNewChildAccount;
- (bool)needsPasswordChange;
- (bool)needsRepair;
- (bool)needsSecurityUpgradeUI;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)arg1;
- (id)privacyBundleIdentifier;
- (id)proxiedDevice;
- (id)proxiedDeviceAnisetteData;
- (id)reason;
- (id)securityUpgradeContext;
- (id)serviceIdentifier;
- (id)serviceIdentifiers;
- (long long)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setAlternativeButtonString:(id)arg1;
- (void)setAlwaysShowUsernameField:(bool)arg1;
- (void)setAnisetteDataProvider:(id)arg1;
- (void)setAnticipateEscrowAttempt:(bool)arg1;
- (void)setAppProvidedContext:(id)arg1;
- (void)setAppProvidedData:(id)arg1;
- (void)setAppleIDLoginEnabled:(id)arg1;
- (void)setAuthenticationMode:(long long)arg1;
- (void)setAuthenticationPromptStyle:(long long)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setCallerIconBundlePath:(id)arg1;
- (void)setCancelButtonString:(id)arg1;
- (void)setCellularDataAttributionAppBundleID:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setClientShouldHandleAlternativeButtonAction:(bool)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setCompanionDeviceAnisetteData:(id)arg1;
- (void)setCustodianRecoveryToken:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setDefaultButtonString:(id)arg1;
- (void)setDesiredInternalTokens:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceEnclosureColor:(id)arg1;
- (void)setDisplayImageData:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setFirstTimeLogin:(bool)arg1;
- (void)setGeneratedCode:(id)arg1;
- (void)setHasEmptyPassword:(id)arg1;
- (void)setHelpAnchor:(id)arg1;
- (void)setHelpBook:(id)arg1;
- (void)setHideAlternativeButton:(bool)arg1;
- (void)setHideCancelButton:(bool)arg1;
- (void)setHideReasonString:(bool)arg1;
- (void)setHttpHeadersForRemoteUI:(id)arg1;
- (void)setIsEphemeral:(bool)arg1;
- (void)setIsUsernameEditable:(bool)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLocalizedCallerName:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMaximumLoginAttempts:(long long)arg1;
- (void)setNeedsCredentialRecovery:(bool)arg1;
- (void)setNeedsNewAppleID:(bool)arg1;
- (void)setNeedsNewChildAccount:(bool)arg1;
- (void)setNeedsPasswordChange:(bool)arg1;
- (void)setNeedsRepair:(bool)arg1;
- (void)setNeedsSecurityUpgradeUI:(bool)arg1;
- (void)setPrivacyBundleIdentifier:(id)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setProxiedDeviceAnisetteData:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSecurityUpgradeContext:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServiceIdentifiers:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setShouldAllowAppleIDCreation:(bool)arg1;
- (void)setShouldForceInteractiveAuth:(bool)arg1;
- (void)setShouldOfferSecurityUpgrade:(bool)arg1;
- (void)setShouldPreventInteractiveAuth:(bool)arg1;
- (void)setShouldPromptForPasswordOnly:(bool)arg1;
- (void)setShouldRequestConfigurationInfo:(bool)arg1;
- (void)setShouldRequestRecoveryPET:(bool)arg1;
- (void)setShouldRequestShortLivedToken:(bool)arg1;
- (void)setShouldSkipSettingsLaunchAlert:(bool)arg1;
- (void)setShouldUpdatePersistentServiceTokens:(bool)arg1;
- (void)setSupportsPiggybacking:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTriggeredByNotification:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVerifyCredentialReason:(long long)arg1;
- (void)setWindowTitle:(id)arg1;
- (void)set_attemptIndex:(unsigned long long)arg1;
- (void)set_forceEligibleForForegroundAuthentication:(bool)arg1;
- (void)set_isPasswordEditable:(bool)arg1;
- (void)set_keepAlive:(bool)arg1;
- (void)set_passwordPromptTitle:(id)arg1;
- (void)set_performUIOutOfProcess:(bool)arg1;
- (void)set_shouldSendGrandSlamTokensForRemoteUI:(bool)arg1;
- (void)set_shouldSendIdentityTokenForRemoteUI:(bool)arg1;
- (void)set_shouldSkipInitialReachabilityCheck:(bool)arg1;
- (bool)shouldAllowAppleIDCreation;
- (bool)shouldForceInteractiveAuth;
- (bool)shouldOfferSecurityUpgrade;
- (bool)shouldPreventInteractiveAuth;
- (bool)shouldPromptForPasswordOnly;
- (bool)shouldRequestConfigurationInfo;
- (bool)shouldRequestRecoveryPET;
- (bool)shouldRequestShortLivedToken;
- (bool)shouldSkipSettingsLaunchAlert;
- (bool)shouldUpdatePersistentServiceTokens;
- (bool)supportsPiggybacking;
- (id)title;
- (id)username;
- (long long)verifyCredentialReason;
- (id)windowTitle;

@end
