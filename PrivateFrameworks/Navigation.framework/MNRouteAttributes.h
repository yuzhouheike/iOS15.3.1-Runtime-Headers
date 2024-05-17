/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteAttributes : GEORouteAttributes <NSCopying, NSSecureCoding, VGVirtualGarageObserver> {
    bool  _forceUpdate;
    VGVirtualGarage * _garage;
    bool  _hasOpenedVirtualGarageConnection;
    bool  _hasResolvedRules;
    bool  _hasResolvedVehicle;
    NSArray * _latLngs;
    NSError * _lprError;
    NSArray * _lprRules;
    VGVehicle * _vehicle;
    geo_isolater * _vehicleIsolator;
    NSError * _vgError;
}

@property (nonatomic) bool hasResolvedRules;
@property (nonatomic) bool hasResolvedVehicle;

+ (void)_loadLPRRulesForWaypoints:(id)arg1 forceUpdate:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_loadRulesIfNecessary:(id)arg1 result:(id /* block */)arg2;
- (void)_populateRouteAttributes:(id)arg1 result:(id /* block */)arg2;
- (void)_resolveSelectedVehicle:(id)arg1 completion:(id /* block */)arg2;
- (void)buildRouteAttributes:(id)arg1 result:(id /* block */)arg2;
- (void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasResolvedRules;
- (bool)hasResolvedVehicle;
- (id)init;
- (id)initWithAttributes:(id)arg1 latLngs:(id)arg2;
- (id)initWithAttributes:(id)arg1 waypoints:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setHasResolvedRules:(bool)arg1;
- (void)setHasResolvedVehicle:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id)vehicle;
- (void)virtualGarageDidUpdate:(id)arg1;

@end
