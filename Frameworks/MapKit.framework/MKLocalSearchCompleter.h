/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchCompleter : NSObject {
    <MKAutocompleteAnalyticsProvider> * _analyticsProvider;
    GEOAutocompleteSessionData * _autocompleteSessionData;
    bool  _autocompleteTopSectionIsQuerySuggestions;
    GEOSearchCategory * _categoryFilter;
    GEOClientRankingModel * _clientRankingModel;
    id  _context;
    <MKLocalSearchCompleterDelegate> * _delegate;
    CLLocation * _deviceLocation;
    bool  _dirty;
    long long  _filterType;
    NSArray * _filters;
    long long  _highlightType;
    NSString * _identifier;
    NSMutableArray * _inFlightTickets;
    double  _lastRequestTime;
    long long  _listType;
    unsigned long long  _mapType;
    unsigned long long  _maxNumberOfConcurrentRequests;
    NSMutableArray * _pendingTickets;
    GEOPDPlaceSummaryLayoutMetadata * _placeSummaryLayoutMetadata;
    MKPointOfInterestFilter * _pointOfInterestFilter;
    long long  _privateFilterType;
    NSString * _queryFragment;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
    unsigned long long  _resultTypes;
    NSArray * _results;
    bool  _resultsAreCurrent;
    GEORetainedSearchMetadata * _retainedSearchMetadata;
    NSArray * _sections;
    bool  _shouldDisplayNoResults;
    bool  _shouldEnableGrayscaleHighlighting;
    bool  _shouldEnableRAPForNoResults;
    bool  _shouldPreloadTransitInfo;
    bool  _shouldUseDistanceFeatureServerResults;
    bool  _showAutocompleteClientSource;
    <MKLocationManagerOperation> * _singleLocationUpdate;
    GEOSortPriorityMapping * _sortPriorityMapping;
    int  _source;
    bool  _statefulQueriesEnabled;
    MKLocalSearchCompletion * _tappedQuerySuggestionCompletion;
    double  _timeSinceLastInBoundingRegion;
    NSTimer * _timer;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic, retain) <MKAutocompleteAnalyticsProvider> *analyticsProvider;
