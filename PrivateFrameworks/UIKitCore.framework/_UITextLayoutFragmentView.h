/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextLayoutFragmentView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clipRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _containerOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    NSTextLayoutFragment * _layoutFragment;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clipFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clipRect;
@property (nonatomic) struct CGPoint { double x1; double x2; } containerOrigin;
@property (nonatomic) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic, readonly) NSTextLayoutFragment *layoutFragment;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutSize;

- (void).cxx_destruct;
- (void)_updateGeometry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (struct CGPoint { double x1; double x2; })containerOrigin;
- (struct CGSize { double x1; double x2; })containerSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)enumerateTextAttachmentViewsUsingBlock:(id /* block */)arg1;
- (id)initWithLayoutFragment:(id)arg1 containerOrigin:(struct CGPoint { double x1; double x2; })arg2 containerSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layoutFragment;
- (struct CGSize { double x1; double x2; })layoutSize;
- (void)layoutSubviews;
- (void)setClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainerOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;

@end
