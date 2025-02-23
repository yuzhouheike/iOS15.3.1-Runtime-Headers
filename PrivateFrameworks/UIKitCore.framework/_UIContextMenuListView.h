/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuListView : UIView <UICollectionViewDelegate> {
    bool  _allowsFocus;
    NSString * _backgroundMaterialGroupName;
    UIVisualEffectView * _backgroundView;
    UIView * _bottomClippingView;
    UICollectionView * _collectionView;
    double  _collectionViewAlpha;
    UICollectionViewDiffableDataSource * _collectionViewDataSource;
    UIMenu * _displayedMenu;
    double  _emphasisAlphaMultiplier;
    bool  _emphasized;
    bool  _hasValidContentSize;
    NSIndexPath * _highlightedIndexPath;
    struct CGSize { 
        double width; 
        double height; 
    }  _nativeContentSize;
    UICollectionViewDiffableDataSource * _outgoingCollectionViewDataSource;
    unsigned long long  _position;
    bool  _reversesActionOrder;
    unsigned long long  _roundedEdges;
    double  _shadowAlpha;
    _UICutoutShadowView * _shadowView;
    UIView * _topClippingView;
    struct CGSize { 
        double width; 
        double height; 
    }  _visibleContentSize;
}

@property (nonatomic) bool allowsFocus;
@property (nonatomic, readonly) NSString *backgroundMaterialGroupName;
@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) UIView *bottomClippingView;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) double collectionViewAlpha;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIMenu *displayedMenu;
@property (nonatomic) double emphasisAlphaMultiplier;
@property (nonatomic) bool emphasized;
@property (nonatomic) bool hasValidContentSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexPath *highlightedIndexPath;
@property (nonatomic) struct CGSize { double x1; double x2; } nativeContentSize;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *outgoingCollectionViewDataSource;
@property (nonatomic) unsigned long long position;
@property (nonatomic) bool reversesActionOrder;
@property (nonatomic) unsigned long long roundedEdges;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } scrubGestureAllowableMovement;
@property (nonatomic) double shadowAlpha;
@property (nonatomic, retain) _UICutoutShadowView *shadowView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topClippingView;
@property (nonatomic) struct CGSize { double x1; double x2; } visibleContentSize;

- (void).cxx_destruct;
- (double)_clampedCornerRadius;
- (void)_configureCell:(id)arg1 forElement:(id)arg2 section:(id)arg3;
- (id)_dataSourceForCollectionView:(id)arg1;
- (id)_headerIndexPath;
- (void)_highlightItemAtIndexPath:(id)arg1;
- (bool)_shouldScrollToSelectedAction;
- (void)_sizeClippingAndCollectionViews;
- (void)_updateCollectionViewAlpha;
- (void)_updateCornerRadius;
- (void)_updateShadowAlpha;
- (id)_viewAtIndexPath:(id)arg1;
- (bool)allowsFocus;
- (id)backgroundMaterialGroupName;
- (id)backgroundView;
- (id)bottomClippingView;
- (id)cellForElement:(id)arg1;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (double)collectionViewAlpha;
- (id)collectionViewDataSource;
- (void)didCompleteInPlaceMenuTransition;
- (id)displayedMenu;
- (id)elementAtIndexPath:(id)arg1;
- (double)emphasisAlphaMultiplier;
- (bool)emphasized;
- (bool)hasValidContentSize;
- (void)highlightItemAtIndexPath:(id)arg1;
- (void)highlightItemForOutgoingMenu:(id)arg1;
- (id)highlightedIndexPath;
- (id)indexPathForElement:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })nativeContentSize;
- (id)outgoingCollectionViewDataSource;
- (unsigned long long)position;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithWidth:(double)arg1;
- (id)preferredFocusEnvironments;
- (bool)reversesActionOrder;
- (unsigned long long)roundedEdges;
- (void)scrollToFirstSignificantAction;
- (struct CGVector { double x1; double x2; })scrubGestureAllowableMovement;
- (void)setAllowsFocus:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomClippingView:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewAlpha:(double)arg1;
- (void)setCollectionViewDataSource:(id)arg1;
- (void)setDisplayedMenu:(id)arg1;
- (void)setEmphasisAlphaMultiplier:(double)arg1;
- (void)setEmphasized:(bool)arg1;
- (void)setHasValidContentSize:(bool)arg1;
- (void)setHighlightedIndexPath:(id)arg1;
- (void)setNativeContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutgoingCollectionViewDataSource:(id)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setReversesActionOrder:(bool)arg1;
- (void)setRoundedEdges:(unsigned long long)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setShadowView:(id)arg1;
- (void)setSubmenuTitleViewExpanded:(bool)arg1 withMaterialGroupName:(id)arg2 numberOfTitleLines:(unsigned long long)arg3 highlighted:(bool)arg4;
- (void)setTopClippingView:(id)arg1;
- (void)setVisibleContentSize:(struct CGSize { double x1; double x2; })arg1;
- (double)shadowAlpha;
- (id)shadowView;
- (id)topClippingView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unHighlightItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })visibleContentSize;

@end
