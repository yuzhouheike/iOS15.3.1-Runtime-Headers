/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIAutocorrectionList : NSObject <NSSecureCoding> {
    TIKeyboardCandidate * _autocorrection;
    bool  _containsProactiveTriggers;
    NSArray * _emojiList;
    NSArray * _predictions;
    bool  _proactiveSuggestionsEmpty;
    NSArray * _proactiveTriggers;
}

@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, readonly) TIKeyboardCandidate *autocorrectionIfSupplemental;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) bool containsAutofillCandidates;
@property (nonatomic, readonly) bool containsContinuousPathConversions;
@property (nonatomic) bool containsProactiveTriggers;
@property (nonatomic, readonly) NSArray *emojiList;
@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) bool hasSupplementalCandidates;
@property (nonatomic, readonly) bool isShowingSuggestionForKeyboardCamera;
@property (nonatomic, readonly) bool notEmpty;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) NSArray *predictionsIfSupplemental;
@property (nonatomic) bool proactiveSuggestionsEmpty;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic, readonly) bool shouldAcceptTopCandidate;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(bool)arg2;
+ (id)listWithAutocorrection:(id)arg1;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
+ (id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3;
+ (id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)autocorrection;
- (id)autocorrectionIfSupplemental;
- (id)candidates;
- (bool)containsProactiveTriggers;
- (id)description;
- (id)emojiList;
- (bool)empty;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSupplementalCandidates;
- (bool)hasSupplementalItems;
- (id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithCandidates:(id)arg1;
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)predictions;
- (id)predictionsIfSupplemental;
- (bool)proactiveSuggestionsEmpty;
- (id)proactiveTriggers;
- (void)setContainsProactiveTriggers:(bool)arg1;
- (void)setProactiveSuggestionsEmpty:(bool)arg1;
- (bool)shouldAcceptTopCandidate;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)containsAutofillCandidates;
- (bool)containsContinuousPathConversions;
- (bool)isShowingSuggestionForKeyboardCamera;
- (bool)notEmpty;
- (long long)sourceForAutocorrection;
- (id)ui_allSupplementalCandidates;
- (void)updateLabelsWithSmartPunctuation:(id)arg1;

@end
