/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextElement : NSObject {
    unsigned char  _coalescingType;
    NSTextRange * _elementRange;
    NSTextContentManager * _textContentManager;
}

@property unsigned char coalescingType;
@property (retain) NSTextRange *elementRange;
@property NSTextContentManager *textContentManager;

- (unsigned char)coalescingType;
- (void)dealloc;
- (id)elementRange;
- (struct CGSize { double x1; double x2; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg1;
- (id)init;
- (id)initWithTextContentManager:(id)arg1;
- (void)setCoalescingType:(unsigned char)arg1;
- (void)setElementRange:(id)arg1;
- (void)setTextContentManager:(id)arg1;
- (id)textContentManager;

@end
