/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceDirectionsRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    NSError * _error;
    GEODirectionsRequest * _request;
    double  _requestTimestamp;
    GEODirectionsResponse * _response;
    double  _responseTimestamp;
    unsigned long long  _selectedRouteIndex;
    NSArray * _waypoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double position;
@property (nonatomic, retain) GEODirectionsRequest *request;
@property (nonatomic) double requestTimestamp;
@property (nonatomic, retain) GEODirectionsResponse *response;
@property (nonatomic) double responseTimestamp;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *waypoints;

- (void).cxx_destruct;
- (id)error;
- (double)position;
- (id)request;
- (double)requestTimestamp;
- (id)response;
- (double)responseTimestamp;
- (unsigned long long)selectedRouteIndex;
- (void)setError:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestTimestamp:(double)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseTimestamp:(double)arg1;
- (void)setSelectedRouteIndex:(unsigned long long)arg1;
- (void)setWaypoints:(id)arg1;
- (id)waypoints;

@end
