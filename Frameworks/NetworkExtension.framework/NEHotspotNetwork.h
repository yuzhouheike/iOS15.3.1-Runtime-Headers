/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotNetwork : NSObject {
    struct __CNNetwork { } * _network;
    long long  _securityType;
}

@property (readonly) NSString *BSSID;
@property (readonly) NSString *SSID;
@property (readonly) NSString *interfaceName;
@property struct __CNNetwork { }*network;
@property long long securityType;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)arg1;

- (id)BSSID;
- (id)SSID;
- (void)dealloc;
- (id)description;
- (bool)didAutoJoin;
- (bool)didJustJoin;
- (id)initWithNetwork:(struct __CNNetwork { }*)arg1;
- (id)initWithNetwork:(struct __CNNetwork { }*)arg1 securityType:(id)arg2;
- (id)interfaceName;
- (bool)isChosenHelper;
- (bool)isSecure;
- (struct __CNNetwork { }*)network;
- (long long)securityType;
- (void)setConfidence:(long long)arg1;
- (void)setNetwork:(struct __CNNetwork { }*)arg1;
- (void)setPassword:(id)arg1;
- (void)setSecurityType:(long long)arg1;
- (double)signalStrength;

@end
