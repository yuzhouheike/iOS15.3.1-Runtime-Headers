/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <GEOMapServiceTicket> {
    NSArray * _browseCategories;
    GEOCategorySearchResultSection * _categorySearchResultSection;
    bool  _chainResultSet;
    GEOResolvedItem * _clientResolvedResult;
    NSArray * _collectionResults;
    GEORelatedSearchSuggestion * _defaultRelatedSuggestion;
    GEODirectionIntent * _directionIntent;
    bool  _disableAdditionalViewportPadding;
    NSArray * _displayHeaderSubstitutes;
    NSArray * _dotPlaces;
    unsigned int  _dymSuggestionVisibleTime;
    GEOPDMerchantLookupResult * _merchantLookupResult;
    GEOPDPlaceSummaryLayoutMetadata * _placeSummaryLayoutMetadata;
    NSArray * _publisherResults;
    NSArray * _relatedEntitySections;
    NSArray * _relatedSearchSuggestions;
    GEOMapRegion * _resultBoundingRegion;
    NSString * _resultDisplayHeader;
    GEOResultRefinementGroup * _resultRefinementGroup;
    NSString * _resultSectionHeader;
    NSArray * _retainedSearchMetadata;
    GEOSearchAutoRedoThreshold * _searchAutoRedoThreshold;
    NSArray * _searchResultSections;
    int  _searchResultType;
    GEOSearchSectionList * _searchSectionList;
    bool  _shouldEnableRedoSearch;
    bool  _showDymSuggestionCloseButton;
}

@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic) unsigned long long cachePolicy;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) GEOCategorySearchResultSection *categorySearchResultSection;
@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (nonatomic, readonly) NSArray *collectionResults;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) bool disableAdditionalViewportPadding;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) NSArray *dotPlaces;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOPDMerchantLookupResult *merchantLookupResult;
@property (nonatomic, readonly) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (nonatomic, readonly) NSArray *publisherResults;
@property (nonatomic, readonly) NSArray *relatedEntitySections;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) GEOResultRefinementGroup *resultRefinementGroup;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) NSArray *retainedSearchMetadata;
@property (nonatomic, readonly) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property (nonatomic, readonly) NSArray *searchResultSections;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) GEOSearchSectionList *searchSectionList;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) bool showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (id)browseCategories;
- (id)categorySearchResultSection;
- (id)clientResolvedResult;
- (id)collectionResults;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)defaultRelatedSuggestion;
- (id)directionIntent;
- (bool)disableAdditionalViewportPadding;
- (id)displayHeaderSubstitutes;
- (id)dotPlaces;
- (unsigned int)dymSuggestionVisibleTime;
- (bool)isChainResultSet;
- (id)merchantLookupResult;
- (id)placeSummaryLayoutMetadata;
- (id)publisherResults;
- (id)relatedEntitySections;
- (id)relatedSearchSuggestions;
- (id)resultBoundingRegion;
- (id)resultDisplayHeader;
- (id)resultRefinementGroup;
- (id)resultSectionHeader;
- (id)retainedSearchMetadata;
- (id)searchAutoRedoThreshold;
- (id)searchResultSections;
- (int)searchResultType;
- (id)searchSectionList;
- (bool)shouldEnableRedoSearch;
- (bool)showDymSuggestionCloseButton;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4 queue:(id)arg5;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4 queue:(id)arg5;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;

@end
