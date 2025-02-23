/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _flowLayout;
    NSArray * _recentInputStrings;
    bool  _verticalLayout;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *recentInputStrings;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)displayLayer:(id)arg1;
- (id)flowLayout;
- (unsigned long long)focusableVariantCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)recentInputStrings;
- (void)refreshSelectedRecent;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (id)selectedRecentInputString;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setRecentInputStrings:(id)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setVerticalLayout:(bool)arg1;
- (void)setupCollectionView;

@end
