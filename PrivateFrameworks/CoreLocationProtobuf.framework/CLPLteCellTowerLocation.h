/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPLteCellTowerLocation : PBCodable <NSCopying> {
    NSString * _appBundleId;
    int  _bandInfo;
    int  _bandwidth;
    double  _cellLatitude;
    double  _cellLongitude;
    int  _ci;
    unsigned int  _deploymentType;
    unsigned int  _downlinkBandwidth;
    int  _ecn0;
    struct { 
        unsigned int cellLatitude : 1; 
        unsigned int cellLongitude : 1; 
        unsigned int bandInfo : 1; 
        unsigned int bandwidth : 1; 
        unsigned int deploymentType : 1; 
        unsigned int downlinkBandwidth : 1; 
        unsigned int ecn0 : 1; 
        unsigned int latency : 1; 
        unsigned int pid : 1; 
        unsigned int rscp : 1; 
        unsigned int rssi : 1; 
        unsigned int serverHash : 1; 
        unsigned int uarfcn : 1; 
        unsigned int isLimitedService : 1; 
        unsigned int isStalled : 1; 
    }  _has;
    bool  _isLimitedService;
    bool  _isStalled;
    unsigned int  _latency;
    CLPLocation * _location;
    int  _mcc;
    int  _mnc;
    CLPCellNeighborsGroup * _neighborGroup;
    NSMutableArray * _neighbors;
    NSString * _operatorName;
    int  _pid;
    int  _rscp;
    int  _rssi;
    int  _serverHash;
    NSString * _serviceProviderName;
    int  _tac;
    int  _uarfcn;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic) int bandInfo;
@property (nonatomic) int bandwidth;
@property (nonatomic) double cellLatitude;
@property (nonatomic) double cellLongitude;
@property (nonatomic) int ci;
@property (nonatomic) unsigned int deploymentType;
@property (nonatomic) unsigned int downlinkBandwidth;
@property (nonatomic) int ecn0;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic) bool hasBandInfo;
@property (nonatomic) bool hasBandwidth;
@property (nonatomic) bool hasCellLatitude;
@property (nonatomic) bool hasCellLongitude;
@property (nonatomic) bool hasDeploymentType;
@property (nonatomic) bool hasDownlinkBandwidth;
@property (nonatomic) bool hasEcn0;
@property (nonatomic) bool hasIsLimitedService;
@property (nonatomic) bool hasIsStalled;
@property (nonatomic) bool hasLatency;
@property (nonatomic, readonly) bool hasNeighborGroup;
@property (nonatomic, readonly) bool hasOperatorName;
@property (nonatomic) bool hasPid;
@property (nonatomic) bool hasRscp;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasServerHash;
@property (nonatomic, readonly) bool hasServiceProviderName;
@property (nonatomic) bool hasUarfcn;
@property (nonatomic) bool isLimitedService;
@property (nonatomic) bool isStalled;
@property (nonatomic) unsigned int latency;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic, retain) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic, retain) NSMutableArray *neighbors;
@property (nonatomic, retain) NSString *operatorName;
@property (nonatomic) int pid;
@property (nonatomic) int rscp;
@property (nonatomic) int rssi;
@property (nonatomic) int serverHash;
@property (nonatomic, retain) NSString *serviceProviderName;
@property (nonatomic) int tac;
@property (nonatomic) int uarfcn;

+ (Class)neighborType;

- (void).cxx_destruct;
- (void)addNeighbor:(id)arg1;
- (id)appBundleId;
- (int)bandInfo;
- (int)bandwidth;
- (double)cellLatitude;
- (double)cellLongitude;
- (int)ci;
- (void)clearNeighbors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deploymentType;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)downlinkBandwidth;
- (int)ecn0;
- (bool)hasAppBundleId;
- (bool)hasBandInfo;
- (bool)hasBandwidth;
- (bool)hasCellLatitude;
- (bool)hasCellLongitude;
- (bool)hasDeploymentType;
- (bool)hasDownlinkBandwidth;
- (bool)hasEcn0;
- (bool)hasIsLimitedService;
- (bool)hasIsStalled;
- (bool)hasLatency;
- (bool)hasNeighborGroup;
- (bool)hasOperatorName;
- (bool)hasPid;
- (bool)hasRscp;
- (bool)hasRssi;
- (bool)hasServerHash;
- (bool)hasServiceProviderName;
- (bool)hasUarfcn;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isLimitedService;
- (bool)isStalled;
- (unsigned int)latency;
- (id)location;
- (int)mcc;
- (void)mergeFrom:(id)arg1;
- (int)mnc;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (id)neighborGroup;
- (id)neighbors;
- (unsigned long long)neighborsCount;
- (id)operatorName;
- (int)pid;
- (bool)readFrom:(id)arg1;
- (int)rscp;
- (int)rssi;
- (int)serverHash;
- (id)serviceProviderName;
- (void)setAppBundleId:(id)arg1;
- (void)setBandInfo:(int)arg1;
- (void)setBandwidth:(int)arg1;
- (void)setCellLatitude:(double)arg1;
- (void)setCellLongitude:(double)arg1;
- (void)setCi:(int)arg1;
- (void)setDeploymentType:(unsigned int)arg1;
- (void)setDownlinkBandwidth:(unsigned int)arg1;
- (void)setEcn0:(int)arg1;
- (void)setHasBandInfo:(bool)arg1;
- (void)setHasBandwidth:(bool)arg1;
- (void)setHasCellLatitude:(bool)arg1;
- (void)setHasCellLongitude:(bool)arg1;
- (void)setHasDeploymentType:(bool)arg1;
- (void)setHasDownlinkBandwidth:(bool)arg1;
- (void)setHasEcn0:(bool)arg1;
- (void)setHasIsLimitedService:(bool)arg1;
- (void)setHasIsStalled:(bool)arg1;
- (void)setHasLatency:(bool)arg1;
- (void)setHasPid:(bool)arg1;
- (void)setHasRscp:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasServerHash:(bool)arg1;
- (void)setHasUarfcn:(bool)arg1;
- (void)setIsLimitedService:(bool)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setLatency:(unsigned int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMcc:(int)arg1;
- (void)setMnc:(int)arg1;
- (void)setNeighborGroup:(id)arg1;
- (void)setNeighbors:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setRscp:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setServerHash:(int)arg1;
- (void)setServiceProviderName:(id)arg1;
- (void)setTac:(int)arg1;
- (void)setUarfcn:(int)arg1;
- (int)tac;
- (int)uarfcn;
- (void)writeTo:(id)arg1;

@end
