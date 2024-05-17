/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSDestinationDevice : IDSDestination {
    IDSURI * _destinationURI;
    bool  _isGuest;
}

@property (nonatomic, retain) IDSURI *destinationURI;
@property (nonatomic) bool isGuest;

+ (bool)isDeviceURI:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destinationURI;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceURI:(id)arg1;
- (id)initWithIDSDeviceURI:(id)arg1;
- (id)initWithRapportPublicIdentifierURI:(id)arg1;
- (id)initWithURI:(id)arg1 isGuest:(bool)arg2;
- (bool)isDevice;
- (bool)isGuest;
- (void)setDestinationURI:(id)arg1;
- (void)setIsGuest:(bool)arg1;

@end
