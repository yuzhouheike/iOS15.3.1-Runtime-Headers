/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask {
    AMSBiometricsSignatureRequest * _biometricsRequest;
    AMSURLResult * _delegateAuthResult;
    AMSURLTaskInfo * _delegateAuthTaskInfo;
    AMSPaymentSheetResult * _paymentSheetResult;
    AMSDelegatePurchaseRequest * _request;
}

@property (nonatomic, retain) AMSBiometricsSignatureRequest *biometricsRequest;
@property (nonatomic, retain) AMSURLResult *delegateAuthResult;
@property (nonatomic, retain) AMSURLTaskInfo *delegateAuthTaskInfo;
@property (nonatomic, retain) AMSPaymentSheetResult *paymentSheetResult;
@property (nonatomic, readonly) AMSDelegatePurchaseRequest *request;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)_parseBiometricsSignatureRequestFromTask:(id)arg1;
- (id)_parseFormDataFromResult:(id)arg1;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performAuthenticateTaskWithPaymentSheetResult:(id)arg1;
- (id)_performPaymentSheetTask;
- (id)biometricsRequest;
- (id)delegateAuthResult;
- (id)delegateAuthTaskInfo;
- (id)initWithDelegatePurchaseRequest:(id)arg1 bag:(id)arg2 account:(id)arg3;
- (id)paymentSheetResult;
- (id)performDelegatePurchase;
- (id)request;
- (void)setBiometricsRequest:(id)arg1;
- (void)setDelegateAuthResult:(id)arg1;
- (void)setDelegateAuthTaskInfo:(id)arg1;
- (void)setPaymentSheetResult:(id)arg1;

@end
