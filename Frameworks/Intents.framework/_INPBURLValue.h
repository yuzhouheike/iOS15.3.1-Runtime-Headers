/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBURLValue : PBCodable <NSCopying, NSSecureCoding, _INPBURLValue> {
    NSString * _absoluteString;
    struct { }  _has;
    NSData * _scope;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) NSString *absoluteString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAbsoluteString;
@property (nonatomic, readonly) bool hasScope;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *scope;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)absoluteString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAbsoluteString;
- (bool)hasScope;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)scope;
- (void)setAbsoluteString:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
