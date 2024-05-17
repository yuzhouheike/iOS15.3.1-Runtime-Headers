/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISlotView : UIView {
    unsigned long long  _currentGeneration;
    UISSlotStyle * _currentSlotStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    NSString * _localization;
    id /* block */  _slotAnyContentProvider;
    <UISSlotAnyContent> * _slotContent;
    id /* block */  _slotStyleResolver;
}

@property (setter=_setSlotAnyContentProvider:, nonatomic, copy) id /* block */ _slotAnyContentProvider;
@property (setter=_setSlotStyleResolver:, nonatomic, copy) id /* block */ _slotStyleResolver;

- (void).cxx_destruct;
- (void)_overlayView:(id)arg1;
- (void)_setSlotAnyContentProvider:(id /* block */)arg1;
- (void)_setSlotStyleResolver:(id /* block */)arg1;
- (id /* block */)_slotAnyContentProvider;
- (void)_slotStyleDidChange:(id)arg1;
- (id /* block */)_slotStyleResolver;
- (void)_updateContent;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
