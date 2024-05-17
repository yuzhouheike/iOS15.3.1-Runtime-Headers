/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextCheckingController : NSObject {
    <UITextCheckingClient> * _client;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRangeFromPreviousUnchecked;
    struct __tccClientFlags { 
        unsigned int respondsToAutocorrectionType : 1; 
        unsigned int respondsToSpellCheckingType : 1; 
        unsigned int respondsToSmartQuotesType : 1; 
        unsigned int respondsToSmartDashesType : 1; 
        unsigned int respondsToSmartInsertDeleteType : 1; 
        unsigned int respondsToContinuousSpellCheckingEnabled : 1; 
    }  _tccClientFlags;
    UITextChecker * _textChecker;
}

@property (readonly) <UITextCheckingClient> *client;

- (void)checkSpellingForSelectionChangeFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)checkSpellingForWordInRange:(id)arg1;
- (id)client;
- (void)considerTextCheckingForRange:(id)arg1;
- (bool)continuousSpellCheckingEnabled;
- (void)dealloc;
- (void)didChangeSelectionFromRange:(id)arg1;
- (void)didChangeTextInRange:(id)arg1;
- (bool)foundApostropheAfterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithClient:(id)arg1;
- (void)insertedTextInRange:(id)arg1;
- (void)invalidate;
- (id)keyboardLanguages;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nsRangeForTextRange:(id)arg1;
- (void)preheatTextChecker;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)textChecker;
- (id)validAnnotations;

@end
