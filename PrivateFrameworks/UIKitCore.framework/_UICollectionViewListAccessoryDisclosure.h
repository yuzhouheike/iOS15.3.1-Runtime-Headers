/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewListAccessoryDisclosure : UIControl {
    UIColor * _accessoryTintColor;
    <UITableConstants> * _constants;
    UIImageView * _imageView;
    bool  _rotated;
    double  _rotationAngle;
}

@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, retain) <UITableConstants> *constants;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool rotated;
@property (nonatomic) double rotationAngle;

- (void).cxx_destruct;
- (unsigned long long)_controlEventsForActionTriggered;
- (double)_enforcedWidthForWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_minimumSizeForHitTesting;
- (void)_updateRotation;
- (id)accessoryTintColor;
- (void)addActionHandler:(id /* block */)arg1;
- (id)constants;
- (id)image;
- (id)initWithConstants:(id)arg1;
- (void)layoutSubviews;
- (bool)rotated;
- (double)rotationAngle;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConstants:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setRotated:(bool)arg1;
- (void)setRotationAngle:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
