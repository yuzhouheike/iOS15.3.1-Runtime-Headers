/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _MLBSerialNumber;
    NSString * _ROMAddress;
    NSNumber * _backingColor;
    NSString * _color;
    NSNumber * _coverGlassColor;
    NSString * _enclosureColor;
    NSNumber * _housingColor;
    unsigned long long  _linkType;
    NSLocale * _locale;
    NSString * _modelNumber;
    NSString * _serverFriendlyDescription;
    bool  _shouldUpdateBackingColor;
    bool  _shouldUpdateColor;
    bool  _shouldUpdateCoverGlassColor;
    bool  _shouldUpdateEnclosureColor;
    bool  _shouldUpdateHousingColor;
    bool  _shouldUpdateLocale;
    bool  _shouldUpdateMLBSerialNumber;
    bool  _shouldUpdateModelNumber;
    bool  _shouldUpdateROMAddress;
    bool  _shouldUpdateServerFriendlyDescription;
    bool  _shouldUpdateUniqueDeviceIdentifier;
    struct __CTServerConnection { } * _telephonyConnectionRef;
    NSLock * _telephonyLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
    NSString * _uniqueDeviceIdentifier;
}

@property (nonatomic, copy) NSString *MLBSerialNumber;
@property (nonatomic, copy) NSString *ROMAddress;
@property (nonatomic, copy) NSNumber *backingColor;
@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSNumber *coverGlassColor;
@property (nonatomic, copy) NSString *enclosureColor;
@property (nonatomic, copy) NSNumber *housingColor;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) NSString *internationalMobileEquipmentIdentity2;
@property (readonly) bool isBiometricAuthCapable;
@property (readonly) bool isFaceIDCapable;
@property (readonly) bool isInCircle;
@property (readonly) bool isInternalBuild;
@property (readonly) bool isMultiUserMode;
@property (readonly) bool isProtectedWithPasscode;
@property (readonly) bool isUnlocked;
@property (setter=setLinkType:) unsigned long long linkType;
@property (readonly) NSString *localUserUUID;
@property (nonatomic, copy) NSLocale *locale;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (nonatomic, copy) NSString *modelNumber;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *serializedData;
@property (nonatomic, copy) NSString *serverFriendlyDescription;
@property (nonatomic, copy) NSString *uniqueDeviceIdentifier;
@property (readonly) NSString *userChosenName;
@property (readonly) NSString *userFullName;

+ (id)_buildNumber;
+ (long long)_currentDeviceAuthenticationMode;
+ (id)_generateServerFriendlyDescriptionForPairedDevice:(id)arg1;
+ (id)_hardwareModel;
+ (id)_osName;
+ (id)_osVersion;
+ (id)_systemVersionDictionary;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
+ (long long)currentDeviceAuthenticationMode;
+ (long long)currentDeviceAuthenticationModeForAuthContext:(id)arg1;
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)deviceWithSerializedData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)systemContainerCacheURL;
+ (id)systemContainerURL;

- (void).cxx_destruct;
- (id)MLBSerialNumber;
- (id)ROMAddress;
- (void)_setShouldUpdateToValue:(bool)arg1;
- (struct __CTServerConnection { }*)_telephonyConnection;
- (id)_volumeGroupUUID;
- (id)backingColor;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverGlassColor;
- (void)dealloc;
- (id)description;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (id)housingColor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)integratedCircuitCardIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (id)internationalMobileEquipmentIdentity2;
- (bool)isBiometricAuthCapable;
- (bool)isFaceIDCapable;
- (bool)isInCircle;
- (bool)isInternalBuild;
- (bool)isMultiUserMode;
- (bool)isProtectedWithPasscode;
- (bool)isUnlocked;
- (unsigned long long)linkType;
- (id)localUserUUID;
- (id)locale;
- (id)mobileEquipmentIdentifier;
- (id)modelNumber;
- (id)phoneNumber;
- (id)serialNumber;
- (id)serializedData;
- (id)serverFriendlyDescription;
- (void)setBackingColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCoverGlassColor:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setHousingColor:(id)arg1;
- (void)setLinkType:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setMLBSerialNumber:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setROMAddress:(id)arg1;
- (void)setServerFriendlyDescription:(id)arg1;
- (void)setUniqueDeviceIdentifier:(id)arg1;
- (id)uniqueDeviceIdentifier;
- (id)userChosenName;
- (id)userFullName;

@end
