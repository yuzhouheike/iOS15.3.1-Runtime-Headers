/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBAutofillController : NSObject {
    NSMutableDictionary * _autofillGroup;
    long long  _delegateNeedsAutofillMode;
    bool  _didOptOutOfAutofillSignup;
    NSMutableDictionary * _fallbackAutofillGroup;
    bool  _shouldSaveAutofill;
    UIColor * _textFieldOrigColor;
}

@property (nonatomic, readonly, retain) NSMutableDictionary *autofillGroup;
@property (nonatomic) long long delegateNeedsAutofillMode;
@property (nonatomic, copy) NSMutableDictionary *fallbackAutofillGroup;
@property (nonatomic) bool shouldSaveAutofill;
@property (nonatomic, copy) UIColor *textFieldOrigColor;

+ (unsigned long long)translateToTextInputAutofillMode:(long long)arg1;

- (void).cxx_destruct;
- (void)_clearASPInTextField:(id)arg1;
- (long long)_needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2;
- (bool)_prohibitAutofill:(id)arg1 needASPKeyboard:(bool)arg2;
- (void)_setAutofillGroup:(id)arg1;
- (id)accessibilityLoginKeywordList;
- (id)accessibilitySignupKeywordList;
- (void)addTemporaryTextColorToTextField:(id)arg1;
- (id)addressKeywordSet;
- (id)autofillContextForInputDelegate:(id)arg1;
- (id)autofillGroup;
- (void)clearASPInPasswordFields;
- (void)clearASPVisualEffectsInTextField:(id)arg1;
- (void)clearAutofillGroup;
- (void)clearFallbackAutofillGroup;
- (id)contactAutoFillKeywordsForKey:(id)arg1 value:(id)arg2 localizedKeywords:(id)arg3;
- (long long)contactAutofillModeWithAutofillGroup:(id)arg1 responders:(id)arg2;
- (long long)containsIndicationInText:(id)arg1 withAccessibilityHints:(bool)arg2;
- (bool)containsUsernamePasswordPairsInAutofillGroup:(id)arg1;
- (long long)delegateNeedsAutofillMode;
- (void)didOptOutOfAutofillSignup;
- (long long)doTraits:(id)arg1 matchTextContentType:(id)arg2;
- (id)emailKeywordSet;
- (void)enumeratePasswordFieldsUsingBlock:(id /* block */)arg1;
- (id)fallbackAutofillGroup;
- (void)handleAutofillCredentialSaveIfNeeded:(id)arg1 fromASP:(bool)arg2;
- (void)handleWebviewCredentialsSaveForResponder:(id)arg1 WebsiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 passwordIsAutoGenerated:(bool)arg5;
- (id)init;
- (id)loginKeywordList;
- (long long)needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 keyboardState:(id)arg3;
- (void)optOutASPInTextField;
- (id)phoneKeywordSet;
- (bool)preferFallbackAutofillGroup;
- (id)processLocalizedString:(id)arg1;
- (void)removeTemporaryTextColorFromTextField:(id)arg1;
- (id)searchKeywordSet;
- (void)setDelegateNeedsAutofillMode:(long long)arg1;
- (void)setFallbackAutofillGroup:(id)arg1;
- (void)setShouldSaveAutofill:(bool)arg1;
- (void)setTextFieldOrigColor:(id)arg1;
- (bool)shouldLoadASPForResponder:(id)arg1;
- (bool)shouldSaveAutofill;
- (void)showASPInTextField:(id)arg1 isRightToLeft:(bool)arg2;
- (long long)signUpSignalFromButton:(id)arg1;
- (long long)signUpSignalFromNavBarItem:(id)arg1;
- (long long)signUpSignalFromViewControllerHierarchy:(id)arg1;
- (bool)signupHintForUsername:(id)arg1 password:(id)arg2 responder:(id)arg3;
- (id)signupKeywordList;
- (id)textFieldOrigColor;
- (id)textSignalsForResponder:(id)arg1;
- (void)trackResponderForAutofillIfNeeded:(id)arg1;
- (void)updateAutofillContextForInputDelegate:(id)arg1;

@end
