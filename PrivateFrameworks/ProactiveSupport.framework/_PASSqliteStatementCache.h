/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASSqliteStatementCache : NSObject {
    struct sqlite3_stmt {} * _cached;
    struct _PASSqliteCacheScore { 
        unsigned int crc32; 
        unsigned char score; 
    }  _scores;
}

- (id)init;

@end
