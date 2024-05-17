/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRegistrationAuthenticationParametersReceivedMetric : NSObject <CUTAWDMetric, CUTCoreAnalyticsMetric> {
    long long  _errorCode;
    double  _timeIntervalSinceAuthenticationParameterRequest;
}

@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeIntervalSinceAuthenticationParameterRequest;

- (unsigned int)awdIdentifier;
- (id)awdRepresentation;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)initWithErrorCode:(long long)arg1 timeIntervalSinceAuthenticationParameterRequest:(double)arg2;
- (id)name;
- (double)timeIntervalSinceAuthenticationParameterRequest;

@end
