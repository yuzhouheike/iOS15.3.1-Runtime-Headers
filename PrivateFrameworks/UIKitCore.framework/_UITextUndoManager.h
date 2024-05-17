/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextUndoManager : NSUndoManager {
    UITextInputController * _inputController;
}

@property (nonatomic) UITextInputController *inputController;

- (void).cxx_destruct;
- (bool)canRedo;
- (bool)canUndo;
- (id)inputController;
- (void)redo;
- (void)removeAllActions;
- (void)setInputController:(id)arg1;
- (void)undo;

@end
