/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCurrencyAmount : NSObject <INCodableAttributeRelationComparing, INCurrencyAmountExport, NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
