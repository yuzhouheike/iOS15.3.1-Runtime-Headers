/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying> {
    _MRVirtualTouchEventProtobuf * _event;
    struct { 
        unsigned int virtualDeviceID : 1; 
    }  _has;
    unsigned long long  _virtualDeviceID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
