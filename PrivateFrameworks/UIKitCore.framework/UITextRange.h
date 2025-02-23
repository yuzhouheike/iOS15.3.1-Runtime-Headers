/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextRange : NSObject

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) UITextPosition *end;
@property (getter=_isCaret, nonatomic, readonly) bool isCaret;
@property (getter=_isImpl, nonatomic, readonly) UITextRangeImpl *isImpl;
@property (getter=_isRanged, nonatomic, readonly) bool isRanged;
@property (nonatomic, readonly) UITextPosition *start;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_asNSRangeRelativeToDocument:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_asNSRangeRelativeToDocument:(id)arg1 relativeToCurrentLine:(bool)arg2;
- (bool)_isCaret;
- (id)_isImpl;
- (bool)_isRanged;
- (id)end;
- (bool)isEmpty;
- (id)start;

@end
