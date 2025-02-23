/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSDestinationGroupSessionMember : IDSDestination {
    bool  _isLightWeight;
    NSString * _uri;
}

@property (nonatomic, readonly) bool isLightWeight;
@property (nonatomic, readonly) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destinationLightweightStatus;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)initWithURI:(id)arg1 isLightWeight:(bool)arg2;
- (bool)isDevice;
- (bool)isLightWeight;
- (id)uri;

@end
