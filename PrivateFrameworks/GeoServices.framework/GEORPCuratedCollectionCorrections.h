/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCuratedCollectionCorrections : PBCodable <NSCopying> {
    int  _correctionType;
    struct { 
        unsigned int has_correctionType : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int correctionType;
@property (nonatomic) bool hasCorrectionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCorrectionType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionType;
- (id)correctionTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectionType:(int)arg1;
- (void)setHasCorrectionType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
