/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
    UIResponder<UITextInput> * _textInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(bool)arg3;
- (long long)_distanceForTokenizerWithGranularity:(long long)arg1;
- (long long)_indexForTextPosition:(id)arg1;
- (bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (id)initWithTextInput:(id)arg1;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

@end
