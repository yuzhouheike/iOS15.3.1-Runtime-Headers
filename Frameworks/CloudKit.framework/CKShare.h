/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShare : CKRecord <CKPropertiesDescription, NSCopying, NSSecureCoding> {
    NSMutableSet * _addedParticipantIDs;
    NSMutableArray * _allParticipants;
    bool  _allowsAnonymousPublicAccess;
    CKContainerID * _containerID;
    bool  _encodeAllowsReadOnlyParticipantsToSeeEachOther;
    NSArray * _invitedKeysToRemove;
    NSData * _invitedProtectionData;
    NSString * _invitedProtectionEtag;
    NSMutableArray * _lastFetchedParticipants;
    long long  _participantSelfRemovalBehavior;
    long long  _participantVisibility;
    NSString * _previousInvitedProtectionEtag;
    NSString * _previousPublicProtectionEtag;
    long long  _publicPermission;
    NSData * _publicProtectionData;
    NSString * _publicProtectionEtag;
    NSMutableSet * _removedParticipantIDs;
    CKRecordID * _rootRecordID;
    bool  _serializePersonalInfo;
    CKShareID * _shareID;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, retain) NSMutableSet *addedParticipantIDs;
@property (nonatomic, retain) NSMutableArray *allParticipants;
@property (nonatomic) bool allowsAnonymousPublicAccess;
@property (nonatomic, retain) CKContainerID *containerID;
@property (nonatomic, readonly, copy) CKShareParticipant *currentUserParticipant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool encodeAllowsReadOnlyParticipantsToSeeEachOther;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *invitedKeysToRemove;
@property (nonatomic, retain) NSData *invitedProtectionData;
@property (nonatomic, retain) NSString *invitedProtectionEtag;
@property (nonatomic, readonly) bool isZoneWideShare;
@property (nonatomic, retain) NSMutableArray *lastFetchedParticipants;
@property (nonatomic, readonly, copy) CKShareParticipant *owner;
@property (nonatomic) long long participantSelfRemovalBehavior;
@property (nonatomic) long long participantVisibility;
@property (nonatomic, readonly, copy) NSArray *participants;
@property (nonatomic, retain) NSString *previousInvitedProtectionEtag;
@property (nonatomic, retain) NSString *previousPublicProtectionEtag;
@property (nonatomic) long long publicPermission;
@property (nonatomic, retain) NSData *publicProtectionData;
@property (nonatomic, retain) NSString *publicProtectionEtag;
@property (nonatomic, retain) NSData *publicSharingIdentity;
@property (nonatomic, retain) NSMutableSet *removedParticipantIDs;
@property (nonatomic, copy) CKRecordID *rootRecordID;
@property (nonatomic) bool serializePersonalInfo;
@property (nonatomic, copy) CKShareID *shareID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (void)_addOwnerParticipant;
- (void)_addParticipantBypassingChecks:(id)arg1;
- (void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(bool)arg3 inContainer:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_commonCKShareInit;
- (id)_copyWithoutPersonalInfo;
- (void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_initWithShareRecordID:(id)arg1;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (bool)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2;
- (bool)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2;
- (void)_removeAllParticipants;
- (void)_removeParticipantBypassingChecks:(id)arg1;
- (void)_removePendingPrivateAndAdminParticipants;
- (void)_setPublicPermissionNoSideEffects:(long long)arg1;
- (void)_stripPersonalInfo;
- (void)addParticipant:(id)arg1;
- (id)addedParticipantIDs;
- (id)addedParticipants;
- (id)allParticipants;
- (bool)allowsAnonymousPublicAccess;
- (bool)allowsReadOnlyParticipantsToSeeEachOther;
- (bool)canHostServerURLInfo;
- (void)clearModifiedParticipants;
- (id)containerID;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserParticipant;
- (id)description;
- (bool)encodeAllowsReadOnlyParticipantsToSeeEachOther;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (id)encryptedPublicSharingKey;
- (bool)hasEncryptedData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordZoneID:(id)arg1;
- (id)initWithRootRecord:(id)arg1;
- (id)initWithRootRecord:(id)arg1 shareID:(id)arg2;
- (id)invitedKeysToRemove;
- (id)invitedProtectionData;
- (id)invitedProtectionEtag;
- (bool)isZoneWideShare;
- (id)lastFetchedParticipants;
- (id)owner;
- (long long)participantSelfRemovalBehavior;
- (long long)participantVisibility;
- (id)participants;
- (id)previousInvitedProtectionEtag;
- (id)previousPublicProtectionEtag;
- (long long)publicPermission;
- (id)publicProtectionData;
- (id)publicProtectionEtag;
- (id)publicSharingIdentity;
- (id)redactedDescription;
- (void)registerFetchedParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (id)removedParticipantIDs;
- (id)removedParticipants;
- (void)resetFetchedParticipants;
- (id)rootRecordID;
- (bool)serializePersonalInfo;
- (void)setAddedParticipantIDs:(id)arg1;
- (void)setAllParticipants:(id)arg1;
- (void)setAllowsAnonymousPublicAccess:(bool)arg1;
- (void)setAllowsReadOnlyParticipantsToSeeEachOther:(bool)arg1;
- (void)setContainerID:(id)arg1;
- (void)setEncodeAllowsReadOnlyParticipantsToSeeEachOther:(bool)arg1;
- (void)setInvitedKeysToRemove:(id)arg1;
- (void)setInvitedProtectionData:(id)arg1;
- (void)setInvitedProtectionEtag:(id)arg1;
- (void)setLastFetchedParticipants:(id)arg1;
- (void)setParticipantSelfRemovalBehavior:(long long)arg1;
- (void)setParticipantVisibility:(long long)arg1;
- (void)setPreviousInvitedProtectionEtag:(id)arg1;
- (void)setPreviousPublicProtectionEtag:(id)arg1;
- (void)setPublicPermission:(long long)arg1;
- (void)setPublicProtectionData:(id)arg1;
- (void)setPublicProtectionEtag:(id)arg1;
- (void)setPublicSharingIdentity:(id)arg1;
- (void)setRemovedParticipantIDs:(id)arg1;
- (void)setRootRecordID:(id)arg1;
- (void)setSerializePersonalInfo:(bool)arg1;
- (void)setShareID:(id)arg1;
- (void)setWantsPublicSharingKey:(bool)arg1;
- (id)shareID;
- (id)shareURL;
- (id)updateFromServerShare:(id)arg1;

@end
