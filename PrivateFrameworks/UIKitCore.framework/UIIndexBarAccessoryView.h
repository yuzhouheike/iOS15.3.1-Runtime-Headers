/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory> {
    long long  _edge;
    UIScrollView * _scrollView;
}

@property (nonatomic) <UIIndexBarAccessoryViewDelegate> *delegate;
@property (nonatomic) long long edge;
@property (nonatomic, readonly) bool overlay;
@property (nonatomic) UIScrollView *scrollView;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_selectEntry:(id)arg1 atIndex:(long long)arg2;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)displayEntryNearestToContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (long long)edge;
- (bool)overlay;
- (id)scrollView;
- (void)setEdge:(long long)arg1;
- (void)setEntries:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)update;

@end
