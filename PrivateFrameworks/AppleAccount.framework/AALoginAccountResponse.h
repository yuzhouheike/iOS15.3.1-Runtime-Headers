/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginAccountResponse : AAResponse {
    AALoginResponseAppleAccountInfo * _appleAccountInfo;
    AALoginResponseDataclasses * _dataclasses;
    NSString * _dsid;
    AALoginResponseiCloudTokens * _iCloudTokens;
    NSDictionary * _responseForDelegates;
    NSNumber * _status;
    NSString * _statusMessage;
}

@property (nonatomic, readonly) AALoginResponseAppleAccountInfo *appleAccountInfo;
@property (nonatomic, readonly) AALoginResponseDataclasses *dataclasses;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) AALoginResponseiCloudTokens *iCloudTokens;
@property (nonatomic, readonly) NSDictionary *responseForDelegates;
@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;

- (void).cxx_destruct;
- (void)_parseResponse:(long long)arg1 responseBody:(id)arg2;
- (id)appleAccountInfo;
- (id)convertToLoginDelegatesResponse;
- (id)convertToProvisioningResponse;
- (id)dataclasses;
- (id)dsid;
- (id)iCloudTokens;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)initWithHttpStatus:(long long)arg1 responseBody:(id)arg2;
- (id)responseForDelegates;
- (id)responseParametersForServiceIdentifier:(id)arg1;
- (id)status;
- (id)statusMessage;

@end
