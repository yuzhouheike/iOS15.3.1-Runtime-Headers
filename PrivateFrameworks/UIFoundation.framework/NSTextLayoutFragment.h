/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextLayoutFragment : NSObject <NSCoreTypesetterDelegateInternal, NSSecureCoding, __NSTextRunStorageDataSource> {
    unsigned long long  _animationType;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _destinationBoundingRect;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _destinationGlyphRange;
    NSLayoutManager * _destinationLayoutManager;
    NSTextStorage * _destinationTextStorage;
    double  _destinationVerticalDelta;
    bool  _isTextParagraph;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutFragmentFrame;
    NSLayoutManager * _layoutManager;
    struct CGPoint { 
        double x; 
        double y; 
    }  _layoutPoint;
    NSOperationQueue * _layoutQueue;
    NSTextRange * _rangeInElement;
    _NSTextAttributeStorage * _renderingAttributesTable;
    bool  _renderingAttributesValidated;
    bool  _rendersTextCorrectionMarkers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceBoundingRect;
    unsigned long long  _sourceRangeDelta;
    unsigned long long  _sourceVerticalDelta;
    unsigned long long  _state;
    _NSTextAttachmentLayoutContext * _textAttachmentLayoutContext;
    NSTextElement * _textElement;
    NSTextLayoutManager * _textLayoutManager;
    NSArray * _textLineFragments;
}

@property (getter=_isRenderingAttributesValidated) bool _renderingAttributesValidated;
@property (readonly) <NSTextLocation> *baseLocation;
@property (readonly) double bottomMargin;
@property (getter=isCountableDataSource, readonly) bool countableDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } destinationBoundingRect;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } destinationGlyphRange;
@property NSLayoutManager *destinationLayoutManager;
@property (retain) NSTextStorage *destinationTextStorage;
@property double destinationVerticalDelta;
@property (readonly) unsigned long long hash;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutFragmentFrame;
@property (retain) NSOperationQueue *layoutQueue;
@property (readonly) double leadingPadding;
@property (readonly) NSTextRange *rangeInElement;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderingSurfaceBounds;
@property bool rendersTextCorrectionMarkers;
@property unsigned long long state;
@property (readonly) Class superclass;
@property (retain) _NSTextAttachmentLayoutContext *textAttachmentLayoutContext;
@property (readonly, copy) NSArray *textAttachmentViewProviders;
@property (readonly) NSTextElement *textElement;
@property (readonly) NSTextLayoutManager *textLayoutManager;
@property (copy) NSArray *textLineFragments;
@property (readonly) NSTextParagraph *textParagraph;
@property (readonly) double topMargin;
@property (readonly) double trailingPadding;

+ (id)_validCoreTextRenderingAttributes;
+ (id)layoutFragmentQueue;
+ (bool)supportsSecureCoding;

- (long long)_baseWritingDirection;
- (id)_coreTextAttributes;
- (bool)_isRenderingAttributesValidated;
- (void)_layout;
- (id)_layoutInfoForTextAttachmentAtLocation:(id)arg1;
- (id)_resolvedRenderingAttributesForCharacterIndex:(long long)arg1 effectiveRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)_setup;
- (void)_setupResolvedTextAttachmentFrames;
- (id)_textAttributesAffectingLayout;
- (void)addRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;
- (unsigned long long)animationType;
- (id)baseLocation;
- (double)bottomMargin;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })destinationBoundingRect;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })destinationGlyphRange;
- (id)destinationLayoutManager;
- (id)destinationTextStorage;
- (double)destinationVerticalDelta;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 contentType:(unsigned long long)arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateRenderingAttributesFromLocation:(id)arg1 reverse:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)estimateSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTextAttachmentAtLocation:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)initWithTextElement:(id)arg1 range:(id)arg2;
- (void)invalidateLayout;
- (void)invalidateRenderingAttributesForTextRange:(id)arg1;
- (bool)isCountableDataSource;
- (void)layout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFragmentFrame;
- (struct CGPoint { double x1; double x2; })layoutFragmentFrameOrigin;
- (id)layoutManager;
- (void)layoutManagerDidSetTemporaryAttributes:(id)arg1 forTextRange:(id)arg2;
- (struct CGPoint { double x1; double x2; })layoutPoint;
- (id)layoutQueue;
- (struct CGSize { double x1; double x2; })layoutSize;
- (double)leadingPadding;
- (id)locationFromLocation:(id)arg1 withOffset:(long long)arg2;
- (long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)rangeInElement;
- (void)removeRenderingAttribute:(id)arg1 forTextRange:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderingSurfaceBounds;
- (bool)rendersTextCorrectionMarkers;
- (id)representedRange;
- (id)representedRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDestinationBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDestinationGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDestinationLayoutManager:(id)arg1;
- (void)setDestinationTextStorage:(id)arg1;
- (void)setDestinationVerticalDelta:(double)arg1;
- (void)setLayoutFragmentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutFragmentFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutQueue:(id)arg1;
- (void)setRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;
- (void)setRenderingAttributes:(id)arg1 forTextRange:(id)arg2;
- (void)setRendersTextCorrectionMarkers:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTextAttachmentLayoutContext:(id)arg1;
- (void)setTextAttachmentProvider:(id)arg1 forLocation:(id)arg2;
- (void)setTextElement:(id)arg1;
- (void)setTextLayoutManager:(id)arg1;
- (void)setTextLineFragments:(id)arg1;
- (void)set_renderingAttributesValidated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceBoundingRect;
- (unsigned long long)state;
- (bool)supportsSubelements;
- (id)textAttachmentLayoutContext;
- (id)textAttachmentViewProviderForLocation:(id)arg1;
- (id)textAttachmentViewProviders;
- (id)textElement;
- (id)textLayoutManager;
- (id)textLineFragments;
- (id)textParagraph;
- (double)topMargin;
- (double)trailingPadding;
- (double)verticalOffsetOfTextLocation:(id)arg1 withAffinity:(long long)arg2;

@end
