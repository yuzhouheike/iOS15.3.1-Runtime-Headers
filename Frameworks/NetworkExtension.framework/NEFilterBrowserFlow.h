/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterBrowserFlow : NEFilterFlow <NSCopying, NSSecureCoding> {
    NSURL * _parentURL;
    NSURLRequest * _request;
    NSURLResponse * _response;
}

@property (retain) NSURL *parentURL;
@property (retain) NSURLRequest *request;
@property (retain) NSURLResponse *response;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cleanRemediationURL:(id)arg1 flow:(id)arg2 providerConfiguration:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createDropReply:(id)arg1 verdict:(id)arg2 context:(id)arg3;
- (bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 parentURL:(id)arg2 sourceAppIdentifier:(id)arg3;
- (id)parentURL;
- (id)request;
- (id)response;
- (id)sanitizeRemediationButtonText:(id)arg1;
- (void)setParentURL:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)writeCurrentVerdictInReply:(id)arg1 direction:(long long)arg2;

@end
