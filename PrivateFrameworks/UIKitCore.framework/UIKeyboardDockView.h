/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardDockView : UIView <_UIViewRepresentingKeyboardLayout> {
    UIKeyboardDockItem * _centerDockItem;
    <UIKeyboardDockViewDelegate> * _delegate;
    UIKeyboardDockItem * _leftDockItem;
    UIKeyboardDockItem * _rightDockItem;
}

@property (nonatomic, retain) UIKeyboardDockItem *centerDockItem;
@property (nonatomic) <UIKeyboardDockViewDelegate> *delegate;
@property (nonatomic, retain) UIKeyboardDockItem *leftDockItem;
@property (nonatomic, retain) UIKeyboardDockItem *rightDockItem;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (long long)_currentInterfaceOrientation;
+ (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })_itemFramesForBoundingSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)dockViewHomeGestureExclusionZones;

- (void).cxx_destruct;
- (void)_configureDockItem:(id)arg1;
- (void)_didReceiveHandBiasChangeNotification:(id)arg1;
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (id)_dockItemWithButton:(id)arg1;
- (id)_keyboardLayoutView;
- (id)_keyboardLongPressInteractionRegions;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)centerDockItem;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)leftDockItem;
- (id)rightDockItem;
- (void)setCenterDockItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftDockItem:(id)arg1;
- (void)setRightDockItem:(id)arg1;

@end
