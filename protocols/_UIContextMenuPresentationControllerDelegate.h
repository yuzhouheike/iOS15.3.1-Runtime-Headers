/* Generated by RuntimeBrowser.
 */

@protocol _UIContextMenuPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@required

- (NSArray *)_accessoryViewsForContextMenuPresentationController:(_UIContextMenuPresentationController *)arg1;
- (void)_contextMenuPresentationController:(_UIContextMenuPresentationController *)arg1 beginDragWithTouch:(UITouch *)arg2;
- (void)_contextMenuPresentationController:(_UIContextMenuPresentationController *)arg1 didSelectMenuLeaf:(id <_UIMenuLeaf>)arg2;
- (UIMenu *)_contextMenuPresentationController:(_UIContextMenuPresentationController *)arg1 willDisplayMenu:(UIMenu *)arg2;
- (void)_contextMenuPresentationControllerDidBeginPanInteraction:(_UIContextMenuPresentationController *)arg1 allowSwipeToDismiss:(bool*)arg2;
- (void)_contextMenuPresentationControllerDidEndPanInteraction:(_UIContextMenuPresentationController *)arg1;
- (void)_contextMenuPresentationControllerDidTapPreview:(_UIContextMenuPresentationController *)arg1;
- (bool)_contextMenuPresentationControllerShouldHandlePreviewAction:(_UIContextMenuPresentationController *)arg1;
- (void)_contextMenuPresentationControllerWantsToBeDismissed:(void *)arg1 withReason:(void *)arg2 alongsideActions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: _UIContextMenuPresentationController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (UIView *)actualPlatterContainerViewForPresentationController:(_UIContextMenuPresentationController *)arg1;

@end
