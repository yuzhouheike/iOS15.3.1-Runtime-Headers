/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLGeocoder : NSObject {
    CLGeocoderInternal * _internal;
}

@property (setter=_setResponseSilo:) CLSilo *_responseSilo;
@property (getter=isGeocoding, nonatomic, readonly) bool geocoding;

+ (id)_timeZoneAtLocation:(id)arg1;
+ (void)hydrateGeoMapItemLocallyFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;

- (void)_ensureMainThreadExecutionContextForBlock:(id /* block */)arg1;
- (void)_notifyCancel;
- (void)_notifyError:(id)arg1;
- (void)_notifyNoResult;
- (void)_notifyPartialResult:(id)arg1;
- (void)_notifyResult:(id)arg1;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (id)_responseSilo;
- (void)_setResponseSilo:(id)arg1;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2;
- (void)cancelGeocode;
- (void)dealloc;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)geocodeAddressDictionary:(id)arg1 preferredLocale:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)geocodeAddressString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 preferredLocale:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)geocodePostalAddress:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)geocodePostalAddress:(id)arg1 preferredLocale:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (bool)isGeocoding;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 heading:(double)arg3 localResultsOnly:(bool)arg4 completionHandler:(id /* block */)arg5;

@end
