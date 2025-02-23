/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLRequest : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSURLRequestInternal * _internal;
}

@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) bool HTTPShouldHandleCookies;
@property (readonly) bool HTTPShouldUsePipelining;
@property (readonly, copy) NSURL *URL;
@property (readonly) void*_inner;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly) bool allowsCellularAccess;
@property (readonly) bool allowsConstrainedNetworkAccess;
@property (readonly) bool allowsExpensiveNetworkAccess;
@property (nonatomic, readonly) NSDictionary *ams_cookies;
@property (nonatomic, readonly) bool ams_requestIsBagLoad;
@property (readonly) bool assumesHTTP3Capable;
@property (readonly) unsigned long long attribution;
@property (readonly) unsigned long long cachePolicy;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned long long networkServiceType;
@property (readonly) double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (double)defaultTimeoutInterval;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (void)setAllowsAnyHTTPSCertificate:(bool)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (bool)supportsSecureCoding;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPMethod;
- (id)HTTPReferrer;
- (bool)HTTPShouldHandleCookies;
- (bool)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)URL;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (bool)_URLHasScheme:(id)arg1;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_allProtocolProperties;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (bool)_ignoreHSTS;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (id)_initWithInternal:(id)arg1;
- (void*)_inner;
- (bool)_isIdempotent;
- (bool)_isKnownTracker;
- (bool)_isNonAppInitiated;
- (bool)_isSafeRequestForBackgroundDownload;
- (bool)_needsNetworkTrackingPrevention;
- (double)_payloadTransmissionTimeout;
- (bool)_preventHSTSStorage;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (bool)_requiresShortConnectionTimeout;
- (bool)_schemeWasUpgradedDueToDynamicHSTS;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_startTimeoutDate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)_trackerContext;
- (id)allHTTPHeaderFields;
- (bool)allowsCellularAccess;
- (bool)allowsConstrainedNetworkAccess;
- (bool)allowsExpensiveNetworkAccess;
- (bool)assumesHTTP3Capable;
- (unsigned long long)attribution;
- (id)boundInterfaceIdentifier;
- (unsigned long long)cachePolicy;
- (const struct __CFURL { }*)cfURL;
- (id)contentDispositionEncodingFallbackArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedWorkload;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)mainDocumentURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)networkServiceType;
- (double)timeoutInterval;
- (id)valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_HTTPBody;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_cookies;
- (bool)ams_requestIsBagLoad;
- (id)ams_valueForHTTPHeader:(id)arg1;
- (id)body;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (bool)ak_usesHTTPSScheme;

@end
