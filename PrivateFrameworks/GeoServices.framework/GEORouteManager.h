/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteManager : NSObject {
    GEOApplicationAuditToken * _auditToken;
    <GEORouteManagerDelegate> * _delegate;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic) <GEORouteManagerDelegate> *delegate;

+ (void)setShouldRequestServerLatencyInfo:(bool)arg1;

- (void).cxx_destruct;
- (id)auditToken;
- (id)delegate;
- (void)didReceiveRoutes:(id)arg1;
- (void)fetchDirectionsForTicket:(id)arg1 networkActivity:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)handleResponse:(id)arg1 fromRequest:(id)arg2 forTicket:(id)arg3;
- (id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2;
- (void)setAuditToken:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
