/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebFormAccessory : UIInputView {
    UIBarButtonItem * _autofill;
    UIBarButtonItem * _autofillSpacer;
    UIBarButtonItemGroup * _buttonGroupAutoFill;
    UIBarButtonItemGroup * _buttonGroupNavigation;
    UIBarButtonItem * _clearButton;
    UIBarButtonItem * _doneButton;
    UIBarButtonItem * _flexibleSpaceItem;
    UIToolbar * _leftToolbar;
    UIBarButtonItem * _nextItem;
    UIBarButtonItem * _nextPreviousSpacer;
    UIBarButtonItem * _previousItem;
    UIToolbar * _rightToolbar;
    UISegmentedControl * _tab;
    bool  _usesUCB;
    <UIWebFormAccessoryDelegate> * delegate;
}

@property (nonatomic, retain) UIBarButtonItem *_autofill;
@property (nonatomic, retain) UIBarButtonItem *_clearButton;
@property (nonatomic, retain) UISegmentedControl *_tab;
@property (nonatomic) <UIWebFormAccessoryDelegate> *delegate;
@property (getter=isNextEnabled, nonatomic) bool nextEnabled;
@property (getter=isPreviousEnabled, nonatomic) bool previousEnabled;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)toolbarWithItems:(id)arg1;

- (void).cxx_destruct;
- (void)_applyTreatmentToAutoFillLabel;
- (id)_autoFillButton;
- (id)_autofill;
- (id)_clearButton;
- (void)_nextTapped:(id)arg1;
- (void)_orientationDidChange:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_refreshAutofillPresentation;
- (void)_setRenderConfig:(id)arg1;
- (id)_tab;
- (void)_updateFrame;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (void)autoFill:(id)arg1;
- (void)clear:(id)arg1;
- (id)delegate;
- (void)done:(id)arg1;
- (void)hideAutoFillButton;
- (void)initForUCB:(id)arg1;
- (id)initWithInputAssistantItem:(id)arg1;
- (bool)isNextEnabled;
- (bool)isPreviousEnabled;
- (void)layoutSubviews;
- (void)setClearVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextEnabled:(bool)arg1;
- (void)setNextPreviousItemsVisible:(bool)arg1;
- (void)setPreviousEnabled:(bool)arg1;
- (void)set_autofill:(id)arg1;
- (void)set_clearButton:(id)arg1;
- (void)set_tab:(id)arg1;
- (void)showAutoFillButton;
- (void)showAutoFillButtonWithTitle:(id)arg1;

@end
