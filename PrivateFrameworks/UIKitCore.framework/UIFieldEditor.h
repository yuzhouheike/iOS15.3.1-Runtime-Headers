/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFieldEditor : UIScrollView <NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIAutoscrollContainer, UIKeyInputPrivate, UIKeyboardInput, UITextAutoscrolling, UITextFieldContent, UITextInput, UITextInputControllerDelegate, UITextInputPrivate> {
    bool  __shouldObscureNextInput;
    NSTextContainer * __textContainer;
    UITextInputController * __textInputController;
    _UITextLayoutController * __textLayoutController;
    _UICascadingTextStorage * __textStorage;
    bool  _active;
    bool  _allowsAttachments;
    UIAutoscroll * _autoscroll;
    struct CGPoint { 
        double x; 
        double y; 
    }  _autoscrollContentOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsetsFromFonts;
    UIView<_UITextCanvas> * _contentView;
    double  _desiredContentWidth;
    struct { 
        unsigned int delegateRespondsToFieldEditorDidChange : 1; 
        unsigned int delegateRespondsToFieldEditorDidChangeSelection : 1; 
        unsigned int delegateRespondsToShouldInsertText : 1; 
        unsigned int delegateRespondsToShouldReplaceWithText : 1; 
        unsigned int suppressScrollToSelection : 1; 
        unsigned int clearOnNextEdit : 1; 
        unsigned int needsInvalidationAfterObscuredRangeChange : 1; 
        unsigned int isAnimatingPaste : 1; 
        unsigned int contentInsetsFromFontsValid : 1; 
    }  _feFlags;
    NSTimer * _obscureAllTextTimer;
    unsigned long long  _obscuredSecureLength;
    NSAttributedString * _originalAttributedString;
    NSDictionary * _originalDefaultAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    id /* block */  _scrollAnimationEndedAction;
    UITextField * _textField;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, readonly) RTIInputSystemSourceSession *_rtiSourceSession;
@property (setter=_setScrollAnimationEndedAction:, nonatomic, copy) id /* block */ _scrollAnimationEndedAction;
@property (nonatomic) bool _shouldObscureNextInput;
@property (nonatomic) long long _textInputSource;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsInitialEmojiKeyboard;
@property (nonatomic) bool acceptsPayloads;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (nonatomic) bool allowsAttachments;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) struct CGPoint { double x1; double x2; } autoscrollContentOffset;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) bool contentsIsSingleValue;
@property (nonatomic, readonly) long long cursorBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (getter=isDevicePasscodeEntry, nonatomic) bool devicePasscodeEntry;
@property (nonatomic) bool disableHandwritingKeyboard;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } floatingKeyboardEdgeInsets;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool forceFloatingKeyboard;
@property (nonatomic) bool hasDefaultContents;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidePrediction;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic, readonly) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic) bool loadKeyboardsForSiriLanguage;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } markedRange;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, readonly) NSDictionary *markedTextStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) bool preferOnlineDictation;
@property (nonatomic) long long preferredKeyboardStyle;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } selectionEdgeInsets;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) bool shouldAutoscroll;
@property (nonatomic) bool showDictationButton;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UISupplementalLexicon *supplementalLexicon;
@property (nonatomic, retain) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic, readonly) bool supportsImagePaste;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (nonatomic, readonly) NSTextContainer *textContainer;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) <UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) _UITextLayoutController *textLayoutController;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic, readonly) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;
@property (nonatomic, retain) UIColor *underlineColorForSpelling;
@property (nonatomic, retain) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) bool useAutomaticEndpointing;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)activeFieldEditor;
+ (id)excludedElementsForHTML;
+ (id)sharedFieldEditor;

