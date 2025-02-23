/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCameraSession : NSObject <UIAdaptivePresentationControllerDelegate, UIDimmingViewDelegate, UIKeyboardCameraViewControllerDelegate, UITextInputSessionActionAnalyticsDelegateSource, UIViewControllerTransitioningDelegate> {
    <UIViewControllerAnimatedTransitioning> * _animationController;
    bool  _didCleanup;
    bool  _didFindText;
    id /* block */  _dismissedHandler;
    bool  _isSecureFieldEditor;
    bool  _isSingleLineDocument;
    bool  _isTextInputResponder;
    bool  _isWebKitResponder;
    NSString * _keyboardCameraCandidateString;
    UIKeyboardCameraViewController * _keyboardCameraViewController;
    UIKeyboardCameraBasePresentationController * _presentationController;
    bool  _presentingOverKeyboard;
    UIResponder<UIKeyInput> * _responder;
    bool  _respondsToKeyboardInputShouldInsertText;
    id  _sender;
    UITextInputSessionActionAnalytics * _sessionAnalytics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIResponder<UIKeyInput> *responder;
@property (readonly) UITextInputSessionActionAnalytics *sessionAnalytics;
@property (readonly) Class superclass;

+ (id)_textContentTypesForDataDetection;
+ (bool)isEnabled;
+ (id)keyboardCameraContentTypeForResponder:(id)arg1;
+ (bool)shouldShowTextSuggestionForResponder:(id)arg1;
+ (id)showForResponder:(id)arg1 sender:(id)arg2;

- (void).cxx_destruct;
- (void)_addObservers;
- (void)_cleanupKeyboardCameraAndShouldInsertText:(bool)arg1;
- (id)_delegateAsResponder;
- (void)_didEnterBackground:(id)arg1;
- (void)_dismissKeyboardCamera;
- (void)_firstResponderDidChange:(id)arg1;
- (void)_inputModeDidChange:(id)arg1;
- (void)_keyboardAboutToHide:(id)arg1;
- (void)_keyboardCameraPreparationDidComplete;
- (long long)_overrideTextInputSource;
- (void)_show;
- (id)_textInputResponder;
- (void)_updatePreviewWithString:(id)arg1;
- (id)_webKitResponder;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (void)dimmingViewWasTapped:(id)arg1;
- (id /* block */)dismissedHandler;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)responder;
- (id)sessionAnalytics;
- (void)setDismissedHandler:(id /* block */)arg1;

@end
