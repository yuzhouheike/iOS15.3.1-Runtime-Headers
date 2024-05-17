/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBSessionRequester : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate> {
    NSURL * _URL;
    NSString * _apsRelayTopic;
    NSArray * _clientCertificates;
    NSDictionary * _connectionProperties;
    NSURLSessionTask * _currentTask;
    NSMutableData * _data;
    PBDataReader * _dataReader;
    <PBSessionRequesterDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    bool  _didNotifyRequestCompleted;
    unsigned long long  _downloadPayloadSize;
    struct { 
        unsigned int ignoresResponse : 1; 
        unsigned int loading : 1; 
        unsigned int needsCancel : 1; 
        unsigned int responseStatusSet : 1; 
        unsigned int parsedResponseHeader : 1; 
        unsigned int delegateDidReceiveResponse : 1; 
        unsigned int delegateDidFinish : 1; 
        unsigned int delegateDidCancel : 1; 
        unsigned int delegateDidFailWithError : 1; 
        unsigned int paused : 1; 
        unsigned int resuming : 1; 
    }  _flags;
    NSMutableDictionary * _httpRequestHeaders;
    NSDictionary * _httpResponseHeaders;
    NSMutableArray * _internalRequests;
    NSMutableArray * _internalResponses;
    unsigned long long  _lastGoodDataOffset;
    NSString * _logRequestToFile;
    NSString * _logResponseToFile;
    unsigned long long  _nwActivityDomain;
    unsigned long long  _nwActivityLabel;
    NSMutableArray * _requests;
    long long  _responseStatusCode;
    NSMutableArray * _responses;
    NSURLSession * _session;
    NSOperationQueue * _sessionDelegateQ;
    bool  _shouldHandleCookies;
    unsigned long long  _timeRequestSent;
    unsigned long long  _timeResponseReceived;
    double  _timeoutSeconds;
    unsigned long long  _uploadPayloadSize;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSString *apsRelayTopic;
@property (nonatomic, retain) NSArray *clientCertificates;
@property (nonatomic, retain) NSURLSessionTask *currentTask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PBSessionRequesterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long downloadPayloadSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *httpRequestHeaders;
@property (nonatomic, retain) NSDictionary *httpResponseHeaders;
@property (nonatomic) bool ignoresResponse;
@property (nonatomic, retain) NSString *logRequestToFile;
@property (nonatomic, retain) NSString *logResponseToFile;
@property (nonatomic) unsigned long long nwActivityDomain;
@property (nonatomic) unsigned long long nwActivityLabel;
@property (nonatomic, readonly) unsigned long long requestResponseTime;
@property (nonatomic, readonly) NSArray *requests;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic) bool shouldHandleCookies;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutSeconds;
@property (nonatomic, readonly) unsigned long long uploadPayloadSize;

+ (bool)usesEncodedMessages;

- (void).cxx_destruct;
- (id)URL;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)addInternalRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)apsRelayTopic;
- (void)cancel;
- (void)cancelWithErrorCode:(long long)arg1;
- (void)clearRequests;
- (id)clientCertificates;
- (id)currentTask;
- (void)dealloc;
- (id)decodeResponseData:(id)arg1;
- (id)delegate;
- (unsigned long long)downloadPayloadSize;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(id /* block */)arg2;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)httpRequestHeaders;
- (id)httpResponseHeaders;
- (bool)ignoresResponse;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)internalRequests;
- (bool)isPaused;
- (id)logRequestToFile;
- (id)logResponseToFile;
- (id)newMutableURLRequestWithURL:(id)arg1;
- (id)newSessionTaskOnSession:(id)arg1 withURLRequest:(id)arg2;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;
- (unsigned long long)nwActivityDomain;
- (unsigned long long)nwActivityLabel;
- (void)pause;
- (bool)readResponsePreamble:(id)arg1;
- (id)requestPreamble;
- (unsigned long long)requestResponseTime;
- (id)requests;
- (id)responseForInternalRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (void)resume;
- (id)session;
- (void)setApsRelayTopic:(id)arg1;
- (void)setClientCertificates:(id)arg1;
- (void)setCurrentTask:(id)arg1;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
- (void)setHttpRequestHeaders:(id)arg1;
- (void)setHttpResponseHeaders:(id)arg1;
- (void)setIgnoresResponse:(bool)arg1;
- (void)setLogRequestToFile:(id)arg1;
- (void)setLogResponseToFile:(id)arg1;
- (void)setNeedsCancel;
- (void)setNwActivityDomain:(unsigned long long)arg1;
- (void)setNwActivityLabel:(unsigned long long)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldHandleCookies:(bool)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldHandleCookies;
- (void)start;
- (void)startWithConnectionProperties:(id)arg1;
- (double)timeoutSeconds;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (unsigned long long)uploadPayloadSize;
- (void)writeRequest:(id)arg1 into:(id)arg2;

@end
