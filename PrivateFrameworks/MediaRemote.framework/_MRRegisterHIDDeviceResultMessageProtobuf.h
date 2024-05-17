/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _deviceIdentifier;
    unsigned int  _errorCode;
    struct { 
        unsigned int deviceIdentifier : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
