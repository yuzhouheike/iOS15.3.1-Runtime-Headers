/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchDisplayControllerContainerView : UIView {
    UIView * _behindView;
    UIView * _bottomView;
    bool  _collapsedTopView;
    UIView * _topView;
    NSLayoutConstraint * _topViewAttributeTopConstraint;
    NSLayoutConstraint * _topViewHeightConstraint;
}

@property (nonatomic, readonly) UIView *behindView;
@property (nonatomic, readonly) UIView *bottomView;
@property (nonatomic, readonly) UIView *topView;
@property (nonatomic, retain) NSLayoutConstraint *topViewAttributeTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topViewHeightConstraint;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;

// Image: /usr/lib/libMainThreadChecker.dylib

- (void)adjustTopAttributeConstantByDelta:(double)arg1;
- (id)behindView;
- (id)bottomView;
- (void)collapseTopView;
- (void)configureInteractionForContainment:(bool)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 topViewHeight:(double)arg2;
- (void)setBottomViewUserInteractionEnabled:(bool)arg1;
- (void)setTopViewAttributeTopConstraint:(id)arg1;
- (void)setTopViewHeightConstraint:(id)arg1;
- (id)topView;
- (id)topViewAttributeTopConstraint;
- (id)topViewHeightConstraint;
- (void)updateTopAttributeConstant:(double)arg1;
- (void)updateTopViewHeight:(double)arg1;
- (void)updateTopViewHeight:(double)arg1 animateUpdate:(bool)arg2;

@end
