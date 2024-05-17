/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdCacheDBReader : GEODBReader {
    struct sqlite3_stmt { } * _sqlCountEntries;
    struct sqlite3_stmt { } * _sqlReadAllEntries;
    struct sqlite3_stmt { } * _sqlReadEntriesBeforeTimeStamp;
    struct sqlite3_stmt { } * _sqlReadEntriesForHash;
    struct sqlite3_stmt { } * _sqlReadEntryWithRowId;
    struct sqlite3_stmt { } * _sqlReadKeysForHash;
    struct sqlite3_stmt { } * _sqlReadNextTimerTimeStamp;
    struct sqlite3_stmt { } * _sqlReadRowIdsOfEntriesBeforeTimeStamp;
}

- (void)_allCacheEntriesWithHandler:(id /* block */)arg1;
- (void)_cacheEntriesBeforeTimeStamp:(double)arg1 withHandler:(id /* block */)arg2;
- (void)_cacheEntriesForHash:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (void)_cacheEntryForNextRefreshWithHandler:(id /* block */)arg1;
- (void)_cacheEntryWithRowId:(long long)arg1 handler:(id /* block */)arg2;
- (void)_cacheKeysForHash:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)arg1 withHandler:(id /* block */)arg2;
- (void)_closeDB;
- (long long)_numberOfEntries;
- (void)_openDB;
- (void)_openDBIfNotAlreadyOpen;
- (void)dealloc;

@end
