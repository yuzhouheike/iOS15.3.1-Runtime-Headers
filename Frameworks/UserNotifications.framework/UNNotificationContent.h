/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, UNNotificationSecurityScopeProviding> {
    NSString * _accessoryImageName;
    NSArray * _attachments;
    NSNumber * _badge;
    NSString * _body;
    NSString * _categoryIdentifier;
    _UNNotificationCommunicationContext * _communicationContext;
    NSString * _contentType;
    NSDate * _date;
    NSString * _defaultActionTitle;
    NSURL * _defaultActionURL;
    NSDate * _expirationDate;
    NSString * _footer;
    NSString * _header;
    UNNotificationIcon * _icon;
    unsigned long long  _interruptionLevel;
    NSString * _launchImageName;
    NSString * _markedMutableCopyMessage;
    NSArray * _peopleIdentifiers;
    unsigned long long  _realertCount;
    double  _relevanceScore;
    bool  _shouldAuthenticateDefaultAction;
    bool  _shouldBackgroundDefaultAction;
    bool  _shouldDisplayActionsInline;
    bool  _shouldHideDate;
    bool  _shouldHideTime;
    bool  _shouldIgnoreDoNotDisturb;
    bool  _shouldIgnoreDowntime;
    bool  _shouldPreemptPresentedNotification;
    bool  _shouldPreventNotificationDismissalAfterDefaultAction;
    bool  _shouldShowSubordinateIcon;
    bool  _shouldSuppressDefaultAction;
    bool  _shouldSuppressScreenLightUp;
    bool  _shouldSuppressSyncDismissalWhenRemoved;
    bool  _shouldUseRequestIdentifierForDismissalSync;
    UNNotificationSound * _sound;
    NSString * _subtitle;
    NSString * _summaryArgument;
    unsigned long long  _summaryArgumentCount;
    NSString * _targetContentIdentifier;
    NSString * _threadIdentifier;
    NSString * _title;
    NSSet * _topicIdentifiers;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *accessoryImageName;
@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, readonly, copy) NSNumber *badge;
@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) _UNNotificationCommunicationContext *communicationContext;
@property (nonatomic, readonly, copy) NSString *contentType;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *defaultActionTitle;
@property (nonatomic, readonly, copy) NSURL *defaultActionURL;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *footer;
@property (nonatomic, readonly) bool hasDefaultAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *header;
@property (nonatomic, readonly, copy) UNNotificationIcon *icon;
@property (nonatomic, readonly) unsigned long long interruptionLevel;
@property (nonatomic, readonly, copy) NSString *launchImageName;
@property (nonatomic, retain) NSString *markedMutableCopyMessage;
@property (nonatomic, readonly, copy) NSArray *peopleIdentifiers;
@property (nonatomic, readonly) unsigned long long realertCount;
@property (nonatomic, readonly) double relevanceScore;
@property (nonatomic, readonly) bool shouldAuthenticateDefaultAction;
@property (nonatomic, readonly) bool shouldBackgroundDefaultAction;
@property (nonatomic, readonly) bool shouldDisplayActionsInline;
@property (nonatomic, readonly) bool shouldHideDate;
@property (nonatomic, readonly) bool shouldHideTime;
@property (nonatomic, readonly) bool shouldIgnoreDoNotDisturb;
@property (nonatomic, readonly) bool shouldIgnoreDowntime;
@property (nonatomic, readonly) bool shouldPreemptPresentedNotification;
@property (nonatomic, readonly) bool shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic, readonly) bool shouldShowSubordinateIcon;
@property (nonatomic, readonly) bool shouldSuppressDefaultAction;
@property (nonatomic, readonly) bool shouldSuppressScreenLightUp;
@property (nonatomic, readonly) bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic, readonly) bool shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic, readonly, copy) UNNotificationSound *sound;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *summaryArgument;
@property (nonatomic, readonly) unsigned long long summaryArgumentCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetContentIdentifier;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSSet *topicIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForDebug:(bool)arg1;
- (id)_initWithContentType:(id)arg1 communicationContext:(id)arg2 accessoryImageName:(id)arg3 attachments:(id)arg4 badge:(id)arg5 body:(id)arg6 categoryIdentifier:(id)arg7 date:(id)arg8 icon:(id)arg9 defaultActionTitle:(id)arg10 defaultActionURL:(id)arg11 expirationDate:(id)arg12 header:(id)arg13 footer:(id)arg14 launchImageName:(id)arg15 peopleIdentifiers:(id)arg16 shouldHideDate:(bool)arg17 shouldHideTime:(bool)arg18 shouldIgnoreDoNotDisturb:(bool)arg19 shouldIgnoreDowntime:(bool)arg20 shouldSuppressScreenLightUp:(bool)arg21 shouldAuthenticateDefaultAction:(bool)arg22 shouldBackgroundDefaultAction:(bool)arg23 shouldPreventNotificationDismissalAfterDefaultAction:(bool)arg24 shouldShowSubordinateIcon:(bool)arg25 shouldSuppressDefaultAction:(bool)arg26 shouldSuppressSyncDismissalWhenRemoved:(bool)arg27 shouldUseRequestIdentifierForDismissalSync:(bool)arg28 shouldPreemptPresentedNotification:(bool)arg29 shouldDisplayActionsInline:(bool)arg30 sound:(id)arg31 subtitle:(id)arg32 threadIdentifier:(id)arg33 title:(id)arg34 topicIdentifiers:(id)arg35 realertCount:(unsigned long long)arg36 summaryArgument:(id)arg37 summaryArgumentCount:(unsigned long long)arg38 targetContentIdentifier:(id)arg39 interruptionLevel:(unsigned long long)arg40 relevanceScore:(double)arg41 userInfo:(id)arg42;
- (id)_safeStringForString:(id)arg1 debug:(bool)arg2;
- (id)accessoryImageName;
- (void)addSecurityScope:(id)arg1;
- (id)attachments;
- (id)badge;
- (id)body;
- (id)categoryIdentifier;
- (id)communicationContext;
- (id)contentByUpdatingWithProvider:(id)arg1 error:(out id*)arg2;
- (id)contentByUpdatingWithReadAnnouncementIntent:(id)arg1 error:(out id*)arg2;
- (id)contentByUpdatingWithSendMessageIntent:(id)arg1 error:(out id*)arg2;
- (id)contentByUpdatingWithStartCallIntent:(id)arg1 error:(out id*)arg2;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)debugDescription;
- (id)defaultActionTitle;
- (id)defaultActionURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enterSecurityScope;
- (id)expirationDate;
- (id)footer;
- (bool)hasDefaultAction;
- (unsigned long long)hash;
- (id)header;
- (id)icon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interruptionLevel;
- (bool)isEqual:(id)arg1;
- (id)launchImageName;
- (void)leaveSecurityScope;
- (id)markedMutableCopyMessage;
- (id)markedMutableCopyWithMessage:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)peopleIdentifiers;
- (unsigned long long)realertCount;
- (double)relevanceScore;
- (void)removeSecurityScope;
- (void)setMarkedMutableCopyMessage:(id)arg1;
- (bool)shouldAuthenticateDefaultAction;
- (bool)shouldBackgroundDefaultAction;
- (bool)shouldDisplayActionsInline;
- (bool)shouldHideDate;
- (bool)shouldHideTime;
- (bool)shouldIgnoreDoNotDisturb;
- (bool)shouldIgnoreDowntime;
- (bool)shouldPreemptPresentedNotification;
- (bool)shouldPreventNotificationDismissalAfterDefaultAction;
- (bool)shouldShowSubordinateIcon;
- (bool)shouldSuppressDefaultAction;
- (bool)shouldSuppressScreenLightUp;
- (bool)shouldSuppressSyncDismissalWhenRemoved;
- (bool)shouldUseRequestIdentifierForDismissalSync;
- (id)sound;
- (id)subtitle;
- (id)summaryArgument;
- (unsigned long long)summaryArgumentCount;
- (id)targetContentIdentifier;
- (id)threadIdentifier;
- (id)title;
- (id)topicIdentifiers;
- (id)userInfo;

@end
