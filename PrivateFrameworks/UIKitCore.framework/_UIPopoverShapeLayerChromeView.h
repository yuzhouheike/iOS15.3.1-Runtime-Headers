/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPopoverShapeLayerChromeView : _UIPopoverStandardChromeView {
    bool  _arrowVisible;
    long long  _backgroundStyle;
    UIVisualEffectView * _blurView;
    bool  _popoverBackgroundColorIsOpaque;
    long long  _requestedBackgroundStyle;
    _UIPopoverShapeLayerMaskView * _shapeLayerMaskView;
    bool  _shapeLayerPathNeedsUpdate;
}

+ (double)arrowBase;
+ (double)arrowHeight;
+ (double)cornerRadius;

- (void).cxx_destruct;
- (void)_addArrowCurveToPath:(id)arg1 direction:(unsigned long long)arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5;
- (void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 leadingEdge:(bool)arg4 isVertical:(bool)arg5;
- (void)_configureEffectView;
- (void)_generateBottomArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 isPinned:(bool)arg6;
- (void)_generateLeftArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 isPinned:(bool)arg6;
- (void)_generateRightArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 isPinned:(bool)arg6;
- (void)_generateTopArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 isPinned:(bool)arg6;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_loadNecessaryViews;
- (void)_removeEffectView;
- (long long)_resolvedBackgroundStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (double)_shadowRadius;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateBackgroundStyle;
- (void)_updateShapeLayerPath;
- (void)_updateShapeLayerPathIfNeeded;
- (id)backgroundEffect;
- (long long)backgroundStyle;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;

@end
