/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardPopoverController : UIViewController <UIKeyboardLayoutStarDelegate> {
    UIKBViewForResponderForwarding * _containerForActiveKeys;
    NSMutableArray * _hiddenKeys;
    NSString * _inputMode;
    UIKBTree * _keyboard;
    UIKeyboardLayoutStar * _layout;
    UIKBScreenTraits * _screenTraits;
    UIKeyboardTaskQueue * _taskQueue;
    UITextInputTraits * _textInputTraits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inputModeIdentifier;
@property (nonatomic, readonly) UIKeyboardLayoutStar *layout;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (bool)handleHardwareKeyboardEvent:(id)arg1;
- (id)initWithInputModeIdentifier:(id)arg1 textInputTraits:(id)arg2 taskQueue:(id)arg3;
- (id)inputModeIdentifier;
- (id)keyboardLayout:(id)arg1 containingViewForActiveKey:(id)arg2 inKeyplaneView:(id)arg3;
- (void)keyboardLayout:(id)arg1 didSwitchToKeyplane:(id)arg2;
- (id)keyboardLayout:(id)arg1 willChangeRenderConfig:(id)arg2;
- (id)layout;
- (long long)overrideUserInterfaceStyle;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (double)preferredTextFieldHeight;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
