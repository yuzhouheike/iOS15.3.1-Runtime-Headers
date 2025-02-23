/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuStyle : NSObject <NSCopying> {
    bool  __allowsImmediateSelection;
    <_UITraitEnvironmentInternal> * __parentTraitEnvironmentForUserInterfaceStyle;
    struct { 
        unsigned long long attachment; 
        unsigned long long alignment; 
        double attachmentOffset; 
        double alignmentOffset; 
        long long gravity; 
    }  __preferredAnchor;
    bool  __shouldAvoidInputViews;
    UIView * _containerView;
    UIWindow * _containerWindow;
    bool  _hasInteractivePreview;
    bool  _ignoresContainerSizeChange;
    bool  _ignoresDefaultSizingRules;
    bool  _keepsInputViewsVisible;
    NSArray * _preferredBackgroundEffects;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredBackgroundInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredEdgeInsets;
    unsigned long long  _preferredLayout;
    UITraitCollection * _preferredTraitCollection;
    bool  _preventPreviewRasterization;
    bool  _previewOverlapsMenu;
    bool  _reversesActionOrderWhenAttachedToTop;
}

@property (getter=_allowsImmediateSelection, nonatomic) bool _allowsImmediateSelection;
@property (getter=_layoutAllowsMenu, nonatomic, readonly) bool _layoutAllowsMenu;
@property (getter=_layoutAllowsPreview, nonatomic, readonly) bool _layoutAllowsPreview;
@property (getter=_parentTraitEnvironmentForUserInterfaceStyle, nonatomic, retain) <_UITraitEnvironmentInternal> *_parentTraitEnvironmentForUserInterfaceStyle;
@property (getter=_preferredAnchor, nonatomic) struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; } _preferredAnchor;
@property (getter=_shouldAvoidInputViews, nonatomic) bool _shouldAvoidInputViews;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIWindow *containerWindow;
@property (nonatomic) bool hasInteractivePreview;
@property (nonatomic) bool ignoresContainerSizeChange;
@property (nonatomic) bool ignoresDefaultSizingRules;
@property (nonatomic) bool keepsInputViewsVisible;
@property (nonatomic, retain) NSArray *preferredBackgroundEffects;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredBackgroundInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredEdgeInsets;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic, retain) UITraitCollection *preferredTraitCollection;
@property (nonatomic) bool prefersCenteredPreviewWhenActionsAreAbsent;
@property (nonatomic) bool preventPreviewRasterization;
@property (nonatomic) bool previewOverlapsMenu;
@property (nonatomic) bool reversesActionOrderWhenAttachedToTop;

+ (id)defaultStyle;

- (void).cxx_destruct;
- (bool)_allowsImmediateSelection;
- (bool)_layoutAllowsMenu;
- (bool)_layoutAllowsPreview;
- (id)_parentTraitEnvironmentForUserInterfaceStyle;
- (struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })_preferredAnchor;
- (bool)_shouldAvoidInputViews;
- (id)containerView;
- (id)containerWindow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasInteractivePreview;
- (bool)ignoresContainerSizeChange;
- (bool)ignoresDefaultSizingRules;
- (bool)keepsInputViewsVisible;
- (id)preferredBackgroundEffects;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredBackgroundInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeInsets;
- (unsigned long long)preferredLayout;
- (id)preferredTraitCollection;
- (bool)prefersCenteredPreviewWhenActionsAreAbsent;
- (bool)preventPreviewRasterization;
- (bool)previewOverlapsMenu;
- (bool)reversesActionOrderWhenAttachedToTop;
- (void)setContainerView:(id)arg1;
- (void)setContainerWindow:(id)arg1;
- (void)setHasInteractivePreview:(bool)arg1;
- (void)setIgnoresContainerSizeChange:(bool)arg1;
- (void)setIgnoresDefaultSizingRules:(bool)arg1;
- (void)setKeepsInputViewsVisible:(bool)arg1;
- (void)setPreferredBackgroundEffects:(id)arg1;
- (void)setPreferredBackgroundInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredLayout:(unsigned long long)arg1;
- (void)setPreferredTraitCollection:(id)arg1;
- (void)setPrefersCenteredPreviewWhenActionsAreAbsent:(bool)arg1;
- (void)setPreventPreviewRasterization:(bool)arg1;
- (void)setPreviewOverlapsMenu:(bool)arg1;
- (void)setReversesActionOrderWhenAttachedToTop:(bool)arg1;
- (void)set_allowsImmediateSelection:(bool)arg1;
- (void)set_parentTraitEnvironmentForUserInterfaceStyle:(id)arg1;
- (void)set_preferredAnchor:(struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })arg1;
- (void)set_shouldAvoidInputViews:(bool)arg1;

@end
