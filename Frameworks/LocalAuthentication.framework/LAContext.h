/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAContext : NSObject <NSSecureCoding> {
    long long  _biometryType;
    LAClient * _client;
    NSData * _evaluatedPolicyDomainState;
    NSData * _externalizedContext;
    unsigned int  _instanceId;
    NSNumber * _maxBiometryFailures;
    <LAPrearmContextXPC> * _prearmContext;
}

@property (nonatomic) long long biometryType;
@property (nonatomic, retain) NSData *evaluatedPolicyDomainState;
@property (nonatomic, retain) NSData *externalizedContext;
@property (nonatomic, readonly) unsigned int instanceId;
@property (nonatomic) bool interactionNotAllowed;
@property (nonatomic, copy) NSString *localizedCancelTitle;
@property (nonatomic, copy) NSString *localizedFallbackTitle;
@property (nonatomic, copy) NSString *localizedReason;
@property (nonatomic, retain) NSNumber *maxBiometryFailures;
@property (nonatomic) double touchIDAuthenticationAllowableReuseDuration;
@property (nonatomic, retain) NSNumber *touchIDAuthenticationRetryLimit;
@property (nonatomic) <LAUIDelegate> *uiDelegate;

+ (id)_optionsForEvent:(long long)arg1;
+ (unsigned int)newCommandId;
+ (unsigned int)newInstanceId;
+ (void)notifyEvent:(long long)arg1;
+ (void)notifyEvent:(long long)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_evaluateAccessControl:(struct __SecAccessControl { }*)arg1 operation:(id)arg2 options:(id)arg3 log:(long long)arg4 cid:(unsigned int)arg5 reply:(id /* block */)arg6;
- (id)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned int)arg4 error:(id*)arg5;
- (void)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned int)arg4 reply:(id /* block */)arg5;
- (id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id*)arg2;
- (id)_hashWithBundleIdentifier:(id)arg1;
- (id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2;
- (id)_serverPropertyValueForOption:(long long)arg1;
- (id)_serverPropertyValueForOption:(long long)arg1 log:(long long)arg2;
- (bool)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned int)arg4 error:(id*)arg5;
- (void)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned int)arg4 reply:(id /* block */)arg5;
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2;
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 log:(long long)arg3;
- (void)authMethodWithReply:(id /* block */)arg1;
- (long long)biometryType;
- (void)bootstrapServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
- (bool)checkContextValidWithError:(id*)arg1;
- (id)credentialOfType:(long long)arg1 error:(id*)arg2;
- (void)credentialOfType:(long long)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluateAccessControl:(struct __SecAccessControl { }*)arg1 aksOperation:(void*)arg2 options:(id)arg3 error:(id*)arg4;
- (void)evaluateAccessControl:(struct __SecAccessControl { }*)arg1 aksOperation:(void*)arg2 options:(id)arg3 reply:(id /* block */)arg4;
- (void)evaluateAccessControl:(struct __SecAccessControl { }*)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(id /* block */)arg4;
- (id)evaluateAccessControl:(struct __SecAccessControl { }*)arg1 operation:(long long)arg2 options:(id)arg3 error:(id*)arg4;
- (void)evaluateAccessControl:(struct __SecAccessControl { }*)arg1 operation:(long long)arg2 options:(id)arg3 reply:(id /* block */)arg4;
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(id /* block */)arg3;
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (id)evaluatedPolicyDomainState;
- (id)evaluationMechanismsForAccessControl:(struct __SecAccessControl { }*)arg1 operation:(long long)arg2 error:(id*)arg3;
- (id)evaluationMechanismsForPolicy:(long long)arg1 error:(id*)arg2;
- (id)externalizedContext;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (id)initWithExternalizedContext:(id)arg1 userSession:(unsigned int*)arg2;
- (id)initWithUIDelegate:(id)arg1;
- (unsigned int)instanceId;
- (bool)interactionNotAllowed;
- (void)invalidate;
- (bool)isCredentialSet:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedCancelTitle;
- (id)localizedFallbackTitle;
- (id)localizedReason;
- (id)maxBiometryFailures;
- (id)optionAuthenticationReason;
- (id)optionAuthenticationTitle;
- (id)optionBiometryLockoutRecovery;
- (id)optionBodyText;
- (id)optionCallerAuditToken;
- (id)optionCallerIconBundlePath;
- (id)optionCallerName;
- (id)optionCallerPID;
- (id)optionCancelVisible;
- (id)optionCheckApplePayEnabled;
- (id)optionEventProcessing;
- (id)optionFaceDetectLength;
- (id)optionFallbackVisible;
- (id)optionFingerMustBeOff;
- (id)optionMatchForUnlock;
- (id)optionMaxBiometryFailures;
- (id)optionNoFailureUI;
- (id)optionNotInteractive;
- (id)optionPINCharset;
- (id)optionPINFirst;
- (id)optionPINLabel;
- (id)optionPINLength;
- (id)optionPINMaxLength;
- (id)optionPINMinLength;
- (id)optionPINTitle;
- (id)optionPasscodeScreenBlur;
- (id)optionPasscodeScreenStyle;
- (id)optionPasscodeTitle;
- (id)optionPasswordAuthenticationReason;
- (id)optionPhysicalButtonTitle;
- (id)optionPresentationStyle;
- (id)optionReturnBiometryDatabaseHash;
- (id)optionSecurePassphrase;
- (id)optionSharedValidity;
- (id)optionSoftwareUpdateManifest;
- (id)optionSoftwareUpdateStashMode;
- (id)optionTKAuthOperationError;
- (id)optionTimeout;
- (id)optionTintColor;
- (id)optionTransitionStyle;
- (id)optionUserCancel;
- (id)optionUserFallback;
- (void)optionsForInternalOperation:(long long)arg1 reply:(id /* block */)arg2;
- (void)pauseProcessedEvent:(long long)arg1 pause:(bool)arg2 reply:(id /* block */)arg3;
- (void)prearmTouchIDWithReply:(id /* block */)arg1;
- (void)resetProcessedEvent:(long long)arg1 reply:(id /* block */)arg2;
- (void)resetWithReply:(id /* block */)arg1;
- (void)retryProcessedEvent:(long long)arg1 reply:(id /* block */)arg2;
- (void)setBiometryType:(long long)arg1;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(id /* block */)arg4;
- (bool)setCredential:(id)arg1 type:(long long)arg2;
- (bool)setCredential:(id)arg1 type:(long long)arg2 error:(id*)arg3;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(id /* block */)arg3;
- (void)setEvaluatedPolicyDomainState:(id)arg1;
- (void)setExternalizedContext:(id)arg1;
- (void)setInteractionNotAllowed:(bool)arg1;
- (void)setLocalizedCancelTitle:(id)arg1;
- (void)setLocalizedFallbackTitle:(id)arg1;
- (void)setLocalizedReason:(id)arg1;
- (void)setMaxBiometryFailures:(id)arg1;
- (void)setOptionAuthenticationReason:(id)arg1;
- (void)setOptionAuthenticationTitle:(id)arg1;
- (void)setOptionBiometryLockoutRecovery:(id)arg1;
- (void)setOptionBodyText:(id)arg1;
- (void)setOptionCallerAuditToken:(id)arg1;
- (void)setOptionCallerIconBundlePath:(id)arg1;
- (void)setOptionCallerName:(id)arg1;
- (void)setOptionCallerPID:(id)arg1;
- (void)setOptionCancelVisible:(id)arg1;
- (void)setOptionCheckApplePayEnabled:(id)arg1;
- (void)setOptionEventProcessing:(id)arg1;
- (void)setOptionFaceDetectLength:(id)arg1;
- (void)setOptionFallbackVisible:(id)arg1;
- (void)setOptionFingerMustBeOff:(id)arg1;
- (void)setOptionMatchForUnlock:(id)arg1;
- (void)setOptionMaxBiometryFailures:(id)arg1;
- (void)setOptionNoFailureUI:(id)arg1;
- (void)setOptionNotInteractive:(id)arg1;
- (void)setOptionPINCharset:(id)arg1;
- (void)setOptionPINFirst:(id)arg1;
- (void)setOptionPINLabel:(id)arg1;
- (void)setOptionPINLength:(id)arg1;
- (void)setOptionPINMaxLength:(id)arg1;
- (void)setOptionPINMinLength:(id)arg1;
- (void)setOptionPINTitle:(id)arg1;
- (void)setOptionPasscodeScreenBlur:(id)arg1;
- (void)setOptionPasscodeScreenStyle:(id)arg1;
- (void)setOptionPasscodeTitle:(id)arg1;
- (void)setOptionPasswordAuthenticationReason:(id)arg1;
- (void)setOptionPhysicalButtonTitle:(id)arg1;
- (void)setOptionPresentationStyle:(id)arg1;
- (void)setOptionReturnBiometryDatabaseHash:(id)arg1;
- (void)setOptionSecurePassphrase:(id)arg1;
- (void)setOptionSharedValidity:(id)arg1;
- (void)setOptionSoftwareUpdateManifest:(id)arg1;
- (void)setOptionSoftwareUpdateStashMode:(id)arg1;
- (void)setOptionTKAuthOperationError:(id)arg1;
- (void)setOptionTimeout:(id)arg1;
- (void)setOptionTintColor:(id)arg1;
- (void)setOptionTransitionStyle:(id)arg1;
- (void)setOptionUserCancel:(id)arg1;
- (void)setOptionUserFallback:(id)arg1;
- (void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 reply:(id /* block */)arg3;
- (void)setShowingCoachingHint:(bool)arg1 event:(long long)arg2 reply:(id /* block */)arg3;
- (void)setTouchIDAuthenticationAllowableReuseDuration:(double)arg1;
- (void)setTouchIDAuthenticationRetryLimit:(id)arg1;
- (void)setUiDelegate:(id)arg1;
- (double)touchIDAuthenticationAllowableReuseDuration;
- (id)touchIDAuthenticationRetryLimit;
- (id)uiDelegate;
- (id)uuid;

@end
