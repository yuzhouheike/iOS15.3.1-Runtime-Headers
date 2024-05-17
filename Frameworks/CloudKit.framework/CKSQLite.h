/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLite : NSObject <CKSQLiteDB, CKSQLiteDBConveniences> {
    bool  _cancelled;
    struct sqlite3 { } * _db;
    <CKSQLiteDelegate> * _delegate;
    NSError * _error;
    id /* block */  _errorHandlerBlock;
    long long  _errorResponse;
    bool  _hasMigrated;
    bool  _invalid;
    NSError * _invalidationError;
    id /* block */  _invalidationHandler;
    bool  _needsMarkCorrupt;
    bool  _needsRemove;
    NSString * _objectClassPrefix;
    unsigned long long  _openCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _operationLock;
    _Atomic unsigned long long  _operationThread;
    NSString * _path;
    NSString * _schema;
    NSString * _schemaVersion;
    bool  _shouldVacuum;
    long long  _synchronousMode;
    bool  _traced;
    int  _userVersion;
}

@property (nonatomic) struct sqlite3 { }*db;
@property (nonatomic, retain) <CKSQLiteDelegate> *delegate;
@property (nonatomic, readonly) bool hasMigrated;
@property bool invalid;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) bool isCorrupt;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, retain) NSString *objectClassPrefix;
@property (nonatomic) unsigned long long openCount;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *schema;
@property (nonatomic, readonly) NSString *schemaVersion;
@property (nonatomic) bool shouldVacuum;
@property (nonatomic) long long synchronousMode;
@property (nonatomic) bool traced;
@property (nonatomic) int userVersion;

+ (id)equalityClauseAndBindingsForDict:(id)arg1;

- (void).cxx_destruct;
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;
- (void)_dropAllTables;
- (void)_forceClosed_locked;
- (void)_forceClosed_unlocked;
- (id)_performDatabaseOperation_locked:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
- (void)_periodicVacuum;
- (id)_prepareDatabase;
- (void)_recursiveOperationLock:(id /* block */)arg1;
- (id)_tableNameForClass:(Class)arg1;
- (id)allTableNames;
- (void)assertInOperation:(SEL)arg1;
- (int)changes;
- (void)close;
- (id)columnNamesForTable:(id)arg1;
- (id)creationDate;
- (id)datePropertyForKey:(id)arg1;
- (struct sqlite3 { }*)db;
- (int)dbUserVersion;
- (void)dealloc;
- (id)delegate;
- (int)deleteAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (bool)deleteExactObject:(id)arg1;
- (void)deleteFrom:(id)arg1 matchingValues:(id)arg2;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)executeSQL:(id)arg1;
- (void)executeSQL:(id)arg1 arguments:(char *)arg2;
- (id)handleDatabaseError:(id)arg1;
- (id)handleDatabaseError:(id)arg1 args:(char *)arg2;
- (id)handleError:(id)arg1;
- (bool)hasMigrated;
- (id)initWithPath:(id)arg1 schema:(id)arg2;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (long long)insertOrReplaceObject:(id)arg1;
- (bool)invalid;
- (id /* block */)invalidationHandler;
- (bool)isCorrupt;
- (bool)isOpen;
- (long long)lastInsertRowID;
- (void)markCorrupt;
- (id)objectClassPrefix;
- (unsigned long long)openCount;
- (bool)openWithError:(id*)arg1;
- (id)path;
- (id)performDatabaseOperation:(id /* block */)arg1;
- (id)performDatabaseOperation:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
- (id)propertyForKey:(id)arg1;
- (bool)remove;
- (void)removePropertyForKey:(id)arg1;
- (id)schema;
- (id)schemaVersion;
- (id)select:(id)arg1 from:(id)arg2;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(id /* block */)arg7;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 offset:(id)arg7 block:(id /* block */)arg8;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (void)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(id /* block */)arg6;
- (long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(id /* block */)arg6;
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setObjectClassPrefix:(id)arg1;
- (void)setOpenCount:(unsigned long long)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setShouldVacuum:(bool)arg1;
- (void)setSynchronousMode:(long long)arg1;
- (void)setTraced:(bool)arg1;
- (void)setUserVersion:(int)arg1;
- (bool)shouldVacuum;
- (id)sqlErrorWithMessage:(id)arg1;
- (long long)synchronousMode;
- (bool)traced;
- (void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5;
- (void)updateAllObjectsOfClass:(Class)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (long long)upsertInto:(id)arg1 values:(id)arg2 onConflict:(id)arg3 doUpdate:(id)arg4 where:(id)arg5;
- (int)userVersion;
- (void)usingStatementForSQL:(id)arg1 performBlock:(id /* block */)arg2;
- (void)vacuum;
- (void)willCreateDatabase;

@end
