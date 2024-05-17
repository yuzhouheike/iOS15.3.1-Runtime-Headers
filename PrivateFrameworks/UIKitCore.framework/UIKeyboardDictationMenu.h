/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardDictationMenu : UIKeyboardMenuView

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)activeInstance;
+ (id)sharedInstance;

// Image: /usr/lib/libMainThreadChecker.dylib

- (bool)centerPopUpOverKey;
- (void)cleanupForFadeOrHide;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)performShowAnimation;
- (struct CGSize { double x1; double x2; })preferredSize;
- (bool)usesDimmingView;
- (bool)usesTable;
- (void)willShow;

@end
