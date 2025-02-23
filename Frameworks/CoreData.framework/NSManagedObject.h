/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObject : NSObject <NSFetchRequestResult> {
    unsigned int  _cd_extraFlags;
    struct { void *x1; id x2; id x3; id x4; id x5; } * _cd_extras;
    unsigned int  _cd_lockingInfo;
    NSManagedObjectContext * _cd_managedObjectContext;
    NSManagedObjectID * _cd_objectID;
    id  _cd_queueReference;
    id  _cd_rawData;
    int  _cd_rc;
    unsigned int  _cd_stateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (getter=isFault, nonatomic, readonly) bool fault;
@property (nonatomic, readonly) unsigned long long faultingState;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) bool hasPersistentChangedValues;
@property (readonly) unsigned long long hash;
@property (getter=isInserted, nonatomic, readonly) bool inserted;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (readonly) Class superclass;
@property (getter=isUpdated, nonatomic, readonly) bool updated;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (struct { int x1; void *x2; id x3; unsigned long long x4; unsigned char x5; unsigned long long x6; void *x7; unsigned char x8[32]; char *x9; struct _moFactoryClassFlags { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; unsigned int x_10_1_6 : 1; unsigned int x_10_1_7 : 1; unsigned int x_10_1_8 : 25; } x10; }*)_PFMOClassFactoryData;
+ (id)_PFPlaceHolderSingleton;
+ (id)_PFPlaceHolderSingleton_core;
+ (bool)_classShouldAlwaysRegisterSelectorNamed:(const char *)arg1;
+ (void)_entityDeallocated;
+ (bool)_hasOverriddenAwake;
+ (void)_initializeAccessorStubs;
+ (void)_initializePrimitiveAccessorStubs;
+ (bool)_isGeneratedClass;
+ (bool)_isGeneratedClass_1;
+ (void)_release_1;
+ (id)_retain_1;
+ (char *)_transientPropertiesChangesMask__;
+ (bool)_useFastValidationMethod;
+ (id)alloc;
+ (unsigned int)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)allocWithEntity:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (id)alloc_10_4;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;
+ (Class)classForEntity:(id)arg1;
+ (bool)contextShouldIgnoreUnmodeledPropertyChanges;
+ (id)entity;
+ (id)entityName;
+ (id)fetchRequest;
+ (void)initialize;
+ (bool)resolveClassMethod:(SEL)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;

- (bool)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (id)_implicitObservationInfo;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (bool)_isDeallocating;
- (id)_orderKeysForRelationshipWithName__:(id)arg1;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4;
- (void)_setVersionReference__:(unsigned int)arg1;
- (bool)_tryRetain;
- (bool)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3;
- (unsigned int)_versionReference__;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (id)bindableObjectPublisher;
- (id)changedValues;
- (id)changedValuesForCurrentEvent;
- (id)committedValuesForKeys:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryWithPropertyValues;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didAccessValueForKey:(id)arg1;
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)didFireFault;
- (void)didRefresh:(bool)arg1;
- (void)didSave;
- (void)didTurnIntoFault;
- (id)entity;
- (unsigned long long)faultingState;
- (bool)hasChanges;
- (bool)hasFaultForRelationshipNamed:(id)arg1;
- (bool)hasPersistentChangedValues;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isFault;
- (bool)isInserted;
- (bool)isUpdated;
- (id)managedObjectContext;
- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)objectID;
- (id)objectIDsForRelationshipNamed:(id)arg1;
- (void*)observationInfo;
- (void)prepareForDeletion;
- (id)primitiveValueForKey:(id)arg1;
- (oneway void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setBindableObjectPublisher:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (bool)validateForDelete:(id*)arg1;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (bool)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)willFireFault;
- (void)willRefresh:(bool)arg1;
- (void)willSave;
- (void)willTurnIntoFault;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_obsoleteAttributes;
- (id)_removeObsoleteKeysFromDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithObject:(id)arg1;
- (bool)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2;

@end
