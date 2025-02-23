/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequestExtension : PBCodable <NSCopying> {
    struct { 
        unsigned int has_needServerLatency : 1; 
        unsigned int has_useLiveTrafficAsFallback : 1; 
    }  _flags;
    bool  _needServerLatency;
    GEOTFTrafficSnapshot * _trafficSnapshot;
    bool  _useLiveTrafficAsFallback;
}

@property (nonatomic) bool hasNeedServerLatency;
@property (nonatomic, readonly) bool hasTrafficSnapshot;
@property (nonatomic) bool hasUseLiveTrafficAsFallback;
@property (nonatomic) bool needServerLatency;
@property (nonatomic, retain) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) bool useLiveTrafficAsFallback;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNeedServerLatency;
- (bool)hasTrafficSnapshot;
- (bool)hasUseLiveTrafficAsFallback;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)needServerLatency;
- (bool)readFrom:(id)arg1;
- (void)setHasNeedServerLatency:(bool)arg1;
- (void)setHasUseLiveTrafficAsFallback:(bool)arg1;
- (void)setNeedServerLatency:(bool)arg1;
- (void)setTrafficSnapshot:(id)arg1;
- (void)setUseLiveTrafficAsFallback:(bool)arg1;
- (id)trafficSnapshot;
- (bool)useLiveTrafficAsFallback;
- (void)writeTo:(id)arg1;

@end
