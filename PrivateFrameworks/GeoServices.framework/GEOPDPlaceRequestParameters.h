/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {
    GEOPDAddressObjectGeocodingParameters * _addressObjectGeocodingParameters;
    GEOPDAirportEntityPlaceLookupParameters * _airportEntityPlaceLookupParameters;
    GEOPDAllCollectionsViewParameters * _allCollectionsViewParameters;
    GEOPDAllGuidesLocationsViewParameters * _allGuidesLocationsViewParameters;
    GEOPDAutocompleteParameters * _autocompleteParameters;
    GEOPDBatchCategoryLookupParameters * _batchCategoryLookupParameters;
    GEOPDBatchMerchantLookupBrandParameters * _batchMerchantLookupBrandParameters;
    GEOPDBatchPopularNearbySearchParameters * _batchPopularNearbySearchParameters;
    GEOPDBatchReverseGeocodingParameters * _batchReverseGeocodingParameters;
    GEOPDBatchSpatialLookupParameters * _batchSpatialLookupParameters;
    GEOPDBrandLookupParameters * _brandLookupParameters;
    GEOPDSearchBrowseCategorySuggestionParameters * _browseCategorySuggestionParameters;
    GEOPDCanonicalLocationSearchParameters * _canonicalLocationSearchParameters;
    GEOPDCategorySearchParameters * _categorySearchParameters;
    GEOPDChildPlaceLookupByCategoryParameters * _childPlaceLookupByCategoryParameters;
    GEOPDCollectionSuggestionParameters * _collectionSuggestionParameters;
    GEOPDExtendedGeoLookupParameters * _extendedGeoLookupParameters;
    GEOPDExternalTransitLookupParameters * _externalTransitLookupParameters;
    GEOPDFeatureIdGeocodingParameters * _featureIdGeocodingParameters;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressObjectGeocodingParameters : 1; 
        unsigned int read_airportEntityPlaceLookupParameters : 1; 
        unsigned int read_allCollectionsViewParameters : 1; 
        unsigned int read_allGuidesLocationsViewParameters : 1; 
        unsigned int read_autocompleteParameters : 1; 
        unsigned int read_batchCategoryLookupParameters : 1; 
        unsigned int read_batchMerchantLookupBrandParameters : 1; 
        unsigned int read_batchPopularNearbySearchParameters : 1; 
        unsigned int read_batchReverseGeocodingParameters : 1; 
        unsigned int read_batchSpatialLookupParameters : 1; 
        unsigned int read_brandLookupParameters : 1; 
        unsigned int read_browseCategorySuggestionParameters : 1; 
        unsigned int read_canonicalLocationSearchParameters : 1; 
        unsigned int read_categorySearchParameters : 1; 
        unsigned int read_childPlaceLookupByCategoryParameters : 1; 
        unsigned int read_collectionSuggestionParameters : 1; 
        unsigned int read_extendedGeoLookupParameters : 1; 
        unsigned int read_externalTransitLookupParameters : 1; 
        unsigned int read_featureIdGeocodingParameters : 1; 
        unsigned int read_geocodingParameters : 1; 
        unsigned int read_groundViewLabelParameters : 1; 
        unsigned int read_guidesHomeParameters : 1; 
        unsigned int read_ipGeoLookupParameters : 1; 
        unsigned int read_locationDirectedSearchParameters : 1; 
        unsigned int read_mapsHomeParameters : 1; 
        unsigned int read_mapsIdentifierPlaceLookupParameters : 1; 
        unsigned int read_mapsSearchHomeParameters : 1; 
        unsigned int read_merchantLookupParameters : 1; 
        unsigned int read_nearbySearchParameters : 1; 
        unsigned int read_placeCollectionLookupParameter : 1; 
        unsigned int read_placeLookupParameters : 1; 
        unsigned int read_placeQuestionnaireLookupParameters : 1; 
        unsigned int read_placeRefinementParameters : 1; 
        unsigned int read_popularNearbySearchParameters : 1; 
        unsigned int read_publisherViewParameters : 1; 
        unsigned int read_reverseGeocodingParameters : 1; 
        unsigned int read_searchFieldPlaceholderParameters : 1; 
        unsigned int read_searchParameters : 1; 
        unsigned int read_searchZeroKeywordCategorySuggestionParameters : 1; 
        unsigned int read_searchZeroKeywordWithSearchResultsSuggestionParameters : 1; 
        unsigned int read_siriSearchParameters : 1; 
        unsigned int read_territoryLookupParameters : 1; 
        unsigned int read_transitNearbyScheduleLookupParameters : 1; 
        unsigned int read_transitScheduleLookupParameter : 1; 
        unsigned int read_transitVehiclePositionParameters : 1; 
        unsigned int read_vendorSpecificPlaceRefinementParameters : 1; 
        unsigned int read_wifiFingerprintParameters : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDGeocodingParameters * _geocodingParameters;
    GEOPDGroundViewLabelParameters * _groundViewLabelParameters;
    GEOPDGuidesHomeParameters * _guidesHomeParameters;
    GEOPDIpGeoLookupParameters * _ipGeoLookupParameters;
    GEOPDLocationDirectedSearchParameters * _locationDirectedSearchParameters;
    GEOPDMapsHomeParameters * _mapsHomeParameters;
    GEOPDMapsIdentifierPlaceLookupParameters * _mapsIdentifierPlaceLookupParameters;
    GEOPDMapsSearchHomeParameters * _mapsSearchHomeParameters;
    GEOPDMerchantLookupParameters * _merchantLookupParameters;
    GEOPDNearbySearchParameters * _nearbySearchParameters;
    GEOPDPlaceCollectionLookupParameters * _placeCollectionLookupParameter;
    GEOPDPlaceLookupParameters * _placeLookupParameters;
    GEOPDPlaceQuestionnaireLookupParameters * _placeQuestionnaireLookupParameters;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOPDPopularNearbySearchParameters * _popularNearbySearchParameters;
    GEOPDPublisherViewParameters * _publisherViewParameters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDReverseGeocodingParameters * _reverseGeocodingParameters;
    GEOPDSearchFieldPlaceholderParameters * _searchFieldPlaceholderParameters;
    GEOPDSearchParameters * _searchParameters;
    GEOPDSearchZeroKeywordCategorySuggestionParameters * _searchZeroKeywordCategorySuggestionParameters;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters * _searchZeroKeywordWithSearchResultsSuggestionParameters;
    GEOPDSiriSearchParameters * _siriSearchParameters;
    GEOPDTerritoryLookupParameters * _territoryLookupParameters;
    GEOPDTransitNearbyScheduleLookupParameters * _transitNearbyScheduleLookupParameters;
    GEOPBTransitScheduleLookupParameters * _transitScheduleLookupParameter;
    GEOPDTransitVehiclePositionParameters * _transitVehiclePositionParameters;
    PBUnknownFields * _unknownFields;
    GEOPDVendorSpecificPlaceRefinementParameters * _vendorSpecificPlaceRefinementParameters;
    GEOPDWifiFingerprintParameters * _wifiFingerprintParameters;
}

- (void).cxx_destruct;
- (void)clearLocations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAirportCode:(id)arg1 terminalCode:(id)arg2 gateCode:(id)arg3 traits:(id)arg4;
- (id)initWithBatchReverseGeocodeLocations:(id)arg1 additionalPlaceTypes:(int*)arg2 additionalPlaceTypesCount:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 brandFallbackSupported:(bool)arg31 isSettlement:(bool)arg32 isRefund:(bool)arg33 fuzzyMatched:(id)arg34 coarseLocationUsed:(id)arg35;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 preserveOriginalLocation:(bool)arg2;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 preserveOriginalLocation:(bool)arg2 floorOrdinal:(int)arg3;
- (id)initWithReverseGeocodeLocation:(id)arg1 preserveOriginalLocation:(bool)arg2 placeTypeLimit:(int)arg3;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 filters:(id)arg7 traits:(id)arg8 error:(id*)arg9;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
