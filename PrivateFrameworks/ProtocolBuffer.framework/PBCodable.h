/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSData *data;

// Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer

+ (id)options;
+ (bool)supportsSecureCoding;

- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)si_dictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)setClientMetricsIfSupported:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (id)mr_valueForPotentiallyUndefinedKey:(id)arg1;

@end
