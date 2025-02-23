/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarTransitionContext : NSObject {
    long long  _apiVersion;
    double  _backgroundAlpha;
    _UIBarBackground * _backgroundView;
    NSMutableSet * _clippingViews;
    _UINavigationBarContentView * _contentView;
    _UINavigationBarContentViewLayout * _fromContentLayout;
    _UINavigationBarLargeTitleViewLayout * _fromLargeTitleLayout;
    _UINavigationBarLayout * _fromLayout;
    int  _largeTitleTransitionType;
    _UINavigationBarLargeTitleView * _largeTitleView;
    UINavigationBar * _navigationBar;
    struct { 
        unsigned int isRTL : 1; 
        unsigned int compact : 1; 
        unsigned int allowLargeTitles : 1; 
        unsigned int twoPart : 1; 
        unsigned int beginWithLargeTitle : 1; 
        unsigned int endWithLargeTitle : 1; 
        unsigned int observedScrollViewOffsetIsApplicable : 1; 
        unsigned int sharesContentViewLayouts : 1; 
        unsigned int beginWithTransparencyAllowed : 1; 
        unsigned int endWithTransparencyAllowed : 1; 
    }  _navigationBarTransitionContextFlags;
    _UINavigationBarModernPromptView * _promptView;
    _UINavigationBarItemStack * _stack;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingContentOffsetForObservedScrollView;
    _UINavigationBarContentViewLayout * _toContentLayout;
    _UINavigationBarLargeTitleViewLayout * _toLargeTitleLayout;
    _UINavigationBarLayout * _toLayout;
}

@property (nonatomic) bool allowLargeTitles;
@property (nonatomic) long long apiVersion;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic, retain) _UIBarBackground *backgroundView;
@property (nonatomic) bool beginWithLargeTitle;
@property (nonatomic) bool beginWithTransparencyAllowed;
@property (nonatomic) bool compact;
@property (nonatomic, retain) _UINavigationBarContentView *contentView;
@property (nonatomic, readonly) double contentViewFittingHeight;
@property (nonatomic, readonly) double contentViewMaxY;
@property (nonatomic) bool endWithLargeTitle;
@property (nonatomic) bool endWithTransparencyAllowed;
@property (nonatomic, retain) _UINavigationBarLayout *fromLayout;
@property (setter=setRTL:, nonatomic) bool isRTL;
@property (nonatomic, retain) _UINavigationBarLargeTitleView *largeTitleView;
@property (nonatomic) UINavigationBar *navigationBar;
@property (nonatomic) bool observedScrollViewOffsetIsApplicable;
@property (nonatomic, retain) _UINavigationBarModernPromptView *promptView;
@property (nonatomic) bool sharesContentViewLayouts;
@property (nonatomic, retain) _UINavigationBarItemStack *stack;
@property (nonatomic) struct CGPoint { double x1; double x2; } startingContentOffsetForObservedScrollView;
@property (nonatomic, retain) _UINavigationBarLayout *toLayout;
@property (nonatomic, readonly) int transition;
@property (nonatomic) bool twoPart;
@property (nonatomic, readonly) UIView *viewFadingInFromCustomAlpha;
@property (nonatomic, readonly) UIView *viewUsingEaseInCurve;
@property (nonatomic, readonly) UIView *viewUsingEaseOutCurve;

+ (id)contextForTransition:(int)arg1;

- (void).cxx_destruct;
- (void)_addClippingView:(id)arg1;
- (void)_animateAsTwoPartsWithOverlap:(double)arg1 partOne:(id /* block */)arg2 partTwo:(id /* block */)arg3;
- (void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(id /* block */)arg1 partTwo:(id /* block */)arg2;
- (void)_animateAsTwoPartsWithoutOverlap:(id /* block */)arg1 partTwo:(id /* block */)arg2;
- (void)_animateBackgroundView;
- (void)_animateFromBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)_prepareToBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)_removeAllClippingViews;
- (void)_resetContentAndLargeTitleViewCompleted:(bool)arg1;
- (void)_updateIncomingLayoutWidthToMatchOutgoingLayout;
- (bool)allowLargeTitles;
- (void)animate;
- (long long)apiVersion;
- (double)backgroundAlpha;
- (id)backgroundView;
- (bool)beginWithLargeTitle;
- (bool)beginWithTransparencyAllowed;
- (void)cancel;
- (bool)compact;
- (void)complete;
- (id)contentView;
- (double)contentViewFittingHeight;
- (double)contentViewMaxY;
- (id)description;
- (bool)endWithLargeTitle;
- (bool)endWithTransparencyAllowed;
- (id)fromLayout;
- (bool)isRTL;
- (id)largeTitleView;
- (id)navigationBar;
- (bool)observedScrollViewOffsetIsApplicable;
- (void)prepare;
- (id)promptView;
- (void)recordUpdates:(id /* block */)arg1;
- (void)setAllLargeTitleLayoutsVisible;
- (void)setAllowLargeTitles:(bool)arg1;
- (void)setApiVersion:(long long)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBeginWithLargeTitle:(bool)arg1;
- (void)setBeginWithTransparencyAllowed:(bool)arg1;
- (void)setCompact:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setEndWithLargeTitle:(bool)arg1;
- (void)setEndWithTransparencyAllowed:(bool)arg1;
- (void)setFromLayout:(id)arg1;
- (void)setLargeTitleView:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setObservedScrollViewOffsetIsApplicable:(bool)arg1;
- (void)setPromptView:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSharesContentViewLayouts:(bool)arg1;
- (void)setStack:(id)arg1;
- (void)setStartingContentOffsetForObservedScrollView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setToLayout:(id)arg1;
- (void)setTwoPart:(bool)arg1;
- (bool)sharesContentViewLayouts;
- (bool)shouldPerformTwoPartCrossfadeTransition;
- (id)stack;
- (struct CGPoint { double x1; double x2; })startingContentOffsetForObservedScrollView;
- (id)toLayout;
- (bool)twoPart;
- (id)viewFadingInFromCustomAlpha;
- (id)viewUsingEaseInCurve;
- (id)viewUsingEaseOutCurve;

@end
