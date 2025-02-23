/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSTreatmentStore : NSObject {
    AMSLRUCache * _areasCache;
    AMSLRUCache * _treatmentsCache;
}

@property (readonly) AMSLRUCache *areasCache;
@property (readonly) AMSLRUCache *treatmentsCache;

+ (id)defaultTreatmentStore;

- (void).cxx_destruct;
- (void)_cacheAreas:(id)arg1 forNamespace:(id)arg2;
- (void)_cacheAreas:(id)arg1 forTopic:(id)arg2;
- (void)_cacheTreatment:(id)arg1 forArea:(id)arg2;
- (id)_cachedAreasForNamespace:(id)arg1;
- (id)_cachedAreasForTopic:(id)arg1;
- (id)_cachedTreatmentForArea:(id)arg1;
- (id)_treatmentStoreService;
- (void)_treatmentsDidSyncronize:(id)arg1;
- (id)areasCache;
- (id)areasForNamespaces:(id)arg1;
- (id)areasForTopics:(id)arg1;
- (void)dealloc;
- (id)experimentDataForAreas:(id)arg1;
- (id)init;
- (id)synchronizeTreatments;
- (id)treatmentsCache;
- (id)treatmentsForAreas:(id)arg1;
- (id)treatmentsPayloadForAreas:(id)arg1;

@end
