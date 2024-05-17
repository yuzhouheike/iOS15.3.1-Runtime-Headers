/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASRTCLogging : NSObject <NSSecureCoding> {
    NSMutableArray * _aggregators;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableArray * _logQueue;
    NSString * _path;
    NSObject<OS_dispatch_source> * _persistenceTimerSource;
    double  _storeCreationDate;
}

@property (retain) NSMutableArray *logQueue;

+ (unsigned long long)bucketizeInteger:(unsigned long long)arg1 withBucketSize:(unsigned long long)arg2 limit:(unsigned long long)arg3;
+ (id)dateByAppendingDaysToCurrentDate:(double)arg1;
+ (id)loggerForPath:(id)arg1;
+ (unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (double)round:(double)arg1 toSignificantFigures:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createRTCReportingWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3;
- (bool)_removeSentLogsAndResetStoreAge:(id)arg1;
- (double)_storeAge;
- (bool)_storeToDisk;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enqueueRTCLog:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3;
- (void)expireLogs;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (void)logAggregateEvent:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3;
- (id)logQueue;
- (void)registerBeforeSendProcessor:(id)arg1;
- (bool)resetLogs;
- (void)sendRTCLogsWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setLogQueue:(id)arg1;
- (void)updateAndScheduleDiskWrite;
- (id)whitelistedLogFromLog:(id)arg1;

@end
