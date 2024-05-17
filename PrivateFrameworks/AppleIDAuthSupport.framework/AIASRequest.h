/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
 */

@interface AIASRequest : NSObject <NSURLSessionDataDelegate> {
    NSMutableURLRequest * _URLRequest;
    struct __AppleIDAuthSupportData { } * _context;
    NSMutableData * _data;
    bool  _done;
    NSError * _error;
    NSString * _networkTaskDescription;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSURLSession * _session;
    bool  _success;
    NSURLSessionDataTask * _task;
}

@property (retain) NSMutableURLRequest *URLRequest;
@property struct __AppleIDAuthSupportData { }*context;
@property (retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool done;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (retain) NSString *networkTaskDescription;
@property (retain) NSObject<OS_dispatch_semaphore> *sema;
@property (retain) NSURLSession *session;
@property bool success;
@property (readonly) Class superclass;
@property (retain) NSURLSessionDataTask *task;

- (void).cxx_destruct;
- (id)URLRequest;
- (struct __AppleIDAuthSupportData { }*)context;
- (id)data;
- (bool)done;
- (id)error;
- (id)initWithURL:(id)arg1 data:(struct __CFDictionary { }*)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7 additionalHeaders:(id)arg8;
- (id)networkTaskDescription;
- (void)resume;
- (id)sema;
- (id)session;
- (void)setContext:(struct __AppleIDAuthSupportData { }*)arg1;
- (void)setData:(id)arg1;
- (void)setDone:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setNetworkTaskDescription:(id)arg1;
- (void)setSema:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTask:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (bool)success;
- (id)task;

@end
