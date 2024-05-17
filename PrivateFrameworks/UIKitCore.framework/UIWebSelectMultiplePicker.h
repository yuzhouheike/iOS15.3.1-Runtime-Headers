/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebSelectMultiplePicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate, UIWebFormControl> {
    NSArray * _cachedItems;
    double  _fontSize;
    double  _layoutWidth;
    double  _maximumTextWidth;
    DOMHTMLSelectElement * _selectionNode;
    unsigned long long  _singleSelectionIndex;
    <UIWebSelectedItemPrivate> * _singleSelectionItem;
    long long  _textAlignment;
}

@property (nonatomic, retain) NSArray *_cachedItems;
@property (nonatomic, retain) DOMHTMLSelectElement *_selectionNode;
@property (nonatomic, retain) <UIWebSelectedItemPrivate> *_singleSelectionItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_cachedItems;
- (int)_itemIndexForRowIndex:(int)arg1;
- (id)_selectionNode;
- (id)_singleSelectionItem;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(bool)arg5;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(bool)arg4;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)set_cachedItems:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (void)set_singleSelectionItem:(id)arg1;

@end
