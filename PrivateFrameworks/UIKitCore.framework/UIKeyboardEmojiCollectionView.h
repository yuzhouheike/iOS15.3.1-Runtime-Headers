/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiCollectionView : UICollectionView {
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    UIResponder * _hitTestResponder;
    bool  _isInSearchPopover;
}

@property (readonly, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic) UIResponder *hitTestResponder;
@property (nonatomic) bool isInSearchPopover;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (double)_currentScreenScale;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)backgroundColor;
- (id)closestCellForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)emojiGraphicsTraits;
- (id)hitTestResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;
- (bool)isInSearchPopover;
- (void)layoutSubviews;
- (void)setHitTestResponder:(id)arg1;
- (void)setIsInSearchPopover:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
