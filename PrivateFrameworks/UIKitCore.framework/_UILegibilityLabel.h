/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILegibilityLabel : _UILegibilityView {
    UIFont * _font;
    NSString * _string;
    bool  _usesSecondaryColor;
}

@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) bool usesSecondaryColor;

- (double)baselineOffset;
- (void)dealloc;
- (id)font;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (void)setFont:(id)arg1;
- (void)setString:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)string;
- (void)updateImage;
- (bool)usesSecondaryColor;

@end
