/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyShortcutHUDViewController : UIViewController <UIKeyInput, _UIKeyShortcutHUDMenuViewControllerDelegate, _UIKeyShortcutHUDToolbarViewControllerDelegate> {
    _UIKeyShortcutHUDCollectionViewManager * _collectionViewManager;
    _UIKeyShortcutHUDConfiguration * _configuration;
    _UIKeyShortcutHUDContext * _context;
    <_UIKeyShortcutHUDViewControllerDelegate> * _delegate;
    long long  _heldModifierFlags;
    bool  _hidden;
    UIViewPropertyAnimator * _hudAppearanceAnimator;
    NSLayoutConstraint * _hudContainerBottomEdgeConstraint;
    NSLayoutConstraint * _hudContainerBottomSafeAreaEdgeConstraint;
    NSLayoutConstraint * _hudContainerLeadingEdgeConstraint;
    NSLayoutConstraint * _hudContainerTopEdgeConstraint;
    NSLayoutConstraint * _hudContainerTrailingEdgeConstraint;
    UIView * _hudContainerView;
    bool  _hudPresentedIntoSearchMode;
    NSMutableDictionary * _hudToAppKeyCommandsMap;
    _UIKeyShortcutHUDWindow * _hudWindow;
    UIViewPropertyAnimator * _menuPanelAnimator;
    NSLayoutConstraint * _menuPreferredHeightConstraint;
    NSLayoutConstraint * _menuPreferredWidthConstraint;
    NSLayoutConstraint * _menuToolbarSpacingConstraint;
    _UIKeyShortcutHUDMenuViewController * _menuVC;
    _UIKeyShortcutHUDMetrics * _metrics;
    _UIKeyShortcutHUDModel * _model;
    UIViewPropertyAnimator * _searchTransitionAnimator;
    bool  _searching;
    bool  _shouldIgnoreNextSearchFieldTextChangedCallback;
    UIKeyCommand * _showShortcutsKeyCommand;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSLayoutConstraint * _toolbarPreferredWidthConstraint;
    _UIKeyShortcutHUDToolbarViewController * _toolbarVC;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, retain) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager;
