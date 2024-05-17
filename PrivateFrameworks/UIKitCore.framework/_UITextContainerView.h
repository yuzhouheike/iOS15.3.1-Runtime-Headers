/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextViewCanvasViewContext> {
    _UITextViewCanvasView * _canvasView;
    <_UITextContainerViewDelegate> * _delegate;
    long long  _invalidationSeqClipsToBounds;
    unsigned long long  _invalidationSeqNo;
    NSDictionary * _linkTextAttributes;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    struct { 
        unsigned int textContainerOriginInvalid : 1; 
        unsigned int verticalLayout : 2; 
        unsigned int horizontallyResizable : 1; 
        unsigned int verticallyResizable : 1; 
        unsigned int freezeTextContainerSize : 1; 
        unsigned int usesStandardTextScaling : 1; 
    }  _tcvFlags;
    NSTextContainer * _textContainer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textContainerInset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textContainerOrigin;
    _UITextLayoutController * _textLayoutController;
    UITextView * _textView;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _clipRectForFadedEdges;
@property (nonatomic, readonly) _UITextViewCanvasView *canvasView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UITextContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } drawingScale;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:, nonatomic) bool freezeTextContainerSize;
@property (readonly) unsigned long long hash;
@property (getter=isHorizontallyResizable, nonatomic) bool horizontallyResizable;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } markedRange;
@property (nonatomic, readonly) NSDictionary *markedTextStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) double maxTileHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textContainerInset;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } textContainerOrigin;
@property (nonatomic, readonly) _UITextLayoutController *textLayoutController;
@property (nonatomic) bool usesStandardTextScaling;
@property (nonatomic) bool usesTiledViews;
@property (getter=isVerticallyResizable, nonatomic) bool verticallyResizable;

- (void).cxx_destruct;
- (void)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (bool)_freezeTextContainerSize;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isFrameRect:(bool)arg3 settingAction:(id /* block */)arg4;
- (void)_setFreezeTextContainerSize:(bool)arg1;
- (void)_setNeedsContentsFormatUpdate;
- (bool)_shouldCapSizeToFitLayoutRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)_sizeToConstrainedContainerUsedRect;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributedSubstringForMarkedRange;
- (id)canvasView;
- (id)delegate;
- (id)description;
- (struct CGPoint { double x1; double x2; })drawingScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textLayoutController:(id)arg2 textContainer:(id)arg3 delegate:(id)arg4;
- (void)invalidateTextContainerOrigin;
- (bool)isEditable;
- (bool)isHorizontallyResizable;
- (bool)isVerticallyResizable;
- (id)layoutManager;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (long long)layoutOrientation;
- (void)layoutSubviews;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (id)linkTextAttributes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (id)markedTextStyle;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)maxTileHeight;
- (struct CGSize { double x1; double x2; })minSize;
- (void)removeAllGhostedRanges;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConstrainedFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontallyResizable:(bool)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaxTileHeight:(double)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(bool)arg2;
- (void)setTextContainer:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUsesStandardTextScaling:(bool)arg1;
- (void)setUsesTiledViews:(bool)arg1;
- (void)setVerticallyResizable:(bool)arg1;
- (void)sizeToFit;
- (id)textColor;
- (id)textContainer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (id)textLayoutController;
- (id)textStorage;
- (void)tintColorDidChange;
- (void)updateInsertionPointStateAndRestartTimer:(bool)arg1;
- (bool)usesStandardTextScaling;
- (bool)usesTiledViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)willMoveToSuperview:(id)arg1;

@end
