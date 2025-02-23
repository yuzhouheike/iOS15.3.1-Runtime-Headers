/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintPresetsOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSMutableArray * _presetNames;
    NSArray * _presets;
    NSIndexPath * _selectedIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *presetNames;
@property (nonatomic, retain) NSArray *presets;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)itemList;
- (void)listItemSelected:(id)arg1;
- (id)presetNames;
- (id)presets;
- (id)printOptionTableViewCell;
- (id)selectedIndexPath;
- (id)selectedItem;
- (void)setCurrentPrinter:(id)arg1;
- (void)setPresetNames:(id)arg1;
- (void)setPresets:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (id)supportedPresets;
- (void)updatePrinterInfo;

@end
