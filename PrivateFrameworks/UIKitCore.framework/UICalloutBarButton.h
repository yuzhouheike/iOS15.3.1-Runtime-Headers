/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICalloutBarButton : UIButton {
    bool  forceFlash;
    SEL  m_action;
    double  m_additionalContentHeight;
    NSDate * m_appearanceDate;
    double  m_contentScale;
    double  m_contentWidth;
    double  m_dividerOffset;
    bool  m_dontDismiss;
    double  m_imageVerticalAdjust;
    bool  m_isText;
    bool  m_padLeft;
    bool  m_padRight;
    long long  m_page;
    int  m_position;
    _UISlotView * m_securePasteButtonSlotView;
    bool  m_single;
    UITextReplacement * m_textReplacement;
    int  m_type;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) double additionalContentHeight;
@property (nonatomic, readonly) double contentScale;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic) double dividerOffset;
@property (nonatomic) bool dontDismiss;
@property (nonatomic) bool forceFlash;
@property (nonatomic) double imageVerticalAdjust;
@property (nonatomic, readonly) bool isSecurePasteButton;
@property (nonatomic) long long page;
@property (nonatomic, retain) UITextReplacement *textReplacement;
@property (nonatomic, readonly) int type;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4 inView:(id)arg5;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6;
+ (id)symbolConfigurationForScale:(double)arg1;

- (void).cxx_destruct;
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2;
- (double)_scaleFactorForImage;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (SEL)action;
- (double)additionalContentHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustRectForPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)cancelFlash;
- (void)configureForLeftPosition:(int)arg1;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition:(int)arg1;
- (void)configureForSingle:(int)arg1;
- (void)configureForVerticalPosition:(int)arg1;
- (void)configureSecurePasteButtonWithWidth:(double)arg1 height:(double)arg2;
- (double)contentScale;
- (double)contentWidth;
- (double)dividerOffset;
- (bool)dontDismiss;
- (void)fadeAndSendActionWithAuthenticationMessage:(id)arg1;
- (void)flash:(id)arg1 forEvent:(id)arg2;
- (bool)forceFlash;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)imageVerticalAdjust;
- (bool)isSecurePasteButton;
- (long long)page;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)removeFromSuperview;
- (void)setContentScale:(double)arg1;
- (void)setDividerOffset:(double)arg1;
- (void)setDontDismiss:(bool)arg1;
- (void)setForceFlash:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageVerticalAdjust:(double)arg1;
- (void)setPage:(long long)arg1;
- (void)setTextReplacement:(id)arg1;
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4;
- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5;
- (id)textReplacement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)touchDown;
- (int)type;

@end
