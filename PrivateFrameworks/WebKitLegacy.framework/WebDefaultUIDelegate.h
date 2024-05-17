/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultUIDelegate : NSObject <WebUIDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedUIDelegate;

- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 userGesture:(bool)arg3;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3;
- (void)webView:(id)arg1 didDrawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForSession:(id)arg2;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)webView:(id)arg1 makeFirstResponder:(id)arg2;
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
- (void)webView:(id)arg1 setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 setResizable:(bool)arg2;
- (void)webView:(id)arg1 setStatusBarVisible:(bool)arg2;
- (void)webView:(id)arg1 setStatusText:(id)arg2;
- (void)webView:(id)arg1 setToolbarsVisible:(bool)arg2;
- (bool)webViewAreToolbarsVisible:(id)arg1;
- (void)webViewClose:(id)arg1;
- (id)webViewFirstResponder:(id)arg1;
- (void)webViewFocus:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })webViewFrame:(id)arg1;
- (bool)webViewIsResizable:(id)arg1;
- (bool)webViewIsStatusBarVisible:(id)arg1;
- (void)webViewShow:(id)arg1;
- (id)webViewStatusText:(id)arg1;
- (void)webViewSupportedOrientationsUpdated:(id)arg1;
- (void)webViewUnfocus:(id)arg1;

@end
