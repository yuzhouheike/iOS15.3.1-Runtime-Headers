/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIPersistedRolloutAllocationStatus : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic, retain) NSMutableArray *namespaceFactorPackArray;
@property (nonatomic, readonly) unsigned long long namespaceFactorPackArray_Count;
@property (nonatomic, copy) NSString *rolloutId;

+ (id)descriptor;

@end
