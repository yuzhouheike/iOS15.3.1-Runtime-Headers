/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextInputTraits : NSObject <NSCopying, UITextInputTraits, UITextInputTraits_Private> {
    NSIndexSet * PINEntrySeparatorIndexes;
    UIColor * _insertionPointColor;
    long long  _preferredKeyboardStyle;
    struct { 
        unsigned int customizedSelectionBarColor : 1; 
        unsigned int customizedSelectionHighlightColor : 1; 
        unsigned int customizedInsertionPointColor : 1; 
    }  _privateInputTraitFlags;
    UIColor * _selectionBarColor;
    UIColor * _selectionBorderColor;
    double  _selectionBorderWidth;
    double  _selectionCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _selectionEdgeInsets;
    UIColor * _selectionHighlightColor;
    bool  acceptsDictationSearchResults;
    bool  acceptsEmoji;
    bool  acceptsFloatingKeyboard;
    bool  acceptsInitialEmojiKeyboard;
    bool  acceptsPayloads;
    bool  acceptsSplitKeyboard;
    long long  autocapitalizationType;
    NSString * autocorrectionContext;
    long long  autocorrectionType;
    bool  contentsIsSingleValue;
    bool  deferBecomingResponder;
    bool  devicePasscodeEntry;
    bool  disableHandwritingKeyboard;
    bool  disableInputBars;
    bool  disablePrediction;
    bool  displaySecureEditsUsingPlainText;
    bool  displaySecureTextUsingPlainText;
    int  emptyContentReturnKeyType;
    bool  enablesReturnKeyAutomatically;
    bool  enablesReturnKeyOnNonWhiteSpaceContent;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  floatingKeyboardEdgeInsets;
    bool  forceDefaultDictationInfo;
    long long  forceDictationKeyboardType;
    bool  forceDisableDictation;
    bool  forceEnableDictation;
    bool  forceFloatingKeyboard;
    bool  hasDefaultContents;
    bool  hidePrediction;
    UIInputContextHistory * inputContextHistory;
    UIColor * insertionPointColor;
    unsigned long long  insertionPointWidth;
    bool  isCarPlayIdiom;
    bool  isSingleLineDocument;
    unsigned int  keyboardAppearance;
    unsigned int  keyboardType;
    bool  learnsCorrections;
    bool  loadKeyboardsForSiriLanguage;
    bool  manageRecentInputs;
    UITextInputPasswordRules * passwordRules;
    bool  preferOnlineDictation;
    NSString * recentInputIdentifier;
    NSString * responseContext;
    bool  returnKeyGoesToNextResponder;
    long long  returnKeyType;
    bool  secureTextEntry;
    UIColor * selectionBarColor;
    UIImage * selectionDragDotImage;
    UIColor * selectionHighlightColor;
    int  shortcutConversionType;
    bool  showDictationButton;
    long long  smartDashesType;
    long long  smartInsertDeleteType;
    long long  smartQuotesType;
    long long  spellCheckingType;
    _UISupplementalLexicon * supplementalLexicon;
    UIImage * supplementalLexiconAmbiguousItemIcon;
    bool  suppressReturnKeyStyling;
    NSString * textContentType;
    int  textLoupeVisibility;
    long long  textScriptType;
    int  textSelectionBehavior;
    id  textSuggestionDelegate;
    struct __CFCharacterSet { } * textTrimmingSet;
    UIColor * underlineColorForSpelling;
    UIColor * underlineColorForTextAlternatives;
    bool  useAutomaticEndpointing;
    bool  useInterfaceLanguageForLocalization;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  validTextRange;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsInitialEmojiKeyboard;
@property (nonatomic) bool acceptsPayloads;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (nonatomic, readonly) bool allowsSuggestionsOnlyMode;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) bool contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (getter=isDevicePasscodeEntry, nonatomic) bool devicePasscodeEntry;
@property (nonatomic, readonly) long long dictationInfoKeyboardType;
@property (nonatomic, readonly) long long dictationKeyboardType;
@property (nonatomic) bool disableHandwritingKeyboard;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } floatingKeyboardEdgeInsets;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool forceFloatingKeyboard;
@property (nonatomic) bool hasDefaultContents;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidePrediction;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic) bool loadKeyboardsForSiriLanguage;
@property (nonatomic) bool manageRecentInputs;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) bool preferOnlineDictation;
@property (nonatomic) long long preferredKeyboardStyle;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } selectionEdgeInsets;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) bool showDictationButton;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UISupplementalLexicon *supplementalLexicon;
@property (nonatomic, retain) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic, readonly) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, retain) UIColor *underlineColorForSpelling;
@property (nonatomic, retain) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) bool useAutomaticEndpointing;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

