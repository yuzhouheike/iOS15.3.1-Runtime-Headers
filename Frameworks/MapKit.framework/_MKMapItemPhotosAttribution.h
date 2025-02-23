/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution {
    GEOMapItemPhotosAttribution * _geoPhotosAttribution;
    bool  _userSubmitted;
}

@property (nonatomic, readonly) NSArray *addPhotoURLs;
@property (nonatomic, readonly) bool shouldAddPhotosLocally;
@property (nonatomic, readonly) bool shouldHandlePhotosLocally;
@property (nonatomic, readonly) bool shouldSuppressPhotoAttribution;
@property (nonatomic, readonly) bool supportsReportingIssue;
@property (getter=isUserSubmitted, nonatomic, readonly) bool userSubmitted;

- (void).cxx_destruct;
- (id)addPhotoURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;
- (bool)isUserSubmitted;
- (bool)shouldAddPhotosLocally;
- (bool)shouldHandlePhotosLocally;
- (bool)shouldSuppressPhotoAttribution;
- (bool)supportsReportingIssue;
- (id)urlsForPhotoWithIdentifier:(id)arg1;

@end
