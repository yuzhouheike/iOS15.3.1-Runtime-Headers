/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetRemoteConnectionContext : NSObject {
    NSArray * _assetIdentifiers;
    _UIActivityDiscoveryContext * _discoveryContext;
    NSString * _sessionIdentifier;
    bool  _shouldSuggestFamilyMembers;
    bool  _slotsRenderingDisabled;
    NSArray * _urlsBeingShared;
}

@property (nonatomic, copy) NSArray *assetIdentifiers;
@property (nonatomic, retain) _UIActivityDiscoveryContext *discoveryContext;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic) bool shouldSuggestFamilyMembers;
@property (nonatomic) bool slotsRenderingDisabled;
@property (nonatomic, copy) NSArray *urlsBeingShared;

- (void).cxx_destruct;
- (id)assetIdentifiers;
- (id)createContextDictionary;
- (id)discoveryContext;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)sessionIdentifier;
- (void)setAssetIdentifiers:(id)arg1;
- (void)setDiscoveryContext:(id)arg1;
- (void)setShouldSuggestFamilyMembers:(bool)arg1;
- (void)setSlotsRenderingDisabled:(bool)arg1;
- (void)setUrlsBeingShared:(id)arg1;
- (bool)shouldSuggestFamilyMembers;
- (bool)slotsRenderingDisabled;
- (id)urlsBeingShared;

@end
