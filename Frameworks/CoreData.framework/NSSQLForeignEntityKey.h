/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLForeignEntityKey : NSSQLColumn {
    NSNumber * _columnValue;
    NSSQLForeignKey * _foreignKey;
    NSString * _name;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)foreignKey;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)name;
- (id)toOneRelationship;

@end
