/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAlertControllerActionView : UIView <UIAlertActionViewRepresentation_Internal, UIGestureRecognizerDelegate> {
    UIAlertAction * _action;
    UIAlertController * _alertController;
    double  _axEnforcedWidth;
    NSLayoutConstraint * _axLabelContainerWidthConstraint;
    NSLayoutConstraint * _checkToMarginConstraint;
    UIImageView * _checkView;
    NSArray * _contentViewControllerConstraints;
    UIView * _contentViewControllerContainerView;
    UILabel * _descriptiveLabel;
    NSLayoutConstraint * _descriptiveLabelTrailingToContainerCenterConstraint;
    NSLayoutConstraint * _descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint * _descriptiveLabelWidthConstraint;
    bool  _hasDescriptiveText;
    NSArray * _havingDescriptiveLabelConstraints;
    bool  _highlighted;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewBaselineOrCenterYConstraint;
    NSLayoutConstraint * _imageViewBottomConstraint;
    NSLayoutConstraint * _imageViewTopConstraint;
    UILabel * _label;
    NSLayoutConstraint * _labelCenterLeadingConstraint;
    NSLayoutConstraint * _labelContainerCenterXConstraint;
    NSLayoutConstraint * _labelContainerLeadingConstraint;
    NSLayoutConstraint * _labelContainerLeadingPinConstraint;
    NSLayoutConstraint * _labelContainerTrailingConstraint;
    NSLayoutConstraint * _labelContainerTrailingPinConstraint;
    UIView * _labelContainerView;
    NSLayoutConstraint * _labelWidthConstraint;
    NSLayoutConstraint * _marginToImageConstraint;
    _UIAlertControllerActionViewMetrics * _metrics;
    NSLayoutConstraint * _minimumHeightConstraint;
    NSArray * _notHavingDescriptiveLabelConstraints;
    UIAlertControllerVisualStyle * _visualStyle;
}

@property (nonatomic, copy) UIAlertAction *action;
@property (nonatomic) UIAlertController *alertController;
@property (readonly) double currentDescriptiveLabelTextWidth;
@property (readonly) double currentLabelTextWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (retain) NSLayoutConstraint *labelContainerCenterXConstraint;
@property (retain) NSLayoutConstraint *labelContainerLeadingPinConstraint;
@property (retain) NSLayoutConstraint *labelContainerTrailingPinConstraint;
@property (readonly) Class superclass;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToBePreferred:(bool)arg2;
- (void)_action:(id)arg1 changedToChecked:(bool)arg2;
- (void)_action:(id)arg1 changedToEnabled:(bool)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_buildCheckViewConstraints;
- (void)_buildConstraints;
- (void)_buildContentViewControllerContainerConstraints;
- (void)_buildHavingDescriptiveLabelConstraints;
- (void)_buildImageViewConstraints;
- (void)_buildNotHavingDescriptiveLabelConstraints;
- (void)_contentSizeChanged;
- (long long)_effectiveTitleTextAlignment;
- (long long)_focusItemDeferralMode;
- (id)_interfaceActionViewState;
- (void)_loadCheckView;
- (void)_loadContentViewControllerContainerViewIfNecessary;
- (void)_loadContentViewControllerView;
- (void)_loadDescriptiveLabel;
- (void)_loadImageView;
- (void)_prepareConstraintsForHavingDescriptiveText:(bool)arg1;
- (void)_prepareConstraintsForImage:(id)arg1;
- (void)_recomputeColors;
- (void)_removeContentViewControllerContainerViewSubviews;
- (void)_updateCheckImageView;
- (void)_updateContentViewControllerContainerViewConstraints;
- (void)_updateDescriptiveText;
- (void)_updateHavingDescriptiveLabelConstraints;
- (void)_updateImageMargins;
- (void)_updateImageView;
- (void)_updateImageViewAttributes;
- (void)_updateLabelAttributes;
- (void)_updateLabelContainerConstraints;
- (void)_updateMinimumHeight;
- (void)_updateStyle;
- (void)_updateTextAlignmentForHavingDescriptiveText:(bool)arg1 titleTextAlignment:(long long)arg2;
- (id)action;
- (id)alertController;
- (void)applyMetrics:(id)arg1;
- (double)currentDescriptiveLabelTextWidth;
- (double)currentLabelTextWidth;
- (void)dealloc;
- (id)description;
- (bool)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (id)labelContainerCenterXConstraint;
- (id)labelContainerLeadingPinConstraint;
- (id)labelContainerTrailingPinConstraint;
- (void)setAction:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLabelContainerCenterXConstraint:(id)arg1;
- (void)setLabelContainerLeadingPinConstraint:(id)arg1;
- (void)setLabelContainerTrailingPinConstraint:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (void)tintColorDidChange;
- (void)underlyingInterfaceActionRepresentationDidChange;
- (void)updateHeightUsingAXEnforcedWidth:(double)arg1;
- (id)visualStyle;

@end
