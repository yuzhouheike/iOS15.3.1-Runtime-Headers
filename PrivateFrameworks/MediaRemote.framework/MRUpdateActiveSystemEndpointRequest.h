/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying> {
    long long  _changeType;
    NSString * _clientBundleIdentifier;
    NSString * _outputDeviceUID;
    bool  _pairedDeviceSync;
    NSString * _reason;
}

@property (nonatomic) long long changeType;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) NSString *outputDeviceUID;
@property (getter=isPairedDeviceSync, nonatomic) bool pairedDeviceSync;
@property (nonatomic, readonly) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (long long)changeType;
- (id)clientBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithOutputDeviceUID:(id)arg1 reason:(id)arg2;
- (id)initWithProtobuf:(id)arg1;
- (bool)isPairedDeviceSync;
- (id)outputDeviceUID;
- (void)perform:(id)arg1 completion:(id /* block */)arg2;
- (id)protobuf;
- (id)reason;
- (void)setChangeType:(long long)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setPairedDeviceSync:(bool)arg1;
- (void)setReason:(id)arg1;

@end
