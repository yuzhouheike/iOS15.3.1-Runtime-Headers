/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerCalendarDayCell : UICollectionViewCell <UIPointerInteractionDelegate> {
    struct { 
        unsigned int overhangMonth : 1; 
        unsigned int outOfRange : 1; 
        unsigned int isToday : 1; 
    }  _flags;
    NSString * _fontDesign;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownSize;
    UIPointerInteraction * _pointerInteraction;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)emphasizedFontForTraitCollection:(id)arg1 fontDesign:(id)arg2;
+ (id)fontForTraitCollection:(id)arg1 fontDesign:(id)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)_wantsRoundedSquare;
- (id)configurationState;
- (void)configureWithDay:(id)arg1 formatter:(id)arg2 fontDesign:(id)arg3 outOfRange:(bool)arg4 renderOverhangDays:(bool)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)tintColorDidChange;
- (void)updateConfigurationUsingState:(id)arg1;

@end
