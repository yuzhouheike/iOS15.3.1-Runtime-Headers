/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextInteractionAssistant : NSObject <UIPointerInteractionDelegate, UIResponderStandardEditActions, UITextCursorAssertionControllerSubject, UITextInteraction_AssistantDelegate> {
    unsigned long long  _activeSelectionInteractions;
    UITextCursorAssertionController * _assertionController;
    bool  _automaticSelectionCommandsSuppressed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _autoscrollBasePoint;
    double  _autoscrollFactor;
    int  _autoscrollRamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _autoscrollUntransformedExtentPoint;
    bool  _autoscrolled;
    bool  _canShowSelectionCommands;
    bool  _detaching;
    bool  _didUseStashedRange;
    bool  _expectingCommit;
    UITextInteraction * _externalInteractions;
    bool  _externalTextInput;
    _UITextInteractionAssistantGestureState * _gestureState;
    id  _grabberSuppressionAssertion;
    bool  _inGesture;
    UITextInteraction * _interactions;
    id  _keyboardSuppressionAssertion;
    UITextLinkInteraction * _linkInteraction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _loupeGestureEndPoint;
    bool  _needsGestureUpdate;
    _UIKeyboardTextSelectionController * _nonEditableSelectionController;
    UIPointerInteraction * _pointerInteraction;
    long long  _previousRepeatedGranularity;
    UITextSelectionView * _selectionView;
    UITextRange * _stashedTextRange;
    bool  _suppressSystemUI;
    UITextChecker * _textChecker;
    long long  _textInteractionMode;
    UIResponder<UITextInput> * _view;
    NSNumber * _viewConformsToAsynchronousInteractionViewProtocol;
    NSNumber * _viewConformsToTextItemInteracting;
    NSNumber * _viewRespondsToInteractiveTextSelectionDisabled;
    bool  _willHandoffLoupeMagnifier;
}

@property (nonatomic, readonly) UITextCursorAssertionController *_assertionController;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *activeSelectionController;
@property (nonatomic) struct CGPoint { double x1; double x2; } autoscrollUntransformedExtentPoint;
@property (nonatomic) bool autoscrolled;
@property (nonatomic, readonly) bool canShowSelectionCommands;
@property (nonatomic) bool cursorBlinks;
@property (nonatomic) bool cursorVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) UIGestureRecognizer *doubleTapGesture;
@property (nonatomic) bool expectingCommit;
@property (nonatomic, retain) UITextInteraction *externalInteractions;
@property (nonatomic, readonly) bool externalTextInput;
@property (nonatomic, readonly) UIFieldEditor *fieldEditor;
@property (nonatomic, readonly, retain) UIGestureRecognizer *forcePressGesture;
@property (nonatomic) bool ghostAppearance;
@property (nonatomic, retain) id grabberSuppressionAssertion;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inGesture;
@property (nonatomic, readonly, retain) UITextInteraction *interactions;
@property (getter=isInteractiveSelectionDisabled, nonatomic, readonly) bool interactiveSelectionDisabled;
@property (nonatomic, retain) id keyboardSuppressionAssertion;
@property (nonatomic, readonly, retain) UITextLinkInteraction *linkInteraction;
@property (nonatomic, readonly, retain) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) struct CGPoint { double x1; double x2; } loupeGestureEndPoint;
@property (nonatomic) bool needsGestureUpdate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly, retain) UITapGestureRecognizer *singleTapGesture;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIResponder<UITextInput> *textDocument;
@property (nonatomic, readonly) UIResponder<UITextInput> *view;
@property (nonatomic, readonly) bool willHandoffLoupeMagnifier;

+ (long long)_nextGranularityInCycle:(long long)arg1 forTouchType:(long long)arg2;

