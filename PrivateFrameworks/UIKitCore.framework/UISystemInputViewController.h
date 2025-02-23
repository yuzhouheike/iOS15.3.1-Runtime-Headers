/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISystemInputViewController : UIViewController <UIRecentsInputViewControllerDelegate> {
    NSMutableDictionary * _accessoryConstraints;
    NSMutableDictionary * _accessoryViewControllers;
    long long  _blurEffectStyle;
    UILexicon * _cachedRecents;
    UIResponder<UITraitEnvironment> * _containingResponder;
    UIView * _containingView;
    UIView * _contentLayoutView;
    bool  _didDisplayRecents;
    UIButton * _doneButton;
    NSArray * _editorConstraints;
    UIKBSystemLayoutViewController * _editorVC;
    NSArray * _horizontalAlignments;
    UIViewController * _inputVC;
    bool  _isAutomaticResponderTransition;
    bool  _isVisible;
    UIKeyboard * _keyboard;
    NSArray * _keyboardConstraints;
    UICompatibilityInputViewController * _keyboardVC;
    bool  _needsSetupAgain;
    UIResponder<UITextInput> * _nextInputDelegate;
    bool  _notifyKeyboardOnScreenOnFocusOnly;
    UIResponder<UITextInput> * _persistentDelegate;
    UILabel * _promptLabel;
    UIRecentsInputViewController * _recentsVC;
    NSUUID * _remoteInputSessionIdentifier;
    unsigned long long  _requestedInteractionModel;
    bool  _requiresLinearStyleForActiveInputModes;
    long long  _resolvedKeyboardStyle;
    bool  _supportsRecentInputsIntegration;
    bool  _supportsTouchInput;
    <UISystemInputViewControllerDelegate> * _systemInputViewControllerDelegate;
    UITextInputTraits * _textInputTraits;
    NSArray * _verticalAlignments;
    bool  _willPresentFullscreen;
    bool  _willUpdateBackgroundEffectOnInputModeChange;
}

@property (nonatomic, retain) UILabel *_promptLabel;
@property (nonatomic) long long blurEffectStyle;
@property (nonatomic, retain) UILexicon *cachedRecents;
@property (nonatomic, retain) UIView *containingView;
@property (nonatomic, retain) UIView *contentLayoutView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisplayRecents;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) NSArray *editorConstraints;
@property (nonatomic, retain) UIKBSystemLayoutViewController *editorVC;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *horizontalAlignments;
@property (nonatomic, retain) UIViewController *inputVC;
@property (nonatomic) bool isAutomaticResponderTransition;
@property (nonatomic, retain) UIKeyboard *keyboard;
@property (nonatomic, retain) NSArray *keyboardConstraints;
@property (nonatomic, retain) UICompatibilityInputViewController *keyboardVC;
@property (nonatomic, retain) UIResponder<UITextInput> *nextInputDelegate;
@property (nonatomic) bool notifyKeyboardOnScreenOnFocusOnly;
@property (nonatomic, retain) UIResponder<UITextInput> *persistentDelegate;
@property (nonatomic, retain) UIRecentsInputViewController *recentsVC;
@property (nonatomic) unsigned long long requestedInteractionModel;
@property (nonatomic) long long resolvedKeyboardStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsRecentInputsIntegration;
@property (nonatomic) bool supportsTouchInput;
@property (nonatomic) <UISystemInputViewControllerDelegate> *systemInputViewControllerDelegate;
@property (nonatomic, retain) UITextInputTraits *textInputTraits;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } unfocusedFocusGuideOutsets;
@property (nonatomic, retain) NSArray *verticalAlignments;
@property (nonatomic) bool willPresentFullscreen;
@property (nonatomic) bool willUpdateBackgroundEffectOnInputModeChange;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_canonicalTraitsForResponder:(id)arg1;
+ (id)_carPlay_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4;
+ (id)_iOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4;
+ (id)_tvOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4;
+ (bool)canUseSystemInputViewControllerForResponder:(id)arg1;
+ (void)setKeyboardInteractionModel:(unsigned long long)arg1;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3;

