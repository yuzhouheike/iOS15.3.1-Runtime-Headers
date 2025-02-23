/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODirectionsRequesterServerRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy> {
    geo_isolater * _isolater;
    NSMutableArray * _pendingRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_finishRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (id)init;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 useBackgroundURL:(bool)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;

@end
