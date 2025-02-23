/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintMediaTypeOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSMutableArray * _mediaTypeNames;
    NSArray * _mediaTypes;
    NSIndexPath * _selectedIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *mediaTypeNames;
@property (nonatomic, retain) NSArray *mediaTypes;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didSelectPrintOption;
- (id)getMediaTypesList;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)itemList;
- (void)listItemSelected:(id)arg1;
- (id)mediaTypeNames;
- (id)mediaTypes;
- (id)printOptionTableViewCell;
- (id)selectedIndexPath;
- (id)selectedItem;
- (id)selectedMediaTypeName;
- (void)setCurrentPrinter:(id)arg1;
- (void)setMediaTypeNames:(id)arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (id)shortSummary;
- (bool)shouldShow;
- (id)summary;
- (void)updatePrinterInfo;

@end
