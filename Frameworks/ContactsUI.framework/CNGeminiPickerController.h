/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNGeminiPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray * _geminiChannels;
    CNGeminiChannel * _preferredGeminiChannel;
    NSIndexPath * _selectedIndexPath;
    UITableViewController * _tableViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPickerControllerDelegate><UINavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *geminiChannels;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNGeminiChannel *preferredGeminiChannel;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (void)cancelPicker:(id)arg1;
- (void)didPickItem;
- (void)donePicker:(id)arg1;
- (id)geminiChannelForIndexPath:(id)arg1;
- (id)geminiChannels;
- (id)indexPathForGeminiChannel:(id)arg1;
- (id)initWithGeminiResult:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)preferredGeminiChannel;
- (void)prepareCell:(id)arg1 atIndexPath:(id)arg2;
- (id)selectedIndexPath;
- (void)setGeminiChannels:(id)arg1;
- (void)setGeminiResult:(id)arg1;
- (void)setGeminiResult:(id)arg1 reload:(bool)arg2;
- (void)setPreferredGeminiChannel:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableViewController;
- (void)viewWillAppear:(bool)arg1;

@end
