/* Generated by RuntimeBrowser.
 */

@protocol SHSheetMainPresenterDelegate <NSObject>

@required

- (void)mainPresenter:(id <SHSheetMainPresenterInterface>)arg1 didCompleteActivity:(UIActivity *)arg2 withSuccess:(bool)arg3 returnedItems:(NSArray *)arg4 error:(NSError *)arg5;
- (void)mainPresenter:(id <SHSheetMainPresenterInterface>)arg1 willCompleteActivity:(UIActivity *)arg2 withSuccess:(bool)arg3;
- (void)mainPresenterIsReadyToInteract:(id <SHSheetMainPresenterInterface>)arg1;

@end
