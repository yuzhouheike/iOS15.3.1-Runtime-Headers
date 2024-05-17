/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewLayoutInvalidationContext : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeAdjustment;
    long long  _intent;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSMutableSet * _invalidatedItemIndexPaths;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    struct { 
        unsigned int invalidateDataSource : 1; 
        unsigned int invalidateEverything : 1; 
    }  _invalidationContextFlags;
    NSMutableIndexSet * _orthogonalSectionsWithContentSizeChanges;
    NSArray * _previousIndexPathsForReorderedItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reorderingTarget;
    bool  _retainExistingSizingInfoForEstimates;
    NSArray * _targetIndexPathsForReorderedItems;
    NSArray * _updateItems;
}

@property (nonatomic, readonly) NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
@property (nonatomic, readonly) bool _shouldInvalidatePreferredAttributes;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSizeAdjustment;
@property (getter=_intent, setter=_setIntent:, nonatomic) long long intent;
@property (setter=_setInteractiveMovementTarget:, nonatomic) struct CGPoint { double x1; double x2; } interactiveMovementTarget;
@property (setter=_setInvalidateDataSourceCounts:, nonatomic) bool invalidateDataSourceCounts;
@property (setter=_setInvalidateEverything:, nonatomic) bool invalidateEverything;
@property (nonatomic, readonly) NSDictionary *invalidatedDecorationIndexPaths;
@property (nonatomic, readonly) NSArray *invalidatedItemIndexPaths;
@property (nonatomic, readonly) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (setter=_setPreviousIndexPathsForInteractivelyMovingItems:, nonatomic, copy) NSArray *previousIndexPathsForInteractivelyMovingItems;
@property (getter=_retainExistingSizingInfoForEstimates, setter=_setRetainExistingSizingInfoForEstimates:, nonatomic) bool retainExistingSizingInfoForEstimates;
@property (setter=_setTargetIndexPathsForInteractivelyMovingItems:, nonatomic, copy) NSArray *targetIndexPathsForInteractivelyMovingItems;
@property (getter=_updateItems, setter=_setUpdateItems:, nonatomic, retain) NSArray *updateItems;

- (void).cxx_destruct;
- (long long)_intent;
- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)_invalidatedSupplementaryViews;
- (id)_orthogonalSectionsWithContentSizeChanges;
- (bool)_retainExistingSizingInfoForEstimates;
- (void)_setIntent:(long long)arg1;
- (void)_setInteractiveMovementTarget:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setInvalidateDataSourceCounts:(bool)arg1;
- (void)_setInvalidateEverything:(bool)arg1;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (void)_setPreviousIndexPathsForInteractivelyMovingItems:(id)arg1;
- (void)_setRetainExistingSizingInfoForEstimates:(bool)arg1;
- (void)_setTargetIndexPathsForInteractivelyMovingItems:(id)arg1;
- (void)_setUpdateItems:(id)arg1;
- (bool)_shouldInvalidatePreferredAttributes;
- (id)_updateItems;
- (struct CGPoint { double x1; double x2; })contentOffsetAdjustment;
- (struct CGSize { double x1; double x2; })contentSizeAdjustment;
- (struct CGPoint { double x1; double x2; })interactiveMovementTarget;
- (bool)invalidateDataSourceCounts;
- (void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (bool)invalidateEverything;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)invalidatedDecorationIndexPaths;
- (id)invalidatedItemIndexPaths;
- (id)invalidatedSupplementaryIndexPaths;
- (id)previousIndexPathsForInteractivelyMovingItems;
- (void)setContentOffsetAdjustment:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSizeAdjustment:(struct CGSize { double x1; double x2; })arg1;
- (id)targetIndexPathsForInteractivelyMovingItems;

@end
