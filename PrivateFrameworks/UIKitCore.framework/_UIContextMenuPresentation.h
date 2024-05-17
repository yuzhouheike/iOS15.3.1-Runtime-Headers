/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuPresentation : _UIClickPresentation {
    _UIPlatterView * _destinationPlatterView;
    UIView * _dragAnimationPortalView;
    UIWindow * _dragAnimationWindow;
    UIView * _dragContainer;
    id /* block */  _postDismissCleanUp;
    id /* block */  _postDismissItemUpdate;
    UIView * _presentationContainer;
    bool  _suppressInputViewDuringPresentation;
}

@property (nonatomic, retain) _UIPlatterView *destinationPlatterView;
@property (nonatomic, retain) UIView *dragAnimationPortalView;
@property (nonatomic, retain) UIWindow *dragAnimationWindow;
@property (nonatomic, retain) UIView *dragContainer;
@property (nonatomic, copy) id /* block */ postDismissCleanUp;
@property (nonatomic, copy) id /* block */ postDismissItemUpdate;
@property (nonatomic, readonly) UIView *presentationContainer;
@property (nonatomic) bool suppressInputViewDuringPresentation;

- (void).cxx_destruct;
- (id)destinationPlatterView;
- (id)dragAnimationPortalView;
- (id)dragAnimationWindow;
- (id)dragContainer;
- (id /* block */)postDismissCleanUp;
- (id /* block */)postDismissItemUpdate;
- (id)presentationContainer;
- (void)setDestinationPlatterView:(id)arg1;
- (void)setDragAnimationPortalView:(id)arg1;
- (void)setDragAnimationWindow:(id)arg1;
- (void)setDragContainer:(id)arg1;
- (void)setPostDismissCleanUp:(id /* block */)arg1;
- (void)setPostDismissItemUpdate:(id /* block */)arg1;
- (void)setSuppressInputViewDuringPresentation:(bool)arg1;
- (bool)suppressInputViewDuringPresentation;

@end
