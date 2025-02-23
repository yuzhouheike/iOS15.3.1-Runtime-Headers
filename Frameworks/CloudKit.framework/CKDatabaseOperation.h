/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseOperation : CKOperation {
    CKDatabase * _database;
}

@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, readonly) CKDatabaseOperationInfo *operationInfo;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)database;
- (long long)databaseScope;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)flowControlKey;
- (void)setDatabase:(id)arg1;

@end
