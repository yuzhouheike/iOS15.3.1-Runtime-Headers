/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {
    NSData * _contents;
    _MRAudioFormatSettingsProtobuf * _formatSettings;
    struct { 
        unsigned int maximumPacketSize : 1; 
        unsigned int packetCapacity : 1; 
        unsigned int packetCount : 1; 
    }  _has;
    long long  _maximumPacketSize;
    long long  _packetCapacity;
    long long  _packetCount;
    NSMutableArray * _packetDescriptions;
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
