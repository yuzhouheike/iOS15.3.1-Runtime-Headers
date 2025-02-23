/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (nonatomic, readonly) id /* block */ fromPlistTransform;
@property (nonatomic, readonly) bool isMultiValue;
@property (nonatomic, readonly) bool isSingleValue;
@property (nonatomic, readonly) Class labeledValueClass;
@property (nonatomic, readonly) NSArray *managedLabels;
@property (nonatomic, readonly) id /* block */ plistTransform;
@property (nonatomic, readonly) NSArray *standardLabels;
@property (nonatomic, readonly) Class valueClass;

- (struct __CFString { }*)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1;
- (void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2;
- (void*)ABMutableMultiValueForABPerson:(void*)arg1;
- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString { }*)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNMutableValueForABMultivalue;
- (id)CNValueFromABValue:(void*)arg1;
- (unsigned int)abPropertyType;
- (bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;
- (bool)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5;
- (bool)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5;
- (void)assertValueType:(id)arg1;
- (id /* block */)fromPlistTransform;
- (bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (bool)isMultiValue;
- (bool)isSingleValue;
- (bool)isValidMultiValueValue:(id)arg1 error:(id*)arg2;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (Class)labeledValueClass;
- (id)localizedStringForLabel:(id)arg1;
- (id)managedLabels;
- (id /* block */)plistTransform;
- (id)standardLabels;
- (id)standardLabelsWithOptions:(unsigned long long)arg1;
- (id)stringForIndexingForContact:(id)arg1;
- (Class)valueClass;
- (id)valueWithResetIdentifiers:(id)arg1;

@end
