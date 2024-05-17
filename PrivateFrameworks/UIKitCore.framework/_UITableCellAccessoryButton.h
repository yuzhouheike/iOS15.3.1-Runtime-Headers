/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableCellAccessoryButton : UIButton {
    UIColor * _accessoryTintColor;
    id /* block */  _backgroundImageProvider;
}

@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, copy) id /* block */ backgroundImageProvider;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_reloadBackgroundImage;
- (id)accessoryTintColor;
- (id /* block */)backgroundImageProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundImageProvider:(id /* block */)arg2;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setBackgroundImageProvider:(id /* block */)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