- (void).cxx_destruct;
- (id)_asText;
- (id)_assertionController;
- (id)_computeGestureStateForView:(id)arg1;
- (id)_pointerInteractionDelegate;
- (id)_scrollable;
- (id)_selectionView;
- (void)_updateSelectionInViewIfNeeded:(id)arg1 toRange:(id)arg2;
- (void)_updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1 granularity:(long long)arg2 forceGranularity:(bool)arg3;
- (void)activate;
- (void)activateSelection;
- (id)activeSelectionController;
- (void)addGestureRecognizersToView:(id)arg1;
- (void)attach;
- (id)attributedTextInRange:(id)arg1;
- (struct CGPoint { double x1; double x2; })autoscrollUntransformedExtentPoint;
- (void)autoscrollWillNotStart;
- (bool)autoscrolled;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)canBeginDragCursor:(id)arg1;
- (bool)canShowSelectionCommands;
- (bool)canShowSelectionCommands;
- (void)cancelAutoscroll;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)clearGestureRecognizers;
- (void)clearGestureRecognizers:(bool)arg1;
- (void)clearSelection;
- (void)clearStashedSelection;
- (void)configureForHighlightMode;
- (void)configureForPencilDeletionPreviewMode;
- (void)configureForPencilHighlightMode;
- (void)configureForReplacementMode;
- (void)configureForSelectionMode;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containerAllowsSelection;
- (bool)containerAllowsSelectionTintOnly;
- (bool)containerIsBrowserView;
- (bool)containerIsTextField;
- (long long)currentCursorBehavior;
- (unsigned long long)currentDraggedHandle;
- (bool)cursorBlinks;
- (bool)cursorVisible;
- (void)deactivateSelection;
- (void)dealloc;
- (void)detach;
- (void)detach:(bool)arg1;
- (void)didEndScrollingOrZooming;
- (void)didEndSelectionInteraction;
- (bool)didPerformLoupeSelectionHandoff;
- (bool)didUseStashedSelection;
- (id)doubleTapGesture;
- (void)endFloatingCursor;
- (bool)expectingCommit;
- (void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)extendSelectionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)externalInteractions;
- (bool)externalTextInput;
- (id)fieldEditor;
- (id)forcePressGesture;
- (id)generatorForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (bool)ghostAppearance;
- (id)grabberSuppressionAssertion;
- (bool)handleMultilingualAlternativeWithString:(id)arg1 range:(id)arg2;
- (bool)hasActiveSelectionInteraction;
- (bool)hasReplacements;
- (bool)inGesture;
- (id)initWithResponder:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 textInteractionMode:(long long)arg2;
- (id)interactions;
- (void)invalidate;
- (bool)isInteractiveSelectionDisabled;
- (bool)isValid;
- (id)keyboardSuppressionAssertion;
- (void)layoutChangedByScrolling:(bool)arg1;
- (id)linkInteraction;
- (void)lollipopGestureWithState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg3 forTouchType:(long long)arg4;
- (id)loupeGesture;
- (struct CGPoint { double x1; double x2; })loupeGestureEndPoint;
- (void)loupeGestureWithState:(long long)arg1 location:(id /* block */)arg2 translation:(id /* block */)arg3 velocity:(id /* block */)arg4 modifierFlags:(long long)arg5 shouldCancel:(bool*)arg6;
- (void)loupeMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)needsGestureUpdate;
- (void)notifyKeyboardSelectionChanged;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id)rangeForTextReplacement:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangeSelectionMoved:(struct CGPoint { double x1; double x2; })arg1 withTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rangeSelectionStarted:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)requiresImmediateUpdate;
- (void)resetWillHandoffLoupeMagnifier;
- (void)resignedFirstResponder;
- (void)scheduleChineseTransliteration;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleDictationReplacementsForMultilingualAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleReplacements;
- (bool)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scrollSelectionToVisible;
- (void)scrollSelectionToVisible:(bool)arg1;
- (id)scrollView;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (void)selectWordWithoutShowingCommands;
- (void)selectionAnimationDidStop;
- (void)selectionChanged;
- (Class)selectionInteractionClass;
- (id)selectionView;
- (void)setAutomaticSelectionCommandsSuppressedForPointerTouchType:(bool)arg1;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAutoscrolled:(bool)arg1;
- (void)setCursorBlinks:(bool)arg1;
- (void)setCursorVisible:(bool)arg1;
- (void)setExpectingCommit:(bool)arg1;
- (void)setExternalInteractions:(id)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setFirstResponderIfNecessaryActivatingSelection:(bool)arg1;
- (void)setGestureRecognizers;
- (void)setGhostAppearance:(bool)arg1;
- (void)setGrabberSuppressionAssertion:(id)arg1;
- (void)setInGesture:(bool)arg1;
- (void)setKeyboardSuppressionAssertion:(id)arg1;
- (void)setLoupeGestureEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsGestureUpdate:(bool)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSuppressSystemUI:(bool)arg1;
- (void)setWillHandoffLoupeMagnifier;
- (bool)shouldSuppressSelectionCommands;
- (bool)showMultilingualDictationReplacementWithRange:(id)arg1;
- (void)showSelectionCommandsForSecondaryClickAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)singleTapGesture;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)stashCurrentSelection;
- (bool)supportsIndirectInteractions;
- (bool)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)textDocument;
- (id)textSelectionView;
- (void)updateAutoscroll:(id)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (bool)useGesturesForEditableContent;
- (bool)usesAsynchronousSelectionController;
- (id)view;
- (bool)viewConformsToAsynchronousInteractionProtocol;
- (bool)viewCouldBecomeEditable:(id)arg1;
- (bool)wantsLinkInteraction;
- (void)willBeginFloatingCursor:(bool)arg1;
- (void)willBeginSelectionInteraction;
- (bool)willHandoffLoupeMagnifier;
- (void)willStartScrollingOrZooming;

@end
