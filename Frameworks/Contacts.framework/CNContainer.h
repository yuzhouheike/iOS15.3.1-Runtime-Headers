/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _constraintsPath;
    bool  _enabled;
    NSString * _externalIdentifier;
    NSString * _externalModificationTag;
    NSData * _externalSyncData;
    NSString * _externalSyncTag;
    bool  _guardianRestricted;
    bool  _guardianStateDirty;
    int  _iOSLegacyIdentifier;
    NSString * _identifier;
    NSDate * _lastSyncDate;
    NSString * _meIdentifier;
    NSString * _name;
    CNContainerPermissions * _permissions;
    unsigned long long  _restrictions;
    CNContainer * _snapshot;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSString *constraintsPath;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (nonatomic, readonly, copy) NSString *externalModificationTag;
@property (nonatomic, readonly, copy) NSData *externalSyncData;
@property (nonatomic, readonly, copy) NSString *externalSyncTag;
@property (getter=isGuardianRestricted, nonatomic, readonly) bool guardianRestricted;
@property (getter=isGuardianStateDirty, nonatomic, readonly) bool guardianStateDirty;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly, copy) NSString *meIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isParentallyManaged, nonatomic, readonly) bool parentallyManaged;
@property (nonatomic, readonly, copy) CNContainerPermissions *permissions;
@property (nonatomic, readonly) unsigned long long restrictions;
@property (nonatomic, readonly, copy) CNContainer *snapshot;
@property (nonatomic, readonly) long long type;

+ (id)identifierProvider;
+ (id)makeDefaultContainerPermissions;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForContainerOfContactWithIdentifier:(id)arg1;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(bool)arg2;
+ (id)predicateForContainersIncludingDisabled:(bool)arg1;
+ (id)predicateForContainersWithIdentifiers:(id)arg1;
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1;
+ (id)predicateForLocalContainerIncludingDisabled:(bool)arg1;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)constraintsPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForContainerType:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)externalModificationTag;
- (id)externalSyncData;
- (id)externalSyncTag;
- (unsigned long long)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 iOSLegacyIdentifier:(int)arg4 accountIdentifier:(id)arg5 enabled:(bool)arg6 permissions:(id)arg7 externalIdentifier:(id)arg8 externalModificationTag:(id)arg9 externalSyncTag:(id)arg10 externalSyncData:(id)arg11 constraintsPath:(id)arg12 meIdentifier:(id)arg13 restrictions:(unsigned long long)arg14 guardianRestricted:(bool)arg15 lastSyncDate:(id)arg16;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isGuardianRestricted;
- (bool)isGuardianStateDirty;
- (bool)isParentallyManaged;
- (id)lastSyncDate;
- (id)meIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)permissions;
- (unsigned long long)restrictions;
- (id)snapshot;
- (long long)type;

@end