@property (getter=_autocompleteTopSectionIsQuerySuggestions, nonatomic, readonly) bool autocompleteTopSectionIsQuerySuggestions;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRegion;
@property (nonatomic, retain) GEOSearchCategory *categoryFilter;
@property (getter=_clientRankingModel, nonatomic, readonly) GEOClientRankingModel *clientRankingModel;
@property (nonatomic) id context;
@property (nonatomic) <MKLocalSearchCompleterDelegate> *delegate;
@property (nonatomic, retain) CLLocation *deviceLocation;
@property (nonatomic) long long entriesType;
@property (nonatomic) long long filterType;
@property (nonatomic, copy) NSString *fragment;
@property (getter=_highlightType, nonatomic, readonly) long long highlightType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long listType;
@property (nonatomic) unsigned long long mapType;
@property (getter=_placeSummaryLayoutMetadata, nonatomic, readonly) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (getter=_privateFilterType, setter=_setPrivateFilterType:, nonatomic) long long privateFilterType;
@property (nonatomic, copy) NSString *queryFragment;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic) unsigned long long resultTypes;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, retain) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (getter=isSearching, nonatomic, readonly) bool searching;
@property (getter=_sections, nonatomic, readonly) NSArray *sections;
@property (getter=_shouldDisplayNoResults, nonatomic, readonly) bool shouldDisplayNoResults;
@property (getter=_shouldEnableGrayscaleHighlighting, nonatomic, readonly) bool shouldEnableGrayscaleHighlighting;
@property (getter=_shouldEnableRAPForNoResults, nonatomic, readonly) bool shouldEnableRAPForNoResults;
@property (getter=_shouldPreloadTransitInfo, setter=_setShouldPreloadTransitInfo:, nonatomic) bool shouldPreloadTransitInfo;
@property (getter=_shouldUseDistanceFeatureServerResults, nonatomic, readonly) bool shouldUseDistanceFeatureServerResults;
@property (getter=_showAutocompleteClientSource, nonatomic, readonly) bool showAutocompleteClientSource;
@property (getter=_sortPriorityMapping, nonatomic, readonly) GEOSortPriorityMapping *sortPriorityMapping;
@property (nonatomic) bool statefulQueriesEnabled;
@property (getter=_tappedQuerySuggestionCompletion, setter=_setTappedQuerySuggestionCompletion:, nonatomic, retain) MKLocalSearchCompletion *tappedQuerySuggestionCompletion;
@property (nonatomic) double timeSinceLastInBoundingRegion;
@property (nonatomic, retain) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (bool)_autocompleteTopSectionIsQuerySuggestions;
- (void)_cancelTimer;
- (id)_clientRankingModel;
- (id)_completionTicketForFilterTypeWithTraits:(id)arg1;
- (id)_completionTicketForPrivateFilterType:(long long)arg1 traits:(id)arg2;
- (void)_fireRequest;
- (void)_handleCompletion:(id)arg1 shouldDisplayNoResults:(bool)arg2 shouldEnableRAPForNoResults:(bool)arg3 forTicket:(id)arg4;
- (void)_handleError:(id)arg1 forTicket:(id)arg2;
- (long long)_highlightType;
- (void)_markDirty;
- (void)_markDirtyAndScheduleRequestWithTimeToNextRequest:(double)arg1;
- (void)_notifyDelegatesWithResults:(id)arg1 sections:(id)arg2 shouldDisplayNoResults:(bool)arg3 shouldEnableRAPForNoResults:(bool)arg4 ticket:(id)arg5;
- (id)_placeSummaryLayoutMetadata;
- (long long)_privateFilterType;
- (void)_schedulePendingRequest;
- (void)_scheduleRequestWithTimeToNextRequest:(double)arg1;
- (id)_sections;
- (void)_setPrivateFilterType:(long long)arg1;
- (void)_setShouldPreloadTransitInfo:(bool)arg1;
- (void)_setTappedQuerySuggestionCompletion:(id)arg1;
- (bool)_shouldDisplayNoResults;
- (bool)_shouldEnableGrayscaleHighlighting;
- (bool)_shouldEnableRAPForNoResults;
- (bool)_shouldPreloadTransitInfo;
- (bool)_shouldUseDistanceFeatureServerResults;
- (bool)_showAutocompleteClientSource;
- (id)_sortPriorityMapping;
- (id)_tappedQuerySuggestionCompletion;
- (void)_updateFilters;
- (id)analyticsProvider;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRegion;
- (void)cancel;
- (id)categoryFilter;
- (void)clearQueryState;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)deviceLocation;
- (long long)entriesType;
- (long long)filterType;
- (id)fragment;
- (id)identifier;
- (id)init;
- (bool)isSearching;
- (long long)listType;
- (unsigned long long)mapType;
- (id)pointOfInterestFilter;
- (id)queryFragment;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (unsigned long long)resultTypes;
- (id)results;
- (bool)resultsAreCurrent;
- (id)retainedSearchMetadata;
- (void)retry;
- (void)setAnalyticsProvider:(id)arg1;
- (void)setBoundingRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCategoryFilter:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setEntriesType:(long long)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFragment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setListType:(long long)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setPointOfInterestFilter:(id)arg1;
- (void)setQueryFragment:(id)arg1;
- (void)setRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResultTypes:(unsigned long long)arg1;
- (void)setRetainedSearchMetadata:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setStatefulQueriesEnabled:(bool)arg1;
- (void)setTimeSinceLastInBoundingRegion:(double)arg1;
- (void)setTraits:(id)arg1;
- (int)source;
- (bool)statefulQueriesEnabled;
- (double)timeSinceLastInBoundingRegion;
- (double)timeToNextRequest;
- (id)traits;

@end
