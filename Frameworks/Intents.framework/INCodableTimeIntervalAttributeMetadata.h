/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {
    long long  _defaultUnit;
    NSNumber * _defaultValue;
    long long  _maximumUnit;
    NSNumber * _maximumValue;
    long long  _minimumUnit;
    NSNumber * _minimumValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultUnit;
@property (nonatomic, retain) NSNumber *defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumUnit;
@property (nonatomic, retain) NSNumber *maximumValue;
@property (nonatomic) long long minimumUnit;
@property (nonatomic, retain) NSNumber *minimumValue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionMaximumUnitKey;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumUnitKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumUnitKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionMinimumUnitKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionMaximumUnitKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMinimumUnitKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (long long)defaultUnit;
- (id)defaultValue;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)maximumUnit;
- (id)maximumValue;
- (long long)minimumUnit;
- (id)minimumValue;
- (void)setDefaultUnit:(long long)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setMaximumUnit:(long long)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumUnit:(long long)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
