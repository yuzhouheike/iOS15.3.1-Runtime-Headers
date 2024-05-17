/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPolicy : NSObject <NSSecureCoding>

@property (getter=isReadonly, nonatomic, readonly) bool readonly;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (bool)supportsSecureCoding;

- (id)_replacementLabeledValue:(id)arg1 omittingKeys:(id)arg2;
- (bool)_validateLabeledValueArrayAttributeSupport:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3;
- (bool)_validateLabeledValueArrayLabels:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isContactPropertySupported:(id)arg1;
- (bool)isReadonly;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (bool)shouldAddContact:(id)arg1;
- (bool)shouldRemoveContact:(id)arg1;
- (bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (unsigned long long)_cnui_maximumNumberOfValuesForProperty:(id)arg1;

@end
