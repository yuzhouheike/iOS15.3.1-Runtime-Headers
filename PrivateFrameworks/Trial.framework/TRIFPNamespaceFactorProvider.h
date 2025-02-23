/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    int  _deploymentId;
    TRIReferenceManagedDirReaderLock * _dirLock;
    <TRIFactorLevelCaching> * _factorLevels;
    NSString<TRIFactorPackId> * _factorPackId;
    NSSet * _namespaceCompatibilityVersions;
    NSString * _namespaceName;
    NSString * _parentId;
    bool  _promotable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool promotable;
@property (readonly) Class superclass;

+ (id)_factorLevelsWithFactorPackData:(id)arg1 loadedFromProtoPath:(id)arg2 referencePath:(id)arg3 outFactorPackId:(id*)arg4 outNamespaceName:(id*)arg5 outNCVs:(id*)arg6;

- (void).cxx_destruct;
- (int)deploymentId;
- (void)dispose;
- (id)experimentId;
- (id)factorLevels;
- (id)init;
- (id)initWithParentId:(id)arg1 deploymentId:(int)arg2 promotable:(bool)arg3;
- (id)initWithPath:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 promotable:(bool)arg4;
- (id)levelForFactor:(id)arg1;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (id)namespaceName;
- (bool)promotable;
- (id)rolloutId;
- (id)treatmentId;

@end
