/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying> {
    int  _decodeTime;
    struct { 
        unsigned int has_requestEnd : 1; 
        unsigned int has_requestErrorCode : 1; 
        unsigned int has_requestStart : 1; 
        unsigned int has_decodeTime : 1; 
        unsigned int has_httpResponseCode : 1; 
        unsigned int has_mptcpServiceType : 1; 
        unsigned int has_networkService : 1; 
        unsigned int has_queuedTime : 1; 
        unsigned int has_redirectCount : 1; 
        unsigned int has_requestDataSize : 1; 
        unsigned int has_responseDataSize : 1; 
        unsigned int has_tilesetId : 1; 
        unsigned int has_totalTime : 1; 
        unsigned int has_mptcpNegotiated : 1; 
        unsigned int has_rnfTriggered : 1; 
        unsigned int read_manifestEnv : 1; 
        unsigned int read_requestAppIdMajorVer : 1; 
        unsigned int read_requestAppIdMinorVer : 1; 
        unsigned int read_requestAppIdentifier : 1; 
        unsigned int read_requestErrorDescription : 1; 
        unsigned int read_requestErrorDomain : 1; 
        unsigned int read_serviceIpAddress : 1; 
        unsigned int read_taskMetrics : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _httpResponseCode;
    NSString * _manifestEnv;
    bool  _mptcpNegotiated;
    int  _mptcpServiceType;
    int  _networkService;
    int  _queuedTime;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _redirectCount;
    NSString * _requestAppIdMajorVer;
    NSString * _requestAppIdMinorVer;
    NSString * _requestAppIdentifier;
    int  _requestDataSize;
    double  _requestEnd;
    long long  _requestErrorCode;
    NSString * _requestErrorDescription;
    NSString * _requestErrorDomain;
    double  _requestStart;
    int  _responseDataSize;
    bool  _rnfTriggered;
    NSString * _serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics * _taskMetrics;
    unsigned int  _tilesetId;
    int  _totalTime;
}

@property (nonatomic) int decodeTime;
@property (nonatomic) bool hasDecodeTime;
@property (nonatomic) bool hasHttpResponseCode;
@property (nonatomic, readonly) bool hasManifestEnv;
@property (nonatomic) bool hasMptcpNegotiated;
@property (nonatomic) bool hasMptcpServiceType;
@property (nonatomic) bool hasNetworkService;
@property (nonatomic) bool hasQueuedTime;
@property (nonatomic) bool hasRedirectCount;
@property (nonatomic, readonly) bool hasRequestAppIdMajorVer;
@property (nonatomic, readonly) bool hasRequestAppIdMinorVer;
@property (nonatomic, readonly) bool hasRequestAppIdentifier;
@property (nonatomic) bool hasRequestDataSize;
@property (nonatomic) bool hasRequestEnd;
@property (nonatomic) bool hasRequestErrorCode;
@property (nonatomic, readonly) bool hasRequestErrorDescription;
@property (nonatomic, readonly) bool hasRequestErrorDomain;
@property (nonatomic) bool hasRequestStart;
@property (nonatomic) bool hasResponseDataSize;
@property (nonatomic) bool hasRnfTriggered;
@property (nonatomic, readonly) bool hasServiceIpAddress;
@property (nonatomic, readonly) bool hasTaskMetrics;
@property (nonatomic) bool hasTilesetId;
@property (nonatomic) bool hasTotalTime;
@property (nonatomic) int httpResponseCode;
@property (nonatomic, retain) NSString *manifestEnv;
@property (nonatomic) bool mptcpNegotiated;
@property (nonatomic) int mptcpServiceType;
@property (nonatomic) int networkService;
@property (nonatomic) int queuedTime;
@property (nonatomic) int redirectCount;
@property (nonatomic, retain) NSString *requestAppIdMajorVer;
@property (nonatomic, retain) NSString *requestAppIdMinorVer;
@property (nonatomic, retain) NSString *requestAppIdentifier;
@property (nonatomic) int requestDataSize;
@property (nonatomic) double requestEnd;
@property (nonatomic) long long requestErrorCode;
@property (nonatomic, retain) NSString *requestErrorDescription;
@property (nonatomic, retain) NSString *requestErrorDomain;
@property (nonatomic) double requestStart;
@property (nonatomic) int responseDataSize;
@property (nonatomic) bool rnfTriggered;
@property (nonatomic, retain) NSString *serviceIpAddress;
@property (nonatomic, retain) GEONetworkSessionTaskTransactionMetrics *taskMetrics;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) int totalTime;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMptcpServiceType:(id)arg1;
- (int)StringAsNetworkService:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)decodeTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDecodeTime;
- (bool)hasHttpResponseCode;
- (bool)hasManifestEnv;
- (bool)hasMptcpNegotiated;
- (bool)hasMptcpServiceType;
- (bool)hasNetworkService;
- (bool)hasQueuedTime;
- (bool)hasRedirectCount;
- (bool)hasRequestAppIdMajorVer;
- (bool)hasRequestAppIdMinorVer;
- (bool)hasRequestAppIdentifier;
- (bool)hasRequestDataSize;
- (bool)hasRequestEnd;
- (bool)hasRequestErrorCode;
- (bool)hasRequestErrorDescription;
- (bool)hasRequestErrorDomain;
- (bool)hasRequestStart;
- (bool)hasResponseDataSize;
- (bool)hasRnfTriggered;
- (bool)hasServiceIpAddress;
- (bool)hasTaskMetrics;
- (bool)hasTilesetId;
- (bool)hasTotalTime;
- (unsigned long long)hash;
- (int)httpResponseCode;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)manifestEnv;
- (void)mergeFrom:(id)arg1;
- (bool)mptcpNegotiated;
- (int)mptcpServiceType;
- (id)mptcpServiceTypeAsString:(int)arg1;
- (int)networkService;
- (id)networkServiceAsString:(int)arg1;
- (int)queuedTime;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)redirectCount;
- (id)requestAppIdMajorVer;
- (id)requestAppIdMinorVer;
- (id)requestAppIdentifier;
- (int)requestDataSize;
- (double)requestEnd;
- (long long)requestErrorCode;
- (id)requestErrorDescription;
- (id)requestErrorDomain;
- (double)requestStart;
- (int)responseDataSize;
- (bool)rnfTriggered;
- (id)serviceIpAddress;
- (void)setDecodeTime:(int)arg1;
- (void)setHasDecodeTime:(bool)arg1;
- (void)setHasHttpResponseCode:(bool)arg1;
- (void)setHasMptcpNegotiated:(bool)arg1;
- (void)setHasMptcpServiceType:(bool)arg1;
- (void)setHasNetworkService:(bool)arg1;
- (void)setHasQueuedTime:(bool)arg1;
- (void)setHasRedirectCount:(bool)arg1;
- (void)setHasRequestDataSize:(bool)arg1;
- (void)setHasRequestEnd:(bool)arg1;
- (void)setHasRequestErrorCode:(bool)arg1;
- (void)setHasRequestStart:(bool)arg1;
- (void)setHasResponseDataSize:(bool)arg1;
- (void)setHasRnfTriggered:(bool)arg1;
- (void)setHasTilesetId:(bool)arg1;
- (void)setHasTotalTime:(bool)arg1;
- (void)setHttpResponseCode:(int)arg1;
- (void)setManifestEnv:(id)arg1;
- (void)setMptcpNegotiated:(bool)arg1;
- (void)setMptcpServiceType:(int)arg1;
- (void)setNetworkService:(int)arg1;
- (void)setQueuedTime:(int)arg1;
- (void)setRedirectCount:(int)arg1;
- (void)setRequestAppIdMajorVer:(id)arg1;
- (void)setRequestAppIdMinorVer:(id)arg1;
- (void)setRequestAppIdentifier:(id)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setRequestEnd:(double)arg1;
- (void)setRequestErrorCode:(long long)arg1;
- (void)setRequestErrorDescription:(id)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setRnfTriggered:(bool)arg1;
- (void)setServiceIpAddress:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (void)setTilesetId:(unsigned int)arg1;
- (void)setTotalTime:(int)arg1;
- (id)taskMetrics;
- (unsigned int)tilesetId;
- (int)totalTime;
- (void)writeTo:(id)arg1;

@end
