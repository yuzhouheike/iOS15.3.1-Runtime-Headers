/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPhotoGalleryTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    <MKPhotoGalleryTransitionAnimator> * _delegate;
    UIView * _transitionView;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPhotoGalleryTransitionAnimator> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *transitionView;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (id)initWithView:(id)arg1 transitionView:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTransitionView:(id)arg1;
- (void)setView:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)transitionView;
- (id)view;

@end
