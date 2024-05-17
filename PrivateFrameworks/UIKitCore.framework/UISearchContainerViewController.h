/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchContainerViewController : UIViewController {
    UISearchController * _searchController;
}

@property (nonatomic, retain) UISearchController *searchController;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_presentSearchControllerIfNecessary;
- (bool)_transitionsChildViewControllers;

// Image: /usr/lib/libMainThreadChecker.dylib

- (void)commonInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchController:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (void)setTabBarObservedScrollView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
