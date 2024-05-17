/* Generated by RuntimeBrowser.
 */

@protocol UIPrintOptionListDelegate <NSObject>

@required

- (NSArray *)itemList;
- (void)listItemSelected:(NSIndexPath *)arg1;
- (UIPrintPanelViewController *)printPanelViewController;
- (NSIndexPath *)selectedItem;
- (NSString *)title;

@optional

- (NSString *)titleForHeaderInSection:(long long)arg1;

@end
