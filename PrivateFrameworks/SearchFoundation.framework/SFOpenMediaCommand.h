/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFOpenMediaCommand : SFCommand <NSCopying, NSSecureCoding, SFOpenMediaCommand> {
    NSString * _clientSelectedBundleIdentifier;
    SFMediaMetadata * _mediaMetadata;
}

@property (nonatomic, copy) NSString *clientSelectedBundleIdentifier;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFMediaMetadata *mediaMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientSelectedBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)mediaMetadata;
- (void)setClientSelectedBundleIdentifier:(id)arg1;
- (void)setMediaMetadata:(id)arg1;

@end