- (void).cxx_destruct;
- (void)_applyCorrectTextContainerSize;
- (void)_applyCorrectTextContainerSize:(id)arg1;
- (void)_cancelObscureAllTextTimer;
- (bool)_clearOnEditIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsFromFonts;
- (void)_deactivateSelectionView;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_ephemerallyUnobscureCharacterAtIndex:(unsigned long long)arg1;
- (void)_ephemerallyUnobscureTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_fullContentInsetsFromFonts;
- (void)_handleObscuredTextAfterActivationChange;
- (bool)_hasDictationPlaceholder;
- (id)_inputController;
- (void)_invalidateAfterObscuredRangeChangeIfNeeded;
- (void)_obscureAllText;
- (double)_passcodeStyleAlpha;
- (void)_performWhileSuppressingDelegateNotifications:(id /* block */)arg1;
- (void)_resetTypingAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (id)_responderForBecomeFirstResponder;
- (id /* block */)_scrollAnimationEndedAction;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setAttributedTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementText:(id)arg2 andSetCaretSelectionAfterText:(bool)arg3;
- (void)_setNeedsInvalidateAfterObscuredRangeChange;
- (void)_setScrollAnimationEndedAction:(id /* block */)arg1;
- (void)_setTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementText:(id)arg2 andSetCaretSelectionAfterText:(bool)arg3;
- (void)_setValue:(id)arg1 forTextAttribute:(id)arg2;
- (bool)_shouldIgnoreAutofillSave;
- (bool)_shouldObscureInput;
- (bool)_shouldObscureNextInput;
- (id)_textCanvasView;
- (id)_textContainer;
- (id)_textInputController;
- (id)_textInputTraits;
- (id)_textLayoutController;
- (id)_textSelectingContainer;
- (id)_textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_tvUpdateTextColor;
- (void)_unobscureAllText;
- (void)_unobscureTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 settingTimerToReobscure:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_unobscuredSecureRange;
- (void)_updateLayoutManagerStyleEffectConfiguration;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

// Image: /usr/lib/libMainThreadChecker.dylib

- (void)activateEditor;
- (void)addTextAlternativesDisplayStyle:(long long)arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)allowsAttachments;
- (id)attributedSubstringForMarkedRange;
- (id)attributedText;
- (id)attributedTextInRange:(id)arg1;
- (struct CGPoint { double x1; double x2; })autoscrollContentOffset;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)clearText;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)deactivateEditorDiscardingEdits:(bool)arg1;
- (void)deleteBackward;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)hasMarkedText;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTextField:(id)arg1;
- (id)inputDelegate;
- (void)insertAttributedText:(id)arg1;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)interactionAssistant;
- (void)invalidateTextContainerOrigin;
- (bool)isEditing;
- (bool)isFirstResponder;
- (bool)isHorizontallyResizable;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (id)layoutManager;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 glyphPosition:(struct CGPoint { double x1; double x2; })arg5 characterIndex:(unsigned long long)arg6;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (long long)layoutOrientation;
- (void)layoutSubviews;
- (id)linkTextAttributes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (struct CGSize { double x1; double x2; })minSize;
- (long long)nonEditingLinebreakMode;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)removeTextPlaceholder:(id)arg1;
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)scrollSelectionToVisible:(bool)arg1;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)selectAll;
- (id)selectedTextRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setAllowsAttachments:(bool)arg1;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(bool)arg2;
- (void)setAttributedTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementText:(id)arg2;
- (void)setAutoscrollContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setConstrainedFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDisplaySecureEditsUsingPlainText:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(bool)arg2;
- (void)setNonEditingLinebreakMode:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(bool)arg3;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(bool)arg2;
- (void)setTextColor:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementText:(id)arg2;
- (void)setTypingAttributes:(id)arg1;
- (bool)setUpClippingWithMaskForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)set_shouldObscureNextInput:(bool)arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (id)text;
- (id)textColor;
- (id)textColorForCaretSelection;
- (id)textContainer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (struct CGPoint { double x1; double x2; })textContainerOriginForTextAlignment:(long long)arg1;
- (void)textContainerUsageDidChangeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textField;
- (id)textInRange:(id)arg1;
- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
- (bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)textInputDidAnimatePaste:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (void)textInputDidChangeSelection:(id)arg1;
- (bool)textInputShouldExtendCaretHeight:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (void)textInputWillAnimatePaste:(id)arg1;
- (id)textLayoutController;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStorage;
- (id)tokenizer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (void)updateAutoscroll:(id)arg1;
- (void)updateInsertionPointStateAndRestartTimer:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
