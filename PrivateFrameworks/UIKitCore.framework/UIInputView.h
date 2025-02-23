/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputView : UIView <UISplittableInputView> {
    bool  _allowsSelfSizing;
    bool  _assertSizingWithPredictionBar;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _backgroundEdgeInsets;
    double  _contentRatio;
    bool  _disableSplitSupport;
    double  _gapWidth;
    bool  _isTransitioning;
    struct CGSize { 
        double width; 
        double height; 
    }  _leftContentSize;
    _UIInputViewContent * _leftContentView;
    double  _leftOffset;
    UIImage * _mergedImage;
    NSMutableDictionary * _mergedSliceMap;
    UIKBRenderConfig * _renderConfig;
    struct CGSize { 
        double width; 
        double height; 
    }  _rightContentSize;
    _UIInputViewContent * _rightContentView;
    UIImage * _splitImage;
    NSMutableDictionary * _splitSliceMap;
    long long  _style;
    bool  _suppressBackgroundStyling;
    double  _transitionGap;
    CALayer * _transitionLayer;
    double  _transitionLeftOffset;
    double  _transitionRatio;
    NSArray * _visibleLayers;
}

@property (nonatomic, retain) UIImage *_mergedImage;
@property (nonatomic, retain) NSMutableDictionary *_mergedSliceMap;
@property (nonatomic, retain) UIImage *_splitImage;
@property (nonatomic, retain) NSMutableDictionary *_splitSliceMap;
@property (nonatomic) bool allowsSelfSizing;
@property (nonatomic) bool assertSizingWithPredictionBar;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundEdgeInsets;
@property (nonatomic) double contentRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long inputViewStyle;
@property (nonatomic, readonly) UIView *leftContentView;
@property (nonatomic) struct CGSize { double x1; double x2; } leftContentViewSize;
@property (nonatomic, readonly) UIView *rightContentView;
@property (nonatomic) struct CGSize { double x1; double x2; } rightContentViewSize;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_setupAppearanceIfNecessary;

- (double)_additionalClipHeight;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (struct CGSize { double x1; double x2; })_defaultSize;
- (bool)_disableSplitSupport;
- (void)_endSplitTransitionIfNeeded:(bool)arg1;
- (bool)_isSplit;
- (bool)_isToolbars;
- (bool)_isTransitioning;
- (id)_mergedImage;
- (id)_mergedSliceMap;
- (void)_setDisableSplitSupport:(bool)arg1;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (void)_setNeedsContentSizeUpdate;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSuppressBackgroundStyling:(bool)arg1;
- (id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1;
- (id)_splitImage;
- (id)_splitSliceMap;
- (bool)_supportsSplit;
- (bool)_suppressBackgroundStyling;
- (id)_toolbarBorderedBackground;
- (void)_updateClipCorners;
- (void)_updateWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (bool)allowsSelfSizing;
- (bool)assertSizingWithPredictionBar;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundEdgeInsets;
- (double)contentRatio;
- (void)didEndSplitTransition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputViewStyle:(long long)arg2;
- (long long)inputViewStyle;
- (void)layoutMergedSubviews;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (id)leftContentView;
- (struct CGSize { double x1; double x2; })leftContentViewSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rightContentView;
- (struct CGSize { double x1; double x2; })rightContentViewSize;
- (void)setAllowsSelfSizing:(bool)arg1;
- (void)setAssertSizingWithPredictionBar:(bool)arg1;
- (void)setBackgroundEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentRatio:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputViewStyle:(long long)arg1;
- (void)setLeftContentViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRightContentViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_mergedImage:(id)arg1;
- (void)set_mergedSliceMap:(id)arg1;
- (void)set_splitImage:(id)arg1;
- (void)set_splitSliceMap:(id)arg1;
- (id)tintColor;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)willBeginSplitTransition;

@end