+ (long long)accessibleAppearanceForAppearance:(long long)arg1;
+ (long long)configuredAppearanceForAppearance:(long long)arg1 withTraitEnvironment:(id)arg2;
+ (id)defaultTextInputTraits;
+ (bool)keyboardTypeRequiresASCIICapable:(long long)arg1;
+ (id)traitEnvironmentFromTraits:(id)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1 lightweight:(bool)arg2;
+ (long long)translateToUIAutocapitalizationType:(unsigned long long)arg1;
+ (long long)translateToUIAutocorrectionType:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardAppearance:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardType:(unsigned long long)arg1;
+ (long long)translateToUIReturnKeyType:(unsigned long long)arg1;
+ (long long)translateToUISmartInsertDeleteEnabled:(bool)arg1;
+ (long long)translateToUISpellCheckingType:(unsigned long long)arg1;
+ (long long)translateToUITextScriptType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)PINEntrySeparatorIndexes;
- (void)_setColorsToMatchTintColor:(id)arg1;
- (bool)acceptsDictationSearchResults;
- (bool)acceptsEmoji;
- (bool)acceptsFloatingKeyboard;
- (bool)acceptsInitialEmojiKeyboard;
- (bool)acceptsPayloads;
- (bool)acceptsSplitKeyboard;
- (bool)allowsSuggestionsOnlyMode;
- (long long)autocapitalizationType;
- (id)autocorrectionContext;
- (long long)autocorrectionType;
- (bool)contentsIsSingleValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)deferBecomingResponder;
- (id)description;
- (long long)dictationInfoKeyboardType;
- (long long)dictationKeyboardType;
- (id)dictionaryRepresentation;
- (bool)disableHandwritingKeyboard;
- (bool)disableInputBars;
- (bool)disablePrediction;
- (bool)displaySecureEditsUsingPlainText;
- (bool)displaySecureTextUsingPlainText;
- (int)emptyContentReturnKeyType;
- (bool)enablesReturnKeyAutomatically;
- (bool)enablesReturnKeyOnNonWhiteSpaceContent;
- (void)extendedPathToObtainTraitsFrom:(id)arg1 lightweight:(bool)arg2;
- (void)fastPathToObtainTraitsFrom:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })floatingKeyboardEdgeInsets;
- (bool)forceDefaultDictationInfo;
- (long long)forceDictationKeyboardType;
- (bool)forceDisableDictation;
- (bool)forceEnableDictation;
- (bool)forceFloatingKeyboard;
- (bool)hasDefaultContents;
- (bool)hidePrediction;
- (id)init;
- (id)inputContextHistory;
- (id)insertionPointColor;
- (unsigned long long)insertionPointWidth;
- (bool)isCarPlayIdiom;
- (bool)isDevicePasscodeEntry;
- (bool)isEqual:(id)arg1;
- (bool)isSecureTextEntry;
- (bool)isSingleLineDocument;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (bool)learnsCorrections;
- (bool)loadKeyboardsForSiriLanguage;
- (bool)manageRecentInputs;
- (void)overlayWithTITextInputTraits:(id)arg1;
- (void)overrideWithTraits:(id)arg1;
- (id)passwordRules;
- (bool)preferOnlineDictation;
- (long long)preferredKeyboardStyle;
- (bool)publicTraitsMatchTraits:(id)arg1;
- (id)recentInputIdentifier;
- (id)responseContext;
- (bool)returnKeyGoesToNextResponder;
- (long long)returnKeyType;
- (id)selectionBarColor;
- (id)selectionBorderColor;
- (double)selectionBorderWidth;
- (double)selectionCornerRadius;
- (id)selectionDragDotImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionEdgeInsets;
- (id)selectionHighlightColor;
- (void)setAcceptsDictationSearchResults:(bool)arg1;
- (void)setAcceptsEmoji:(bool)arg1;
- (void)setAcceptsFloatingKeyboard:(bool)arg1;
- (void)setAcceptsInitialEmojiKeyboard:(bool)arg1;
- (void)setAcceptsPayloads:(bool)arg1;
- (void)setAcceptsSplitKeyboard:(bool)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionContext:(id)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setContentsIsSingleValue:(bool)arg1;
- (void)setDeferBecomingResponder:(bool)arg1;
- (void)setDevicePasscodeEntry:(bool)arg1;
- (void)setDisableHandwritingKeyboard:(bool)arg1;
- (void)setDisableInputBars:(bool)arg1;
- (void)setDisablePrediction:(bool)arg1;
- (void)setDisplaySecureEditsUsingPlainText:(bool)arg1;
- (void)setDisplaySecureTextUsingPlainText:(bool)arg1;
- (void)setEmptyContentReturnKeyType:(int)arg1;
- (void)setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)setEnablesReturnKeyOnNonWhiteSpaceContent:(bool)arg1;
- (void)setFloatingKeyboardEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setForceDefaultDictationInfo:(bool)arg1;
- (void)setForceDictationKeyboardType:(long long)arg1;
- (void)setForceDisableDictation:(bool)arg1;
- (void)setForceEnableDictation:(bool)arg1;
- (void)setForceFloatingKeyboard:(bool)arg1;
- (void)setHasDefaultContents:(bool)arg1;
- (void)setHidePrediction:(bool)arg1;
- (void)setInputContextHistory:(id)arg1;
- (void)setInsertionPointColor:(id)arg1;
- (void)setInsertionPointWidth:(unsigned long long)arg1;
- (void)setIsCarPlayIdiom:(bool)arg1;
- (void)setIsSingleLineDocument:(bool)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setLearnsCorrections:(bool)arg1;
- (void)setLoadKeyboardsForSiriLanguage:(bool)arg1;
- (void)setManageRecentInputs:(bool)arg1;
- (void)setPINEntrySeparatorIndexes:(id)arg1;
- (void)setPasswordRules:(id)arg1;
- (void)setPreferOnlineDictation:(bool)arg1;
- (void)setPreferredKeyboardStyle:(long long)arg1;
- (void)setRecentInputIdentifier:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setReturnKeyGoesToNextResponder:(bool)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSelectionBarColor:(id)arg1;
- (void)setSelectionBorderColor:(id)arg1;
- (void)setSelectionBorderWidth:(double)arg1;
- (void)setSelectionCornerRadius:(double)arg1;
- (void)setSelectionDragDotImage:(id)arg1;
- (void)setSelectionEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectionHighlightColor:(id)arg1;
- (void)setShortcutConversionType:(int)arg1;
- (void)setShowDictationButton:(bool)arg1;
- (void)setSmartDashesType:(long long)arg1;
- (void)setSmartInsertDeleteType:(long long)arg1;
- (void)setSmartQuotesType:(long long)arg1;
- (void)setSpellCheckingType:(long long)arg1;
- (void)setSupplementalLexicon:(id)arg1;
- (void)setSupplementalLexiconAmbiguousItemIcon:(id)arg1;
- (void)setSuppressReturnKeyStyling:(bool)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextScriptType:(long long)arg1;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setToDefaultValues;
- (void)setToSecureValues;
- (void)setUnderlineColorForSpelling:(id)arg1;
- (void)setUnderlineColorForTextAlternatives:(id)arg1;
- (void)setUseAutomaticEndpointing:(bool)arg1;
- (void)setUseInterfaceLanguageForLocalization:(bool)arg1;
- (void)setValidTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (int)shortcutConversionType;
- (bool)showDictationButton;
- (long long)smartDashesType;
- (long long)smartInsertDeleteType;
- (long long)smartQuotesType;
- (long long)spellCheckingType;
- (id)supplementalLexicon;
- (id)supplementalLexiconAmbiguousItemIcon;
- (bool)suppressReturnKeyStyling;
- (void)takeTraitsFrom:(id)arg1;
- (void)takeTraitsFrom:(id)arg1 lightweight:(bool)arg2;
- (id)textContentType;
- (int)textLoupeVisibility;
- (long long)textScriptType;
- (int)textSelectionBehavior;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (id)underlineColorForSpelling;
- (id)underlineColorForTextAlternatives;
- (long long)updateResultComparedToTraits:(id)arg1;
- (bool)useAutomaticEndpointing;
- (bool)useInterfaceLanguageForLocalization;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validTextRange;

@end
