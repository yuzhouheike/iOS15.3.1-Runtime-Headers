/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOComposedETARouteStep : NSObject <NSSecureCoding> {
    double  _length;
    unsigned long long  _stepID;
    GEOTimeCheckpoints * _timeCheckpoints;
    double  _travelDuration;
}

@property (nonatomic) double length;
@property (nonatomic) unsigned long long stepID;
@property (nonatomic, retain) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic) double travelDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithPrecision:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)length;
- (void)setLength:(double)arg1;
- (void)setStepID:(unsigned long long)arg1;
- (void)setTimeCheckpoints:(id)arg1;
- (void)setTravelDuration:(double)arg1;
- (unsigned long long)stepID;
- (id)timeCheckpoints;
- (double)travelDuration;

@end