- (id)_accessoryViewControllerForEdge:(long long)arg1;
- (void)_addAccessoryViewController:(id)arg1;
- (void)_addChildInputViewController;
- (void)_clearCursorLocationIfNotFirstResponder;
- (void)_createKeyboardIfNecessary;
- (void)_didSuspend:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_dismissSystemInputViewController;
- (unsigned long long)_horizontalLayoutTypeForEdge:(long long)arg1;
- (id)_promptLabel;
- (id)_remoteInputSessionIdentifier;
- (void)_removeAccessoryViewController:(id)arg1;
- (void)_resetDelegate;
- (void)_restoreKeyboardIfNecessary;
- (void)_returnButtonPressed;
- (void)_setNonInputViewVisibility:(bool)arg1;
- (id)_traitCollectionForUserInterfaceStyle;
- (void)_updateRemoteTextEditingSession;
- (unsigned long long)_verticalLayoutTypeForEdge:(long long)arg1;
- (void)_willResume:(id)arg1;
- (void)_windowDidBecomeApplicationKey:(id)arg1;
- (void)_windowWillBecomeApplicationKey:(id)arg1;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)accessoryViewControllerForEdge:(long long)arg1;
- (id)alignmentConstraintArrayForAxis:(long long)arg1;
- (id)alignmentConstraintForAxis:(long long)arg1;
- (long long)blurEffectStyle;
- (id)cachedRecents;
- (void)configureRecentsVCIfNecessary;
- (id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
- (id)constraintsForEdge:(long long)arg1;
- (id)containingView;
- (id)contentLayoutView;
- (bool)didDisplayRecents;
- (void)didSelectRecentInput;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)doneButton;
- (id)doneButtonStringForCurrentInputDelegate;
- (id)editorConstraints;
- (id)editorVC;
- (void)findNextInputDelegate;
- (id)horizontalAlignments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (id)inputVC;
- (bool)isAutomaticResponderTransition;
- (id)keyboard;
- (id)keyboardConstraints;
- (id)keyboardVC;
- (id)nextInputDelegate;
- (void)notifyDelegateWithAccessoryVisibility:(bool)arg1;
- (bool)notifyKeyboardOnScreenOnFocusOnly;
- (id)persistentDelegate;
- (void)populateCoreHierarchy;
- (id)preferredFocusEnvironments;
- (void)prepareForRelease;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)recentsVC;
- (void)reloadInputViewsForPersistentDelegate;
- (unsigned long long)requestedInteractionModel;
- (void)resetContainingResponder;
- (long long)resolvedKeyboardStyle;
- (void)setAccessoryViewController:(id)arg1 forEdge:(long long)arg2;
- (void)setAlignmentConstraint:(id)arg1 forAxis:(long long)arg2;
- (void)setAlignmentConstraintArray:(id)arg1 forAxis:(long long)arg2;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setCachedRecents:(id)arg1;
- (void)setConstraints:(id)arg1 forEdge:(long long)arg2;
- (void)setContainingView:(id)arg1;
- (void)setContentLayoutView:(id)arg1;
- (void)setDidDisplayRecents:(bool)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEditorConstraints:(id)arg1;
- (void)setEditorVC:(id)arg1;
- (void)setHorizontalAlignments:(id)arg1;
- (void)setInputVC:(id)arg1;
- (void)setIsAutomaticResponderTransition:(bool)arg1;
- (void)setKeyboard:(id)arg1;
- (void)setKeyboardConstraints:(id)arg1;
- (void)setKeyboardVC:(id)arg1;
- (void)setNextInputDelegate:(id)arg1;
- (void)setNotifyKeyboardOnScreenOnFocusOnly:(bool)arg1;
- (void)setPersistentDelegate:(id)arg1;
- (void)setRecentsVC:(id)arg1;
- (void)setRequestedInteractionModel:(unsigned long long)arg1;
- (void)setResolvedKeyboardStyle:(long long)arg1;
- (void)setSupportsRecentInputsIntegration:(bool)arg1;
- (void)setSupportsTouchInput:(bool)arg1;
- (void)setSystemInputViewControllerDelegate:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVerticalAlignments:(id)arg1;
- (void)setWillPresentFullscreen:(bool)arg1;
- (void)setWillUpdateBackgroundEffectOnInputModeChange:(bool)arg1;
- (void)set_promptLabel:(id)arg1;
- (void)setupKeyboard;
- (bool)supportsRecentInputsIntegration;
- (bool)supportsTouchInput;
- (void)switchToKeyboard;
- (id)systemInputViewControllerDelegate;
- (id)textInputTraits;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })unfocusedFocusGuideOutsets;
- (void)updateAlignmentConstraints;
- (void)updateViewConstraints;
- (id)verticalAlignments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (bool)willPresentFullscreen;
- (bool)willShowRecentsList;
- (bool)willUpdateBackgroundEffectOnInputModeChange;

@end
