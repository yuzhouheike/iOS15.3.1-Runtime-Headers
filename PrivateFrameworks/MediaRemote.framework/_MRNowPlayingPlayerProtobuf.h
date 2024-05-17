/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {
    unsigned int  _audioSessionID;
    int  _audioSessionType;
    NSString * _displayName;
    struct { 
        unsigned int audioSessionID : 1; 
        unsigned int audioSessionType : 1; 
    }  _has;
    NSString * _iconURL;
    NSString * _identifier;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mxSessionIDs;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
