/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyGroupItem : CNCardGroupItem {
    bool  _allowsEmail;
    bool  _allowsIMessage;
    bool  _allowsPhone;
    bool  _allowsTTY;
    CNContact * _contact;
    CNContactStore * _contactStore;
    <CNPropertyGroupItemDelegate> * _delegate;
    CNUIContactsEnvironment * _environment;
    CNCardPropertyGroup * _group;
    CNLabeledValue * _labeledValue;
    CNLabeledValue * _originalLabeledValue;
    unsigned long long  _policyFlags;
    NSString * _property;
}

@property (nonatomic) bool allowsEmail;
@property (nonatomic) bool allowsIMessage;
@property (nonatomic) bool allowsPhone;
@property (nonatomic) bool allowsTTY;
@property (nonatomic, readonly) bool canRemove;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSURL *defaultActionURL;
@property (nonatomic) <CNPropertyGroupItemDelegate> *delegate;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *displayValue;
@property (nonatomic, readonly) NSString *editingStringValue;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic, readonly) NSArray *extendedLabels;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) CNCardPropertyGroup *group;
@property (nonatomic, retain) CNLabeledValue *labeledValue;
@property (nonatomic, readonly) bool modified;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, readonly) id normalizedValue;
@property (nonatomic, retain) CNLabeledValue *originalLabeledValue;
@property (nonatomic, readonly) NSString *placeholderString;
@property (nonatomic) unsigned long long policyFlags;
@property (nonatomic, readonly) NSArray *promotedExtendedLabels;
@property (nonatomic, retain) NSString *property;
@property (getter=isReadonly, nonatomic, readonly) bool readonly;
@property (nonatomic, readonly) NSArray *standardLabels;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (nonatomic, readonly) bool supportsLabel;

+ (Class)classForProperty:(id)arg1;
+ (void)deleteCoreRecentsEntriesMatchingProperty:(id)arg1 recentsManager:(id)arg2;
+ (id)emptyValueForLabel:(id)arg1;
+ (id)initialValueForLabel:(id)arg1 group:(id)arg2;
+ (id)newPropertyGroupItemForProperty:(id)arg1;
+ (id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;

- (void).cxx_destruct;
- (void)_removeSuggestion;
- (bool)allowsEmail;
- (bool)allowsIMessage;
- (bool)allowsPhone;
- (bool)allowsTTY;
- (int)anyContactLegacyIdentifier;
- (id)bestLabel:(id)arg1;
- (id)bestValue:(id)arg1;
- (bool)canRemove;
- (void)confirmSuggestion;
- (id)contact;
- (id)contactProperty;
- (id)contactStore;
- (id)contactViewCache;
- (id)defaultActionURL;
- (id)delegate;
- (id)description;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (id)displayValue;
- (id)editingStringValue;
- (id)environment;
- (id)extendedLabels;
- (id)group;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;
- (id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToItem:(id)arg1;
- (bool)isEquivalentToItem:(id)arg1 whenEditing:(bool)arg2;
- (bool)isFavorite;
- (bool)isFavoriteOfActionType:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)isReadonly;
- (bool)isSuggested;
- (bool)isValidIdentifier:(id)arg1;
- (bool)isValidValue:(id)arg1;
- (id)labeledValue;
- (int)labeledValueMultiValueIdentifierForChosenSourceContact;
- (id)labeledValueToCurateFromSuggestion;
- (void)mergeItem:(id)arg1;
- (bool)modified;
- (id)mutableContact;
- (id)normalizedValue;
- (id)originalLabeledValue;
- (id)placeholderString;
- (unsigned long long)policyFlags;
- (id)promotedExtendedLabels;
- (id)property;
- (void)rejectSuggestion;
- (id)replacementForInvalidValue:(id)arg1;
- (void)saveChangesImmediately:(bool)arg1;
- (void)setAllowsEmail:(bool)arg1;
- (void)setAllowsIMessage:(bool)arg1;
- (void)setAllowsPhone:(bool)arg1;
- (void)setAllowsTTY:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setOriginalLabeledValue:(id)arg1;
- (void)setPolicyFlags:(unsigned long long)arg1;
- (void)setProperty:(id)arg1;
- (bool)shouldCreateNewMeContactToSaveChangesTo;
- (id)standardLabels;
- (bool)supportsLabel;
- (void)updateLabeledValueWithLabel:(id)arg1;
- (void)updateLabeledValueWithValue:(id)arg1;
- (id)updateWithLabel:(id)arg1 value:(id)arg2;
- (id)valueForDisplayString:(id)arg1;

@end
