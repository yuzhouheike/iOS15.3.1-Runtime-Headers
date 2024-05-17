/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding> {
    __CFN_ConnectionMetrics * __metrics;
}

@property (getter=isTLSConfigured, nonatomic, readonly) bool TLSConfigured;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (bool)isTLSConfigured;

@end
