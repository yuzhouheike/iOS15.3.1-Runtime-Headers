/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacePhotoView : UIScrollView <UIScrollViewDelegate> {
    UIImageView * _imageView;
    bool  _isZoomed;
    bool  _needsFullImageDownload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isZoomed;
@property (nonatomic) bool needsFullImageDownload;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (bool)isZoomed;
- (bool)needsFullImageDownload;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsZoomed:(bool)arg1;
- (void)setNeedsFullImageDownload:(bool)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)zoomWithGestureRecognizer:(id)arg1;

@end
