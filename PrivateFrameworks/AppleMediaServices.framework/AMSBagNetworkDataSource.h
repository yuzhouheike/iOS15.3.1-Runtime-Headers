/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol> {
    AMSObserver * _accountsChangedObserver;
    NSError * _activeFailure;
    NSDate * _activeFailureExpiration;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _cachedDataAccessLock;
    AMSBagNetworkTaskResult * _cachedResult;
    NSString * _cachedStorefront;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _cachedStorefrontAccessLock;
    NSObject<OS_dispatch_queue> * _completionQueue;
    AMSBagNetworkTask * _currentLoadTask;
    id /* block */  _dataSourceChangedHandler;
    id /* block */  _dataSourceDataInvalidatedHandler;
    NSObject<OS_dispatch_queue> * _processAccountStoreDidChangeNotificationQueue;
    AMSProcessInfo * _processInfo;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, retain) AMSObserver *accountsChangedObserver;
@property (nonatomic, retain) NSError *activeFailure;
@property (nonatomic, readonly) NSDate *activeFailureExpiration;
@property (nonatomic, readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; } cachedDataAccessLock;
@property (nonatomic, retain) AMSBagNetworkTaskResult *cachedResult;
@property (nonatomic, retain) NSString *cachedStorefront;
@property (nonatomic, readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; } cachedStorefrontAccessLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, retain) AMSBagNetworkTask *currentLoadTask;
@property (nonatomic, copy) id /* block */ dataSourceChangedHandler;
@property (nonatomic, copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionExtended;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

+ (bool)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2;
+ (bool)_shouldProcessChangedAccount:(id)arg1 forMediaType:(id)arg2;
+ (id)valueForURLVariable:(id)arg1 account:(id)arg2 clientInfo:(id)arg3;

- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (id)_fetchBag;
- (void)_invalidateCacheNotification:(id)arg1;
- (void)_updateCachedResult:(id)arg1;
- (id)accountsChangedObserver;
- (id)activeFailure;
- (id)activeFailureExpiration;
- (id)bagKeyInfoForKey:(id)arg1;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })cachedDataAccessLock;
- (id)cachedResult;
- (id)cachedStorefront;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })cachedStorefrontAccessLock;
- (id)completionQueue;
- (id)currentLoadTask;
- (id /* block */)dataSourceChangedHandler;
- (id /* block */)dataSourceDataInvalidatedHandler;
- (void)dealloc;
- (id)description;
- (id)descriptionExtended;
- (id)expirationDate;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;
- (bool)isLoaded;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)processAccountStoreDidChangeNotificationQueue;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (void)setAccountsChangedObserver:(id)arg1;
- (void)setActiveFailure:(id)arg1;
- (void)setCachedResult:(id)arg1;
- (void)setCachedStorefront:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setCurrentLoadTask:(id)arg1;
- (void)setDataSourceChangedHandler:(id /* block */)arg1;
- (void)setDataSourceDataInvalidatedHandler:(id /* block */)arg1;
- (void)setProcessAccountStoreDidChangeNotificationQueue:(id)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;

@end
