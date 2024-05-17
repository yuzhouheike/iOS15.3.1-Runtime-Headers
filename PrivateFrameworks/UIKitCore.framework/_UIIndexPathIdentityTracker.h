/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIIndexPathIdentityTracker : NSObject {
    UICollectionView * _collectionView;
    bool  _enforcesManualMapping;
    id  _identityBasedDataSource;
    NSMutableDictionary * _mapping;
    UITableView * _tableView;
}

- (void).cxx_destruct;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)arg1;
- (id)currentIndexPathForIdentifier:(id)arg1;
- (void)enforceManualMapping;
- (id)identifierForIndexPath:(id)arg1;
- (id)init;
- (id)initWithCollectionView:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (void)reset;
- (void)updateWithUpdateItems:(id)arg1;

@end
