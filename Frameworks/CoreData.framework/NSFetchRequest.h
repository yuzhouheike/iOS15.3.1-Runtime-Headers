/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding, NSCopying, NSSecureCoding> {
    id * _additionalPrivateIvars;
    unsigned long long  _allocationSize;
    unsigned long long  _batchSize;
    NSEntityDescription * _entity;
    unsigned long long  _fetchLimit;
    struct _fetchRequestFlags { 
        unsigned int distinctValuesOnly : 1; 
        unsigned int includesSubentities : 1; 
        unsigned int includesPropertyValues : 1; 
        unsigned int resultType : 3; 
        unsigned int returnsObjectsAsFaults : 1; 
        unsigned int excludePendingChanges : 1; 
        unsigned int isInUse : 1; 
        unsigned int entityIsName : 1; 
        unsigned int refreshesRefetched : 1; 
        unsigned int propertiesValidated : 1; 
        unsigned int expressionsValidated : 1; 
        unsigned int disableCaching : 1; 
        unsigned int allocationType : 3; 
        unsigned int batchLRUEntries : 4; 
        unsigned int asyncRequest : 1; 
        unsigned int purgeable : 1; 
        unsigned int _RESERVED : 9; 
    }  _flags;
    NSArray * _groupByProperties;
    NSPredicate * _havingPredicate;
    NSPredicate * _predicate;
    NSArray * _relationshipKeyPathsForPrefetching;
    NSArray * _sortDescriptors;
    NSArray * _valuesToFetch;
}

@property (nonatomic, retain) NSArray *affectedStores;
@property (nonatomic, retain) NSEntityDescription *entity;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) unsigned long long fetchOffset;
@property (nonatomic, retain) NSPredicate *havingPredicate;
@property (nonatomic) bool includesPendingChanges;
@property (nonatomic) bool includesPropertyValues;
@property (nonatomic) bool includesSubentities;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, copy) NSArray *propertiesToFetch;
@property (nonatomic, copy) NSArray *propertiesToGroupBy;
@property (nonatomic) bool purgeableResult;
@property (nonatomic, copy) NSArray *relationshipKeyPathsForPrefetching;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) bool returnsDistinctResults;
@property (nonatomic) bool returnsObjectsAsFaults;
@property (nonatomic) bool shouldRefreshRefetchedObjects;
@property (nonatomic, retain) NSArray *sortDescriptors;

+ (id)_newDenormalizedFetchProperties:(id)arg1;
+ (id)_stringForFetchRequestResultType:(unsigned long long)arg1;
+ (bool)accessInstanceVariablesDirectly;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 andPolicy:(id)arg3;
+ (id)fetchRequestWithEntityName:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_XPCEncodedFlags;
- (id)_asyncResultHandle;
- (id)_copyForDirtyContext;
- (bool)_disablePersistentStoreResultCaching;
- (unsigned long long)_encodedFetchRequestFlagsForFlags:(unsigned long long)arg1;
- (unsigned long long)_fetchBatchLRUEntriesLimit;
- (void)_incrementInUseCounter;
- (bool)_isAsyncRequest;
- (bool)_isCachingFetchRequest;
- (bool)_isEditable;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)_setAsyncResultHandle:(id)arg1;
- (void)_setDisablePersistentStoreResultCaching:(bool)arg1;
- (void)_setFetchBatchLRUEntriesLimit:(unsigned long long)arg1;
- (void)_setFlagsFromXPCEncoding:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (id)affectedStores;
- (unsigned long long)allocationSize;
- (unsigned long long)allocationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)encodeForXPC;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)entityName;
- (id)execute:(id*)arg1;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (unsigned long long)hash;
- (id)havingPredicate;
- (bool)includesPendingChanges;
- (bool)includesPropertyValues;
- (bool)includesSubentities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)propertiesToFetch;
- (id)propertiesToGroupBy;
- (bool)purgeableResult;
- (id)relationshipKeyPathsForPrefetching;
- (unsigned long long)requestType;
- (unsigned long long)resultType;
- (bool)returnsDistinctResults;
- (bool)returnsObjectsAsFaults;
- (void)setAffectedStores:(id)arg1;
- (void)setAllocationSize:(unsigned long long)arg1;
- (void)setAllocationType:(unsigned long long)arg1;
- (void)setEntity:(id)arg1;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFetchOffset:(unsigned long long)arg1;
- (void)setHavingPredicate:(id)arg1;
- (void)setIncludesPendingChanges:(bool)arg1;
- (void)setIncludesPropertyValues:(bool)arg1;
- (void)setIncludesSubentities:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPropertiesToFetch:(id)arg1;
- (void)setPropertiesToGroupBy:(id)arg1;
- (void)setPurgeableResult:(bool)arg1;
- (void)setRelationshipKeyPathsForPrefetching:(id)arg1;
- (void)setResultType:(unsigned long long)arg1;
- (void)setReturnsDistinctResults:(bool)arg1;
- (void)setReturnsObjectsAsFaults:(bool)arg1;
- (void)setShouldRefreshRefetchedObjects:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (bool)shouldRefreshRefetchedObjects;
- (id)sortDescriptors;

@end
