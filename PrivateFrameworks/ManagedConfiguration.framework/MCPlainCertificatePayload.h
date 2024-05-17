/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPlainCertificatePayload : MCCertificatePayload {
    NSData * _certificateData;
    NSString * _certificateFileName;
    int  _dataEncoding;
    NSString * _password;
}

@property (nonatomic, readonly, retain) NSData *certificateData;
@property (nonatomic, readonly, retain) NSString *certificateFileName;
@property (nonatomic, readonly) int dataEncoding;
@property (nonatomic, readonly, retain) NSString *password;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)certificateData;
- (id)certificateFileName;
- (struct __SecCertificate { }*)copyCertificate;
- (int)dataEncoding;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (bool)isIdentity;
- (bool)isSigned;
- (id)password;
- (id)persistentResourceID;
- (id)verboseDescription;

@end
