/* Generated by RuntimeBrowser.
 */

@protocol UITextRangeAdjustmentInteractionDelegate <NSObject>

@required

- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (<UICoordinateSpace> *)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 didBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 didEndAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textRangeAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 selectionMoved:(struct CGPoint { double x1; double x2; })arg2 withTouchPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)textRangeAdjustmentInteractionWasCancelled:(UITextRangeAdjustmentInteraction *)arg1;

@end
