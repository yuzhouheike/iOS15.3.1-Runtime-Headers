/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@interface PLDiscretionaryEnergyMonitor : NSObject {
    double  _accumulatedCPUEnergy;
    double  _accumulatedNetworkEnergy;
    id /* block */  _completionBlock;
    bool  _debugMode;
    PLDiscretionaryIntervalManager * _intervalManager;
    bool  _isCharging;
    NSDictionary * _lastPowerlogResponse;
    double  _lastReportedCPUEnergy;
    double  _lastReportedNetworkEnergy;
    double  _lastReportedTotalEnergy;
    NSMutableDictionary * _mockData;
    double  _powerlogEnergyDiff;
    double  _powerlogEnergyLast;
    double  _powerlogEnergyPrevious;
    NSObject<OS_dispatch_source> * _powerlogQueryTimer;
    NSDate * _powerlogTimestampLast;
    NSDate * _powerlogTimestampPrevious;
    NSObject<OS_dispatch_source> * _quickEnergyAccumulatorTimer;
    NSMutableArray * _quickEnergySnapshots;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property double accumulatedCPUEnergy;
@property double accumulatedNetworkEnergy;
@property (nonatomic, copy) id /* block */ completionBlock;
@property bool debugMode;
@property (retain) PLDiscretionaryIntervalManager *intervalManager;
@property bool isCharging;
@property (nonatomic, retain) NSDictionary *lastPowerlogResponse;
@property (nonatomic) double lastReportedCPUEnergy;
@property (nonatomic) double lastReportedNetworkEnergy;
@property (nonatomic) double lastReportedTotalEnergy;
@property (retain) NSMutableDictionary *mockData;
@property double powerlogEnergyDiff;
@property double powerlogEnergyLast;
@property double powerlogEnergyPrevious;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *powerlogQueryTimer;
@property (retain) NSDate *powerlogTimestampLast;
@property (retain) NSDate *powerlogTimestampPrevious;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *quickEnergyAccumulatorTimer;
@property (nonatomic, retain) NSMutableArray *quickEnergySnapshots;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (double)getDiscretionaryEnergyBudget;

- (void).cxx_destruct;
- (void)accumulateQuickEnergy;
- (double)accumulatedCPUEnergy;
- (double)accumulatedNetworkEnergy;
- (id /* block */)completionBlock;
- (id)createPowerlogQueryTimer;
- (id)createQuickEnergyAccumulatorTimer;
- (bool)debugMode;
- (void)generateEnergyReport;
- (double)getPowerlogEnergySum:(id)arg1;
- (void)incrementCPUEnergy:(double)arg1;
- (void)incrementNetworkEnergy:(double)arg1;
- (id)initWithCompletionBlock:(id /* block */)arg1;
- (id)initWithDebugMode:(bool)arg1 andMockData:(id)arg2 andCompletionBlock:(id /* block */)arg3;
- (id)intervalManager;
- (bool)isCharging;
- (id)lastPowerlogResponse;
- (double)lastReportedCPUEnergy;
- (double)lastReportedNetworkEnergy;
- (double)lastReportedTotalEnergy;
- (void)logEnergyReport:(id)arg1;
- (void)logPowerlogResponse:(id)arg1;
- (void)logQuickEnergySnapshots;
- (id)mockData;
- (double)powerlogEnergyDiff;
- (double)powerlogEnergyLast;
- (double)powerlogEnergyPrevious;
- (id)powerlogQueryTimer;
- (id)powerlogTimestampLast;
- (id)powerlogTimestampPrevious;
- (void)queryPowerlogForDiscretionaryEnergy;
- (id)quickEnergyAccumulatorTimer;
- (id)quickEnergySnapshots;
- (void)reportChargingStatus:(bool)arg1;
- (void)reportStartEvent:(id)arg1 withInfo:(id)arg2;
- (void)reportStopEvent:(id)arg1 withInfo:(id)arg2;
- (void)runCompletionBlockWithEnergyResponse:(id)arg1;
- (void)setAccumulatedCPUEnergy:(double)arg1;
- (void)setAccumulatedNetworkEnergy:(double)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDebugMode:(bool)arg1;
- (void)setIntervalManager:(id)arg1;
- (void)setIsCharging:(bool)arg1;
- (void)setLastPowerlogResponse:(id)arg1;
- (void)setLastReportedCPUEnergy:(double)arg1;
- (void)setLastReportedNetworkEnergy:(double)arg1;
- (void)setLastReportedTotalEnergy:(double)arg1;
- (void)setMockData:(id)arg1;
- (void)setPowerlogEnergyDiff:(double)arg1;
- (void)setPowerlogEnergyLast:(double)arg1;
- (void)setPowerlogEnergyPrevious:(double)arg1;
- (void)setPowerlogQueryTimer:(id)arg1;
- (void)setPowerlogTimestampLast:(id)arg1;
- (void)setPowerlogTimestampPrevious:(id)arg1;
- (void)setQuickEnergyAccumulatorTimer:(id)arg1;
- (void)setQuickEnergySnapshots:(id)arg1;
- (void)setStateForNotification:(id)arg1 withState:(id)arg2;
- (void)setWorkQueue:(id)arg1;
- (void)setupNotificationListeners;
- (void)testHighVolumeStartStopReporting:(id)arg1 withInfo:(id)arg2 withNumIterations:(double)arg3;
- (void)updateMockData:(id)arg1;
- (id)workQueue;

@end
