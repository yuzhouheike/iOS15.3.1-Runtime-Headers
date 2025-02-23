/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintQualityView : UIView {
    UILabel * _bestLabel;
    UILabel * _draftLabel;
    UILabel * _normalLabel;
    UIPrintQualityOption * _qualityPrintOption;
    UIPrintSegmentedSlider * _qualitySlider;
}

@property (nonatomic, retain) UILabel *bestLabel;
@property (nonatomic, retain) UILabel *draftLabel;
@property (nonatomic, retain) UILabel *normalLabel;
@property (nonatomic, retain) UIPrintQualityOption *qualityPrintOption;
@property (nonatomic, retain) UIPrintSegmentedSlider *qualitySlider;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)bestLabel;
- (id)draftLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 qualityPrintOption:(id)arg2;
- (void)loadViews;
- (id)normalLabel;
- (void)qualityChanged:(id)arg1;
- (id)qualityPrintOption;
- (id)qualitySlider;
- (void)setBestLabel:(id)arg1;
- (void)setDraftLabel:(id)arg1;
- (void)setNormalLabel:(id)arg1;
- (void)setQualityPrintOption:(id)arg1;
- (void)setQualitySlider:(id)arg1;
- (void)updateQuality;

@end
