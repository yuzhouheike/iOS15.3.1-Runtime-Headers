/* Generated by RuntimeBrowser.
 */

@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional

- (void)cleanMuninContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (MKMuninContainerView *)muninContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectPhotoToReport:(id <GEOMapItemPhoto>)arg2 withPhotoGalleryViewController:(MKPlacePhotoGalleryViewController *)arg3;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2 presentingViewController:(UIViewController *)arg3;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 enterMuninForMapItem:(MKMapItem *)arg2 muninView:(MKMuninView *)arg3;
- (void)placeCardPhotosController:(_MKPlaceViewController *)arg1 photoGalleryDidScroll:(MKPlacePhotoGalleryViewController *)arg2;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 requestsSceneActivationForPhotoGalleryViewController:(MKPlacePhotoGalleryViewController *)arg2;
- (void)placeCardPhotosControllerDidCloseFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidOpenFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (bool)shouldMoveMuninStorefrontViewForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (bool)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;

@end
