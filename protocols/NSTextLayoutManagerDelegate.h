/* Generated by RuntimeBrowser.
 */

@protocol NSTextLayoutManagerDelegate <NSObject>

@optional

- (NSDictionary *)textLayoutManager:(NSTextLayoutManager *)arg1 renderingAttributesForLink:(id)arg2 atLocation:(id <NSTextLocation>)arg3 defaultAttributes:(NSDictionary *)arg4;
- (bool)textLayoutManager:(NSTextLayoutManager *)arg1 shouldBreakLineBeforeLocation:(id <NSTextLocation>)arg2 hyphenating:(bool)arg3;
- (NSTextLayoutFragment *)textLayoutManager:(NSTextLayoutManager *)arg1 textLayoutFragmentForLocation:(id <NSTextLocation>)arg2 inTextElement:(NSTextElement *)arg3;

@end
