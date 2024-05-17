/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBusynessPoiLookupTileMetaData : PBCodable <NSCopying> {
    struct { 
        unsigned int has_tileId : 1; 
        unsigned int has_poiCount : 1; 
    }  _flags;
    unsigned int  _poiCount;
    unsigned long long  _tileId;
    NSString * _version;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
