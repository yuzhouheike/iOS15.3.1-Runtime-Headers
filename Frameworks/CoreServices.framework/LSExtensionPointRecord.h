/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSExtensionPointRecord : LSRecord

@property (readonly) LSPropertyList *SDKDictionary;
@property (readonly) bool _IS_extensionsCanProvideIcon;
@property (readonly) bool _IS_extensionsShouldFallbackToContainerIcon;
@property (nonatomic, readonly) LSExtensionPoint *compatibilityObject;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) unsigned int platform;
@property (readonly) NSString *version;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_propertyClasses;
+ (id)enumerator;
+ (id)extensionPointRecordForCurrentProcess;
+ (id)identifierForCurrentProcess;
+ (bool)isCurrentProcessAnApplicationExtension;
+ (void)setExtensionPointRecordForCurrentProcess:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)SDKDictionary;
- (id)SDKDictionaryWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg4;
- (void)_LSRecord_resolve_SDKDictionary;
- (void)_LSRecord_resolve_identifier;
- (void)_LSRecord_resolve_name;
- (void)_LSRecord_resolve_platform;
- (void)_LSRecord_resolve_version;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)identifier;
- (id)identifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg4;
- (id)initWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithIdentifier:(id)arg1 platform:(unsigned int)arg2 error:(id*)arg3;
- (id)name;
- (id)nameWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg4;
- (unsigned int)platform;
- (unsigned int)platformWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg4;
- (id)version;
- (id)versionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSExtensionPointData { int x1; unsigned int x2; struct LSVersionNumber { unsigned char x_3_1_1[32]; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg4;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (bool)_IS_extensionsCanProvideIcon;
- (bool)_IS_extensionsShouldFallbackToContainerIcon;

@end
