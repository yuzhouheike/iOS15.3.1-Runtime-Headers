/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWPBParameters : PBCodable <NSCopying> {
    NSString * _account;
    unsigned int  _addressFamily;
    int  _dataMode;
    NSString * _effectiveBundleID;
    NSString * _effectiveProcessUUID;
    bool  _fastOpen;
    struct { 
        unsigned int addressFamily : 1; 
        unsigned int dataMode : 1; 
        unsigned int ipProtocol : 1; 
        unsigned int requiredInterfaceType : 1; 
        unsigned int trafficClass : 1; 
        unsigned int fastOpen : 1; 
        unsigned int keepalive : 1; 
        unsigned int longOutstandingQueries : 1; 
        unsigned int multipath : 1; 
        unsigned int noFallback : 1; 
        unsigned int prohibitExpensive : 1; 
        unsigned int reduceBuffering : 1; 
        unsigned int reuseLocalAddress : 1; 
        unsigned int useAWDL : 1; 
        unsigned int useP2P : 1; 
    }  _has;
    unsigned int  _ipProtocol;
    bool  _keepalive;
    NWPBEndpoint * _localEndpoint;
    bool  _longOutstandingQueries;
    NSData * _metadata;
    unsigned int  _multipathService;
    bool  _noFallback;
    NSMutableArray * _preferredAgents;
    bool  _prohibitExpensive;
    NSMutableArray * _prohibitedAgents;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _prohibitedInterfaceSubTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _prohibitedInterfaceTypes;
    NSMutableArray * _prohibitedInterfaces;
    NSString * _realProcessUUID;
    bool  _reduceBuffering;
    NSMutableArray * _requiredAgents;
    NWPBInterface * _requiredInterface;
    int  _requiredInterfaceType;
    bool  _reuseLocalAddress;
    unsigned int  _trafficClass;
    NSString * _url;
    bool  _useAWDL;
    bool  _useP2P;
}

@property (nonatomic, retain) NSString *account;
@property (nonatomic) unsigned int addressFamily;
@property (nonatomic) int dataMode;
@property (nonatomic, retain) NSString *effectiveBundleID;
@property (nonatomic, retain) NSString *effectiveProcessUUID;
@property (nonatomic) bool fastOpen;
@property (nonatomic, readonly) bool hasAccount;
@property (nonatomic) bool hasAddressFamily;
@property (nonatomic) bool hasDataMode;
@property (nonatomic, readonly) bool hasEffectiveBundleID;
@property (nonatomic, readonly) bool hasEffectiveProcessUUID;
@property (nonatomic) bool hasFastOpen;
@property (nonatomic) bool hasIpProtocol;
@property (nonatomic) bool hasKeepalive;
@property (nonatomic, readonly) bool hasLocalEndpoint;
@property (nonatomic) bool hasLongOutstandingQueries;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasMultipath;
@property (nonatomic) bool hasNoFallback;
@property (nonatomic) bool hasProhibitExpensive;
@property (nonatomic, readonly) bool hasRealProcessUUID;
@property (nonatomic) bool hasReduceBuffering;
@property (nonatomic, readonly) bool hasRequiredInterface;
@property (nonatomic) bool hasRequiredInterfaceType;
@property (nonatomic) bool hasReuseLocalAddress;
@property (nonatomic) bool hasTrafficClass;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) bool hasUseAWDL;
@property (nonatomic) bool hasUseP2P;
@property (nonatomic) unsigned int ipProtocol;
@property (nonatomic) bool keepalive;
@property (nonatomic, retain) NWPBEndpoint *localEndpoint;
@property (nonatomic) bool longOutstandingQueries;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic) unsigned int multipathService;
@property (nonatomic) bool noFallback;
@property (nonatomic, retain) NSMutableArray *preferredAgents;
@property (nonatomic) bool prohibitExpensive;
@property (nonatomic, retain) NSMutableArray *prohibitedAgents;
@property (nonatomic, readonly) int*prohibitedInterfaceSubTypes;
@property (nonatomic, readonly) unsigned long long prohibitedInterfaceSubTypesCount;
@property (nonatomic, readonly) int*prohibitedInterfaceTypes;
@property (nonatomic, readonly) unsigned long long prohibitedInterfaceTypesCount;
@property (nonatomic, retain) NSMutableArray *prohibitedInterfaces;
@property (nonatomic, retain) NSString *realProcessUUID;
@property (nonatomic) bool reduceBuffering;
@property (nonatomic, retain) NSMutableArray *requiredAgents;
@property (nonatomic, retain) NWPBInterface *requiredInterface;
@property (nonatomic) int requiredInterfaceType;
@property (nonatomic) bool reuseLocalAddress;
@property (nonatomic) unsigned int trafficClass;
@property (nonatomic, retain) NSString *url;
@property (nonatomic) bool useAWDL;
@property (nonatomic) bool useP2P;

+ (Class)preferredAgentsType;
+ (Class)prohibitedAgentsType;
+ (Class)prohibitedInterfacesType;
+ (Class)requiredAgentsType;

