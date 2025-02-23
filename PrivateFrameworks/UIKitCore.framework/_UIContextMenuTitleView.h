/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuTitleView : UICollectionReusableView {
    UIVisualEffectView * _bgView;
    UIView * _separator;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIVisualEffectView *bgView;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_titleFont;
- (unsigned long long)_titleLabelNumberOfLines;
- (void)_updateLayoutMargins;
- (id)bgView;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)separator;
- (void)setBackgroundMaterialGroupName:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
