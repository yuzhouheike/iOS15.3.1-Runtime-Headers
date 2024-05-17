/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterSocketFlow : NEFilterFlow <NSCopying, NSSecureCoding> {
    NSUUID * _euuid;
    long long  _generateIdentifierOnce;
    NWEndpoint * _localEndpoint;
    NWEndpoint * _remoteEndpoint;
    NSString * _remoteHostname;
    int  _socketFamily;
    unsigned long long  _socketID;
    int  _socketProtocol;
    int  _socketType;
    NSUUID * _socketUUID;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSUUID *euuid;
@property (copy) NWEndpoint *localEndpoint;
@property (copy) NWEndpoint *remoteEndpoint;
@property (copy) NSString *remoteHostname;
@property int socketFamily;
@property unsigned long long socketID;
@property int socketProtocol;
@property int socketType;
@property (readonly) NSUUID *socketUUID;
@property (nonatomic, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;
+ (bool)writeMessageWithControlSocket:(int)arg1 drop:(bool)arg2 socketID:(unsigned long long)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7 statsReportFrequency:(long long)arg8;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)euuid;
- (id)identifier;
- (id)identifierString;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7 socketID:(unsigned long long)arg8;
- (id)localEndpoint;
- (id)remoteEndpoint;
- (id)remoteHostname;
- (void)setEuuid:(id)arg1;
- (void)setLocalAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setRemoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (void)setRemoteEndpoint:(id)arg1;
- (void)setRemoteHostname:(id)arg1;
- (void)setSocketFamily:(int)arg1;
- (void)setSocketID:(unsigned long long)arg1;
- (void)setSocketProtocol:(int)arg1;
- (void)setSocketType:(int)arg1;
- (void)setUuid:(id)arg1;
- (int)socketFamily;
- (unsigned long long)socketID;
- (int)socketProtocol;
- (int)socketType;
- (id)socketUUID;
- (id)uuid;
- (void)writeCurrentVerdictWithMessage:(id)arg1 controlSocket:(int)arg2;
- (void)writeXPCMessage:(id)arg1 drop:(bool)arg2 inboundPassOffset:(unsigned long long)arg3 inboundPeekOffset:(unsigned long long)arg4 outboundPassOffset:(unsigned long long)arg5 outboundPeekOffset:(unsigned long long)arg6 statsReportFrequency:(long long)arg7;

@end
