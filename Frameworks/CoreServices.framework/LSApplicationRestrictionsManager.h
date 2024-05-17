/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSApplicationRestrictionsManager : NSObject {
    NSSet * _blacklistedBundleIDs;
    unsigned long long  _knownSystemAppDeletionState;
    NSNumber * _maximumRating;
    NSSet * _restrictedBundleIDs;
    NSObject<OS_dispatch_queue> * _restrictionsAccessQueue;
    NSObject<OS_dispatch_queue> * _signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> * _signerIdentitySyncSource;
    NSNumber * _whitelistState;
    NSSet * _whitelistedBundleIDs;
}

- (void).cxx_destruct;
- (bool)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2;
- (id)_LSResolveIdentifiers:(id)arg1;
- (id)_MCProfileConnection;
- (id)_MCRestrictionManager;
- (void)_pruneObsoleteTrustedSignerIdentities;
- (id)blacklistedBundleID;
- (id)calculateSetDifference:(id)arg1 and:(id)arg2;
- (void)clearAllValues;
- (void)handleMCEffectiveSettingsChanged;
- (id)init;
- (bool)isFeatureAllowed:(id)arg1;
- (void)setBlacklistedBundleIDs:(id)arg1;
- (void)setRestrictedBundleIDs:(id)arg1;
- (void)setWhitelistedBundleIDs:(id)arg1;

@end
