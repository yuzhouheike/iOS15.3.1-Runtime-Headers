/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyShortcutHUDToolbarViewController : UIViewController <_UIKeyShortcutHUDCollectionViewManagerClient, _UIKeyShortcutHUDSearchBarDelegate, _UIKeyShortcutHUDSearchButtonDelegate> {
    UIView * _categoriesContentView;
    UIPageControl * _categoriesPageControl;
    UICollectionViewCellRegistration * _categoryCellRegistration;
    _UIKeyShortcutHUDCell * _cellForSearchTransition;
    UICollectionViewSupplementaryRegistration * _cellSeparatorRegistration;
    UICollectionView * _collectionView;
    _UIKeyShortcutHUDCollectionViewManager * _collectionViewManager;
    UICollectionViewDiffableDataSource * _dataSource;
    <_UIKeyShortcutHUDToolbarViewControllerDelegate> * _delegate;
    _UIKeyShortcutHUDMenu * _menu;
    _UIKeyShortcutHUDMetrics * _metrics;
    bool  _preparingSearchTransition;
    _UIKeyShortcutHUDSeparatorView * _scrollingSeparatorView;
    _UIKeyShortcutHUDSearchBar * _searchBar;
    _UIKeyShortcutHUDSearchButton * _searchButton;
    bool  _searching;
    UIView * _toolbarContentView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIView *categoriesContentView;
@property (nonatomic, retain) UIPageControl *categoriesPageControl;
@property (nonatomic, retain) UICollectionViewCellRegistration *categoryCellRegistration;
@property (nonatomic) _UIKeyShortcutHUDCell *cellForSearchTransition;
@property (nonatomic, retain) UICollectionViewSupplementaryRegistration *cellSeparatorRegistration;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIKeyShortcutHUDToolbarViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIKeyShortcutHUDIndexPath *firstCategoryIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UIKeyShortcutHUDMenu *menu;
@property (nonatomic) _UIKeyShortcutHUDMetrics *metrics;
@property (getter=isPreparingSearchTransition, nonatomic) bool preparingSearchTransition;
@property (nonatomic, retain) _UIKeyShortcutHUDSeparatorView *scrollingSeparatorView;
@property (nonatomic, retain) _UIKeyShortcutHUDSearchBar *searchBar;
@property (nonatomic, retain) _UIKeyShortcutHUDSearchButton *searchButton;
@property (getter=isSearching, nonatomic) bool searching;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *toolbarContentView;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_collectionViewLayout;
- (void)_configureCollectionView;
- (void)_configureSeparatorViewAppearance:(id)arg1;
- (void)_setupSubviews;
- (bool)_shouldHideScrollingSeparatorView;
- (id)categoriesContentView;
- (id)categoriesPageControl;
- (void)categoriesPageControlCurrentPageChanged:(id)arg1;
- (id)categoryCellRegistration;
- (id)cellForSearchTransition;
- (id)cellSeparatorRegistration;
- (id)collectionView;
- (id)collectionViewManager;
- (id)dataSource;
- (id)delegate;
- (void)didCompleteSearchTransition;
- (void)didScrollCollectionView;
- (id)firstCategoryIndexPath;
- (void)flashCategoryAtIndex:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)hudWillBecomeHidden:(bool)arg1;
- (id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)arg1;
- (id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)arg1;
- (bool)isPreparingSearchTransition;
- (bool)isSearching;
- (id)menu;
- (id)metrics;
- (void)performActionForSelectingCellAtIndexPath:(id)arg1;
- (void)prepareForSearchTransition:(bool)arg1;
- (id)scrollingSeparatorView;
- (id)searchBar;
- (void)searchBar:(id)arg1 didUpdateSearchText:(id)arg2;
- (void)searchBarDidPressCancelButton:(id)arg1;
- (id)searchButton;
- (void)searchButtonDidPress:(id)arg1;
- (void)selectCategory:(id)arg1 withCategoryIndex:(long long)arg2;
- (bool)selectionFollowsFocusForItemAtIndexPath:(id)arg1;
- (void)setCategoriesContentView:(id)arg1;
- (void)setCategoriesPageControl:(id)arg1;
- (void)setCategoryCellRegistration:(id)arg1;
- (void)setCellForSearchTransition:(id)arg1;
- (void)setCellSeparatorRegistration:(id)arg1;
- (void)setCollectionViewManager:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setPreparingSearchTransition:(bool)arg1;
- (void)setScrollingSeparatorView:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchButton:(id)arg1;
- (void)setSearching:(bool)arg1;
- (void)setToolbarContentView:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (bool)shouldPersistSelectionForCellAtIndexPath:(id)arg1;
- (id)toolbarContentView;
- (void)updateScrollingSeparatorViewVisibility;
- (void)viewDidLoad;
- (id)visualEffectView;

@end
