/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCircle : NSObject <NSSecureCoding> {
    NSDictionary * __serverResponse;
    NSString * _addMemberButtonLabel;
    bool  _canAddMembers;
    FAFamilyCloudKitProperties * _cloudKitProperties;
    FAEligibilityRequirements * _eligibilityRequirements;
    NSString * _familyMembersFooterLabel;
    NSArray * _invites;
    FAFamilyMember * _me;
    NSArray * _members;
    NSArray * _pendingMembers;
    bool  _showAddMemberButton;
}

@property (readonly) NSDictionary *_serverResponse;
@property (nonatomic, readonly, copy) NSString *addMemberButtonLabel;
@property (nonatomic, readonly) bool canAddMembers;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties;
@property (readonly) FAEligibilityRequirements *eligibilityRequirements;
@property (nonatomic, readonly, copy) NSString *familyMembersFooterLabel;
@property (nonatomic, readonly, copy) NSArray *firstNames;
@property (nonatomic, readonly, copy) NSArray *invites;
@property (nonatomic, readonly) FAFamilyMember *me;
@property (readonly) NSArray *members;
@property (nonatomic, readonly, copy) NSArray *pendingMembers;
@property (nonatomic, readonly) bool showAddMemberButton;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serverResponse;
- (id)addMemberButtonLabel;
- (bool)canAddMembers;
- (id)cloudKitProperties;
- (id)eligibilityRequirements;
- (void)encodeWithCoder:(id)arg1;
- (id)familyMembersFooterLabel;
- (id)firstNames;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;
- (id)invites;
- (id)me;
- (id)memberForAltDSID:(id)arg1;
- (id)members;
- (id)pendingMembers;
- (bool)showAddMemberButton;

@end
