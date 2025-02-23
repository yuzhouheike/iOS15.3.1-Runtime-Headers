/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSHashTable : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding>

@property (readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly) id anyObject;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property (readonly, copy) NSSet *setRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)hashTableWithOptions:(unsigned long long)arg1;
+ (id)hashTableWithWeakObjects;
+ (bool)supportsSecureCoding;
+ (id)weakObjectsHashTable;

- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (Class)classForCoder;
- (bool)containsObject:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void*)getItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned long long*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)intersectHashTable:(id)arg1;
- (bool)intersectsHashTable:(id)arg1;
- (bool)isEqualToHashTable:(id)arg1;
- (bool)isSubsetOfHashTable:(id)arg1;
- (id)member:(id)arg1;
- (void)minusHashTable:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableSet;
- (id)objectEnumerator;
- (id)pointerFunctions;
- (void)removeAllItems;
- (void)removeAllObjects;
- (void)removeItem:(const void*)arg1;
- (void)removeObject:(id)arg1;
- (id)setRepresentation;
- (void)unionHashTable:(id)arg1;
- (unsigned long long)weakCount;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_removeObjects:(id)arg1;

@end
