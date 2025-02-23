/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentCodableDescription : INRootCodableDescription <NSCopying, NSSecureCoding> {
    bool  _configurable;
    NSString * _defaultImageName;
    bool  _deprecated;
    NSString * _descriptiveText;
    NSString * _descriptiveTextLocID;
    bool  _eligibleForSuggestions;
    bool  _eligibleForWidgets;
    NSArray * _entityVerbs;
    bool  _foreground;
    NSString * _inputAttributeName;
    long long  _intentCategory;
    NSString * _keyAttributeName;
    NSArray * _phrases;
    NSString * _title;
    NSString * _titleLocID;
    bool  _userConfirmationRequired;
    NSString * _verb;
    NSNumber * _versioningHash;
}

@property (setter=_setInputAttributeName:, nonatomic, copy) NSString *_inputAttributeName;
@property (setter=_setKeyAttributeName:, nonatomic, copy) NSString *_keyAttributeName;
@property (getter=isConfigurable, nonatomic) bool configurable;
@property (nonatomic, copy) NSString *defaultImageName;
@property (getter=isDeprecated, nonatomic) bool deprecated;
@property (nonatomic, copy) NSString *descriptiveText;
@property (nonatomic, copy) NSString *descriptiveTextLocID;
@property (getter=isEligibleForSuggestions, nonatomic) bool eligibleForSuggestions;
@property (getter=isEligibleForWidgets, nonatomic) bool eligibleForWidgets;
@property (nonatomic, copy) NSArray *entityVerbs;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic, readonly) INCodableAttribute *inputAttribute;
@property (nonatomic) long long intentCategory;
@property (nonatomic, readonly) INCodableAttribute *keyAttribute;
@property (nonatomic, readonly, copy) NSString *localizedDescriptiveText;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, retain) NSArray *phrases;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocID;
@property (nonatomic) bool userConfirmationRequired;
@property (nonatomic, copy) NSString *verb;
@property (nonatomic, copy) NSNumber *versioningHash;

+ (id)__CategoryKey;
+ (id)__ClassNameKey;
+ (id)__ClassPrefixKey;
+ (id)__ConfigurableKey;
+ (id)__DefaultImageNameKey;
+ (id)__DeprecatedKey;
+ (id)__DescriptionIDKey;
+ (id)__DescriptionKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__EntityKey;
+ (id)__ForegroundKey;
+ (id)__HashKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__InputKey;
+ (id)__Key;
+ (id)__KeyParameterKey;
+ (id)__NameKey;
+ (id)__NameKey;
+ (id)__ParameterKey;
+ (id)__ParametersKey;
+ (id)__PhrasesKey;
+ (id)__SummaryKey;
+ (id)__TitleIDKey;
+ (id)__TitleKey;
+ (id)__UserConfirmationRequiredKey;
+ (id)__VerbAssociationsKey;
+ (id)__VerbKey;
+ (id)_intentClassNameWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeKey;
- (id)_attributesKey;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (id)_ignoredAttributeTags;
- (id)_inputAttributeName;
- (id)_keyAttributeName;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (void)_setInputAttributeName:(id)arg1;
- (void)_setKeyAttributeName:(id)arg1;
- (void)_updateWithIntentCodableDescription:(id)arg1;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultImageName;
- (id)descriptiveText;
- (id)descriptiveTextLocID;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityVerbs;
- (id)initWithCoder:(id)arg1;
- (id)inputAttribute;
- (long long)intentCategory;
- (bool)isConfigurable;
- (bool)isDeprecated;
- (bool)isEligibleForSuggestions;
- (bool)isEligibleForWidgets;
- (bool)isForeground;
- (id)keyAttribute;
- (id)localizedDescriptiveText;
- (id)localizedDescriptiveTextWithLocalizer:(id)arg1;
- (id)localizedTitle;
- (id)localizedTitleWithLocalizer:(id)arg1;
- (id)phrases;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1;
- (void)setConfigurable:(bool)arg1;
- (void)setDefaultImageName:(id)arg1;
- (void)setDeprecated:(bool)arg1;
- (void)setDescriptiveText:(id)arg1;
- (void)setDescriptiveTextLocID:(id)arg1;
- (void)setEligibleForSuggestions:(bool)arg1;
- (void)setEligibleForWidgets:(bool)arg1;
- (void)setEntityVerbs:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setIntentCategory:(long long)arg1;
- (void)setPhrases:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocID:(id)arg1;
- (void)setUserConfirmationRequired:(bool)arg1;
- (void)setVerb:(id)arg1;
- (void)setVersioningHash:(id)arg1;
- (id)title;
- (id)titleLocID;
- (void)updateWithDictionary:(id)arg1;
- (bool)userConfirmationRequired;
- (id)verb;
- (id)versioningHash;

@end
