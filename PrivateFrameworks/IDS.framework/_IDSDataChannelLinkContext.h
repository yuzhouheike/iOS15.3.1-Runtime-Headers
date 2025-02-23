/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSDataChannelLinkContext : NSObject {
    NSUUID * _QRSessionID;
    unsigned int  _RATType;
    long long  _connectionType;
    bool  _isVirtualRelayLink;
    BOOL  _linkID;
    NSUUID * _linkUUID;
    unsigned int  _localDataSoMask;
    NSString * _localInterfaceName;
    unsigned short  _localLinkFlags;
    unsigned int  _maxBitrate;
    unsigned short  _maxMTU;
    unsigned char  _networkType;
    long long  _relayServerProvider;
    NSData * _relaySessionKey;
    NSData * _relaySessionToken;
    long long  _remoteConnectionType;
    unsigned int  _remoteDataSoMask;
    unsigned short  _remoteLinkFlags;
    unsigned char  _remoteNetworkType;
    unsigned int  _remoteRATType;
    bool  _serverIsDegraded;
}

- (void).cxx_destruct;
- (id)description;

@end
