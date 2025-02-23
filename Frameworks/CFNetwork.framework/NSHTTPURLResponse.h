/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal * _httpInternal;
}

@property (readonly, copy) NSDictionary *allHeaderFields;
@property (nonatomic, readonly) NSData *ams_actionData;
@property (nonatomic, readonly) NSData *ams_actionDataV1;
@property (nonatomic, readonly) NSData *ams_actionDataV1_5;
@property (nonatomic, readonly) NSString *ams_actionName;
@property (nonatomic, readonly) NSString *ams_actionNameV1;
@property (nonatomic, readonly) NSString *ams_actionNameV1_5;
@property (readonly) NSString *ams_fsrCallbackUrl;
@property (readonly) long long ams_fsrData;
@property (readonly) NSString *ams_fsrNameSpace;
@property (readonly) NSString *ams_fsrSessionID;
@property (readonly) NSString *ams_fsrTransactionID;
@property (readonly) long long statusCode;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_peerCertificateChain;
- (id)allHeaderFields;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (long long)statusCode;
- (id)valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (long long)_anisetteType;
- (id)ams_actionData;
- (id)ams_actionDataV1;
- (id)ams_actionDataV1_5;
- (id)ams_actionName;
- (id)ams_actionNameV1;
- (id)ams_actionNameV1_5;
- (id)ams_fsrCallbackUrl;
- (long long)ams_fsrData;
- (id)ams_fsrNameSpace;
- (id)ams_fsrSessionID;
- (id)ams_fsrTransactionID;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)_ak_dataForEncodedHeaderWithKey:(id)arg1;
- (id)ak_acceptedTermsInfo;
- (id)ak_stringForEncodedHeaderWithKey:(id)arg1;

@end
