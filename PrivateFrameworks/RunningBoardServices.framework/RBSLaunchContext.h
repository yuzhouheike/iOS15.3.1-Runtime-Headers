/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSLaunchContext : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSDictionary * __additionalEnvironment;
    NSArray * __additionalMachServices;
    NSString * __overrideExecutablePath;
    NSArray * _arguments;
    NSArray * _attributes;
    NSString * _beforeTranslocationBundlePath;
    NSString * _bundleIdentifier;
    unsigned long long  _executionOptions;
    NSString * _explanation;
    NSDictionary * _extensionOverlay;
    bool  _forceSubmit;
    NSString * _homeDirectory;
    int  _hostPid;
    RBProcess * _hostProcess;
    RBSProcessIdentity * _identity;
    unsigned char  _initialRole;
    NSArray * _lsBinpref;
    NSArray * _lsBinprefSubtype;
    bool  _lsManageRoleOnly;
    unsigned int  _lsPersona;
    unsigned long long  _lsSpawnFlags;
    unsigned short  _lsUMask;
    NSString * _managedPersona;
    NSUUID * _oneShotUUID;
    NSUUID * _requiredCacheUUID;
    NSNumber * _requiredSequenceNumber;
    unsigned char  _spawnType;
    NSString * _standardErrorPath;
    NSString * _standardInPath;
    NSString * _standardOutputPath;
    NSString * _tmpDirectory;
}

@property (setter=_setAdditionalEnvironment:, nonatomic, copy) NSDictionary *_additionalEnvironment;
@property (setter=_setAdditionalMachServices:, nonatomic, copy) NSArray *_additionalMachServices;
@property (setter=_setOverrideExecutablePath:, nonatomic, copy) NSString *_overrideExecutablePath;
@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSString *beforeTranslocationBundlePath;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic, copy) NSString *executablePath;
@property (nonatomic) unsigned long long executionOptions;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, retain) NSDictionary *extensionOverlay;
@property (nonatomic) bool forceSubmit;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *homeDirectory;
@property (nonatomic) int hostPid;
@property (nonatomic, retain) RBProcess *hostProcess;
@property (nonatomic, copy) RBSProcessIdentity *identity;
@property (nonatomic) unsigned char initialRole;
@property (nonatomic, copy) NSArray *lsBinpref;
@property (nonatomic, copy) NSArray *lsBinprefSubtype;
@property (nonatomic) unsigned int lsInitialRole;
@property (nonatomic) bool lsManageRoleOnly;
@property (nonatomic) unsigned int lsPersona;
@property (nonatomic) unsigned long long lsSpawnFlags;
@property (nonatomic) unsigned short lsUMask;
@property (nonatomic, copy) NSArray *machServices;
@property (nonatomic, copy) NSString *managedPersona;
@property (nonatomic, retain) NSUUID *oneShotUUID;
@property (nonatomic, copy) NSUUID *requiredCacheUUID;
@property (nonatomic, copy) NSNumber *requiredSequenceNumber;
@property (nonatomic) unsigned char spawnType;
@property (nonatomic, copy) NSString *standardErrorPath;
@property (nonatomic, copy) NSString *standardInPath;
@property (nonatomic, copy) NSString *standardOutputPath;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tmpDirectory;

+ (id)context;
+ (id)contextWithIdentity:(id)arg1;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_additionalEnvironment;
- (id)_additionalMachServices;
- (id)_overrideExecutablePath;
- (void)_setAdditionalEnvironment:(id)arg1;
- (void)_setAdditionalMachServices:(id)arg1;
- (void)_setOverrideExecutablePath:(id)arg1;
- (id)arguments;
- (id)attributes;
- (id)beforeTranslocationBundlePath;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)environment;
- (id)executablePath;
- (unsigned long long)executionOptions;
- (id)explanation;
- (id)extensionOverlay;
- (bool)forceSubmit;
- (id)homeDirectory;
- (int)hostPid;
- (id)hostProcess;
- (id)identity;
- (id)initWithRBSXPCCoder:(id)arg1;
- (unsigned char)initialRole;
- (bool)isEqual:(id)arg1;
- (id)lsBinpref;
- (id)lsBinprefSubtype;
- (unsigned int)lsInitialRole;
- (bool)lsManageRoleOnly;
- (unsigned int)lsPersona;
- (unsigned long long)lsSpawnFlags;
- (unsigned short)lsUMask;
- (id)machServices;
- (id)managedPersona;
- (id)oneShotUUID;
- (id)requiredCacheUUID;
- (id)requiredSequenceNumber;
- (void)setArguments:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBeforeTranslocationBundlePath:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExecutablePath:(id)arg1;
- (void)setExecutionOptions:(unsigned long long)arg1;
- (void)setExplanation:(id)arg1;
- (void)setExtensionOverlay:(id)arg1;
- (void)setForceSubmit:(bool)arg1;
- (void)setHomeDirectory:(id)arg1;
- (void)setHostPid:(int)arg1;
- (void)setHostProcess:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setInitialRole:(unsigned char)arg1;
- (void)setLsBinpref:(id)arg1;
- (void)setLsBinprefSubtype:(id)arg1;
- (void)setLsInitialRole:(unsigned int)arg1;
- (void)setLsManageRoleOnly:(bool)arg1;
- (void)setLsPersona:(unsigned int)arg1;
- (void)setLsSpawnFlags:(unsigned long long)arg1;
- (void)setLsUMask:(unsigned short)arg1;
- (void)setMachServices:(id)arg1;
- (void)setManagedPersona:(id)arg1;
- (void)setOneShotUUID:(id)arg1;
- (void)setRequiredCacheUUID:(id)arg1;
- (void)setRequiredSequenceNumber:(id)arg1;
- (void)setSpawnType:(unsigned char)arg1;
- (void)setStandardErrorPath:(id)arg1;
- (void)setStandardInPath:(id)arg1;
- (void)setStandardOutputPath:(id)arg1;
- (void)setTmpDirectory:(id)arg1;
- (unsigned char)spawnType;
- (id)standardErrorPath;
- (id)standardInPath;
- (id)standardOutputPath;
- (id)tmpDirectory;

@end
