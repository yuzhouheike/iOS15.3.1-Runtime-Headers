/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextModernLoupeSession : NSObject {
    UITextGestureTuning * _gestureTuning;
    UIView * _interactionView;
    UITextModernLoupeView * _loupeView;
}

@property (nonatomic, retain) UITextGestureTuning *gestureTuning;
@property (nonatomic) UIView *interactionView;
@property (nonatomic, retain) UITextModernLoupeView *loupeView;

+ (id)beginLoupeSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromView:(id)arg3;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_locationInContainerCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didMoveToPoint:(struct CGPoint { double x1; double x2; })arg1 withCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 tracksCaret:(bool)arg3;
- (id)gestureTuning;
- (id)interactionView;
- (id)loupeView;
- (void)setGestureTuning:(id)arg1;
- (void)setInteractionView:(id)arg1;
- (void)setLoupeView:(id)arg1;

@end
