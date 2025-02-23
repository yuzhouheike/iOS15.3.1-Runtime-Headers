/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _containedChildrenPois;
    struct { 
        unsigned int has_placecardType : 1; 
        unsigned int has_transitAdvisoryBanner : 1; 
        unsigned int read_containedChildrenPois : 1; 
        unsigned int read_possibleActions : 1; 
        unsigned int read_unactionableUiElements : 1; 
        unsigned int read_modules : 1; 
        unsigned int read_placeActionDetails : 1; 
        unsigned int read_placecardCategory : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _modules;
    GEOPlaceActionDetails * _placeActionDetails;
    NSString * _placecardCategory;
    int  _placecardType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _possibleActions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _transitAdvisoryBanner;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _unactionableUiElements;
}

@property (nonatomic, readonly) unsigned long long*containedChildrenPois;
@property (nonatomic, readonly) unsigned long long containedChildrenPoisCount;
@property (nonatomic, readonly) bool hasPlaceActionDetails;
@property (nonatomic, readonly) bool hasPlacecardCategory;
@property (nonatomic) bool hasPlacecardType;
@property (nonatomic) bool hasTransitAdvisoryBanner;
@property (nonatomic, retain) NSMutableArray *modules;
@property (nonatomic, retain) GEOPlaceActionDetails *placeActionDetails;
@property (nonatomic, retain) NSString *placecardCategory;
@property (nonatomic) int placecardType;
@property (nonatomic, readonly) int*possibleActions;
@property (nonatomic, readonly) unsigned long long possibleActionsCount;
@property (nonatomic) bool transitAdvisoryBanner;
@property (nonatomic, readonly) int*unactionableUiElements;
@property (nonatomic, readonly) unsigned long long unactionableUiElementsCount;

+ (bool)isValid:(id)arg1;
+ (Class)modulesType;

- (void).cxx_destruct;
- (int)StringAsPlacecardType:(id)arg1;
- (int)StringAsPossibleActions:(id)arg1;
- (int)StringAsUnactionableUiElements:(id)arg1;
- (void)addContainedChildrenPois:(unsigned long long)arg1;
- (void)addModules:(id)arg1;
- (void)addPossibleAction:(int)arg1;
- (void)addUnactionableUiElement:(int)arg1;
- (void)clearContainedChildrenPois;
- (void)clearModules;
- (void)clearPossibleActions;
- (void)clearUnactionableUiElements;
- (unsigned long long*)containedChildrenPois;
- (unsigned long long)containedChildrenPoisAtIndex:(unsigned long long)arg1;
- (unsigned long long)containedChildrenPoisCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceActionDetails;
- (bool)hasPlacecardCategory;
- (bool)hasPlacecardType;
- (bool)hasTransitAdvisoryBanner;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)modules;
- (id)modulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulesCount;
- (id)placeActionDetails;
- (id)placecardCategory;
- (int)placecardType;
- (id)placecardTypeAsString:(int)arg1;
- (int)possibleActionAtIndex:(unsigned long long)arg1;
- (int*)possibleActions;
- (id)possibleActionsAsString:(int)arg1;
- (unsigned long long)possibleActionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainedChildrenPois:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasPlacecardType:(bool)arg1;
- (void)setHasTransitAdvisoryBanner:(bool)arg1;
- (void)setModules:(id)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setPlacecardCategory:(id)arg1;
- (void)setPlacecardType:(int)arg1;
- (void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTransitAdvisoryBanner:(bool)arg1;
- (void)setUnactionableUiElements:(int*)arg1 count:(unsigned long long)arg2;
- (bool)transitAdvisoryBanner;
- (int)unactionableUiElementAtIndex:(unsigned long long)arg1;
- (int*)unactionableUiElements;
- (id)unactionableUiElementsAsString:(int)arg1;
- (unsigned long long)unactionableUiElementsCount;
- (void)writeTo:(id)arg1;

@end
