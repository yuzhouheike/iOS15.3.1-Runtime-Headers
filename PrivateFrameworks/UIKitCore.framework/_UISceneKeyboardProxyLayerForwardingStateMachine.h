/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject <_UIScenePresentationViewObserver, _UIWindowLevelObserver> {
    FBSScene * _hostingScene;
    UIWindow * _hostingWindow;
    FBSSceneIdentityToken * _identityToken;
    NSSet * _keyboardLayersAddedToHostingScene;
    NSSet * _keyboardLayersTracked;
    _UIScenePresenter * _prioritizedPresenter;
    FBScene * _scene;
    unsigned long long  _state;
    id  _windowDidMoveToSceneNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLayers:(id)arg1 toScene:(id)arg2;
- (id)_newProxyLayers;
- (void)_noteHostedInWindow:(id)arg1;
- (void)_removeLayers:(id)arg1 fromScene:(id)arg2;
- (void)_setState:(unsigned long long)arg1;
- (unsigned long long)_state;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithScene:(id)arg1;
- (void)noteKeyboardLayersBeingTracked:(id)arg1;
- (void)notePriorizedPresenter:(id)arg1;
- (void)presentationView:(id)arg1 didMoveToWindow:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)window:(id)arg1 changedFromLevel:(double)arg2 toLevel:(double)arg3;

@end
