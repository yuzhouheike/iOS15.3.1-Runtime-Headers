/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBNetworkPathMonitor : NSObject {
    NSObject<OS_nw_path_monitor> * _cellularPathMonitor;
    struct { 
        bool isMonitored; 
        bool isAvailable; 
        bool isExpensive; 
        bool isConstrained; 
    }  _cellularPathState;
    MBCellularDataSubscriptionMonitor * _dataSubscriptionMonitor;
    NSObject<OS_dispatch_group> * _initialCellularStateGroup;
    NSObject<OS_dispatch_group> * _initialWiFiStateGroup;
    NSObject<OS_dispatch_group> * _initialWiredStateGroup;
    struct { 
        bool isMonitored; 
        bool isAvailable; 
        bool isExpensive; 
        bool isConstrained; 
    }  _lastUpdateCellularPathState;
    id /* block */  _networkPathUpdateHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_nw_path_monitor> * _wifiPathMonitor;
    struct { 
        bool isMonitored; 
        bool isAvailable; 
        bool isExpensive; 
        bool isConstrained; 
    }  _wifiPathState;
    NSObject<OS_nw_path_monitor> * _wiredPathMonitor;
    struct { 
        bool isMonitored; 
        bool isAvailable; 
        bool isExpensive; 
        bool isConstrained; 
    }  _wiredPathState;
}

@property (readonly) long long backupOnCellularSupport;
@property (retain) MBCellularDataSubscriptionMonitor *dataSubscriptionMonitor;
@property (retain) NSObject<OS_dispatch_group> *initialCellularStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialWiFiStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialWiredStateGroup;
@property (nonatomic, copy) id /* block */ networkPathUpdateHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (const char *)_pathTypeStringWithPathType:(int)arg1;

- (void).cxx_destruct;
- (void)_cancelMonitors;
- (void)_handleCellularStateChange:(struct { bool x1; bool x2; bool x3; bool x4; })arg1 backupOnCellularSupport:(long long)arg2;
- (void)_handleWiFiStateChange;
- (void)_performBlock:(id /* block */)arg1;
- (void)_startCellularMonitor;
- (void)_startWiFiMonitor;
- (bool)_updateState:(struct { bool x1; bool x2; bool x3; bool x4; }*)arg1 path:(id)arg2 pathType:(int)arg3;
- (long long)backupOnCellularSupport;
- (void)cancel;
- (id)dataSubscriptionMonitor;
- (void)dealloc;
- (void)fetchNetworkConnectivityWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initialCellularStateGroup;
- (id)initialWiFiStateGroup;
- (id)initialWiredStateGroup;
- (struct { bool x1; bool x2; bool x3; })networkConnectivity;
- (id /* block */)networkPathUpdateHandler;
- (id)queue;
- (void)setDataSubscriptionMonitor:(id)arg1;
- (void)setInitialCellularStateGroup:(id)arg1;
- (void)setInitialWiFiStateGroup:(id)arg1;
- (void)setInitialWiredStateGroup:(id)arg1;
- (void)setNetworkPathUpdateHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)start;

@end
