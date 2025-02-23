/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {
    NSString * _candidate;
    long long  _cursorMovement;
    bool  _extensionCandidate;
    NSString * _input;
}

@property (nonatomic, copy) NSString *candidate;
@property (nonatomic) long long cursorMovement;
@property (getter=isExtensionCandidate, nonatomic) bool extensionCandidate;
@property (nonatomic, copy) NSString *input;

+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 cursorMovement:(long long)arg3;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(bool)arg3;
+ (id)candidateWithUnchangedInput:(id)arg1;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2 customInfoType:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)candidate;
- (id)candidateByReplacingWithCandidate:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(bool)arg3;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseCandidate:(id)arg1;
- (id)initWithUnchangedInput:(id)arg1;
- (id)input;
- (bool)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
- (bool)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
- (bool)isExtensionCandidate;
- (void)setCandidate:(id)arg1;
- (void)setCursorMovement:(long long)arg1;
- (void)setExtensionCandidate:(bool)arg1;
- (void)setInput:(id)arg1;

@end
