/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSMappingModelBuilder : NSObject {
    NSEntityMapping * _currentEntityMapping;
    NSManagedObjectModel * _destinationModel;
    NSError * _error;
    NSManagedObjectModel * _sourceModel;
}

+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;

- (void)dealloc;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;

@end
