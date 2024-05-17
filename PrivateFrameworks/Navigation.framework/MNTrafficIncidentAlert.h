/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding> {
    NSDate * _alertDate;
    double  _alertDisplayDuration;
    NSData * _alertID;
    unsigned long long  _alertType;
    struct { 
        unsigned int index; 
        float offset; 
    }  _alternateEndValidCoordinateRange;
    MNActiveRouteInfo * _alternateRouteInfo;
    NSString * _bannerDescription;
    NSString * _bannerID;
    NSArray * _buttonActionTitles;
    double  _distanceToIncident;
    struct { 
        unsigned int index; 
        float offset; 
    }  _endValidCoordinateRange;
    NSData * _etaResponseID;
    GEOTrafficBannerText * _geoTrafficBannerText;
    struct { 
        unsigned int index; 
        float offset; 
    }  _incidentCoordinate;
    bool  _isAutomaticReroute;
    MNActiveRouteInfo * _mainRouteInfo;
    bool  _shouldShowTimer;
    struct { 
        unsigned int index; 
        float offset; 
    }  _startValidCoordinateRange;
}

@property (nonatomic, readonly) NSDate *alertDate;
@property (nonatomic, readonly) NSArray *alertDescriptions;
@property (nonatomic, readonly) double alertDisplayDuration;
@property (nonatomic, readonly) NSData *alertID;
@property (nonatomic, readonly) NSArray *alertTitles;
@property (nonatomic, readonly) unsigned long long alertType;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } alternateEndValidCoordinateRange;
@property (nonatomic, readonly) GEOComposedRoute *alternateRoute;
@property (nonatomic, readonly) MNActiveRouteInfo *alternateRouteInfo;
@property (nonatomic, readonly) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) NSString *bannerDescription;
@property (nonatomic, readonly) NSString *bannerID;
@property (nonatomic) double distanceToIncident;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } endValidCoordinateRange;
@property (nonatomic, readonly) NSData *etaResponseID;
@property (nonatomic, readonly) GEORouteIncident *incident;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } incidentCoordinate;
@property (nonatomic, readonly) bool isAutomaticReroute;
@property (nonatomic, readonly) bool isReroute;
@property (nonatomic, readonly) MNActiveRouteInfo *mainRouteInfo;
@property (nonatomic, readonly) double newEstimatedTime;
@property (nonatomic, readonly) double oldEstimatedTime;
@property (nonatomic, readonly) double oldHistoricTime;
@property (nonatomic, readonly) NSMutableArray *oldRouteIncidents;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) GEONavigabilityInfo *originalRouteNavigability;
@property (nonatomic, readonly) int previousBannerChange;
@property (nonatomic, readonly) unsigned long long secondsSaved;
@property (nonatomic, readonly) bool shouldShowTimer;
@property (nonatomic, readonly) NSArray *spokenTexts;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } startValidCoordinateRange;

+ (bool)supportsSecureCoding;
+ (id)validTrafficIncidentAlertForMainRouteInfo:(id)arg1 alternateRouteInfo:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_alertTypeForGeoBannerStyle:(int)arg1;
- (int)_buttonDisplayForAlertAction:(unsigned long long)arg1;
- (id)_buttonTitleForAlertAction:(unsigned long long)arg1;
- (id)_dynamicStringValues;
- (void)_initRouteCoordinates;
- (id)_initWithGeoTrafficBannerText:(id)arg1 mainRouteInfo:(id)arg2 alternateRouteInfo:(id)arg3;
- (void)_populateButtonActionAndTitles:(id)arg1;
- (void)_populateServerFields:(id)arg1;
- (struct { unsigned int x1; float x2; })_routeCoordinateOnRoute:(id)arg1 distanceFromEnd:(double)arg2;
- (id)_stringForAlertType:(unsigned long long)arg1;
- (int)acceptButtonDisplay;
- (id)acceptButtonTitle;
- (id)alertDate;
- (id)alertDescriptions;
- (double)alertDisplayDuration;
- (id)alertID;
- (id)alertTitles;
- (unsigned long long)alertType;
- (struct { unsigned int x1; float x2; })alternateEndValidCoordinateRange;
- (id)alternateRoute;
- (id)alternateRouteInfo;
- (id)artwork;
- (id)bannerDescription;
- (id)bannerID;
- (id)buttonActionTitles;
- (id)description;
- (int)dismissButtonDisplay;
- (id)dismissButtonTitle;
- (double)distanceToIncident;
- (void)encodeWithCoder:(id)arg1;
- (struct { unsigned int x1; float x2; })endValidCoordinateRange;
- (id)etaResponseID;
- (id)incident;
- (struct { unsigned int x1; float x2; })incidentCoordinate;
- (id)initWithCoder:(id)arg1;
- (bool)isAutomaticReroute;
- (bool)isReroute;
- (id)mainRouteInfo;
- (double)newEstimatedTime;
- (double)oldEstimatedTime;
- (double)oldHistoricTime;
- (id)oldRouteIncidents;
- (id)originalRoute;
- (id)originalRouteNavigability;
- (int)previousBannerChange;
- (unsigned long long)secondsSaved;
- (void)setDistanceToIncident:(double)arg1;
- (bool)shouldShowTimer;
- (id)spokenTexts;
- (struct { unsigned int x1; float x2; })startValidCoordinateRange;
- (void)updateAlertIDWithAlert:(id)arg1;
- (void)updateLocation:(id)arg1;

@end
