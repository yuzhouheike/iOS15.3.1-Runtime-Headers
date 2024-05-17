/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteError : CKInternalError

@property (nonatomic, readonly) bool databaseIsCorrupt;
@property (nonatomic, readonly) int sqliteCode;
@property (nonatomic, readonly) int sqliteExtendedCode;

+ (id)errorForSQLite:(struct sqlite3 { }*)arg1 message:(id)arg2;
+ (id)errorForSQLite:(struct sqlite3 { }*)arg1 message:(id)arg2 args:(char *)arg3;
+ (id)testErrorWithDatabaseCorruption;

- (bool)CK_isCKSQLiteError;
- (bool)databaseIsCorrupt;
- (id)description;
- (int)sqliteCode;
- (int)sqliteExtendedCode;

@end
