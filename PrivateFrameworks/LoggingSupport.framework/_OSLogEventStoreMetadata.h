/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogEventStoreMetadata : NSObject {
    NSUUID * _archiveUUID;
    _OSLogEventStoreTimeRef * _end;
    _OSLogEventStoreTimeRef * _oldestHighVolume;
    _OSLogEventStoreTimeRef * _oldestLive;
    _OSLogEventStoreTimeRef * _oldestPersist;
    _OSLogEventStoreTimeRef * _oldestSignpost;
    _OSLogEventStoreTimeRef * _oldestSpecial;
    NSUUID * _sourceUUID;
    _OSLogEventStoreTimeRef * _ttls;
}

@property (nonatomic, readonly) NSUUID *archiveUUID;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *end;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *oldestHighVolume;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *oldestLive;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *oldestPersist;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *oldestSignpost;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *oldestSpecial;
@property (nonatomic, readonly) NSUUID *sourceUUID;

- (void).cxx_destruct;
- (id)archiveUUID;
- (id)end;
- (id)initWithCollection:(id)arg1 localStorePlist:(id)arg2 liveDataDescriptor:(int)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)oldestHighVolume;
- (id)oldestLive;
- (id)oldestPersist;
- (id)oldestSignpost;
- (id)oldestSpecial;
- (id)sourceUUID;
- (id)timeRefForTTLClass:(unsigned char)arg1;

@end
