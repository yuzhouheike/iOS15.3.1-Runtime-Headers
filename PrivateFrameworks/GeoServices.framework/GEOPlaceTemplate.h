/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceTemplate : NSObject {
    NSMapTable * _attributionMap;
    bool  _hasRichData;
    GEOPDTemplateData * _templateData;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) GEOPlaceLineTemplate *footerLine;
@property (nonatomic, readonly) bool hasRichData;
@property (nonatomic, readonly) <GEOMapItemPhoto> *heroImage;
@property (nonatomic, readonly) GEOMapItemIdentifier *mapItemIdentifier;
@property (nonatomic, readonly) NSString *placeName;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) GEOPlaceLineTemplate *subtitleLine;
@property (nonatomic, readonly) bool supportsAreaHighlight;

- (void).cxx_destruct;
- (id)footerLine;
- (bool)hasRichData;
- (id)heroImage;
- (id)initWithIdentifier:(id)arg1 supportsAreaHighlight:(bool)arg2;
- (id)initWithPlaceTemplate:(id)arg1 attributionMap:(id)arg2;
- (id)mapItemIdentifier;
- (id)placeName;
- (id)styleAttributes;
- (id)subtitleLine;
- (bool)supportsAreaHighlight;

@end
