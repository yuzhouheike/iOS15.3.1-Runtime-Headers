/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLFollowUpItem : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSArray * _actions;
    NSString * _bundleIconName;
    NSString * _categoryIdentifier;
    NSString * _clientIdentifier;
    NSString * _delegateMachServiceName;
    unsigned long long  _displayStyle;
    NSDate * _expirationDate;
    NSString * _extensionIdentifier;
    NSString * _groupIdentifier;
    NSString * _informativeFooterText;
    NSString * _informativeText;
    FLFollowUpNotification * _notification;
    NSString * _representingBundlePath;
    bool  _shouldPersistWhenActivated;
    bool  _shouldPersistWhenDismissed;
    bool  _showInSettings;
    unsigned long long  _sqlID;
    NSString * _targetBundleIdentifier;
    NSString * _title;
    NSString * _typeIdentifier;
    NSString * _uniqueIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSData *_userInfoData;
@property (copy) NSString *accountIdentifier;
@property (copy) NSArray *actions;
@property (nonatomic, copy) NSString *bundleIconName;
@property (copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *delegateMachServiceName;
@property unsigned long long displayStyle;
@property (copy) NSDate *expirationDate;
@property (copy) NSString *extensionIdentifier;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *informativeFooterText;
@property (nonatomic, copy) NSString *informativeText;
@property (readonly) bool isExpired;
@property (nonatomic, retain) FLFollowUpNotification *notification;
@property (nonatomic, copy) NSString *representingBundlePath;
@property bool shouldPersistWhenActivated;
@property bool shouldPersistWhenDismissed;
@property (nonatomic) bool showInSettings;
@property (nonatomic) unsigned long long sqlID;
@property (nonatomic, copy) NSString *targetBundleIdentifier;
@property (nonatomic, copy) NSString *title;
@property (copy) NSString *typeIdentifier;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (copy) NSDictionary *userInfo;

+ (long long)_daysRemaining:(id)arg1 ceiling:(bool)arg2;
+ (id)_expirationDateFormatter;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_informativeNotificationTextOrDate;
- (id)_midnightAdjustedDate;
- (id)_userInfoData;
- (id)accountIdentifier;
- (id)actions;
- (id)bundleIconName;
- (id)categoryIdentifier;
- (id)clientIdentifier;
- (id)delegateMachServiceName;
- (id)description;
- (unsigned long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)extensionIdentifier;
- (id)formattedExpirationDate;
- (id)groupIdentifier;
- (id)informativeFooterText;
- (id)informativeText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithoutDefaults;
- (bool)isExpired;
- (bool)isHSA2LoginItem;
- (bool)isHSA2PasswordResetItem;
- (id)notification;
- (id)representingBundlePath;
- (void)setAccountIdentifier:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setBundleIconName:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegateMachServiceName:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setInformativeFooterText:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setRepresentingBundlePath:(id)arg1;
- (void)setShouldPersistWhenActivated:(bool)arg1;
- (void)setShouldPersistWhenDismissed:(bool)arg1;
- (void)setShowInSettings:(bool)arg1;
- (void)setSqlID:(unsigned long long)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_userInfoData:(id)arg1;
- (bool)shouldPersistWhenActivated;
- (bool)shouldPersistWhenDismissed;
- (bool)showInSettings;
- (unsigned long long)sqlID;
- (id)targetBundleIdentifier;
- (id)title;
- (id)typeIdentifier;
- (id)uniqueIdentifier;
- (id)userInfo;

@end
