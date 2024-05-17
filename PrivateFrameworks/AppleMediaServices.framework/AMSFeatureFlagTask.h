/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFeatureFlagTask : AMSTask

+ (id)_cacheDirectory;
+ (id)_cachePath;
+ (id)cachedRemoteGroups;
+ (void)clearCache;
+ (id)lastFetchedDate;

- (id)_bag;
- (bool)_cacheResponse:(id)arg1 error:(id*)arg2;
- (id)_updateRemoteFeatureFlags;
- (id)perform;

@end
