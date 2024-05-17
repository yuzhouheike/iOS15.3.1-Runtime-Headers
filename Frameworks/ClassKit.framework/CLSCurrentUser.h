/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _accountPersonaUniqueIdentifier;
    long long  _catalogEnvironment;
    NSString * _clientPersonaUniqueIdentifier;
    int  _devMode;
    int  _handoutServiceAuthenticationState;
    bool  _hasDataSeparatedAccount;
    bool  _hasEDUAccount;
    bool  _hasManagedAccount;
    bool  _hasMatchingPersona;
    bool  _hasSecurityScopedURL;
    bool  _hasUbiquityEnabled;
    int  _iCloudDriveAuthenticationState;
    NSDictionary * _locationIDsByAXMRoleType;
    NSError * _orgAdminUserFetchError;
    CKRecordID * _orgAdminUserRecordID;
    bool  _organizationMaidAnalyticsEnabled;
    NSString * _organizationName;
    bool  _organizationProgressTrackingAllowed;
    CLSPerson * _person;
    bool  _personMaidAnalyticsEnabled;
    bool  _requiresPersonaMatch;
    unsigned long long  _roles;
    int  _rosterServiceAuthenticationState;
    NSError * _schoolworkUbiquitousContainerError;
    NSURL * _schoolworkUbiquitousContainerURL;
    NSData * _schoolworkUbiquitousContainerURLSandboxExtension;
    NSError * _userFetchError;
    CKRecordID * _userRecordID;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *accountPersonaUniqueIdentifier;
@property (nonatomic) long long catalogEnvironment;
@property (nonatomic, copy) NSString *clientPersonaUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *clientPersonaUniqueString;
@property (nonatomic) int devMode;
@property (nonatomic) int handoutServiceAuthenticationState;
@property (nonatomic) bool hasDataSeparatedAccount;
@property (nonatomic) bool hasEDUAccount;
@property (nonatomic) bool hasManagedAccount;
@property (nonatomic) bool hasMatchingPersona;
@property (nonatomic) bool hasUbiquityEnabled;
@property (nonatomic) int iCloudDriveAuthenticationState;
@property (nonatomic, readonly) bool isAdministrator;
@property (nonatomic, readonly) bool isInstructor;
@property (nonatomic, readonly) bool isStudent;
@property (nonatomic, retain) NSDictionary *locationIDsByAXMRoleType;
@property (nonatomic, copy) NSError *orgAdminUserFetchError;
@property (nonatomic, retain) CKRecordID *orgAdminUserRecordID;
@property (nonatomic) bool organizationMaidAnalyticsEnabled;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic) bool organizationProgressTrackingAllowed;
@property (nonatomic, retain) CLSPerson *person;
@property (nonatomic) bool personMaidAnalyticsEnabled;
@property (nonatomic, readonly, copy) NSString *personaUniqueString;
@property (nonatomic) bool requiresPersonaMatch;
@property (nonatomic) unsigned long long roles;
@property (nonatomic) int rosterServiceAuthenticationState;
@property (nonatomic, copy) NSError *schoolworkUbiquitousContainerError;
@property (nonatomic, copy) NSURL *schoolworkUbiquitousContainerURL;
@property (nonatomic, copy) NSData *schoolworkUbiquitousContainerURLSandboxExtension;
@property (nonatomic, copy) NSError *userFetchError;
@property (nonatomic, retain) CKRecordID *userRecordID;

+ (id)magicValue;
+ (bool)supportsSecureCoding;
+ (unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasRole:(unsigned long long)arg1;
- (id)_init;
- (unsigned long long)_useRoles;
- (id)accountIdentifier;
- (id)accountPersonaUniqueIdentifier;
- (long long)catalogEnvironment;
- (id)clientPersonaUniqueIdentifier;
- (id)clientPersonaUniqueString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)devMode;
- (void)encodeWithCoder:(id)arg1;
- (int)handoutServiceAuthenticationState;
- (bool)hasDataSeparatedAccount;
- (bool)hasEDUAccount;
- (bool)hasManagedAccount;
- (bool)hasMatchingPersona;
- (bool)hasRole:(unsigned long long)arg1;
- (bool)hasUbiquityEnabled;
- (int)iCloudDriveAuthenticationState;
- (id)initWithCoder:(id)arg1;
- (bool)isAdministrator;
- (bool)isInstructor;
- (bool)isStudent;
- (id)locationIDsByAXMRoleType;
- (id)orgAdminUserFetchError;
- (id)orgAdminUserRecordID;
- (bool)organizationMaidAnalyticsEnabled;
- (id)organizationName;
- (bool)organizationProgressTrackingAllowed;
- (id)person;
- (bool)personMaidAnalyticsEnabled;
- (id)personaUniqueString;
- (bool)requiresPersonaMatch;
- (unsigned long long)roles;
- (int)rosterServiceAuthenticationState;
- (id)schoolworkUbiquitousContainerError;
- (id)schoolworkUbiquitousContainerURL;
- (id)schoolworkUbiquitousContainerURLSandboxExtension;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountPersonaUniqueIdentifier:(id)arg1;
- (void)setCatalogEnvironment:(long long)arg1;
- (void)setClientPersonaUniqueIdentifier:(id)arg1;
- (void)setDevMode:(int)arg1;
- (void)setHandoutServiceAuthenticationState:(int)arg1;
- (void)setHasDataSeparatedAccount:(bool)arg1;
- (void)setHasEDUAccount:(bool)arg1;
- (void)setHasManagedAccount:(bool)arg1;
- (void)setHasMatchingPersona:(bool)arg1;
- (void)setHasUbiquityEnabled:(bool)arg1;
- (void)setICloudDriveAuthenticationState:(int)arg1;
- (void)setLocationIDsByAXMRoleType:(id)arg1;
- (void)setOrgAdminUserFetchError:(id)arg1;
- (void)setOrgAdminUserRecordID:(id)arg1;
- (void)setOrganizationMaidAnalyticsEnabled:(bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setOrganizationProgressTrackingAllowed:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setPersonMaidAnalyticsEnabled:(bool)arg1;
- (void)setRequiresPersonaMatch:(bool)arg1;
- (void)setRoles:(unsigned long long)arg1;
- (void)setRosterServiceAuthenticationState:(int)arg1;
- (void)setSchoolworkUbiquitousContainerError:(id)arg1;
- (void)setSchoolworkUbiquitousContainerURL:(id)arg1;
- (void)setSchoolworkUbiquitousContainerURLSandboxExtension:(id)arg1;
- (void)setUserFetchError:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userFetchError;
- (id)userRecordID;

@end
