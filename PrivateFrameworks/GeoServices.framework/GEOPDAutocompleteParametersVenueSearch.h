/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    NSMutableArray * _categorys;
    struct { 
        unsigned int has_buildingId : 1; 
        unsigned int has_levelId : 1; 
        unsigned int has_sectionId : 1; 
        unsigned int has_venueId : 1; 
        unsigned int has_maxResults : 1; 
        unsigned int has_highlightDiff : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_categorys : 1; 
        unsigned int read_query : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _highlightDiff;
    unsigned long long  _levelId;
    int  _maxResults;
    NSString * _query;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _sectionId;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueId;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) unsigned long long buildingId;
@property (nonatomic, retain) NSMutableArray *categorys;
@property (nonatomic) bool hasBuildingId;
@property (nonatomic) bool hasHighlightDiff;
@property (nonatomic) bool hasLevelId;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasSectionId;
@property (nonatomic) bool hasVenueId;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool highlightDiff;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) int maxResults;
@property (nonatomic, retain) NSString *query;
@property (nonatomic) unsigned long long sectionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (Class)categoryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (unsigned long long)buildingId;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (id)categorys;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildingId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHighlightDiff;
- (bool)hasLevelId;
- (bool)hasMaxResults;
- (bool)hasQuery;
- (bool)hasSectionId;
- (bool)hasVenueId;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)highlightDiff;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)levelId;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sectionId;
- (void)setBuildingId:(unsigned long long)arg1;
- (void)setCategorys:(id)arg1;
- (void)setHasBuildingId:(bool)arg1;
- (void)setHasHighlightDiff:(bool)arg1;
- (void)setHasLevelId:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSectionId:(bool)arg1;
- (void)setHasVenueId:(bool)arg1;
- (void)setHighlightDiff:(bool)arg1;
- (void)setLevelId:(unsigned long long)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setSectionId:(unsigned long long)arg1;
- (void)setVenueId:(unsigned long long)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (unsigned long long)venueId;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
