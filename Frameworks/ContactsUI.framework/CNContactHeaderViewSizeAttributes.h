/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderViewSizeAttributes : NSObject {
    double  __maxHeight;
    double  __minHeight;
    double  _maxNavbarTitleOffset;
    double  _minNavbarTitleOffset;
    double  _photoMaxBottomMargin;
    double  _photoMaxHeight;
    double  _photoMaxTopMargin;
    double  _photoMinBottomMargin;
    double  _photoMinHeight;
    double  _photoMinTopMargin;
}

@property (nonatomic) double _maxHeight;
@property (nonatomic) double _minHeight;
@property (nonatomic) double maxNavbarTitleOffset;
@property (nonatomic) double minNavbarTitleOffset;
@property (nonatomic) double photoMaxBottomMargin;
@property (nonatomic) double photoMaxHeight;
@property (nonatomic) double photoMaxTopMargin;
@property (nonatomic) double photoMinBottomMargin;
@property (nonatomic) double photoMinHeight;
@property (nonatomic) double photoMinTopMargin;

+ (id)defaultAttributes;
+ (id)displayAttributes;
+ (id)displayAttributesWithNavBar;
+ (id)editingAttributes;
+ (id)editingAttributesWithNavBar;

- (double)_maxHeight;
- (double)_minHeight;
- (id)init;
- (double)maxHeight;
- (double)maxNavbarTitleOffset;
- (double)minHeight;
- (double)minNavbarTitleOffset;
- (double)navbarTitleOffsetWithPercentMax:(double)arg1;
- (double)photoBottomMarginWithPercentMax:(double)arg1;
- (double)photoHeightWithPercentMax:(double)arg1;
- (double)photoMaxBottomMargin;
- (double)photoMaxHeight;
- (double)photoMaxTopMargin;
- (double)photoMinBottomMargin;
- (double)photoMinHeight;
- (double)photoMinTopMargin;
- (double)photoTopMarginWithPercentMax:(double)arg1;
- (void)setMaxNavbarTitleOffset:(double)arg1;
- (void)setMinNavbarTitleOffset:(double)arg1;
- (void)setPhotoMaxBottomMargin:(double)arg1;
- (void)setPhotoMaxHeight:(double)arg1;
- (void)setPhotoMaxTopMargin:(double)arg1;
- (void)setPhotoMinBottomMargin:(double)arg1;
- (void)setPhotoMinHeight:(double)arg1;
- (void)setPhotoMinTopMargin:(double)arg1;
- (void)set_maxHeight:(double)arg1;
- (void)set_minHeight:(double)arg1;
- (double)valueBetweenMin:(double)arg1 max:(double)arg2 percentMax:(double)arg3;

@end