- (void).cxx_destruct;
- (int)StringAsDataMode:(id)arg1;
- (int)StringAsProhibitedInterfaceSubTypes:(id)arg1;
- (int)StringAsProhibitedInterfaceTypes:(id)arg1;
- (int)StringAsRequiredInterfaceType:(id)arg1;
- (id)account;
- (void)addPreferredAgents:(id)arg1;
- (void)addProhibitedAgents:(id)arg1;
- (void)addProhibitedInterfaceSubTypes:(int)arg1;
- (void)addProhibitedInterfaceTypes:(int)arg1;
- (void)addProhibitedInterfaces:(id)arg1;
- (void)addRequiredAgents:(id)arg1;
- (unsigned int)addressFamily;
- (void)clearPreferredAgents;
- (void)clearProhibitedAgents;
- (void)clearProhibitedInterfaceSubTypes;
- (void)clearProhibitedInterfaceTypes;
- (void)clearProhibitedInterfaces;
- (void)clearRequiredAgents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataMode;
- (id)dataModeAsString:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)effectiveBundleID;
- (id)effectiveProcessUUID;
- (bool)fastOpen;
- (bool)hasAccount;
- (bool)hasAddressFamily;
- (bool)hasDataMode;
- (bool)hasEffectiveBundleID;
- (bool)hasEffectiveProcessUUID;
- (bool)hasFastOpen;
- (bool)hasIpProtocol;
- (bool)hasKeepalive;
- (bool)hasLocalEndpoint;
- (bool)hasLongOutstandingQueries;
- (bool)hasMetadata;
- (bool)hasMultipath;
- (bool)hasNoFallback;
- (bool)hasProhibitExpensive;
- (bool)hasRealProcessUUID;
- (bool)hasReduceBuffering;
- (bool)hasRequiredInterface;
- (bool)hasRequiredInterfaceType;
- (bool)hasReuseLocalAddress;
- (bool)hasTrafficClass;
- (bool)hasUrl;
- (bool)hasUseAWDL;
- (bool)hasUseP2P;
- (unsigned long long)hash;
- (unsigned int)ipProtocol;
- (bool)isEqual:(id)arg1;
- (bool)keepalive;
- (id)localEndpoint;
- (bool)longOutstandingQueries;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (unsigned int)multipathService;
- (bool)noFallback;
- (id)preferredAgents;
- (id)preferredAgentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredAgentsCount;
- (bool)prohibitExpensive;
- (id)prohibitedAgents;
- (id)prohibitedAgentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)prohibitedAgentsCount;
- (int*)prohibitedInterfaceSubTypes;
- (id)prohibitedInterfaceSubTypesAsString:(int)arg1;
- (int)prohibitedInterfaceSubTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)prohibitedInterfaceSubTypesCount;
- (int*)prohibitedInterfaceTypes;
- (id)prohibitedInterfaceTypesAsString:(int)arg1;
- (int)prohibitedInterfaceTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)prohibitedInterfaceTypesCount;
- (id)prohibitedInterfaces;
- (id)prohibitedInterfacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)prohibitedInterfacesCount;
- (bool)readFrom:(id)arg1;
- (id)realProcessUUID;
- (bool)reduceBuffering;
- (id)requiredAgents;
- (id)requiredAgentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredAgentsCount;
- (id)requiredInterface;
- (int)requiredInterfaceType;
- (id)requiredInterfaceTypeAsString:(int)arg1;
- (bool)reuseLocalAddress;
- (void)setAccount:(id)arg1;
- (void)setAddressFamily:(unsigned int)arg1;
- (void)setDataMode:(int)arg1;
- (void)setEffectiveBundleID:(id)arg1;
- (void)setEffectiveProcessUUID:(id)arg1;
- (void)setFastOpen:(bool)arg1;
- (void)setHasAddressFamily:(bool)arg1;
- (void)setHasDataMode:(bool)arg1;
- (void)setHasFastOpen:(bool)arg1;
- (void)setHasIpProtocol:(bool)arg1;
- (void)setHasKeepalive:(bool)arg1;
- (void)setHasLongOutstandingQueries:(bool)arg1;
- (void)setHasMultipath:(bool)arg1;
- (void)setHasNoFallback:(bool)arg1;
- (void)setHasProhibitExpensive:(bool)arg1;
- (void)setHasReduceBuffering:(bool)arg1;
- (void)setHasRequiredInterfaceType:(bool)arg1;
- (void)setHasReuseLocalAddress:(bool)arg1;
- (void)setHasTrafficClass:(bool)arg1;
- (void)setHasUseAWDL:(bool)arg1;
- (void)setHasUseP2P:(bool)arg1;
- (void)setIpProtocol:(unsigned int)arg1;
- (void)setKeepalive:(bool)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setLongOutstandingQueries:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMultipathService:(unsigned int)arg1;
- (void)setNoFallback:(bool)arg1;
- (void)setPreferredAgents:(id)arg1;
- (void)setProhibitExpensive:(bool)arg1;
- (void)setProhibitedAgents:(id)arg1;
- (void)setProhibitedInterfaceSubTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setProhibitedInterfaceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setProhibitedInterfaces:(id)arg1;
- (void)setRealProcessUUID:(id)arg1;
- (void)setReduceBuffering:(bool)arg1;
- (void)setRequiredAgents:(id)arg1;
- (void)setRequiredInterface:(id)arg1;
- (void)setRequiredInterfaceType:(int)arg1;
- (void)setReuseLocalAddress:(bool)arg1;
- (void)setTrafficClass:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseAWDL:(bool)arg1;
- (void)setUseP2P:(bool)arg1;
- (unsigned int)trafficClass;
- (id)url;
- (bool)useAWDL;
- (bool)useP2P;
- (void)writeTo:(id)arg1;

@end
