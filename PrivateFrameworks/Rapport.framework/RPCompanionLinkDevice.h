/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkDevice : RPEndpoint <NSSecureCoding> {
    bool  _changed;
    bool  _daemon;
    NSString * _deviceColor;
    unsigned int  _flags;
    NSUUID * _homeKitIdentifier;
    NSString * _idsPersonalDeviceIdentifier;
    NSUUID * _launchInstanceID;
    int  _mediaAccessControlSetting;
    NSUUID * _mediaSystemIdentifier;
    NSUUID * _mediaSystemIdentifierEffective;
    NSString * _mediaSystemName;
    int  _mediaSystemRole;
    int  _mediaSystemRoleEffective;
    int  _mediaSystemState;
    unsigned char  _nearbyActionV2Type;
    NSUUID * _pairingIdentifier;
    NSString * _password;
    bool  _personal;
    int  _personalDeviceState;
    int  _personalRequestsState;
    NSString * _publicIdentifier;
    NSString * _role;
    NSString * _roomName;
    int  _serversChangedState;
    NSDictionary * _siriInfo;
    bool  _uiTriggered;
}

@property (nonatomic) bool changed;
@property (nonatomic) bool daemon;
@property (nonatomic, copy) NSString *deviceColor;
@property (nonatomic, readonly, copy) NSString *effectiveIdentifier;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) NSUUID *homeKitIdentifier;
@property (nonatomic, copy) NSString *idsPersonalDeviceIdentifier;
@property (nonatomic, copy) NSUUID *launchInstanceID;
@property (nonatomic) int mediaAccessControlSetting;
@property (nonatomic, copy) NSUUID *mediaSystemIdentifier;
@property (nonatomic, copy) NSUUID *mediaSystemIdentifierEffective;
@property (nonatomic, copy) NSString *mediaSystemName;
@property (nonatomic) int mediaSystemRole;
@property (nonatomic) int mediaSystemRoleEffective;
@property (nonatomic) int mediaSystemState;
@property (nonatomic) unsigned char nearbyActionV2Type;
@property (nonatomic, copy) NSUUID *pairingIdentifier;
@property (nonatomic, copy) NSString *password;
@property (getter=isPersonal, nonatomic) bool personal;
@property (nonatomic) int personalDeviceState;
@property (nonatomic) int personalRequestsState;
@property (nonatomic, copy) NSString *publicIdentifier;
@property (nonatomic, copy) NSString *role;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic) int serversChangedState;
@property (nonatomic, copy) NSDictionary *siriInfo;
@property (nonatomic) bool uiTriggered;

// Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)changed;
- (bool)daemon;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceColor;
- (id)effectiveIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)homeKitIdentifier;
- (id)idsPersonalDeviceIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isPersonal;
- (id)launchInstanceID;
- (int)mediaAccessControlSetting;
- (id)mediaSystemIdentifier;
- (id)mediaSystemIdentifierEffective;
- (id)mediaSystemName;
- (int)mediaSystemRole;
- (int)mediaSystemRoleEffective;
- (int)mediaSystemState;
- (unsigned char)nearbyActionV2Type;
- (id)pairingIdentifier;
- (id)password;
- (int)personalDeviceState;
- (int)personalRequestsState;
- (id)publicIdentifier;
- (id)role;
- (id)roomName;
- (int)serversChangedState;
- (void)setChanged:(bool)arg1;
- (void)setDaemon:(bool)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHomeKitIdentifier:(id)arg1;
- (void)setIdsPersonalDeviceIdentifier:(id)arg1;
- (void)setLaunchInstanceID:(id)arg1;
- (void)setMediaAccessControlSetting:(int)arg1;
- (void)setMediaSystemIdentifier:(id)arg1;
- (void)setMediaSystemIdentifierEffective:(id)arg1;
- (void)setMediaSystemName:(id)arg1;
- (void)setMediaSystemRole:(int)arg1;
- (void)setMediaSystemRoleEffective:(int)arg1;
- (void)setMediaSystemState:(int)arg1;
- (void)setNearbyActionV2Type:(unsigned char)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPersonal:(bool)arg1;
- (void)setPersonalDeviceState:(int)arg1;
- (void)setPersonalRequestsState:(int)arg1;
- (void)setPublicIdentifier:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setServersChangedState:(int)arg1;
- (void)setSiriInfo:(id)arg1;
- (void)setUiTriggered:(bool)arg1;
- (id)siriInfo;
- (bool)uiTriggered;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (id)mrDeviceInfo;

@end
