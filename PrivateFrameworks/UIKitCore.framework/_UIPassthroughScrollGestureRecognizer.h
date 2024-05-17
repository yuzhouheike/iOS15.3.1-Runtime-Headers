/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {
    bool  _endForPrimaryButtonDown;
    bool  _endForSecondaryButtonDown;
    unsigned long long  _endReason;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool endForPrimaryButtonDown;
@property (nonatomic) bool endForSecondaryButtonDown;
@property (nonatomic, readonly) unsigned long long endReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_supportsTouchContinuation;

- (void)_endWithReason:(unsigned long long)arg1;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (id)_window;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)endForPrimaryButtonDown;
- (bool)endForSecondaryButtonDown;
- (unsigned long long)endReason;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setEndForPrimaryButtonDown:(bool)arg1;
- (void)setEndForSecondaryButtonDown:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
