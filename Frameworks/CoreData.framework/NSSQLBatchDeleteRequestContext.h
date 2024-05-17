/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {
    NSArray * _deleteStatements;
    NSArray * _deletedObjectIDs;
    NSArray * _externalDataReferenceTriggerStatements;
    NSArray * _externalDataReferencesToDelete;
    NSSQLFetchRequestContext * _fetchContext;
    NSFetchRequest * _fetchRequestForObjectsToDelete;
    NSArray * _fileBackedFuturesToDelete;
    NSString * _tempTableName;
}

@property (nonatomic, readonly) NSBatchDeleteRequest *request;

- (void)dealloc;
- (void)executePrologue;
- (bool)executeRequestCore:(id*)arg1;
- (bool)isWritingRequest;
- (id)request;

@end
