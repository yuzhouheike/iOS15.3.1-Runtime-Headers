/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAttribution : NSObject {
    NSArray * _attributionURLs;
    GEOSearchAttributionInfo * _info;
    NSString * _poiID;
    NSString * _yelpID;
}

@property (nonatomic, readonly) NSString *appAdamID;
@property (nonatomic, readonly) NSArray *attributionApps;
@property (nonatomic, readonly) NSArray *attributionURLs;
@property (nonatomic, readonly) NSString *captionDisplayName;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) bool requiresAttributionInCallout;
@property (nonatomic, readonly) bool shouldOpenInAppStore;
@property (nonatomic, readonly) NSString *webBaseActionURL;

+ (id)attributionWithDataAttribution:(id)arg1 searchInfo:(id)arg2 class:(Class)arg3;

- (void).cxx_destruct;
- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(bool)arg3;
- (id)appAdamID;
- (id)attributionApps;
- (id)attributionURLs;
- (id)captionDisplayName;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)providerID;
- (id)providerLogoPathForScale:(double)arg1;
- (id)providerName;
- (id)providerSnippetLogoPathForScale:(double)arg1;
- (bool)requiresAttributionInCallout;
- (bool)shouldOpenInAppStore;
- (id)webBaseActionURL;

@end