@property (nonatomic, retain) _UIKeyShortcutHUDConfiguration *configuration;
@property (nonatomic, retain) _UIKeyShortcutHUDContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIKeyShortcutHUDViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long heldModifierFlags;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, retain) UIViewPropertyAnimator *hudAppearanceAnimator;
@property (nonatomic, retain) NSLayoutConstraint *hudContainerBottomEdgeConstraint;
@property (nonatomic, retain) NSLayoutConstraint *hudContainerBottomSafeAreaEdgeConstraint;
@property (nonatomic, retain) NSLayoutConstraint *hudContainerLeadingEdgeConstraint;
@property (nonatomic, retain) NSLayoutConstraint *hudContainerTopEdgeConstraint;
@property (nonatomic, retain) NSLayoutConstraint *hudContainerTrailingEdgeConstraint;
@property (nonatomic, retain) UIView *hudContainerView;
@property (getter=isHUDPresentedIntoSearchMode, nonatomic) bool hudPresentedIntoSearchMode;
@property (nonatomic, retain) NSMutableDictionary *hudToAppKeyCommandsMap;
@property (nonatomic) _UIKeyShortcutHUDWindow *hudWindow;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, retain) UIViewPropertyAnimator *menuPanelAnimator;
@property (nonatomic, retain) NSLayoutConstraint *menuPreferredHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *menuPreferredWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *menuToolbarSpacingConstraint;
@property (nonatomic, retain) _UIKeyShortcutHUDMenuViewController *menuVC;
@property (nonatomic, retain) _UIKeyShortcutHUDMetrics *metrics;
@property (nonatomic, retain) _UIKeyShortcutHUDModel *model;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, retain) UIViewPropertyAnimator *searchTransitionAnimator;
@property (getter=isSearching, nonatomic, readonly) bool searching;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) bool shouldIgnoreNextSearchFieldTextChangedCallback;
@property (nonatomic) UIKeyCommand *showShortcutsKeyCommand;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, retain) NSLayoutConstraint *toolbarPreferredWidthConstraint;
@property (nonatomic, retain) _UIKeyShortcutHUDToolbarViewController *toolbarVC;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_defaultHUDAppearanceAnimatorForHidden:(bool)arg1;
- (id)_defaultMenuPanelAnimator;
- (id)_defaultSearchTransitionAnimator;
- (bool)_disableAutomaticKeyboardUI;
- (void)_focusTopSearchResultWithDelay:(bool)arg1;
- (void)_hudWillBecomeHidden:(bool)arg1;
- (void)_setDisplayedMenu:(id)arg1 animated:(bool)arg2;
- (void)_setMenuHeight:(double)arg1;
- (void)_setMenuWidth:(double)arg1;
- (void)_setSearching:(bool)arg1 animated:(bool)arg2;
- (void)_setSearching:(bool)arg1 animated:(bool)arg2 initialSearchText:(id)arg3;
- (void)_setupCollectionViewManagement;
- (void)_setupGestureRecognizers;
- (void)_setupHUDKeyCommands;
- (void)_setupInitialDisplayedMenu;
- (void)_setupInitialViewState;
- (void)_setupLayout;
- (void)_setupMetrics;
- (void)_setupSubviews;
- (void)_stopInFlightAnimationsForAnimator:(id)arg1 endPosition:(long long)arg2;
- (bool)_suppressSoftwareKeyboard;
- (void)_updateDisplayedMenuForCurrentHeldModifierFlagsAnimated:(bool)arg1;
- (void)beginSearching;
- (bool)canBecomeFirstResponder;
- (id)collectionViewManager;
- (id)configuration;
- (id)context;
- (id)delegate;
- (void)deleteBackward;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)handleAppKeyCommand:(id)arg1;
- (void)handleEscapeKeyCommand:(id)arg1;
- (void)handleHUDTap:(id)arg1;
- (void)handleShowShortcutsKeyCommand:(id)arg1;
- (bool)hasText;
- (long long)heldModifierFlags;
- (id)hudAppearanceAnimator;
- (id)hudContainerBottomEdgeConstraint;
- (id)hudContainerBottomSafeAreaEdgeConstraint;
- (id)hudContainerLeadingEdgeConstraint;
- (id)hudContainerTopEdgeConstraint;
- (id)hudContainerTrailingEdgeConstraint;
- (id)hudContainerView;
- (id)hudToAppKeyCommandsMap;
- (id)hudWindow;
- (id)init;
- (void)insertText:(id)arg1;
- (bool)isHUDPresentedIntoSearchMode;
- (bool)isHidden;
- (bool)isSearching;
- (id)menuPanelAnimator;
- (id)menuPreferredHeightConstraint;
- (id)menuPreferredWidthConstraint;
- (id)menuToolbarSpacingConstraint;
- (id)menuVC;
- (void)menuViewController:(id)arg1 didScrollToCategory:(id)arg2 withCategoryIndex:(long long)arg3;
- (void)menuViewController:(id)arg1 didSelectShortcut:(id)arg2;
- (bool)menuViewController:(id)arg1 shouldPersistSelectionForShortcut:(id)arg2;
- (id)metrics;
- (id)model;
- (id)preferredFocusEnvironments;
- (id)searchTransitionAnimator;
- (void)setCollectionViewManager:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedMenu:(id)arg1;
- (void)setHeldModifierFlags:(long long)arg1;
- (void)setHidden:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setHudAppearanceAnimator:(id)arg1;
- (void)setHudContainerBottomEdgeConstraint:(id)arg1;
- (void)setHudContainerBottomSafeAreaEdgeConstraint:(id)arg1;
- (void)setHudContainerLeadingEdgeConstraint:(id)arg1;
- (void)setHudContainerTopEdgeConstraint:(id)arg1;
- (void)setHudContainerTrailingEdgeConstraint:(id)arg1;
- (void)setHudContainerView:(id)arg1;
- (void)setHudPresentedIntoSearchMode:(bool)arg1;
- (void)setHudToAppKeyCommandsMap:(id)arg1;
- (void)setHudWindow:(id)arg1;
- (void)setMenuPanelAnimator:(id)arg1;
- (void)setMenuPreferredHeightConstraint:(id)arg1;
- (void)setMenuPreferredWidthConstraint:(id)arg1;
- (void)setMenuToolbarSpacingConstraint:(id)arg1;
- (void)setMenuVC:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSearchTransitionAnimator:(id)arg1;
- (void)setShouldIgnoreNextSearchFieldTextChangedCallback:(bool)arg1;
- (void)setShowShortcutsKeyCommand:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setToolbarPreferredWidthConstraint:(id)arg1;
- (void)setToolbarVC:(id)arg1;
- (bool)shouldDismissHUDForModifierKeyTap;
- (bool)shouldIgnoreNextSearchFieldTextChangedCallback;
- (id)showShortcutsKeyCommand;
- (id)tapGestureRecognizer;
- (id)toolbarPreferredWidthConstraint;
- (id)toolbarVC;
- (void)toolbarViewController:(id)arg1 didSelectCategory:(id)arg2 categoryIndex:(long long)arg3 animated:(bool)arg4;
- (void)toolbarViewController:(id)arg1 didUpdateSearchText:(id)arg2;
- (void)toolbarViewControllerDidPressCancelSearchButton:(id)arg1;
- (void)toolbarViewControllerDidPressSearchButton:(id)arg1;
- (id)undoManager;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
