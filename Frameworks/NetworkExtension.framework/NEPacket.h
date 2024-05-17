/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPacket : NSObject <NSCopying, NSSecureCoding> {
    void * _context;
    NSData * _data;
    long long  _direction;
    NEFilterPacketInterpose * _interpose;
    NEFlowMetaData * _metadata;
    unsigned char  _protocolFamily;
}

@property void*context;
@property (readonly, copy) NSData *data;
@property (readonly) long long direction;
@property (retain) NEFilterPacketInterpose *interpose;
@property (readonly) NEFlowMetaData *metadata;
@property (readonly) unsigned char protocolFamily;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 direction:(long long)arg2 context:(void*)arg3 interpose:(id)arg4;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 metadata:(id)arg3;
- (id)interpose;
- (id)metadata;
- (unsigned char)protocolFamily;
- (void)setContext:(void*)arg1;
- (void)setInterpose:(id)arg1;

@end
