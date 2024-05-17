/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXExtensionRep : NSObject <NSSecureCoding, _EXExtensionConfigurationProviding, _EXExtensionRepresenting> {
    NSUUID * _UUID;
    NSURL * _containingURL;
    NSDictionary * _extensionDictionary;
    unsigned int  _platform;
    NSDictionary * _sdkDictionary;
    NSURL * _url;
}

@property (readonly) NSUUID *UUID;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) <_EXExtensionConfigurationProviding> *configuration;
@property (readonly) Class connectionHandlerClass;
@property (readonly) NSURL *containingURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSURL *executableURL;
@property (readonly) Class extensionContextClass;
@property (readonly) NSDictionary *extensionDictionary;
@property (readonly) NSDictionary *extensionPointConfiguration;
@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class hostContextClass;
@property (readonly) NSString *internalServiceName;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned int platform;
@property (readonly) bool presentsUserInterface;
@property (readonly) Class principalClass;
@property (readonly) NSDictionary *requiredHostEntitlements;
@property (readonly) bool requiresMacCatalystBehavior;
@property (readonly) NSDictionary *sdkDictionary;
@property (readonly) Class superclass;
@property (readonly) unsigned long long type;
@property (readonly) NSURL *url;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_init;
- (id)configuration;
- (Class)connectionHandlerClass;
- (id)containingURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;
- (id)executableURL;
- (Class)extensionContextClass;
- (id)extensionDictionary;
- (id)extensionPointConfiguration;
- (id)extensionProcessWithError:(id*)arg1;
- (unsigned long long)hash;
- (Class)hostContextClass;
- (id)initWithApplicationExtensionRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlugInKitProxy:(id)arg1;
- (id)internalServiceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExtension:(id)arg1;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (unsigned int)platform;
- (bool)presentsUserInterface;
- (Class)principalClass;
- (id)requiredHostEntitlements;
- (id)sdkDictionary;
- (unsigned long long)type;
- (id)url;

@end
